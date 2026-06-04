#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }

#define RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER_ADDDISABLECANVASGROUP_OFFSET UNITYSDK_OFFSET(0xB7F6CC0)
#define RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER_REMOVEDISABLECANVASGROUP_OFFSET UNITYSDK_OFFSET(0xB7F6DC0)
#define RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER_RPG_CLIENT_IUIDRAGEVENTLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xB7F6A80)
#define RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER_RPG_CLIENT_IUIDRAGEVENTLISTENER_ONSTARTDRAG_OFFSET UNITYSDK_OFFSET(0xB7F6BA0)
#define RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xB7F6E60)

namespace RPG::Client
{
	inline static constexpr unsigned int DisableCanvasGroupUIDragEventListener_TypeDefinitionIndex = 68224;

	class DisableCanvasGroupUIDragEventListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* _DisableCanvasGroupList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void RPG_Client_IUIDragEventListener_OnEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER_RPG_CLIENT_IUIDRAGEVENTLISTENER_ONENDDRAG_OFFSET))(this);
		}

		::System::Void RPG_Client_IUIDragEventListener_OnStartDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER_RPG_CLIENT_IUIDRAGEVENTLISTENER_ONSTARTDRAG_OFFSET))(this);
		}

		::System::Void AddDisableCanvasGroup(::UnityEngine::CanvasGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER_ADDDISABLECANVASGROUP_OFFSET))(this, a1);
		}

		::System::Void RemoveDisableCanvasGroup(::UnityEngine::CanvasGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLECANVASGROUPUIDRAGEVENTLISTENER_REMOVEDISABLECANVASGROUP_OFFSET))(this, a1);
		}
	};
}
