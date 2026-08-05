#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDailyChallengePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3C590)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS28_0__FADEOUTLINEUPPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x18D3C5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengePageController___c__DisplayClass28_0_TypeDefinitionIndex = 83093;

	class UIDailyChallengePageController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIDailyChallengePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _FadeOutLineupPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS28_0__FADEOUTLINEUPPAGE_B__0_OFFSET))(this);
		}
	};
}
