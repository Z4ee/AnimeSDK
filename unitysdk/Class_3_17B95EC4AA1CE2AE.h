#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RtLifeBindingConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_17B95EC4AA1CE2AE_METHOD_3_14F2FC46FC687955_OFFSET UNITYSDK_OFFSET(0x1CEFF6C0)
#define CLASS_3_17B95EC4AA1CE2AE_METHOD_3_5C675B92235EC69F_OFFSET UNITYSDK_OFFSET(0x1CEFF700)
#define CLASS_3_17B95EC4AA1CE2AE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFF6F0)

inline static constexpr unsigned int Class_3_17B95EC4AA1CE2AE_TypeDefinitionIndex = 23882;

class Class_3_17B95EC4AA1CE2AE : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* ELGMGKGMCCM; // 0x18
	::RPG::GameCore::RtLifeBindingConfig* ECNHHNDAHKB; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* BGCBMIGIAMM; // 0x28
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* AIBLKCJHCCC; // 0x30
	::RPG::GameCore::TargetEvaluator* BBOFFGLPHCJ; // 0x38
	::RPG::GameCore::TargetEvaluator* CGNJAJMEKOI; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* FMCJJBALBEN; // 0x48
	::RPG::GameCore::TargetEvaluator* BCJFPLDEDJE; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_17B95EC4AA1CE2AE__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_14F2FC46FC687955(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_17B95EC4AA1CE2AE*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_17B95EC4AA1CE2AE*&))((::PBYTE)hIl2Cpp + CLASS_3_17B95EC4AA1CE2AE_METHOD_3_14F2FC46FC687955_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5C675B92235EC69F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_17B95EC4AA1CE2AE* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_17B95EC4AA1CE2AE*))((::PBYTE)hIl2Cpp + CLASS_3_17B95EC4AA1CE2AE_METHOD_3_5C675B92235EC69F_OFFSET))(a1, a2);
	}
};
