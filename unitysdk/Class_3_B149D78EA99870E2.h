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

#define CLASS_3_B149D78EA99870E2_METHOD_3_0CF8DABEC48D56B0_OFFSET UNITYSDK_OFFSET(0x190F5CA0)
#define CLASS_3_B149D78EA99870E2_METHOD_3_5C675B92235EC69F_OFFSET UNITYSDK_OFFSET(0x190F5D20)
#define CLASS_3_B149D78EA99870E2__CTOR_OFFSET UNITYSDK_OFFSET(0x190F5CF0)

inline static constexpr unsigned int Class_3_B149D78EA99870E2_TypeDefinitionIndex = 22835;

class Class_3_B149D78EA99870E2 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_1; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_2; // 0x28
	::RPG::GameCore::TargetEvaluator* Field_3_3; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Field_3_4; // 0x38
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* Field_3_5; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicFloat*>* Field_3_6; // 0x48
	::RPG::GameCore::RtLifeBindingConfig* Field_3_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B149D78EA99870E2__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_0CF8DABEC48D56B0(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B149D78EA99870E2*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B149D78EA99870E2*&))((::PBYTE)hIl2Cpp + CLASS_3_B149D78EA99870E2_METHOD_3_0CF8DABEC48D56B0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_5C675B92235EC69F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B149D78EA99870E2* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B149D78EA99870E2*))((::PBYTE)hIl2Cpp + CLASS_3_B149D78EA99870E2_METHOD_3_5C675B92235EC69F_OFFSET))(a1, a2);
	}
};
