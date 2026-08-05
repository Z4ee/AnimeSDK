#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_374D688FD254861E;
namespace MoleMole { class UIActivityTeamTrialBuffRowWidgetController_RowData; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_GETDATA_OFFSET UNITYSDK_OFFSET(0x1B25D760)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1B25D6D0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B25C9A0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1B25CBE0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B25CB60)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_REFRESHGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x1B25D1B0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETBTNINTERACT_OFFSET UNITYSDK_OFFSET(0x1B25D470)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETCUSTOMSELECT_OFFSET UNITYSDK_OFFSET(0x1B25D360)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETENABLE_OFFSET UNITYSDK_OFFSET(0x1B25D050)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETSELECTSHOW_OFFSET UNITYSDK_OFFSET(0x1B25CF50)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B25D7B0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x1B25D7C0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1B25D7D0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1B25D860)
#define MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1B25D900)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialBuffRowWidgetController_TypeDefinitionIndex = 58410;

	class UIActivityTeamTrialBuffRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_374D688FD254861E* _view; // 0x2F0
		::MoleMole::UIActivityTeamTrialBuffRowWidgetController_RowData* _data; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetSelectShow(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETSELECTSHOW_OFFSET))(this, isShow);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void SetCustomSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETCUSTOMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETENABLE_OFFSET))(this, enable);
		}

		::System::Void SetBtnInteract(::System::Boolean interact, ::System::String* flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_SETBTNINTERACT_OFFSET))(this, interact, flag);
		}

		::System::Void RefreshGamePadSelectable(::System::Int32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_REFRESHGAMEPADSELECTABLE_OFFSET))(this, questID);
		}

		::MoleMole::UIActivityTeamTrialBuffRowWidgetController_RowData* GetData()
		{
			return ((::MoleMole::UIActivityTeamTrialBuffRowWidgetController_RowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER_GETDATA_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
