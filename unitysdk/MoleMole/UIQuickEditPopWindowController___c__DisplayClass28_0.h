#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageContext; }

#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17489D60)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ONROLEEDITORCLICKHANDLE_B__0_OFFSET UNITYSDK_OFFSET(0x17489D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickEditPopWindowController___c__DisplayClass28_0_TypeDefinitionIndex = 70120;

	class UIQuickEditPopWindowController___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageContext* roleInfoPageContext; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnRoleEditorClickHandle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS28_0__ONROLEEDITORCLICKHANDLE_B__0_OFFSET))(this);
		}
	};
}
