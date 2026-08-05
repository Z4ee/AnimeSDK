#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVHSStoreGeneralInfoWidgetController.h"

class Class_2_208CC9941471731A_456;

#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_AFTERTEMPLATECHANGE_OFFSET UNITYSDK_OFFSET(0x112C3560)
#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x112C36D0)
#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x112C36E0)
#define MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x112C3750)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreGuestInfoWidgetController_TypeDefinitionIndex = 48923;

	class UIVHSStoreGuestInfoWidgetController : public ::MoleMole::UIVHSStoreGeneralInfoWidgetController
	{
	public:
		::Class_2_208CC9941471731A_456* _template; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void AfterTemplateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_AFTERTEMPLATECHANGE_OFFSET))(this);
		}

		::Class_2_208CC9941471731A_456* get_template()
		{
			return ((::Class_2_208CC9941471731A_456*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_template(::Class_2_208CC9941471731A_456* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_456*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREGUESTINFOWIDGETCONTROLLER_SET_TEMPLATE_OFFSET))(this, value);
		}
	};
}
