#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS84_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162EEAC0)
#define MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS84_0__ONSCROLLITEMUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x162EEAD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovItemIconBtnWidgetController___c__DisplayClass84_0_TypeDefinitionIndex = 45178;

	class UIZenkovItemIconBtnWidgetController___c__DisplayClass84_0 : public ::System::Object
	{
	public:
		::System::Action* lockedCb; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS84_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVITEMICONBTNWIDGETCONTROLLER___C__DISPLAYCLASS84_0__ONSCROLLITEMUPDATE_B__0_OFFSET))(this);
		}
	};
}
