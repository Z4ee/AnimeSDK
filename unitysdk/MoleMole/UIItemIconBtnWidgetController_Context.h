#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_277;

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x198590E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController_Context_TypeDefinitionIndex = 53261;

	class UIItemIconBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_277* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
