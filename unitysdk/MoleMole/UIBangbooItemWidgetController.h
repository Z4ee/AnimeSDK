#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_04C0D840520454A3;
class Class_2_3BB4FDB082E23A99;
class Class_2_DB6917E35D27A2CA;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ENABLEHINT_OFFSET UNITYSDK_OFFSET(0x1935EAE0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONBUDDYFAVORITE_OFFSET UNITYSDK_OFFSET(0x19360100)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1935EB30)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19360020)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1935F0D0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1935EBC0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1935E4F0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUPDATEBUDDY_OFFSET UNITYSDK_OFFSET(0x193600B0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x1935F820)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETFAVORITESTATE_OFFSET UNITYSDK_OFFSET(0x1935FFA0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETRARITY_OFFSET UNITYSDK_OFFSET(0x1935FE90)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0x1935FB70)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1935F390)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19360250)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x19360260)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x19360630)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19360850)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x193608E0)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19360970)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19360A10)
#define MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19360AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooItemWidgetController_TypeDefinitionIndex = 64927;

	class UIBangbooItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_04C0D840520454A3* _view; // 0x2F0
		::Class_2_3BB4FDB082E23A99* _data; // 0x2F8
		::System::Int32 MaxStarCount; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void SetStar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETSTAR_OFFSET))(this);
		}

		::System::Void SetRarity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETRARITY_OFFSET))(this);
		}

		::System::Void SetFavoriteState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_SETFAVORITESTATE_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUpdateBuddy(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONUPDATEBUDDY_OFFSET))(this, args);
		}

		::System::Void OnBuddyFavorite(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ONBUDDYFAVORITE_OFFSET))(this, arg);
		}

		::System::Void RegisterNotify(::Class_2_DB6917E35D27A2CA* itemdata)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_DB6917E35D27A2CA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET))(this, itemdata);
		}

		::System::Void EnableHint(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER_ENABLEHINT_OFFSET))(this, enable);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
