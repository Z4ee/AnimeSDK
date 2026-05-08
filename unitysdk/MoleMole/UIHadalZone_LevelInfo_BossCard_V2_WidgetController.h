#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_468A4FBF2E9F527C;
class Class_2_EC707217DE7794EF_6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_Common_HadalRoom_CardContext; }
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EF4430)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14EF3F90)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EF44C0)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EF3B70)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14EF3BD0)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x14EF3D30)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_SETCLICK_OFFSET UNITYSDK_OFFSET(0x14EF4150)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF4540)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x14EF4570)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER__ONUIOPEN_B__5_0_OFFSET UNITYSDK_OFFSET(0x14EF4550)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER__UPDATECARD_OFFSET UNITYSDK_OFFSET(0x14EF41A0)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EF4590)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x14EF4620)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EF46C0)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EF4750)
#define MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14EF47E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LevelInfo_BossCard_V2_WidgetController_TypeDefinitionIndex = 65394;

	class UIHadalZone_LevelInfo_BossCard_V2_WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_EC707217DE7794EF_6* _view; // 0x2E8
		::MoleMole::UIHadalZone_Common_HadalRoom_CardContext* _cardContext; // 0x2F0
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x2F8
		::System::Action* callback; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshByContext(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetClick(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER_SETCLICK_OFFSET))(this, callback);
		}

		::System::Void _UpdateCard()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER__UPDATECARD_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER__ONUIOPEN_B__5_0_OFFSET))(this);
		}

		::System::Void _OnScrollItemUpdate_b__6_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER__ONSCROLLITEMUPDATE_B__6_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LEVELINFO_BOSSCARD_V2_WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
