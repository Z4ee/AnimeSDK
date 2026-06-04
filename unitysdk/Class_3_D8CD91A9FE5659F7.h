#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TargetRatioType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define CLASS_3_D8CD91A9FE5659F7_METHOD_3_E024E0080A08A9C9_OFFSET UNITYSDK_OFFSET(0x197762E0)
#define CLASS_3_D8CD91A9FE5659F7_METHOD_3_FCE92D332F1E367F_OFFSET UNITYSDK_OFFSET(0x197761A0)
#define CLASS_3_D8CD91A9FE5659F7__CTOR_OFFSET UNITYSDK_OFFSET(0x19776250)

inline static constexpr unsigned int Class_3_D8CD91A9FE5659F7_TypeDefinitionIndex = 22842;

class Class_3_D8CD91A9FE5659F7 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DamageDisplayData* Field_3_0; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x20
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x28
	::System::String* Field_3_3; // 0x30
	::RPG::GameCore::TargetEvaluator* Field_3_4; // 0x38
	::RPG::GameCore::DynamicFloat* Field_3_5; // 0x40
	::RPG::GameCore::TargetEvaluator* Field_3_6; // 0x48
	::RPG::GameCore::AttackDamageType Field_3_7; // 0x50
	::System::Boolean Field_3_8; // 0x54
	::System::Boolean Field_3_9; // 0x55
	::RPG::GameCore::AttackType Field_3_10; // 0x58
	::RPG::GameCore::DynamicValueContextScope Field_3_11; // 0x5C
	::RPG::GameCore::TargetRatioType Field_3_12; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D8CD91A9FE5659F7__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_FCE92D332F1E367F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D8CD91A9FE5659F7*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D8CD91A9FE5659F7*&))((::PBYTE)hIl2Cpp + CLASS_3_D8CD91A9FE5659F7_METHOD_3_FCE92D332F1E367F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_E024E0080A08A9C9(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_D8CD91A9FE5659F7* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_D8CD91A9FE5659F7*))((::PBYTE)hIl2Cpp + CLASS_3_D8CD91A9FE5659F7_METHOD_3_E024E0080A08A9C9_OFFSET))(a1, a2);
	}
};
