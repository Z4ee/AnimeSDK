#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Introduce { class IntroduceViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1AC67240)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL_GET_INTRODUCE_OFFSET UNITYSDK_OFFSET(0x1AC67250)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL_SETSEEN_OFFSET UNITYSDK_OFFSET(0x1AC67460)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1AC67300)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL__CHECKSEEN_OFFSET UNITYSDK_OFFSET(0x1AC67380)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC67450)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL__GETBITSETMASK_OFFSET UNITYSDK_OFFSET(0x1AC67670)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL__SETSEEN_OFFSET UNITYSDK_OFFSET(0x1AC674B0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceEntranceNoticeViewModel_TypeDefinitionIndex = 76621;

	class ChallengeTierceEntranceNoticeViewModel : public ::System::Object
	{
	public:
		::RPG::Client::Introduce::IntroduceViewModel* _Introduce; // 0x10
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x18

		::System::Void _ctor(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL_GET_GROUPTYPE_OFFSET))(this);
		}

		::RPG::Client::Introduce::IntroduceViewModel* get_Introduce()
		{
			return ((::RPG::Client::Introduce::IntroduceViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL_GET_INTRODUCE_OFFSET))(this);
		}

		static ::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceNoticeViewModel* TryCreate(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceNoticeViewModel*(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL_TRYCREATE_OFFSET))(a1);
		}

		::System::Void SetSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL_SETSEEN_OFFSET))(this);
		}

		static ::System::Boolean _CheckSeen(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL__CHECKSEEN_OFFSET))(a1);
		}

		static ::System::Void _SetSeen(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL__SETSEEN_OFFSET))(a1);
		}

		static ::System::UInt32 _GetBitsetMask(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCENOTICEVIEWMODEL__GETBITSETMASK_OFFSET))(a1);
		}
	};
}
