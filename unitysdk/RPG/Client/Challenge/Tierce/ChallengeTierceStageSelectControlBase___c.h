#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCA0B720)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCA0B760)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectControlBase___c_TypeDefinitionIndex = 80222;

	class ChallengeTierceStageSelectControlBase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectControlBase___c** StaticGet___9()
		{
			return (::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectControlBase___c**)Il2CppClass::FromTypeDefinitionIndex(ChallengeTierceStageSelectControlBase___c_TypeDefinitionIndex)->GetStaticField(0x1F640);
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
