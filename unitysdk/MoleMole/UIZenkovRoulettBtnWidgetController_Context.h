#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIZenkovRoulettBtnWidgetController_Context_EMode.h"

class Class_0_16E4307DCC419505_427;

#define MOLEMOLE_UIZENKOVROULETTBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF8640)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRoulettBtnWidgetController_Context_TypeDefinitionIndex = 56571;

	class UIZenkovRoulettBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_427* Data; // 0x28
		::MoleMole::UIZenkovRoulettBtnWidgetController_Context_EMode Mode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROULETTBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
