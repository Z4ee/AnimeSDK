#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BackFlowWidget.h"

class Class_2_D4AEE2F03C74B05F;
namespace MoleMole { class UIActivityReturnDoubleRowItemV2WidgetController; }
namespace MoleMole { class UIActivityReturnFreeMaterialWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_INITDOUBLEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x192DE010)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192DEC20)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x192DEB10)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x192DE550)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192DEE60)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192DDF30)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192DDF80)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_SETDOUBLEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x192DE650)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x192DEEE0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x192DEF40)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x192DEFD0)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x192DF060)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x192DF100)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x192DF190)
#define MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x192DF1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnDoubleV2WidgetController_TypeDefinitionIndex = 44503;

	class UIActivityReturnDoubleV2WidgetController : public ::MoleMole::BackFlowWidget
	{
	public:
		::Class_2_D4AEE2F03C74B05F* _view; // 0x2E0
		::MoleMole::UIActivityReturnFreeMaterialWidgetController* materialController; // 0x2E8
		::System::Collections::Generic::List_1<::MoleMole::UIActivityReturnDoubleRowItemV2WidgetController*>* itemWidgetList; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitDoubleBuffInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_INITDOUBLEBUFFINFO_OFFSET))(this);
		}

		::System::Void SetDoubleBuffInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER_SETDOUBLEBUFFINFO_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNDOUBLEV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
