#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIGeneralKeyPanelWidgetController.h"

class Class_2_79F6D62CE30E3F8E_34;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x195FAE70)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195FAE80)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_REFRESHVIEWFORCE_OFFSET UNITYSDK_OFFSET(0x195FB770)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_SETINPUTLOGICEVENTFORCESHOW_OFFSET UNITYSDK_OFFSET(0x195FAF80)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x195FBF20)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x195FBFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralKeyPanelWidgetDontCacheController_TypeDefinitionIndex = 48617;

	class UIGeneralKeyPanelWidgetDontCacheController : public ::MoleMole::UIGeneralKeyPanelWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_34* _thisView; // 0x3A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetInputLogicEventForceShow(::MoleMole::InputLogicEventType logicEvent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_SETINPUTLOGICEVENTFORCESHOW_OFFSET))(this, logicEvent);
		}

		::System::Void RefreshViewForce(::System::String* keyCodeString, ::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_REFRESHVIEWFORCE_OFFSET))(this, keyCodeString, iconPath);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}
	};
}
