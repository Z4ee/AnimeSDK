#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3597DB134B23579E;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LINEUPPATROLFINDOFFICERMESSAGE_EMPTY_OFFSET UNITYSDK_OFFSET(0xB6EB2B0)
#define RPG_GAMECORE_LINEUPPATROLFINDOFFICERMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xB6EB2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupPatrolFindOfficerMessage_TypeDefinitionIndex = 48404;

	class LineupPatrolFindOfficerMessage : public ::System::Object
	{
	public:
		::Class_2_3597DB134B23579E* SoldierTask; // 0x10
		::RPG::GameCore::GameEntity* Soldier; // 0x18
		::System::UInt32 GroupID; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPPATROLFINDOFFICERMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void Empty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPPATROLFINDOFFICERMESSAGE_EMPTY_OFFSET))(this);
		}
	};
}
