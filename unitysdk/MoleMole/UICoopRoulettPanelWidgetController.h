#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_0108C6F38468FEE5_1;
class Class_2_C66E4DE78E6562C8;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopRoulettMobileBtnWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_GETCURRENTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1958B750)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x1958B6C0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1958B860)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1958B8F0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1958B310)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1958B7F0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET UNITYSDK_OFFSET(0x1958B600)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1958B970)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0x1958B7A0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_SETCURRENTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1958B5A0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_UPDATESELECTALPHA_OFFSET UNITYSDK_OFFSET(0x1958BA30)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1958BAF0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1958BBD0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1958BC60)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1958BCF0)
#define MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1958BD80)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopRoulettPanelWidgetController_TypeDefinitionIndex = 64060;

	class UICoopRoulettPanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_0108C6F38468FEE5_1* _view; // 0x2C0
		::Class_2_C66E4DE78E6562C8* _coopModel; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UICoopRoulettMobileBtnWidgetController*>* _mobileBtnCtrlList; // 0x2D0
		::System::Int32 _currentSelectIndex; // 0x2D8
		::System::Action_1<::System::Int32>* _onBtnClickAction; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetCurrentSelectIndex(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_SETCURRENTSELECTINDEX_OFFSET))(this, obj);
		}

		::System::Void OnBtnClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONBTNCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Int32 GetCurrentSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_GETCURRENTSELECTINDEX_OFFSET))(this);
		}

		::System::Void SetClickAction(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_SETCLICKACTION_OFFSET))(this, action);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET))(this);
		}

		::System::Void UpdateSelectAlpha(::System::Boolean isFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER_UPDATESELECTALPHA_OFFSET))(this, isFocus);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
