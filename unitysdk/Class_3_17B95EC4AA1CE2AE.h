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

#define CLASS_3_17B95EC4AA1CE2AE_METHOD_3_14F2FC46FC687955_OFFSET UNITYSDK_OFFSET(0xBBE4B00)
#define CLASS_3_17B95EC4AA1CE2AE_METHOD_3_5C675B92235EC69F_OFFSET UNITYSDK_OFFSET(0xBBE4B40)
#define CLASS_3_17B95EC4AA1CE2AE__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE4B30)

inline static constexpr unsigned int Class_3_17B95EC4AA1CE2AE_TypeDefinitionIndex = 23302;

class Class_3_17B95EC4AA1CE2AE : public ::RPG::GameCore::TaskConfig
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Field_3_0; // 0x18
	::RPG::GameCore::RtLifeBindingConfig* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x38
	::RPG::GameCore::TargetEvaluator* Field_3_5; // 0x40
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_6; // 0x48
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_7; // 0x50

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
