#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageContext; }

#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1717B6E0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__ONROLEEDITORCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x1717B6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickEditPopWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 51848;

	class UIQuickEditPopWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageContext* roleInfoPageContext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRoleEditorClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__ONROLEEDITORCLICKHANDLE_B__0_OFFSET))(this);
		}
	};
}
