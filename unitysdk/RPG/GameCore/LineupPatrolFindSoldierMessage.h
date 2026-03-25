#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2ECF3E74BC6E7972;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE_EMPTY_OFFSET UNITYSDK_OFFSET(0xA99C9C0)
#define RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA99CA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LineupPatrolFindSoldierMessage_TypeDefinitionIndex = 42442;

	class LineupPatrolFindSoldierMessage : public ::System::Object
	{
	public:
		::Class_2_2ECF3E74BC6E7972* OfficerTask; // 0x10
		::RPG::GameCore::GameEntity* Soldier; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE__CTOR_OFFSET))(this);
		}

		::System::Void Empty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LINEUPPATROLFINDSOLDIERMESSAGE_EMPTY_OFFSET))(this);
		}
	};
}
