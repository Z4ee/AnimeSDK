#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIFriendCardRowWidgetController; }

#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x186B6780)
#define MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHUI_B__0_OFFSET UNITYSDK_OFFSET(0x186B6790)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendCardRowWidgetController___c__DisplayClass9_0_TypeDefinitionIndex = 46197;

	class UIFriendCardRowWidgetController___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::MoleMole::UIFriendCardRowWidgetController* __4__this; // 0x10
		::System::Boolean showPlatformInfoOnly; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshUI_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCARDROWWIDGETCONTROLLER___C__DISPLAYCLASS9_0__REFRESHUI_B__0_OFFSET))(this);
		}
	};
}
