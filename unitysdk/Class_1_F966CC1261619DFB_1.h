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

#define CLASS_1_F966CC1261619DFB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x95FDDC0)

inline static constexpr unsigned int Class_1_F966CC1261619DFB_1_TypeDefinitionIndex = 50198;

class Class_1_F966CC1261619DFB_1 : public ::System::Object
{
public:
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_1_5; // 0x10
	::System::String* Field_1_6; // 0x18
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_12; // 0x20
	::RPG::GameCore::FixPoint Field_1_19; // 0x28
	::RPG::GameCore::AttackType Field_1_0; // 0x30
	::RPG::GameCore::AttackFormulaType Field_1_1; // 0x34
	::RPG::GameCore::FixPoint Field_1_21; // 0x38
	::RPG::GameCore::FixPoint Field_1_15; // 0x40
	::RPG::GameCore::FixPoint Field_1_20; // 0x48
	::System::Boolean Field_1_8; // 0x50
	::System::Boolean Field_1_11; // 0x51
	::System::Boolean Field_1_9; // 0x52
	::System::Boolean Field_1_10; // 0x53
	::System::Boolean Field_1_7; // 0x54
	::RPG::GameCore::FixPoint Field_1_17; // 0x58
	::RPG::GameCore::AttackDamageType Field_1_4; // 0x60
	::RPG::GameCore::FixPoint Field_1_18; // 0x68
	::RPG::GameCore::FixPoint Field_1_13; // 0x70
	::RPG::GameCore::FixPoint Field_1_14; // 0x78
	::RPG::GameCore::FinalDamageFormulaType Field_1_3; // 0x80
	::RPG::GameCore::AttackFormulaType Field_1_2; // 0x84
	::RPG::GameCore::FixPoint Field_1_16; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F966CC1261619DFB_1__CTOR_OFFSET))(this);
	}
};
