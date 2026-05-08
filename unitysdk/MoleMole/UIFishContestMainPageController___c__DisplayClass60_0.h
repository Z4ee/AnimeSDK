#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFishContestMainPageController; }
namespace System { class String; }

#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x158F09B0)
#define MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS60_0__SHOWNEWTIPS_B__0_OFFSET UNITYSDK_OFFSET(0x158F09C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFishContestMainPageController___c__DisplayClass60_0_TypeDefinitionIndex = 56747;

	class UIFishContestMainPageController___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFishContestMainPageController* __4__this; // 0x10
		::System::String* key; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowNewTips_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFISHCONTESTMAINPAGECONTROLLER___C__DISPLAYCLASS60_0__SHOWNEWTIPS_B__0_OFFSET))(this);
		}
	};
}
