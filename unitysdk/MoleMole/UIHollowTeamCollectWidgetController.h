#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_208CC9941471731A_669;
class Class_2_AB2EF02AB0EB9012;
class Class_2_E3273D40BBA403A7_1;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1961BD50)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1961B580)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1961BDA0)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1961B690)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1961B610)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1961B260)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1961B4C0)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_REFRESHREDPOINTBYDATA_OFFSET UNITYSDK_OFFSET(0x1961C010)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0x1961C060)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1961B7A0)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1961C230)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1961C240)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1961C250)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x1961C2E0)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1961C370)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1961C410)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1961C4A0)
#define MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1961C530)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowTeamCollectWidgetController_TypeDefinitionIndex = 42850;

	class UIHollowTeamCollectWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_E3273D40BBA403A7_1* _view; // 0x2F0
		::MoleMole::MonoGamepadNavigatableList* m_naviList; // 0x2F8
		::Class_2_AB2EF02AB0EB9012* _abyssModel; // 0x300
		::Class_2_208CC9941471731A_669* _trendData; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::Class_2_208CC9941471731A_669* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_669*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshRedPointByData(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_REFRESHREDPOINTBYDATA_OFFSET))(this, args);
		}

		::System::Void RefreshRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWTEAMCOLLECTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
