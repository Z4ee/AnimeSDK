#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleCharacterLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_IDLELIVETEAMSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19848D90)
#define RPG_GAMECORE_IDLELIVETEAMSLOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19849080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTeamSlotRow_TypeDefinitionIndex = 11175;

	class IdleLiveTeamSlotRow : public ::System::Object
	{
	public:
		::System::UInt32 Slot; // 0x10
		::RPG::Client::TextID UnlockHint; // 0x18
		::RPG::GameCore::ILBattleCharacterLocation Type; // 0x28
		::System::UInt32 UnlockID; // 0x2C
		::RPG::GameCore::FixPoint SlotPowerFactor; // 0x30
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveTeamSlotRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveTeamSlotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETEAMSLOTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
