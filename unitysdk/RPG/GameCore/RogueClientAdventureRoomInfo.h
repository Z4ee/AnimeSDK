#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueClientAdventureRoomStatus.h"
#include "unitysdk/System/Object.h"

#define RPG_GAMECORE_ROGUECLIENTADVENTUREROOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB71DB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueClientAdventureRoomInfo_TypeDefinitionIndex = 53883;

	class RogueClientAdventureRoomInfo : public ::System::Object
	{
	public:
		::System::UInt32 Score; // 0x10
		::System::UInt32 RayScore; // 0x14
		::System::UInt32 LeftPropDestructNum; // 0x18
		::System::UInt32 MonsterKillNum; // 0x1C
		::RPG::GameCore::RogueClientAdventureRoomStatus Status; // 0x20
		::System::UInt32 RayTotalScore; // 0x24
		::System::UInt32 RayScorPerWave; // 0x28
		::System::UInt32 LeftChestMonsterNum; // 0x2C
		::System::Double TimeRatio; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECLIENTADVENTUREROOMINFO__CTOR_OFFSET))(this);
		}
	};
}
