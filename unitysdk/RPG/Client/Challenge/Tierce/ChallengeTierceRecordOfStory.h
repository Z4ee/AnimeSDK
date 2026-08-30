#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceRecordBase.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFSTORY_GET_OBTAINEDSCORE_OFFSET UNITYSDK_OFFSET(0x1C86F320)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFSTORY_SET_OBTAINEDSCORE_OFFSET UNITYSDK_OFFSET(0x1C86F330)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFSTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C86F340)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceRecordOfStory_TypeDefinitionIndex = 80142;

	class ChallengeTierceRecordOfStory : public ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase
	{
	public:
		::System::Int32 _ObtainedScore_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFSTORY__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ObtainedScore()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFSTORY_GET_OBTAINEDSCORE_OFFSET))(this);
		}

		::System::Void set_ObtainedScore(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDOFSTORY_SET_OBTAINEDSCORE_OFFSET))(this, a1);
		}
	};
}
