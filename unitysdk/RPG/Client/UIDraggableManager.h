#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIDraggableManager_AreaFlag.h"
#include "unitysdk/RPG/Client/UIDraggableManager_UIDragState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_788;
class Class_0_16E4307DCC419505_789;
namespace RPG::Client { class UIDraggableManager_AreaInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER_ADDAREA_OFFSET UNITYSDK_OFFSET(0xA68BCF0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ADDDRAGONLYAREA_OFFSET UNITYSDK_OFFSET(0xA68C110)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ADDHOVERONLYAREA_OFFSET UNITYSDK_OFFSET(0xA68BFC0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68C570)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68C610)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGEXCEEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68C5C0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGEXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68C660)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68C520)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_CLEARDRAGTARGET_OFFSET UNITYSDK_OFFSET(0xA68B6C0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_GETDRAGTARGETSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0xA68CC50)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0xA68D450)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68C7C0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68C9E0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGEXCEEDCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68C8D0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGEXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68CAF0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0xA68C6B0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA68B8A0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALENDDRAG_OFFSET UNITYSDK_OFFSET(0xA68B900)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALENTER_OFFSET UNITYSDK_OFFSET(0xA6898D0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALEXIT_OFFSET UNITYSDK_OFFSET(0xA689870)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0xA68B080)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA68AED0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ONDROP_OFFSET UNITYSDK_OFFSET(0xA68BC40)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xA68B640)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_OVERRIDEDRAGINPUT_OFFSET UNITYSDK_OFFSET(0xA689A70)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xA68CFA0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xA68CF60)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_RPG_CLIENT_IUIDRAGINPUT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA68CFF0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_SETCONFINEDCURSORWHENDRAG_OFFSET UNITYSDK_OFFSET(0xA68CC00)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_SETDRAGTARGET_OFFSET UNITYSDK_OFFSET(0xA68C230)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_START_OFFSET UNITYSDK_OFFSET(0xA68ADD0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA68B300)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__ADDAREAINFO_OFFSET UNITYSDK_OFFSET(0xA68BE90)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__CHANGEDRAGSTATE_OFFSET UNITYSDK_OFFSET(0xA68B000)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__CLEAR_OFFSET UNITYSDK_OFFSET(0xA68AF20)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA68D460)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__DISPATCHENDDRAGEVENT_OFFSET UNITYSDK_OFFSET(0xA68D1B0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__DISPATCHSTARTDRAGEVENT_OFFSET UNITYSDK_OFFSET(0xA68D060)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__GETAREAINFO_OFFSET UNITYSDK_OFFSET(0xA68B170)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__ONENTER_OFFSET UNITYSDK_OFFSET(0xA68B9B0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__ONEXIT_OFFSET UNITYSDK_OFFSET(0xA68BB00)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__RESETAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0xA68D300)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__SHOULDCONFINEDCURSORWHENDRAG_OFFSET UNITYSDK_OFFSET(0xA68C4B0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__TRIGGERALLENTEREVENT_OFFSET UNITYSDK_OFFSET(0xA68CDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager_TypeDefinitionIndex = 56446;

	class UIDraggableManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Vector2 PCOffset; // 0x18
		::UnityEngine::Vector2 MobileOffset; // 0x20
		::System::Boolean NotLimitDragArea; // 0x28
		::System::Boolean ReTriggerEnterExitInDragSource; // 0x29
		::System::Collections::Generic::List_1<::RPG::Client::UIDraggableManager_AreaInfo*>* _AreaInfoList; // 0x30
		::RPG::Client::UIDraggableManager_UIDragState _State; // 0x38
		::UnityEngine::GameObject* _DragSourceGameObject; // 0x40
		::UnityEngine::RectTransform* _DragTarget; // 0x48
		::UnityEngine::Vector2 _Offset; // 0x50
		::UnityEngine::Rect _RootRect; // 0x58
		::System::Action_1<::System::Object*>* _OnDragStart; // 0x68
		::System::Action* _OnDragExceed; // 0x70
		::System::Action* _OnDragEnd; // 0x78
		::System::Action_1<::System::Object*>* _OnDragEnter; // 0x80
		::System::Action_1<::System::Object*>* _OnDragExit; // 0x88
		::System::Boolean _ConfinedCursorWhenDrag; // 0x90
		::Class_0_16E4307DCC419505_788* _DragInput; // 0x98
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_789*>* _DragEventListeners; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__CLEAR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ONBEGINDRAG_OFFSET))(this, gameObject, eventData);
		}

		::System::Void OverrideDragInput(::Class_0_16E4307DCC419505_788* dragInput)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_788*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_OVERRIDEDRAGINPUT_OFFSET))(this, dragInput);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ONENDDRAG_OFFSET))(this, gameObject, eventData);
		}

		::System::Void ManualBeginDrag(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALBEGINDRAG_OFFSET))(this, gameObject);
		}

		::System::Void ManualEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALENDDRAG_OFFSET))(this);
		}

		::System::Void ManualEnter(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALENTER_OFFSET))(this, gameObject);
		}

		::System::Void ManualExit(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALEXIT_OFFSET))(this, gameObject);
		}

		::System::Void OnDrop(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ONDROP_OFFSET))(this, gameObject, eventData);
		}

		::System::Void AddArea(::UnityEngine::GameObject* gameObject, ::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ADDAREA_OFFSET))(this, gameObject, param);
		}

		::System::Void AddHoverOnlyArea(::UnityEngine::GameObject* gameObject, ::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ADDHOVERONLYAREA_OFFSET))(this, gameObject, param);
		}

		::System::Void AddDragOnlyArea(::UnityEngine::GameObject* gameObject, ::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ADDDRAGONLYAREA_OFFSET))(this, gameObject, param);
		}

		::System::Void SetDragTarget(::UnityEngine::RectTransform* rectTransform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_SETDRAGTARGET_OFFSET))(this, rectTransform);
		}

		::System::Void ClearDragTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_CLEARDRAGTARGET_OFFSET))(this);
		}

		::System::Void BindDragStartCallback(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGSTARTCALLBACK_OFFSET))(this, callback);
		}

		::System::Void BindDragEndCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGENDCALLBACK_OFFSET))(this, callback);
		}

		::System::Void BindDragExceedCallback(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGEXCEEDCALLBACK_OFFSET))(this, callback);
		}

		::System::Void BindDragEnterCallback(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGENTERCALLBACK_OFFSET))(this, callback);
		}

		::System::Void BindDragExitCallback(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGEXITCALLBACK_OFFSET))(this, callback);
		}

		::System::Void LuaBindDragStartCallback(::System::Action_2<::XLua::LuaTable*, ::System::Object*>* callback, ::XLua::LuaTable* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGSTARTCALLBACK_OFFSET))(this, callback, listener);
		}

		::System::Void LuaBindDragEndCallback(::System::Action_1<::XLua::LuaTable*>* callback, ::XLua::LuaTable* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGENDCALLBACK_OFFSET))(this, callback, listener);
		}

		::System::Void LuaBindDragExceedCallback(::System::Action_1<::XLua::LuaTable*>* callback, ::XLua::LuaTable* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGEXCEEDCALLBACK_OFFSET))(this, callback, listener);
		}

		::System::Void LuaBindDragEnterCallback(::System::Action_2<::XLua::LuaTable*, ::System::Object*>* callback, ::XLua::LuaTable* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGENTERCALLBACK_OFFSET))(this, callback, listener);
		}

		::System::Void LuaBindDragExitCallback(::System::Action_2<::XLua::LuaTable*, ::System::Object*>* callback, ::XLua::LuaTable* listener)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGEXITCALLBACK_OFFSET))(this, callback, listener);
		}

		::System::Void SetConfinedCursorWhenDrag(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_SETCONFINEDCURSORWHENDRAG_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 GetDragTargetScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_GETDRAGTARGETSCREENPOSITION_OFFSET))(this);
		}

		::System::Void _AddAreaInfo(::UnityEngine::GameObject* gameObject, ::System::Object* data, ::RPG::Client::UIDraggableManager_AreaFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*, ::RPG::Client::UIDraggableManager_AreaFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__ADDAREAINFO_OFFSET))(this, gameObject, data, flag);
		}

		::System::Boolean _GetAreaInfo(::UnityEngine::GameObject* gameObject, ::RPG::Client::UIDraggableManager_AreaInfo*& res)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::UIDraggableManager_AreaInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__GETAREAINFO_OFFSET))(this, gameObject, res);
		}

		::System::Void _TriggerAllEnterEvent(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__TRIGGERALLENTEREVENT_OFFSET))(this, eventData);
		}

		::System::Boolean _ShouldConfinedCursorWhenDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__SHOULDCONFINEDCURSORWHENDRAG_OFFSET))(this);
		}

		::System::Void _OnEnter(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__ONENTER_OFFSET))(this, gameObject, eventData);
		}

		::System::Void _OnExit(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__ONEXIT_OFFSET))(this, gameObject, eventData);
		}

		::System::Void RPG_Client_IPoolableComponent_Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET))(this);
		}

		::System::Void RPG_Client_IPoolableComponent_Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET))(this);
		}

		::UnityEngine::Vector2 RPG_Client_IUIDragInput_GetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_RPG_CLIENT_IUIDRAGINPUT_GETPOSITION_OFFSET))(this);
		}

		::System::Void _DispatchStartDragEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__DISPATCHSTARTDRAGEVENT_OFFSET))(this);
		}

		::System::Void _DispatchEndDragEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__DISPATCHENDDRAGEVENT_OFFSET))(this);
		}

		::System::Void _ChangeDragState(::RPG::Client::UIDraggableManager_UIDragState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDraggableManager_UIDragState))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__CHANGEDRAGSTATE_OFFSET))(this, state);
		}

		::System::Void _ResetAreaInfoList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__RESETAREAINFOLIST_OFFSET))(this);
		}

		::System::Boolean get_IsDragging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_GET_ISDRAGGING_OFFSET))(this);
		}
	};
}
