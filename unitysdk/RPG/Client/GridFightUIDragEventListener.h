#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI { class Selectable; }

#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_ADDDISABLECANVASGROUP_OFFSET UNITYSDK_OFFSET(0x18FAE9F0)
#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18FAEB60)
#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_REMOVEDISABLECANVASGROUP_OFFSET UNITYSDK_OFFSET(0x18FAEAD0)
#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_RPG_CLIENT_IUIDRAGEVENTLISTENER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x18FAE480)
#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_RPG_CLIENT_IUIDRAGEVENTLISTENER_ONSTARTDRAG_OFFSET UNITYSDK_OFFSET(0x18FAE6F0)
#define RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FAEC80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightUIDragEventListener_TypeDefinitionIndex = 69714;

	class GridFightUIDragEventListener : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::UI::Selectable*>* _SelectableArray; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::CanvasGroup*>* _DisableCanvasGroupList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void RPG_Client_IUIDragEventListener_OnEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_RPG_CLIENT_IUIDRAGEVENTLISTENER_ONENDDRAG_OFFSET))(this);
		}

		::System::Void RPG_Client_IUIDragEventListener_OnStartDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_RPG_CLIENT_IUIDRAGEVENTLISTENER_ONSTARTDRAG_OFFSET))(this);
		}

		::System::Void AddDisableCanvasGroup(::UnityEngine::CanvasGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_ADDDISABLECANVASGROUP_OFFSET))(this, a1);
		}

		::System::Void RemoveDisableCanvasGroup(::UnityEngine::CanvasGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CanvasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_REMOVEDISABLECANVASGROUP_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTUIDRAGEVENTLISTENER_ONDESTROY_OFFSET))(this);
		}
	};
}
