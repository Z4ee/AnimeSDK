#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_F9471F3BB5949932_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIHandBookAwakenItemWidgetControllerContext; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONCLICKSHOWREWARD_OFFSET UNITYSDK_OFFSET(0x17DAD1C0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONCLICKTELEPORT_OFFSET UNITYSDK_OFFSET(0x17DAD0F0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DACB60)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17DACC70)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DACBF0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DAC640)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0x17DAC810)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x17DACD70)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DAD3A0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER__ONCLICKTELEPORT_B__8_0_OFFSET UNITYSDK_OFFSET(0x17DAD3B0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DAD480)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17DAD510)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DAD5B0)
#define MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17DAD640)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookAwakenItemWidgetController_TypeDefinitionIndex = 42851;

	class UIHandBookAwakenItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_F9471F3BB5949932_1* _view; // 0x2F0
		::MoleMole::UIHandBookAwakenItemWidgetControllerContext* m_ctx; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshState(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this, args);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void OnClickTeleport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONCLICKTELEPORT_OFFSET))(this);
		}

		::System::Void OnClickShowReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER_ONCLICKSHOWREWARD_OFFSET))(this);
		}

		::System::Void _OnClickTeleport_b__8_0(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER__ONCLICKTELEPORT_B__8_0_OFFSET))(this, success);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKAWAKENITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
