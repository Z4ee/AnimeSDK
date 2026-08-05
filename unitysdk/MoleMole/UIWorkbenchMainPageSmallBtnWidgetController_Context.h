#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_2_208CC9941471731A_965;

#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x12E4D240)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x12E4D250)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12E4C2C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkbenchMainPageSmallBtnWidgetController_Context_TypeDefinitionIndex = 65369;

	class UIWorkbenchMainPageSmallBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_965* _template_k__BackingField; // 0x28
		::Share::ENotificationBadgeType RedHintType; // 0x30

		::System::Void _ctor(::Class_2_208CC9941471731A_965* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_965*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, template_);
		}

		::Class_2_208CC9941471731A_965* get_template()
		{
			return ((::Class_2_208CC9941471731A_965*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_2_208CC9941471731A_965* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_965*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET))(this, value);
		}
	};
}
