#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA13AB0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA13AF0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectTabsControl___c_TypeDefinitionIndex = 80231;

	class ChallengeTierceStageSelectTabsControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabsControl___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectTabsControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageSelectTabsControl___c_TypeDefinitionIndex)->GetStaticField(0x20010);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTTABSCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
