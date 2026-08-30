#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceRecordBase.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY_GET_LEFTROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1C86F2D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY_GET_USEDROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1C86F2F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY_SET_LEFTROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1C86F2E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY_SET_USEDROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1C86F300)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C86F310)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceRecordOfMemory_TypeDefinitionIndex = 80141;

	class ChallengeTierceRecordOfMemory : public ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase
	{
	public:
		::System::Int32 _LeftRoundCount_k__BackingField; // 0x10
		::System::Int32 _UsedRoundCount_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_LeftRoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY_GET_LEFTROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftRoundCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY_SET_LEFTROUNDCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_UsedRoundCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY_GET_USEDROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_UsedRoundCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFMEMORY_SET_USEDROUNDCOUNT_OFFSET))(this, a1);
		}
	};
}
