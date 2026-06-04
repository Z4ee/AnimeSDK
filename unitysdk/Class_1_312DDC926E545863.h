#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_358;
namespace RPG::GameCore { class BattleEventConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }

#define CLASS_1_312DDC926E545863__CTOR_OFFSET UNITYSDK_OFFSET(0x137CD340)

inline static constexpr unsigned int Class_1_312DDC926E545863_TypeDefinitionIndex = 53127;

class Class_1_312DDC926E545863 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::GameEntity* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::GameCore::BattleEventConfig* Field_1_3; // 0x28
	::RPG::GameCore::StageRow* Field_1_4; // 0x30
	::System::Object* Field_1_5; // 0x38
	::Class_0_16E4307DCC419505_358* Field_1_6; // 0x40
	::RPG::GameCore::BattleEventCreateType Field_1_7; // 0x48
	::RPG::GameCore::FixPoint Field_1_8; // 0x50
	::System::Boolean Field_1_9; // 0x58
	::System::UInt32 Field_1_10; // 0x5C
	::RPG::GameCore::FixPoint Field_1_11; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312DDC926E545863__CTOR_OFFSET))(this);
	}
};
