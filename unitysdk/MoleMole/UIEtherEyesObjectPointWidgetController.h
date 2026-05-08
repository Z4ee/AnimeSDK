#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_9E5C60401935EF42;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x149B9200)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_CLOSEVIEW_OFFSET UNITYSDK_OFFSET(0x149B95A0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x149B90A0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x149B9360)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149B9250)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x149B9180)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x149B92E0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149B90B0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x149B9110)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_REFRESHVISIBILITY_OFFSET UNITYSDK_OFFSET(0x149B9510)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_TICKPOS_OFFSET UNITYSDK_OFFSET(0x149B95F0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x149B9D40)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x149B9DA0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x149B9E30)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x149B9E40)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x149B9ED0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x149B9F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIEtherEyesObjectPointWidgetController_TypeDefinitionIndex = 55207;

	class UIEtherEyesObjectPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_9E5C60401935EF42* _view; // 0x2B8
		::MoleMole::EntityHandle _entityHandle; // 0x2C0
		::UnityEngine::RectTransform* _rootParent; // 0x2D0
		::Foundation::Coroutine::CoroutineHandle _animCoroutineHandle; // 0x2D8
		::System::Boolean _showLockPointUI; // 0x2DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView(::MoleMole::EntityHandle entityHandle, ::UnityEngine::RectTransform* rootParent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_INITVIEW_OFFSET))(this, entityHandle, rootParent);
		}

		::System::Void CloseView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_CLOSEVIEW_OFFSET))(this);
		}

		::System::Void TickPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_TICKPOS_OFFSET))(this);
		}

		::System::Void RefreshVisibility(::System::Boolean isInCameraFront)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_REFRESHVISIBILITY_OFFSET))(this, isInCameraFront);
		}

		::System::Void ClearCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_CLEARCACHE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
