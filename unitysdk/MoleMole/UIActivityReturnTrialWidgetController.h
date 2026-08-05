#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BackFlowWidget.h"

class Class_2_0DCE2A52B2EF81EE;
class Class_2_79AE422BA06F6D26_27;
namespace MoleMole { class UIBackFlowActivitySelectAvatarWidgetController; }
namespace MoleMole { class UIBackFlowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_BINDPAGEBTN_OFFSET UNITYSDK_OFFSET(0x1933BDC0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_CONFRIMSELECT_OFFSET UNITYSDK_OFFSET(0x1933D040)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_CREATEBACKFLOWROLELIST_OFFSET UNITYSDK_OFFSET(0x1933B9E0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_GETSERVERSELECT_OFFSET UNITYSDK_OFFSET(0x1933D500)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1933BCA0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONSELECTTARGETROLEWIDGET_OFFSET UNITYSDK_OFFSET(0x1933D7F0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1933BD30)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1933C130)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1933B810)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1933B8B0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_OPENPREVIEW_OFFSET UNITYSDK_OFFSET(0x1933CB50)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_PLAYLEFTSELECT_OFFSET UNITYSDK_OFFSET(0x1933CF60)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_PLAYRIGHTSELECT_OFFSET UNITYSDK_OFFSET(0x1933CFD0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_UPDATEAVATARTEXT_OFFSET UNITYSDK_OFFSET(0x1933C3F0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1933C1B0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1933DA70)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER__ONUIINIT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1933DB70)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1933DB80)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1933DC10)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1933DCB0)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1933DD40)
#define MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1933DD50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityReturnTrialWidgetController_TypeDefinitionIndex = 85381;

	class UIActivityReturnTrialWidgetController : public ::MoleMole::BackFlowWidget
	{
	public:
		::Class_2_0DCE2A52B2EF81EE* _view; // 0x2E0
		::MoleMole::UIBackFlowContext* _context; // 0x2E8
		::MoleMole::UIBackFlowActivitySelectAvatarWidgetController* current; // 0x2F0
		::MoleMole::UIBackFlowActivitySelectAvatarWidgetController* serverSelect; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*>* allSelectItem; // 0x300
		::Class_2_79AE422BA06F6D26_27* pageView; // 0x308
		::System::String* LeftAni; // 0x310
		::System::String* RightAni; // 0x318
		::System::Int32 lastIndex; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindPageBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_BINDPAGEBTN_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void OpenPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_OPENPREVIEW_OFFSET))(this);
		}

		::System::Void CreateBackFlowRoleList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_CREATEBACKFLOWROLELIST_OFFSET))(this);
		}

		::System::Void PlayLeftSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_PLAYLEFTSELECT_OFFSET))(this);
		}

		::System::Void PlayRightSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_PLAYRIGHTSELECT_OFFSET))(this);
		}

		::System::Void ConfrimSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_CONFRIMSELECT_OFFSET))(this);
		}

		::MoleMole::UIBackFlowActivitySelectAvatarWidgetController* GetServerSelect()
		{
			return ((::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_GETSERVERSELECT_OFFSET))(this);
		}

		::System::Void OnSelectTargetRoleWidget(::MoleMole::UIBackFlowActivitySelectAvatarWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBackFlowActivitySelectAvatarWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_ONSELECTTARGETROLEWIDGET_OFFSET))(this, widget);
		}

		::System::Void UpdateAvatarText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER_UPDATEAVATARTEXT_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__9_0(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER__ONUIINIT_B__9_0_OFFSET))(this, arg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYRETURNTRIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
