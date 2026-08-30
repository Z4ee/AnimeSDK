#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BFC8A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BFC8E0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectVoracityInvasionControl___c_TypeDefinitionIndex = 80232;

	class ChallengeTierceStageSelectVoracityInvasionControl___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectVoracityInvasionControl___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectVoracityInvasionControl___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageSelectVoracityInvasionControl___c_TypeDefinitionIndex)->GetStaticField(0x1E4B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTVORACITYINVASIONCONTROL___C__CTOR_OFFSET))(this);
		}
	};
}
