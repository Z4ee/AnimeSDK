#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIReconnectingPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIRECONNECTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x198A0660)
#define MOLEMOLE_UIRECONNECTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__FADEOUTANDCLOSE_B__0_OFFSET UNITYSDK_OFFSET(0x198A0670)

namespace MoleMole
{
	inline static constexpr unsigned int UIReconnectingPopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 71572;

	class UIReconnectingPopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIReconnectingPopWindowController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECONNECTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _FadeOutAndClose_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRECONNECTINGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__FADEOUTANDCLOSE_B__0_OFFSET))(this);
		}
	};
}
