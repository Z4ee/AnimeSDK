#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournRelicCocoonData; }

#define RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ROGUETOURNRELICCOCOONBATTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB103B90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData_TypeDefinitionIndex = 62459;

	class RogueTournRelicCocoonCollection_RogueTournRelicCocoonBattleData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournRelicCocoonData* CocoonData; // 0x10
		::System::UInt32 ArchiveSlotIndex; // 0x18
		::System::Int64 ArchiveEndTime; // 0x20
		::System::UInt32 ChallengeCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNRELICCOCOONCOLLECTION_ROGUETOURNRELICCOCOONBATTLEDATA__CTOR_OFFSET))(this);
		}
	};
}
