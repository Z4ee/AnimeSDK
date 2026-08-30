#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC9FE2F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS23_0___BINDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xC9FE690)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceNodeVariantListControl___c__DisplayClass23_0_TypeDefinitionIndex = 80205;

	class ChallengeTierceNodeVariantListControl___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::Challenge::Tierce::ChallengeTierceNodeVariantListControl_Class_1_3934BCE11C8FDFC0*>* variants; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Action* __BindItems_b__0(::UnityEngine::GameObject* a1, ::System::Int32 a2)
		{
			return ((::System::Action*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCENODEVARIANTLISTCONTROL___C__DISPLAYCLASS23_0___BINDITEMS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
