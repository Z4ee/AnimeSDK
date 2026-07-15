#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/DamageIntegerizeCategory.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CLASS_1_F966CC1261619DFB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18C7C760)

inline static constexpr unsigned int Class_1_F966CC1261619DFB_1_TypeDefinitionIndex = 51949;

class Class_1_F966CC1261619DFB_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_1; // 0x18
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::System::Boolean Field_1_5; // 0x38
	::System::Boolean Field_1_6; // 0x39
	::System::Boolean Field_1_7; // 0x3A
	::RPG::GameCore::FinalDamageFormulaType Field_1_8; // 0x3C
	::RPG::GameCore::DamageIntegerizeCategory Field_1_9; // 0x40
	::System::Boolean Field_1_10; // 0x44
	::System::Boolean Field_1_11; // 0x45
	::RPG::GameCore::FixPoint Field_1_12; // 0x48
	::RPG::GameCore::AttackType Field_1_13; // 0x50
	::RPG::GameCore::AttackDamageType Field_1_14; // 0x54
	::RPG::GameCore::AttackFormulaType Field_1_15; // 0x58
	::RPG::GameCore::AttackFormulaType Field_1_16; // 0x5C
	::RPG::GameCore::FixPoint Field_1_17; // 0x60
	::RPG::GameCore::FixPoint Field_1_18; // 0x68
	::RPG::GameCore::FixPoint Field_1_19; // 0x70
	::RPG::GameCore::FixPoint Field_1_20; // 0x78
	::RPG::GameCore::FixPoint Field_1_21; // 0x80
	::RPG::GameCore::FixPoint Field_1_22; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F966CC1261619DFB_1__CTOR_OFFSET))(this);
	}
};
