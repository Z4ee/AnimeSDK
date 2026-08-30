#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIDraggableManager_AreaFlag.h"
#include "unitysdk/RPG/Client/UIDraggableManager_UIDragState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_1037;
class Class_0_16E4307DCC419505_1038;
namespace RPG::Client { class UIDraggableManager_AreaInfo; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER_ADDAREA_OFFSET UNITYSDK_OFFSET(0x170184D0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ADDDRAGONLYAREA_OFFSET UNITYSDK_OFFSET(0x170189E0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ADDHOVERONLYAREA_OFFSET UNITYSDK_OFFSET(0x17018850)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17018E80)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x17018F20)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGEXCEEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17018ED0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGEXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x17018F70)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x17018E30)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_CLEARDRAGTARGET_OFFSET UNITYSDK_OFFSET(0x17017F30)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_GETDRAGTARGETSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x17019600)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_GET_ISDRAGGING_OFFSET UNITYSDK_OFFSET(0x1701A060)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGENDCALLBACK_OFFSET UNITYSDK_OFFSET(0x170190F0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x17019350)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGEXCEEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17019220)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGEXITCALLBACK_OFFSET UNITYSDK_OFFSET(0x17019480)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGSTARTCALLBACK_OFFSET UNITYSDK_OFFSET(0x17018FC0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x17018110)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALENDDRAG_OFFSET UNITYSDK_OFFSET(0x17017710)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALENTER_OFFSET UNITYSDK_OFFSET(0x17015DD0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALEXIT_OFFSET UNITYSDK_OFFSET(0x17015D70)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ONBEGINDRAG_OFFSET UNITYSDK_OFFSET(0x17017850)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17017560)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x170176C0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ONDROP_OFFSET UNITYSDK_OFFSET(0x17018410)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x17017EB0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_OVERRIDEDRAGINPUT_OFFSET UNITYSDK_OFFSET(0x17015F70)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_RPG_CLIENT_IPOOLABLECOMPONENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x170199F0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_RPG_CLIENT_IPOOLABLECOMPONENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x170199B0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_RPG_CLIENT_IUIDRAGINPUT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x17019A40)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_SETCONFINEDCURSORWHENDRAG_OFFSET UNITYSDK_OFFSET(0x170195B0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_SETCUSTOMPOSITIONSETTER_OFFSET UNITYSDK_OFFSET(0x17019760)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_SETDRAGTARGET_OFFSET UNITYSDK_OFFSET(0x17018B40)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_START_OFFSET UNITYSDK_OFFSET(0x17017460)
#define RPG_CLIENT_UIDRAGGABLEMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x17017AD0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__ADDAREAINFO_OFFSET UNITYSDK_OFFSET(0x170186D0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__CHANGEDRAGSTATE_OFFSET UNITYSDK_OFFSET(0x170177D0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__CLEAR_OFFSET UNITYSDK_OFFSET(0x170175B0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1701A070)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__DISPATCHENDDRAGEVENT_OFFSET UNITYSDK_OFFSET(0x17019D00)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__DISPATCHSTARTDRAGEVENT_OFFSET UNITYSDK_OFFSET(0x17019AB0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__GETAREAINFO_OFFSET UNITYSDK_OFFSET(0x17017950)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__ONENTER_OFFSET UNITYSDK_OFFSET(0x17018170)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__ONEXIT_OFFSET UNITYSDK_OFFSET(0x170182C0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__RESETAREAINFOLIST_OFFSET UNITYSDK_OFFSET(0x17019F50)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__SHOULDCONFINEDCURSORWHENDRAG_OFFSET UNITYSDK_OFFSET(0x17018DC0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER__TRIGGERALLENTEREVENT_OFFSET UNITYSDK_OFFSET(0x17019820)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager_TypeDefinitionIndex = 69051;

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
		::UnityEngine::Transform* _DragTarget; // 0x48
		::UnityEngine::Vector2 _Offset; // 0x50
		::UnityEngine::Rect _RootRect; // 0x58
		::System::Action_1<::System::Object*>* _OnDragStart; // 0x68
		::System::Action* _OnDragExceed; // 0x70
		::System::Action* _OnDragEnd; // 0x78
		::System::Action_1<::System::Object*>* _OnDragEnter; // 0x80
		::System::Action_1<::System::Object*>* _OnDragExit; // 0x88
		::System::Boolean _ConfinedCursorWhenDrag; // 0x90
		::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector2>* _CustomPositionSetter; // 0x98
		::Class_0_16E4307DCC419505_1037* _DragInput; // 0xA0
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1038*>* _DragEventListeners; // 0xA8

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

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__CLEAR_OFFSET))(this);
		}

		::System::Void OnBeginDrag(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ONBEGINDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideDragInput(::Class_0_16E4307DCC419505_1037* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1037*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_OVERRIDEDRAGINPUT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void OnEndDrag(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ONENDDRAG_OFFSET))(this, a1, a2);
		}

		::System::Void ManualBeginDrag(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALBEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void ManualEndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALENDDRAG_OFFSET))(this);
		}

		::System::Void ManualEnter(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALENTER_OFFSET))(this, a1);
		}

		::System::Void ManualExit(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_MANUALEXIT_OFFSET))(this, a1);
		}

		::System::Void OnDrop(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ONDROP_OFFSET))(this, a1, a2);
		}

		::System::Void AddArea(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ADDAREA_OFFSET))(this, a1, a2);
		}

		::System::Void AddHoverOnlyArea(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ADDHOVERONLYAREA_OFFSET))(this, a1, a2);
		}

		::System::Void AddDragOnlyArea(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_ADDDRAGONLYAREA_OFFSET))(this, a1, a2);
		}

		::System::Void SetDragTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_SETDRAGTARGET_OFFSET))(this, a1);
		}

		::System::Void ClearDragTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_CLEARDRAGTARGET_OFFSET))(this);
		}

		::System::Void BindDragStartCallback(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGSTARTCALLBACK_OFFSET))(this, a1);
		}

		::System::Void BindDragEndCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGENDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void BindDragExceedCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGEXCEEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Void BindDragEnterCallback(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGENTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void BindDragExitCallback(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_BINDDRAGEXITCALLBACK_OFFSET))(this, a1);
		}

		::System::Void LuaBindDragStartCallback(::System::Action_2<::XLua::LuaTable*, ::System::Object*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGSTARTCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void LuaBindDragEndCallback(::System::Action_1<::XLua::LuaTable*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGENDCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void LuaBindDragExceedCallback(::System::Action_1<::XLua::LuaTable*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGEXCEEDCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void LuaBindDragEnterCallback(::System::Action_2<::XLua::LuaTable*, ::System::Object*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGENTERCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void LuaBindDragExitCallback(::System::Action_2<::XLua::LuaTable*, ::System::Object*>* a1, ::XLua::LuaTable* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Object*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_LUABINDDRAGEXITCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void SetConfinedCursorWhenDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_SETCONFINEDCURSORWHENDRAG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 GetDragTargetScreenPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_GETDRAGTARGETSCREENPOSITION_OFFSET))(this);
		}

		::System::Void SetCustomPositionSetter(::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Transform*, ::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER_SETCUSTOMPOSITIONSETTER_OFFSET))(this, a1);
		}

		::System::Void _AddAreaInfo(::UnityEngine::GameObject* a1, ::System::Object* a2, ::RPG::Client::UIDraggableManager_AreaFlag a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*, ::RPG::Client::UIDraggableManager_AreaFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__ADDAREAINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _GetAreaInfo(::UnityEngine::GameObject* a1, ::RPG::Client::UIDraggableManager_AreaInfo*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::UIDraggableManager_AreaInfo*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__GETAREAINFO_OFFSET))(this, a1, a2);
		}

		::System::Void _TriggerAllEnterEvent(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__TRIGGERALLENTEREVENT_OFFSET))(this, a1);
		}

		::System::Boolean _ShouldConfinedCursorWhenDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__SHOULDCONFINEDCURSORWHENDRAG_OFFSET))(this);
		}

		::System::Void _OnEnter(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__ONENTER_OFFSET))(this, a1, a2);
		}

		::System::Void _OnExit(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__ONEXIT_OFFSET))(this, a1, a2);
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

		::System::Void _ChangeDragState(::RPG::Client::UIDraggableManager_UIDragState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDraggableManager_UIDragState))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER__CHANGEDRAGSTATE_OFFSET))(this, a1);
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
