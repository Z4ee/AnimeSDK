#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDailyChallengePageController; }
namespace System { class Action; }

#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14C1C480)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS26_0__FADEOUTLEVELPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x14C1C490)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengePageController___c__DisplayClass26_0_TypeDefinitionIndex = 74592;

	class UIDailyChallengePageController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MoleMole::UIDailyChallengePageController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _FadeOutLevelPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__DISPLAYCLASS26_0__FADEOUTLEVELPAGE_B__0_OFFSET))(this);
		}
	};
}
