#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIABRewardAvatarWidgetController; }
namespace MoleMole { class UIAutoBattleRewardPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIABREWARDAVATARWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1586C2E0)
#define MOLEMOLE_UIABREWARDAVATARWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x1586C2F0)
#define MOLEMOLE_UIABREWARDAVATARWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__1_OFFSET UNITYSDK_OFFSET(0x1586C380)

namespace MoleMole
{
	inline static constexpr unsigned int UIABRewardAvatarWidgetController___c__DisplayClass3_0_TypeDefinitionIndex = 55554;

	class UIABRewardAvatarWidgetController___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::MoleMole::UIABRewardAvatarWidgetController* __4__this; // 0x18
		::MoleMole::UIAutoBattleRewardPopWindowController* parent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABREWARDAVATARWIDGETCONTROLLER___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABREWARDAVATARWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABREWARDAVATARWIDGETCONTROLLER___C__DISPLAYCLASS3_0__ONUIINIT_B__1_OFFSET))(this);
		}
	};
}
