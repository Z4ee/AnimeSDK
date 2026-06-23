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

#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DC1BE0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONDISHUNLOCK_OFFSET UNITYSDK_OFFSET(0x15DC2800)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15DC1CF0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DC1C70)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15DC19C0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DC1B70)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_OPENTIPS_OFFSET UNITYSDK_OFFSET(0x15DC2620)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETBTNINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15DC24F0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETDISH_OFFSET UNITYSDK_OFFSET(0x15DC21A0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETGUEST_OFFSET UNITYSDK_OFFSET(0x15DC1E40)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER_SETVIEW_OFFSET UNITYSDK_OFFSET(0x15DC2560)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC28F0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15DC2910)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15DC29A0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15DC2A40)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15DC2AD0)
#define MOLEMOLE_UIOVERLORDFEASTROLEICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15DC2B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastRoleIconWidgetController_TypeDefinitionIndex = 48650;

	class UIOverlordFeastRoleIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_1ED77DD93111CFA0* _view; // 0x2F0
		::System::Int32 _guestID; // 0x2F8
		::System::Int32 _dishID; // 0x2FC
		::System::Int32 _gameID; // 0x300

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
