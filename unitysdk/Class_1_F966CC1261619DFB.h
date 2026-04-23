#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CLASS_1_F966CC1261619DFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1179B800)

inline static constexpr unsigned int Class_1_F966CC1261619DFB_TypeDefinitionIndex = 49629;

class Class_1_F966CC1261619DFB : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_1_5; // 0x10
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_12; // 0x18
	::System::String* Field_1_6; // 0x20
	::RPG::GameCore::FinalDamageFormulaType Field_1_3; // 0x28
	::System::Boolean Field_1_10; // 0x2C
	::System::Boolean Field_1_11; // 0x2D
	::RPG::GameCore::FixPoint Field_1_16; // 0x30
	::RPG::GameCore::FixPoint Field_1_19; // 0x38
	::RPG::GameCore::AttackFormulaType Field_1_1; // 0x40
	::RPG::GameCore::AttackType Field_1_0; // 0x44
	::RPG::GameCore::AttackDamageType Field_1_4; // 0x48
	::RPG::GameCore::FixPoint Field_1_20; // 0x50
	::RPG::GameCore::FixPoint Field_1_14; // 0x58
	::RPG::GameCore::FixPoint Field_1_18; // 0x60
	::RPG::GameCore::FixPoint Field_1_15; // 0x68
	::System::Boolean Field_1_8; // 0x70
	::System::Boolean Field_1_7; // 0x71
	::System::Boolean Field_1_9; // 0x72
	::RPG::GameCore::AttackFormulaType Field_1_2; // 0x74
	::RPG::GameCore::FixPoint Field_1_17; // 0x78
	::RPG::GameCore::FixPoint Field_1_13; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F966CC1261619DFB__CTOR_OFFSET))(this);
	}
};
