#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BEF930)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18BEF970)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectControlBase___c_TypeDefinitionIndex = 80221;

	class ChallengeTierceStageSelectControlBase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectControlBase___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectControlBase___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageSelectControlBase___c_TypeDefinitionIndex)->GetStaticField(0x1D900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE___C__CTOR_OFFSET))(this);
		}
	};
}
