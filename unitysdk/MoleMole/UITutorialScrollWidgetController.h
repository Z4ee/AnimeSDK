#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_387;
class Class_2_65F39A652D33AF8E;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ADDROW_OFFSET UNITYSDK_OFFSET(0x13838640)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13838530)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x138385C0)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13838460)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x138384C0)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x13838A10)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13838AA0)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13838B00)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13838B90)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13838C20)
#define MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13838CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UITutorialScrollWidgetController_TypeDefinitionIndex = 69153;

	class UITutorialScrollWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_65F39A652D33AF8E* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AddRow(::Class_2_208CC9941471731A_387* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_387*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_ADDROW_OFFSET))(this, template_);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITUTORIALSCROLLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
