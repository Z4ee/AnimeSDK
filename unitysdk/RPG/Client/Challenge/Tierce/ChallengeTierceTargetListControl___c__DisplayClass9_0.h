#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge { class ChallengeTargetViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTargetListControl; }
namespace System { class Action; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4E8EC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xB4E8ED0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__2_OFFSET UNITYSDK_OFFSET(0xB4E8F10)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTargetListControl___c__DisplayClass9_0_TypeDefinitionIndex = 74191;

	class ChallengeTierceTargetListControl___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::ChallengeTargetViewModel* target; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceTargetListControl* __4__this; // 0x18
		::System::Int32 prefabIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* __Refresh_b__1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__1_OFFSET))(this);
		}

		::System::Action* __Refresh_b__2(::UnityEngine::GameObject* a1)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETARGETLISTCONTROL___C__DISPLAYCLASS9_0___REFRESH_B__2_OFFSET))(this, a1);
		}
	};
}
