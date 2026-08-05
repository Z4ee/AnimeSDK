#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UILoginMessageBoxPopWindowController; }

#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__BTNCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x19008720)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19008710)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginMessageBoxPopWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 41234;

	class UILoginMessageBoxPopWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UILoginMessageBoxPopWindowController* __4__this; // 0x10
		::System::Boolean isOk; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _BtnConfirm_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__BTNCONFIRM_B__0_OFFSET))(this);
		}
	};
}
