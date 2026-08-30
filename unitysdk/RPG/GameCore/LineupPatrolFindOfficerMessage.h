#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_8B5CAF842C5FBAA1;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LINEUPPATROLFINDOFFICERMESSAGE_EMPTY_OFFSET UNITYSDK_OFFSET(0x18FF2AF0)
#define RPG_GAMECORE_LINEUPPATROLFINDOFFICERMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF2B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupPatrolFindOfficerMessage_TypeDefinitionIndex = 52704;

	class LineupPatrolFindOfficerMessage : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* Soldier; // 0x10
		::Class_2_8B5CAF842C5FBAA1* SoldierTask; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 GroupID; // 0x24

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
