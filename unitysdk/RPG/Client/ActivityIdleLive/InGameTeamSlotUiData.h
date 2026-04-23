#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveTeamSlotData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_INGAMETEAMSLOTUIDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1DA80)
#define RPG_CLIENT_ACTIVITYIDLELIVE_INGAMETEAMSLOTUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD2FD0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int InGameTeamSlotUiData_TypeDefinitionIndex = 69485;

	struct alignas(8) InGameTeamSlotUiData
	{
		::System::Boolean IsAvailable; // 0x10
		::System::Boolean IsEmpty; // 0x11
		::System::UInt32 _AvatarId; // 0x14
		::System::String* Icon; // 0x18
		::System::Int32 Level; // 0x20
		::System::UInt32 SlotId; // 0x24
		::RPG::GameCore::ILBattleCharacterLocation PosType; // 0x28
		::System::Boolean ShowHp; // 0x2C

		::System::Void _ctor(::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData* teamSlotData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityIdleLive::IdleLiveTeamSlotData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_INGAMETEAMSLOTUIDATA__CTOR_OFFSET))(this, teamSlotData);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_INGAMETEAMSLOTUIDATA_GET_AVATARID_OFFSET))(this);
		}
	};
}
