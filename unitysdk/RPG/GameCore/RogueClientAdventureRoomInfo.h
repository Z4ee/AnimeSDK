#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueClientAdventureRoomStatus.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ROGUECLIENTADVENTUREROOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xE6D9CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueClientAdventureRoomInfo_TypeDefinitionIndex = 58599;

	class RogueClientAdventureRoomInfo : public ::System::Object
	{
	public:
		::System::Double TimeRatio; // 0x10
		::System::UInt32 LeftPropDestructNum; // 0x18
		::System::UInt32 RayScore; // 0x1C
		::System::UInt32 LeftChestMonsterNum; // 0x20
		::System::UInt32 RayScorPerWave; // 0x24
		::System::UInt32 MonsterKillNum; // 0x28
		::System::UInt32 RayTotalScore; // 0x2C
		::RPG::GameCore::RogueClientAdventureRoomStatus Status; // 0x30
		::System::UInt32 Score; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECLIENTADVENTUREROOMINFO__CTOR_OFFSET))(this);
		}
	};
}
