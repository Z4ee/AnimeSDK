#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVHSStoreGeneralInfoWidgetController.h"

class Class_2_208CC9941471731A_680;

#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_AFTERTEMPLATECHANGE_OFFSET UNITYSDK_OFFSET(0xEBCD510)
#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0xEBCD680)
#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0xEBCD690)
#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEBCD700)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreGuestInfoWidgetController_TypeDefinitionIndex = 80463;

	class UIVHSStoreGuestInfoWidgetController : public ::MoleMole::UIVHSStoreGeneralInfoWidgetController
	{
	public:
		::Class_2_208CC9941471731A_680* _template; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void AfterTemplateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_AFTERTEMPLATECHANGE_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_680* get_template()
		{
			return ((::Class_2_208CC9941471731A_680*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_2_208CC9941471731A_680* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_680*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_SET_TEMPLATE_OFFSET))(this, value);
		}
	};
}
