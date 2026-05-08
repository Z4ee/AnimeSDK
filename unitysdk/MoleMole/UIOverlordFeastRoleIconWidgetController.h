#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_1ED77DD93111CFA0;
class Class_2_1ED77DD93111CFA0_Class_2_3BF30073802D7266;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x130141E0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONDISHUNLOCK_OFFSET UNITYSDK_OFFSET(0x13014DB0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x130142F0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13014270)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13013FD0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13014170)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_OPENTIPS_OFFSET UNITYSDK_OFFSET(0x13014C20)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x13014AF0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETDISH_OFFSET UNITYSDK_OFFSET(0x130147A0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETGUEST_OFFSET UNITYSDK_OFFSET(0x13014440)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETVIEW_OFFSET UNITYSDK_OFFSET(0x13014B60)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13014EA0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13014EC0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13014F50)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13014FF0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13015080)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13015110)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastRoleIconWidgetController_TypeDefinitionIndex = 71378;

	class UIOverlordFeastRoleIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_1ED77DD93111CFA0* _view; // 0x2E8
		::System::Int32 _guestID; // 0x2F0
		::System::Int32 _dishID; // 0x2F4
		::System::Int32 _gameID; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetGuest(::System::Int32 gameID, ::System::Int32 guestID, ::System::Boolean showLine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETGUEST_OFFSET))(this, gameID, guestID, showLine);
		}

		::System::Void SetBtnInteractable(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETBTNINTERACTABLE_OFFSET))(this, interactable);
		}

		::System::Void SetDish(::System::Int32 gameID, ::System::Int32 dishID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETDISH_OFFSET))(this, gameID, dishID);
		}

		::System::Void SetView(::Class_2_1ED77DD93111CFA0_Class_2_3BF30073802D7266* itemWidgetView, ::System::Boolean isUnlock, ::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_1ED77DD93111CFA0_Class_2_3BF30073802D7266*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETVIEW_OFFSET))(this, itemWidgetView, isUnlock, iconPath);
		}

		::System::Void OpenTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_OPENTIPS_OFFSET))(this);
		}

		::System::Void OnDishUnlock(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONDISHUNLOCK_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
