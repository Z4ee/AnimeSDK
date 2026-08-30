#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeVariantListControl___c__DisplayClass20_0; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS20_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C86E3D0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS20_1___CONVERTTOVARIANTS_B__0_OFFSET UNITYSDK_OFFSET(0x1C86E3E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS20_1___CONVERTTOVARIANTS_B__1_OFFSET UNITYSDK_OFFSET(0x1C86E530)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeVariantListControl___c__DisplayClass20_1_TypeDefinitionIndex = 80203;

	class ChallengeTierceNodeVariantListControl___c__DisplayClass20_1 : public ::System::Object
	{
	public:
		::System::Object* param; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl___c__DisplayClass20_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS20_1__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* __ConvertToVariants_b__0()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS20_1___CONVERTTOVARIANTS_B__0_OFFSET))(this);
		}

		::System::Action* __ConvertToVariants_b__1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS20_1___CONVERTTOVARIANTS_B__1_OFFSET))(this, a1);
		}
	};
}
