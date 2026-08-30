#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfBoss; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfMemory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceRecordOfStory; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDEXTENSIONS_OFBOSS_OFFSET UNITYSDK_OFFSET(0xC9FF200)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDEXTENSIONS_OFMEMORY_OFFSET UNITYSDK_OFFSET(0xC9FF160)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDEXTENSIONS_OFSTORY_OFFSET UNITYSDK_OFFSET(0xC9FB110)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceRecordExtensions_TypeDefinitionIndex = 80138;

	class ChallengeTierceRecordExtensions : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory* OfMemory(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfMemory*(*)(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDEXTENSIONS_OFMEMORY_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory* OfStory(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfStory*(*)(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDEXTENSIONS_OFSTORY_OFFSET))(a1);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss* OfBoss(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceRecordOfBoss*(*)(::RPG::Client::Challenge::Tierce::ChallengeTierceRecordBase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDEXTENSIONS_OFBOSS_OFFSET))(a1);
		}
	};
}
