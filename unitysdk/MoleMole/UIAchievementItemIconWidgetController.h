#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_4D90EAA3E9195003;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }

#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197506B0)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x197507C0)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19750740)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19750650)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19750900)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x19750CD0)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19750D40)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19750D50)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19750DE0)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19750E80)
#define MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19750F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIAchievementItemIconWidgetController_TypeDefinitionIndex = 67851;

	class UIAchievementItemIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_4D90EAA3E9195003* _view; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::System::Int32 itemid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemid);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACHIEVEMENTITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
