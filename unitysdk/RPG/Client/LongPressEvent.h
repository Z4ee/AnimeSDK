#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class LongPressEvent_PressingDownEvent; }
namespace RPG::Client { class MonoInControlEvent; }
namespace RPG::Client { class UIController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define RPG_CLIENT_LONGPRESSEVENT_ADDEXITEVENT_OFFSET UNITYSDK_OFFSET(0xD5723E0)
#define RPG_CLIENT_LONGPRESSEVENT_ADDLONGCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xD572230)
#define RPG_CLIENT_LONGPRESSEVENT_ADDOVERSHORTCLICKTIME_OFFSET UNITYSDK_OFFSET(0xD572470)
#define RPG_CLIENT_LONGPRESSEVENT_ADDPRESSINGDOWNEVENT_OFFSET UNITYSDK_OFFSET(0xD572500)
#define RPG_CLIENT_LONGPRESSEVENT_ADDRELEASEEVENT_OFFSET UNITYSDK_OFFSET(0xD572350)
#define RPG_CLIENT_LONGPRESSEVENT_ADDREPEATCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xD5722C0)
#define RPG_CLIENT_LONGPRESSEVENT_ADDSHORTCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xD5721A0)
#define RPG_CLIENT_LONGPRESSEVENT_ADDSHORTDOWNCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xD572110)
#define RPG_CLIENT_LONGPRESSEVENT_CLEARALLEVENTS_OFFSET UNITYSDK_OFFSET(0xD571690)
#define RPG_CLIENT_LONGPRESSEVENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD571BA0)
#define RPG_CLIENT_LONGPRESSEVENT_GETPRESSDOWNTIME_OFFSET UNITYSDK_OFFSET(0xD572930)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ISPRESSDOWN_OFFSET UNITYSDK_OFFSET(0xD572C50)
#define RPG_CLIENT_LONGPRESSEVENT_GET_OFFSET UNITYSDK_OFFSET(0xD5703D0)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONEXITCOUNT_OFFSET UNITYSDK_OFFSET(0xD572B70)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONLONGCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0xD572AB0)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONOVERSHORTCLICKTIMECOUNT_OFFSET UNITYSDK_OFFSET(0xD572BB0)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONPRESSINGDOWNCOUNT_OFFSET UNITYSDK_OFFSET(0xD572C00)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONRELEASECOUNT_OFFSET UNITYSDK_OFFSET(0xD572B30)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONREPEATCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0xD572AF0)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONSHORTCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0xD572A70)
#define RPG_CLIENT_LONGPRESSEVENT_GET_ONSHORTDOWNCLICKCOUNT_OFFSET UNITYSDK_OFFSET(0xD572A30)
#define RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xD571050)
#define RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERUPBYRESET_OFFSET UNITYSDK_OFFSET(0xD571420)
#define RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERUP_OFFSET UNITYSDK_OFFSET(0xD5712C0)
#define RPG_CLIENT_LONGPRESSEVENT_INVOKSHORTDOWNCLICK_OFFSET UNITYSDK_OFFSET(0xD5710E0)
#define RPG_CLIENT_LONGPRESSEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD571640)
#define RPG_CLIENT_LONGPRESSEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD571BF0)
#define RPG_CLIENT_LONGPRESSEVENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xD571C40)
#define RPG_CLIENT_LONGPRESSEVENT_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xD570EE0)
#define RPG_CLIENT_LONGPRESSEVENT_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xD5714D0)
#define RPG_CLIENT_LONGPRESSEVENT_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xD571150)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEEXITEVENTS_OFFSET UNITYSDK_OFFSET(0xD571F60)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEEXITEVENT_OFFSET UNITYSDK_OFFSET(0xD5727D0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVELONGCLICKEVENTS_OFFSET UNITYSDK_OFFSET(0xD571DB0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVELONGCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xD572680)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEOVERSHORTCLICKTIMEEVENTS_OFFSET UNITYSDK_OFFSET(0xD572080)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEOVERSHORTCLICKTIMEEVENT_OFFSET UNITYSDK_OFFSET(0xD572840)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEPRESSINGDOWNEVENTS_OFFSET UNITYSDK_OFFSET(0xD571FF0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEPRESSINGDOWNEVENT_OFFSET UNITYSDK_OFFSET(0xD5728B0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVERELEASEEVENTS_OFFSET UNITYSDK_OFFSET(0xD571ED0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVERELEASEEVENT_OFFSET UNITYSDK_OFFSET(0xD572760)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEREPEATCLICKEVENTS_OFFSET UNITYSDK_OFFSET(0xD571E40)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVEREPEATCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xD5726F0)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTCLICKEVENTS_OFFSET UNITYSDK_OFFSET(0xD571D20)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xD572610)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTDOWNCLICKEVENTS_OFFSET UNITYSDK_OFFSET(0xD571C90)
#define RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTDOWNCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xD5725A0)
#define RPG_CLIENT_LONGPRESSEVENT_REPEATRUN_OFFSET UNITYSDK_OFFSET(0xD5729E0)
#define RPG_CLIENT_LONGPRESSEVENT_RESET_OFFSET UNITYSDK_OFFSET(0xD5713B0)
#define RPG_CLIENT_LONGPRESSEVENT_SETCANCELREPEATONUNFOCUSED_OFFSET UNITYSDK_OFFSET(0xD572990)
#define RPG_CLIENT_LONGPRESSEVENT_SETUPDATEENABLE_OFFSET UNITYSDK_OFFSET(0xD5704A0)
#define RPG_CLIENT_LONGPRESSEVENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD571B60)
#define RPG_CLIENT_LONGPRESSEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0xD5704F0)
#define RPG_CLIENT_LONGPRESSEVENT__CHECKISOTHERLONGPRESSING_OFFSET UNITYSDK_OFFSET(0xD570800)
#define RPG_CLIENT_LONGPRESSEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD572CA0)
#define RPG_CLIENT_LONGPRESSEVENT__GETLONGPRESSPROGRESS_OFFSET UNITYSDK_OFFSET(0xD570CF0)
#define RPG_CLIENT_LONGPRESSEVENT__INVOKEOVERSHORTCLICK_OFFSET UNITYSDK_OFFSET(0xD570A10)
#define RPG_CLIENT_LONGPRESSEVENT__POSTBUTTONSOUND_OFFSET UNITYSDK_OFFSET(0xD570DB0)
#define RPG_CLIENT_LONGPRESSEVENT__TRYSETUPLONGPRESSHINTSHOW_OFFSET UNITYSDK_OFFSET(0xD570A70)

namespace RPG::Client
{
	inline static constexpr unsigned int LongPressEvent_TypeDefinitionIndex = 72493;

	class LongPressEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsUpdateEnable; // 0x18
		::System::Boolean Interactable; // 0x19
		::System::Single ShortClickTime; // 0x1C
		::System::Single TotalTime; // 0x20
		::System::Single RepeatTime; // 0x24
		::UnityEngine::Events::UnityEvent* OnShortDownClick; // 0x28
		::UnityEngine::Events::UnityEvent* OnShortClick; // 0x30
		::UnityEngine::Events::UnityEvent* OnLongClick; // 0x38
		::UnityEngine::Events::UnityEvent* OnRepeatClick; // 0x40
		::UnityEngine::Events::UnityEvent* OnRelease; // 0x48
		::UnityEngine::Events::UnityEvent* OnExit; // 0x50
		::UnityEngine::Events::UnityEvent* OnOverShortClickTime; // 0x58
		::RPG::Client::LongPressEvent_PressingDownEvent* OnPressingDown; // 0x60
		::System::Int32 _OnShortDownClickCount; // 0x68
		::System::Int32 _OnShortClickCount; // 0x6C
		::System::Int32 _OnLongClickCount; // 0x70
		::System::Int32 _OnRepeatClickCount; // 0x74
		::System::Int32 _OnReleaseCount; // 0x78
		::System::Int32 _OnExitCount; // 0x7C
		::System::Int32 _OnPressingDownCount; // 0x80
		::System::Int32 _OnOverShortClickTimeCount; // 0x84
		::System::Boolean _IsPressDown; // 0x88
		::System::Boolean _IsLongPressInvok; // 0x89
		::System::Boolean _IsOverShortClickTime; // 0x8A
		::System::Single _PointerDownTime; // 0x8C
		::RPG::Client::MonoInControlEvent* _MonoInControlEvent; // 0x90
		::RPG::Client::UIController* _Controller; // 0x98
		::System::Boolean _CancelRepeatOnUnfocused; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::LongPressEvent* Get(::UnityEngine::GameObject* a1)
		{
			return ((::RPG::Client::LongPressEvent*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_OFFSET))(a1);
		}

		::System::Void SetUpdateEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_SETUPDATEENABLE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_UPDATE_OFFSET))(this);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void InvokShortDownClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_INVOKSHORTDOWNCLICK_OFFSET))(this);
		}

		::System::Void InvokPointerDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERDOWN_OFFSET))(this);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void InvokPointerUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERUP_OFFSET))(this);
		}

		::System::Void InvokPointerUpByReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_INVOKPOINTERUPBYRESET_OFFSET))(this);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void ClearAllEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_CLEARALLEVENTS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_RESET_OFFSET))(this);
		}

		::System::Void AddShortDownClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDSHORTDOWNCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void AddShortClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDSHORTCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void AddLongClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDLONGCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void AddRepeatClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDREPEATCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void AddReleaseEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDRELEASEEVENT_OFFSET))(this, a1);
		}

		::System::Void AddExitEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDEXITEVENT_OFFSET))(this, a1);
		}

		::System::Void AddOverShortClickTime(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDOVERSHORTCLICKTIME_OFFSET))(this, a1);
		}

		::System::Void AddPressingDownEvent(::UnityEngine::Events::UnityAction_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_ADDPRESSINGDOWNEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveShortDownClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTDOWNCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveShortClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveLongClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVELONGCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveRepeatClickEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEREPEATCLICKEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveReleaseEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVERELEASEEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveExitEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEEXITEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveOverShortClickTimeEvent(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEOVERSHORTCLICKTIMEEVENT_OFFSET))(this, a1);
		}

		::System::Void RemovePressingDownEvent(::UnityEngine::Events::UnityAction_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEPRESSINGDOWNEVENT_OFFSET))(this, a1);
		}

		::System::Void RemoveShortDownClickEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTDOWNCLICKEVENTS_OFFSET))(this);
		}

		::System::Void RemoveShortClickEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVESHORTCLICKEVENTS_OFFSET))(this);
		}

		::System::Void RemoveLongClickEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVELONGCLICKEVENTS_OFFSET))(this);
		}

		::System::Void RemoveRepeatClickEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEREPEATCLICKEVENTS_OFFSET))(this);
		}

		::System::Void RemoveReleaseEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVERELEASEEVENTS_OFFSET))(this);
		}

		::System::Void RemoveExitEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEEXITEVENTS_OFFSET))(this);
		}

		::System::Void RemoveOverShortClickTimeEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEOVERSHORTCLICKTIMEEVENTS_OFFSET))(this);
		}

		::System::Void RemovePressingDownEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REMOVEPRESSINGDOWNEVENTS_OFFSET))(this);
		}

		::System::Single GetPressDownTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GETPRESSDOWNTIME_OFFSET))(this);
		}

		::System::Void SetCancelRepeatOnUnfocused(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_SETCANCELREPEATONUNFOCUSED_OFFSET))(this, a1);
		}

		::System::Void RepeatRun()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_REPEATRUN_OFFSET))(this);
		}

		::System::Void _PostButtonSound()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__POSTBUTTONSOUND_OFFSET))(this);
		}

		::System::Void _InvokeOverShortClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__INVOKEOVERSHORTCLICK_OFFSET))(this);
		}

		::System::Single _GetLongPressProgress(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__GETLONGPRESSPROGRESS_OFFSET))(this, a1);
		}

		::System::Void _TrySetupLongPressHintShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__TRYSETUPLONGPRESSHINTSHOW_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIsOtherLongPressing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT__CHECKISOTHERLONGPRESSING_OFFSET))(this);
		}

		::System::Int32 get_OnShortDownClickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONSHORTDOWNCLICKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnShortClickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONSHORTCLICKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnLongClickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONLONGCLICKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnRepeatClickCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONREPEATCLICKCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnReleaseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONRELEASECOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnExitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONEXITCOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnOverShortClickTimeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONOVERSHORTCLICKTIMECOUNT_OFFSET))(this);
		}

		::System::Int32 get_OnPressingDownCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ONPRESSINGDOWNCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsPressDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LONGPRESSEVENT_GET_ISPRESSDOWN_OFFSET))(this);
		}
	};
}
