#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_A8D72D44ADC143C2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17486400)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17486510)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17486490)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17486030)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17486190)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17486570)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17486580)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17486610)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x174866B0)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17486740)
#define MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x174867D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerSkinSwitchTabWidgetController_TypeDefinitionIndex = 57584;

	class UIPlayerSkinSwitchTabWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_A8D72D44ADC143C2* _view; // 0x2F0
		::System::Int32 m_avatarID; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERSKINSWITCHTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
