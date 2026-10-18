#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PetMarbleBattleTitle; }

#define RPG_CLIENT_PETMARBLESEALBATTLESTAT__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE2F40)

namespace RPG::Client
{
	inline static constexpr unsigned int PetMarbleSealBattleStat_TypeDefinitionIndex = 65815;

	class PetMarbleSealBattleStat : public ::System::Object
	{
	public:
		::RPG::Client::PetMarbleBattleTitle* Title; // 0x10
		::System::UInt32 PlayerId; // 0x18
		::System::Boolean TeamA; // 0x1C
		::System::UInt32 SealId; // 0x20
		::System::Int32 KillCount; // 0x24
		::System::Int32 TotalDamage; // 0x28
		::System::UInt32 EntityId; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PETMARBLESEALBATTLESTAT__CTOR_OFFSET))(this);
		}
	};
}
