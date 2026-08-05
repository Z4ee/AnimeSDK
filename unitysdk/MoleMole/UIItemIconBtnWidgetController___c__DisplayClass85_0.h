#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x189EC730)
#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x189EC740)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController___c__DisplayClass85_0_TypeDefinitionIndex = 53263;

	class UIItemIconBtnWidgetController___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::System::Action* lockedCb; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS85_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
