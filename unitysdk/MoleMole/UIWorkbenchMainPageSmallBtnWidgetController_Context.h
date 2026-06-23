#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_2_208CC9941471731A_993;

#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x12C9C180)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x12C9C190)
#define MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C9B200)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkbenchMainPageSmallBtnWidgetController_Context_TypeDefinitionIndex = 56442;

	class UIWorkbenchMainPageSmallBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_208CC9941471731A_993* _template_k__BackingField; // 0x28
		::Share::ENotificationBadgeType RedHintType; // 0x30

		::System::Void _ctor(::Class_2_208CC9941471731A_993* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_993*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this, template_);
		}

		::Class_2_208CC9941471731A_993* get_template()
		{
			return ((::Class_2_208CC9941471731A_993*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_2_208CC9941471731A_993* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_993*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKBENCHMAINPAGESMALLBTNWIDGETCONTROLLER_CONTEXT_SET_TEMPLATE_OFFSET))(this, value);
		}
	};
}
