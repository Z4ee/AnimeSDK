#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeListControl; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC94AD10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL___C__DISPLAYCLASS22_0___BINDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xC94AD80)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeListControl___c__DisplayClass22_0_TypeDefinitionIndex = 81525;

	class ChallengeTierceNodeListControl___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* params; // 0x10
		::RPG::Client::Challenge::Tierce::ChallengeTierceNodeListControl* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Action* __BindItems_b__0(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODELISTCONTROL___C__DISPLAYCLASS22_0___BINDITEMS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
