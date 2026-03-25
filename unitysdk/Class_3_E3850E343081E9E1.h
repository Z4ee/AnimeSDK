#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_E3850E343081E9E1_METHOD_3_797574F762C9D389_OFFSET UNITYSDK_OFFSET(0x16C2BF60)
#define CLASS_3_E3850E343081E9E1_METHOD_3_A18832F1E35D7A11_OFFSET UNITYSDK_OFFSET(0x16C2BE90)
#define CLASS_3_E3850E343081E9E1__CTOR_OFFSET UNITYSDK_OFFSET(0x16C2BF10)

inline static constexpr unsigned int Class_3_E3850E343081E9E1_TypeDefinitionIndex = 20842;

class Class_3_E3850E343081E9E1 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::PredicateConfig* Field_3_1; // 0x18
	::RPG::GameCore::TargetEvaluator* Field_3_5; // 0x20
	::RPG::GameCore::TargetEvaluator* Field_3_0; // 0x28
	::RPG::GameCore::DynamicFloat* Field_3_4; // 0x30
	::Il2CppArray<::RPG::GameCore::ModifierBehaviorFlag>* Field_3_2; // 0x38
	::RPG::GameCore::ControlSkillType Field_3_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E3850E343081E9E1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_A18832F1E35D7A11(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E3850E343081E9E1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E3850E343081E9E1*&))((::PBYTE)hIl2Cpp + CLASS_3_E3850E343081E9E1_METHOD_3_A18832F1E35D7A11_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_797574F762C9D389(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E3850E343081E9E1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E3850E343081E9E1*))((::PBYTE)hIl2Cpp + CLASS_3_E3850E343081E9E1_METHOD_3_797574F762C9D389_OFFSET))(a1, a2);
	}
};
