#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceEntranceUnlockControl; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW_GET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xC9F67E0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW_SET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xC9F6890)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xC9F68C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xC9F6A40)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xC9F6AE0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xC9F6990)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceEntranceUnlockWindow_TypeDefinitionIndex = 80210;

	class ChallengeTierceEntranceUnlockWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceEntranceUnlockControl* _Content; // 0x48

		::System::Void _ctor(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW__CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeGroupType get__TypedDataContext()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW_GET__TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set__TypedDataContext(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW_SET__TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKWINDOW__ONENTRANCEANIMEND_OFFSET))(this);
		}
	};
}
