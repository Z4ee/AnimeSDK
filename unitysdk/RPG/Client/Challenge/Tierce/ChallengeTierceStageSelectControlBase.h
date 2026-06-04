#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB4DA880)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB4DA900)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB4DA580)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectControlBase_TypeDefinitionIndex = 74204;

	class ChallengeTierceStageSelectControlBase : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}
	};
}
