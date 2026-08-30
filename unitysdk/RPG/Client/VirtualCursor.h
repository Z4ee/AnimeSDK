#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VirtualCursorStatus.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_1170;
class Class_0_16E4307DCC419505_1171;
class Class_0_16E4307DCC419505_1172;
class Class_1_BA3EE563E6A792E6;
namespace InControl { class PlayerAction; }
namespace RPG::Client { class IVirtualCursor; }
namespace RPG::Client { class UIController; }
namespace RPG::Common { template <typename T> class IState_1; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }
namespace UnityEngine::Events { template <typename T> class UnityEvent_1; }

#define RPG_CLIENT_VIRTUALCURSOR_ACTIVE_OFFSET UNITYSDK_OFFSET(0x1C812E10)
#define RPG_CLIENT_VIRTUALCURSOR_ADDMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1C8127D0)
#define RPG_CLIENT_VIRTUALCURSOR_ADDSTOPLISTENER_OFFSET UNITYSDK_OFFSET(0x1C812890)
#define RPG_CLIENT_VIRTUALCURSOR_DEACTIVE_OFFSET UNITYSDK_OFFSET(0x1C812E60)
#define RPG_CLIENT_VIRTUALCURSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C8123F0)
#define RPG_CLIENT_VIRTUALCURSOR_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C815390)
#define RPG_CLIENT_VIRTUALCURSOR_GET_ONMOVE_OFFSET UNITYSDK_OFFSET(0x1C8127B0)
#define RPG_CLIENT_VIRTUALCURSOR_GET_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1C8127C0)
#define RPG_CLIENT_VIRTUALCURSOR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C812410)
#define RPG_CLIENT_VIRTUALCURSOR_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1C815380)
#define RPG_CLIENT_VIRTUALCURSOR_HIDE_OFFSET UNITYSDK_OFFSET(0x1C813350)
#define RPG_CLIENT_VIRTUALCURSOR_INCONTROL_INCONTROLINPUTMODULE_IINPUTPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0x1C8150E0)
#define RPG_CLIENT_VIRTUALCURSOR_INIT_OFFSET UNITYSDK_OFFSET(0x1C812950)
#define RPG_CLIENT_VIRTUALCURSOR_ISHOVEROVER_OFFSET UNITYSDK_OFFSET(0x1C8139C0)
#define RPG_CLIENT_VIRTUALCURSOR_ISHOVERUI_OFFSET UNITYSDK_OFFSET(0x1C813730)
#define RPG_CLIENT_VIRTUALCURSOR_MOVE_OFFSET UNITYSDK_OFFSET(0x1C813460)
#define RPG_CLIENT_VIRTUALCURSOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C812CF0)
#define RPG_CLIENT_VIRTUALCURSOR_OVERRIDESIMULATETOUCHACTION_OFFSET UNITYSDK_OFFSET(0x1C813D30)
#define RPG_CLIENT_VIRTUALCURSOR_REMOVEMOVELISTENER_OFFSET UNITYSDK_OFFSET(0x1C812830)
#define RPG_CLIENT_VIRTUALCURSOR_REMOVESTOPLISTENER_OFFSET UNITYSDK_OFFSET(0x1C8128F0)
#define RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IUIDRAGINPUT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x1C815090)
#define RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0x1C815140)
#define RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0x1C8152A0)
#define RPG_CLIENT_VIRTUALCURSOR_SETBOUNDSCLAMPER_OFFSET UNITYSDK_OFFSET(0x1C812F10)
#define RPG_CLIENT_VIRTUALCURSOR_SETRAYCASTFILTER_OFFSET UNITYSDK_OFFSET(0x1C813CE0)
#define RPG_CLIENT_VIRTUALCURSOR_SETSTATUS_OFFSET UNITYSDK_OFFSET(0x1C812F80)
#define RPG_CLIENT_VIRTUALCURSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C812400)
#define RPG_CLIENT_VIRTUALCURSOR_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C812420)
#define RPG_CLIENT_VIRTUALCURSOR_SHOW_OFFSET UNITYSDK_OFFSET(0x1C813240)
#define RPG_CLIENT_VIRTUALCURSOR_SNAPTO_OFFSET UNITYSDK_OFFSET(0x1C813630)
#define RPG_CLIENT_VIRTUALCURSOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C814230)
#define RPG_CLIENT_VIRTUALCURSOR__CAMERA_OFFSET UNITYSDK_OFFSET(0x1C814F40)
#define RPG_CLIENT_VIRTUALCURSOR__CLAMPPOS_OFFSET UNITYSDK_OFFSET(0x1C812480)
#define RPG_CLIENT_VIRTUALCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8153A0)
#define RPG_CLIENT_VIRTUALCURSOR__DESELECTIFSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1C814830)
#define RPG_CLIENT_VIRTUALCURSOR__FINDFIRSTRAYCAST_OFFSET UNITYSDK_OFFSET(0x1C814A20)
#define RPG_CLIENT_VIRTUALCURSOR__GETANIMNAME_OFFSET UNITYSDK_OFFSET(0x1C8130A0)
#define RPG_CLIENT_VIRTUALCURSOR__GETVIRTUALCURSOREVENTDATA_OFFSET UNITYSDK_OFFSET(0x1C8146E0)
#define RPG_CLIENT_VIRTUALCURSOR__INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C812BA0)
#define RPG_CLIENT_VIRTUALCURSOR__ISCONTAINSTARGETRAYCAST_OFFSET UNITYSDK_OFFSET(0x1C813AE0)
#define RPG_CLIENT_VIRTUALCURSOR__ISRAYCASTVALID_OFFSET UNITYSDK_OFFSET(0x1C814CD0)
#define RPG_CLIENT_VIRTUALCURSOR__ISUNDERVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x1C813940)
#define RPG_CLIENT_VIRTUALCURSOR__MAXSPEEDOFSTATUS_OFFSET UNITYSDK_OFFSET(0x1C815020)
#define RPG_CLIENT_VIRTUALCURSOR__MOVECURSORPOS_OFFSET UNITYSDK_OFFSET(0x1C813570)
#define RPG_CLIENT_VIRTUALCURSOR__PLAYANIM_OFFSET UNITYSDK_OFFSET(0x1C813160)
#define RPG_CLIENT_VIRTUALCURSOR__SETDAMPING_OFFSET UNITYSDK_OFFSET(0x1C813E90)
#define RPG_CLIENT_VIRTUALCURSOR__SETIDLE_OFFSET UNITYSDK_OFFSET(0x1C812C90)
#define RPG_CLIENT_VIRTUALCURSOR__SETMOVE_OFFSET UNITYSDK_OFFSET(0x1C813E30)
#define RPG_CLIENT_VIRTUALCURSOR__SETSNAP_OFFSET UNITYSDK_OFFSET(0x1C8136D0)
#define RPG_CLIENT_VIRTUALCURSOR__SETUPICONPOS_OFFSET UNITYSDK_OFFSET(0x1C8125F0)
#define RPG_CLIENT_VIRTUALCURSOR__SETUPICONVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C8131D0)
#define RPG_CLIENT_VIRTUALCURSOR__SIMULATETOUCH_OFFSET UNITYSDK_OFFSET(0x1C8142C0)
#define RPG_CLIENT_VIRTUALCURSOR__SPEEDFACTOROFSTATUS_OFFSET UNITYSDK_OFFSET(0x1C814FB0)
#define RPG_CLIENT_VIRTUALCURSOR__STOP_OFFSET UNITYSDK_OFFSET(0x1C813D80)
#define RPG_CLIENT_VIRTUALCURSOR__TRYADDINPUTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1C8132C0)
#define RPG_CLIENT_VIRTUALCURSOR__TRYGETAXISVALUE_OFFSET UNITYSDK_OFFSET(0x1C813EF0)
#define RPG_CLIENT_VIRTUALCURSOR__TRYREMOVEINPUTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1C812D40)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_TypeDefinitionIndex = 73135;

	class VirtualCursor : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::IVirtualCursor** StaticGet__Current_k__BackingField()
		{
			return (::RPG::Client::IVirtualCursor**)Il2CppClass::FromTypeDefinitionIndex(VirtualCursor_TypeDefinitionIndex)->GetStaticField(0x22FA0);
		}
		// static const ::System::String* _NORMAL_2_HIGHLIGHT_ANIM; // 0x0
		// static const ::System::String* _NORMAL_2_SELECTED_ANIM; // 0x0
		// static const ::System::String* _HIGHTLIGHT_2_NORMAL_ANIM; // 0x0
		// static const ::System::String* _HIGHTLIGHT_2_SELECTED_ANIM; // 0x0
		// static const ::System::String* _SELECTED_2_HIGHLIGHT_ANIM; // 0x0
		// static const ::System::String* _SELECTED_2_NORMAL_ANIM; // 0x0
		::System::Single SpeedFactor; // 0x18
		::System::Single MaxSpped; // 0x1C
		::System::Single HighlightSpeedFactor; // 0x20
		::System::Single HighlightMaxSpeed; // 0x24
		::System::Single SelectedSpeedFactor; // 0x28
		::System::Single SelectedMaxSpeed; // 0x2C
		::System::Single SnapTime; // 0x30
		::System::Boolean Damping; // 0x34
		::System::Single DampingRatio; // 0x38
		::System::Boolean HideWhenSelected; // 0x3C
		::System::Boolean IsManualControl; // 0x3D
		::System::Boolean SimulateTouch; // 0x3E
		::System::String* SimulateTouchActionName; // 0x40
		::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>* _OnMove_k__BackingField; // 0x48
		::UnityEngine::Events::UnityEvent* _OnStop_k__BackingField; // 0x50
		::InControl::PlayerAction* _UpAction; // 0x58
		::InControl::PlayerAction* _DownAction; // 0x60
		::InControl::PlayerAction* _LeftAction; // 0x68
		::InControl::PlayerAction* _RightAction; // 0x70
		::UnityEngine::Animation* _Animation; // 0x78
		::UnityEngine::RectTransform* _ContainerRect; // 0x80
		::UnityEngine::Transform* _IconTransform; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _AnimationMap; // 0x90
		::Class_0_16E4307DCC419505_1172* _SimulateTouchAction; // 0x98
		::System::Boolean _Visible; // 0xA0
		::UnityEngine::Vector2 _CursorPos; // 0xA4
		::RPG::Client::VirtualCursorStatus _Status; // 0xAC
		::RPG::Client::UIController* _OwnerController; // 0xB0
		::RPG::Common::StateMachine_1<::RPG::Client::VirtualCursor*>* _StateMachine; // 0xB8
		::RPG::Common::IState_1<::RPG::Client::VirtualCursor*>* _IdleState; // 0xC0
		::RPG::Common::IState_1<::RPG::Client::VirtualCursor*>* _MoveState; // 0xC8
		::RPG::Common::IState_1<::RPG::Client::VirtualCursor*>* _DampingState; // 0xD0
		::RPG::Common::IState_1<::RPG::Client::VirtualCursor*>* _SnapState; // 0xD8
		::UnityEngine::Vector2 _MoveSpeed; // 0xE0
		::UnityEngine::Vector2 _SnapPosition; // 0xE8
		::Class_0_16E4307DCC419505_1170* _BoundClamper; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* _RaycastResults; // 0xF8
		::Class_1_BA3EE563E6A792E6* _VirtualCursorEventData; // 0x100
		::UnityEngine::EventSystems::PointerEventData* _PointerEventData; // 0x108
		::Class_0_16E4307DCC419505_1171* _RaycastFilter; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::IVirtualCursor* get_Current()
		{
			return ((::RPG::Client::IVirtualCursor*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_Current(::RPG::Client::IVirtualCursor* a1)
		{
			return ((::System::Void(*)(::RPG::Client::IVirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SET_CURRENT_OFFSET))(a1);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>* get_OnMove()
		{
			return ((::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_ONMOVE_OFFSET))(this);
		}

		::UnityEngine::Events::UnityEvent* get_OnStop()
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_ONSTOP_OFFSET))(this);
		}

		::System::Void AddMoveListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ADDMOVELISTENER_OFFSET))(this, a1);
		}

		::System::Void RemoveMoveListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_REMOVEMOVELISTENER_OFFSET))(this, a1);
		}

		::System::Void AddStopListener(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ADDSTOPLISTENER_OFFSET))(this, a1);
		}

		::System::Void RemoveStopListener(::UnityEngine::Events::UnityAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_REMOVESTOPLISTENER_OFFSET))(this, a1);
		}

		::System::Void Init(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_INIT_OFFSET))(this, a1);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ONDESTROY_OFFSET))(this);
		}

		::System::Void Active()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ACTIVE_OFFSET))(this);
		}

		::System::Void Deactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_DEACTIVE_OFFSET))(this);
		}

		::System::Void SetBoundsClamper(::Class_0_16E4307DCC419505_1170* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1170*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SETBOUNDSCLAMPER_OFFSET))(this, a1);
		}

		::System::Void SetStatus(::RPG::Client::VirtualCursorStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursorStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SETSTATUS_OFFSET))(this, a1);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_HIDE_OFFSET))(this);
		}

		::System::Void Move(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_MOVE_OFFSET))(this, a1);
		}

		::System::Void SnapTo(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SNAPTO_OFFSET))(this, a1);
		}

		::System::Boolean IsHoverUI(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ISHOVERUI_OFFSET))(this, a1);
		}

		::System::Boolean IsHoverOver(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ISHOVEROVER_OFFSET))(this, a1);
		}

		::System::Void SetRaycastFilter(::Class_0_16E4307DCC419505_1171* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1171*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SETRAYCASTFILTER_OFFSET))(this, a1);
		}

		::System::Void OverrideSimulateTouchAction(::Class_0_16E4307DCC419505_1172* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1172*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_OVERRIDESIMULATETOUCHACTION_OFFSET))(this, a1);
		}

		::System::Void _Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__STOP_OFFSET))(this);
		}

		::System::Void _SetIdle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__SETIDLE_OFFSET))(this);
		}

		::System::Void _SetMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__SETMOVE_OFFSET))(this);
		}

		::System::Void _SetDamping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__SETDAMPING_OFFSET))(this);
		}

		::System::Void _SetSnap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__SETSNAP_OFFSET))(this);
		}

		::System::Boolean _TryGetAxisValue(::UnityEngine::Vector2& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__TRYGETAXISVALUE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_UPDATE_OFFSET))(this);
		}

		::System::Void _SimulateTouch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__SIMULATETOUCH_OFFSET))(this);
		}

		::Class_1_BA3EE563E6A792E6* _GetVirtualCursorEventData()
		{
			return ((::Class_1_BA3EE563E6A792E6*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__GETVIRTUALCURSOREVENTDATA_OFFSET))(this);
		}

		::System::Void _DeselectIfSelectionChanged(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::BaseEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__DESELECTIFSELECTIONCHANGED_OFFSET))(this, a1, a2);
		}

		::UnityEngine::EventSystems::RaycastResult _FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* a1)
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__FINDFIRSTRAYCAST_OFFSET))(this, a1);
		}

		::System::Boolean _IsContainsTargetRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* a1, ::UnityEngine::GameObject* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__ISCONTAINSTARGETRAYCAST_OFFSET))(this, a1, a2);
		}

		::System::Boolean _IsUnderVirtualCursor(::UnityEngine::Transform* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__ISUNDERVIRTUALCURSOR_OFFSET))(this, a1);
		}

		::System::Boolean _IsRaycastValid(::UnityEngine::EventSystems::RaycastResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__ISRAYCASTVALID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 _ClampPos(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__CLAMPPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* _Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__CAMERA_OFFSET))(this);
		}

		::System::Void _MoveCursorPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__MOVECURSORPOS_OFFSET))(this, a1);
		}

		::System::Void _SetupIconPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__SETUPICONPOS_OFFSET))(this);
		}

		::System::Void _InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__INITCOMPONENT_OFFSET))(this);
		}

		::System::String* _GetAnimName(::RPG::Client::VirtualCursorStatus a1, ::RPG::Client::VirtualCursorStatus a2)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::VirtualCursorStatus, ::RPG::Client::VirtualCursorStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__GETANIMNAME_OFFSET))(this, a1, a2);
		}

		::System::Void _PlayAnim(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__PLAYANIM_OFFSET))(this, a1);
		}

		::System::Void _SetupIconVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__SETUPICONVISIBLE_OFFSET))(this);
		}

		::System::Single _SpeedFactorOfStatus()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__SPEEDFACTOROFSTATUS_OFFSET))(this);
		}

		::System::Single _MaxSpeedOfStatus()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__MAXSPEEDOFSTATUS_OFFSET))(this);
		}

		::System::Void _TryAddInputProcessor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__TRYADDINPUTPROCESSOR_OFFSET))(this);
		}

		::System::Void _TryRemoveInputProcessor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__TRYREMOVEINPUTPROCESSOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 RPG_Client_IUIDragInput_GetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IUIDRAGINPUT_GETPOSITION_OFFSET))(this);
		}

		::System::Void InControl_InControlInputModule_IInputProcessor_Process(::System::Boolean& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_INCONTROL_INCONTROLINPUTMODULE_IINPUTPROCESSOR_PROCESS_OFFSET))(this, a1);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerPress(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET))(this, a1, a2);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerUp(::UnityEngine::GameObject* a1, ::UnityEngine::EventSystems::PointerEventData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::VirtualCursorStatus get_Status()
		{
			return ((::RPG::Client::VirtualCursorStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_STATUS_OFFSET))(this);
		}

		::System::Boolean get_IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_ISVISIBLE_OFFSET))(this);
		}
	};
}
