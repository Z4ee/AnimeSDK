#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_A8C94EA612F5CBF3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONCHANGEELITEMODE_OFFSET UNITYSDK_OFFSET(0x1B253450)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B253210)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1B252B30)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1B252BE0)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B2532A0)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B2528F0)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B252AC0)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1B252CE0)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1B253370)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x1B2533E0)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_SETSHOWSELECT_OFFSET UNITYSDK_OFFSET(0x1B253320)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B253620)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER__ONCHANGEELITEMODE_B__16_0_OFFSET UNITYSDK_OFFSET(0x1B253630)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B253660)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1B2536F0)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1B253780)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B253820)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1B2538B0)
#define MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1B253940)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCardRowWidgetController_TypeDefinitionIndex = 45441;

	class UIActivityHotPotCardRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_A8C94EA612F5CBF3* _view; // 0x2F0
		::System::Int32 _cardID; // 0x2F8
		::System::Int32 _num; // 0x2FC
		::System::Boolean _isEliteMode; // 0x300
		::System::Boolean _showSelect; // 0x301
		::Foundation::Coroutine::CoroutineHandle _eliteCoroutine; // 0x304

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetShowSelect(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_SETSHOWSELECT_OFFSET))(this, show);
		}

		::System::Void SetInteractable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, enable);
		}

		::System::Void SetSelect(::System::Boolean select)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_SETSELECT_OFFSET))(this, select);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnChangeEliteMode(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER_ONCHANGEELITEMODE_OFFSET))(this, args);
		}

		::System::Void _OnChangeEliteMode_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER__ONCHANGEELITEMODE_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCARDROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
