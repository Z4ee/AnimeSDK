#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_9E5C60401935EF42_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x160668A0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_CLOSEVIEW_OFFSET UNITYSDK_OFFSET(0x16066C50)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x16066740)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x16066A00)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x160668F0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16066820)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16066980)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16066750)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x160667B0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_REFRESHVISIBILITY_OFFSET UNITYSDK_OFFSET(0x16066BB0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER_TICKPOS_OFFSET UNITYSDK_OFFSET(0x16066CA0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x160673F0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16067450)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x160674A0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x160674B0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x160674F0)
#define MOLEMOLE_UIETHEREYESOBJECTPOINTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16067530)

namespace MoleMole
{
	inline static constexpr unsigned int UIEtherEyesObjectPointWidgetController_TypeDefinitionIndex = 60137;

	class UIEtherEyesObjectPointWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_9E5C60401935EF42_1* _view; // 0x2C0
		::MoleMole::EntityHandle _entityHandle; // 0x2C8
		::UnityEngine::RectTransform* _rootParent; // 0x2D8
		::Foundation::Coroutine::CoroutineHandle _animCoroutineHandle; // 0x2E0
		::System::Boolean _showLockPointUI; // 0x2E4

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
