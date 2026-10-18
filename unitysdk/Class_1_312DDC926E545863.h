#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleEventCreateType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_504;
namespace RPG::GameCore { class BattleEventConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class StageRow; }

#define CLASS_1_312DDC926E545863__CTOR_OFFSET UNITYSDK_OFFSET(0x15862C50)

inline static constexpr unsigned int Class_1_312DDC926E545863_TypeDefinitionIndex = 56893;

class Class_1_312DDC926E545863 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* JFEANHJCLAA; // 0x10
	::RPG::GameCore::GameEntity* FNDHDEOILCK; // 0x18
	::RPG::GameCore::StageRow* EAEJMOGDAEC; // 0x20
	::RPG::GameCore::GameEntity* DICKLIFEALI; // 0x28
	::Class_0_16E4307DCC419505_504* JBOIBJCAMCN; // 0x30
	::RPG::GameCore::BattleEventConfig* COKHBDEGLIA; // 0x38
	::System::Object* FGNHFJHBPIM; // 0x40
	::RPG::GameCore::FixPoint JCDBMGGLNIB; // 0x48
	::RPG::GameCore::FixPoint AIFOJKHJLDD; // 0x50
	::RPG::GameCore::BattleEventCreateType BIGMDKMFENB; // 0x58
	::System::Boolean FMOOJHANGAJ; // 0x5C
	::System::UInt32 DFEJABODPGM; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_312DDC926E545863__CTOR_OFFSET))(this);
	}
};
