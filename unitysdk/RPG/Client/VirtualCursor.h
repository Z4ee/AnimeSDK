#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/VirtualCursorStatus.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_902;
class Class_0_16E4307DCC419505_903;
class Class_0_16E4307DCC419505_904;
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

#define RPG_CLIENT_VIRTUALCURSOR_ACTIVE_OFFSET UNITYSDK_OFFSET(0xA778D00)
#define RPG_CLIENT_VIRTUALCURSOR_ADDMOVELISTENER_OFFSET UNITYSDK_OFFSET(0xA778650)
#define RPG_CLIENT_VIRTUALCURSOR_ADDSTOPLISTENER_OFFSET UNITYSDK_OFFSET(0xA778740)
#define RPG_CLIENT_VIRTUALCURSOR_DEACTIVE_OFFSET UNITYSDK_OFFSET(0xA778D50)
#define RPG_CLIENT_VIRTUALCURSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA7782D0)
#define RPG_CLIENT_VIRTUALCURSOR_GET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xA77B510)
#define RPG_CLIENT_VIRTUALCURSOR_GET_ONMOVE_OFFSET UNITYSDK_OFFSET(0xA778630)
#define RPG_CLIENT_VIRTUALCURSOR_GET_ONSTOP_OFFSET UNITYSDK_OFFSET(0xA778640)
#define RPG_CLIENT_VIRTUALCURSOR_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA7782F0)
#define RPG_CLIENT_VIRTUALCURSOR_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xA77B500)
#define RPG_CLIENT_VIRTUALCURSOR_HIDE_OFFSET UNITYSDK_OFFSET(0xA779380)
#define RPG_CLIENT_VIRTUALCURSOR_INCONTROL_INCONTROLINPUTMODULE_IINPUTPROCESSOR_PROCESS_OFFSET UNITYSDK_OFFSET(0xA77B230)
#define RPG_CLIENT_VIRTUALCURSOR_INIT_OFFSET UNITYSDK_OFFSET(0xA778830)
#define RPG_CLIENT_VIRTUALCURSOR_ISHOVEROVER_OFFSET UNITYSDK_OFFSET(0xA7799E0)
#define RPG_CLIENT_VIRTUALCURSOR_ISHOVERUI_OFFSET UNITYSDK_OFFSET(0xA779750)
#define RPG_CLIENT_VIRTUALCURSOR_MOVE_OFFSET UNITYSDK_OFFSET(0xA779490)
#define RPG_CLIENT_VIRTUALCURSOR_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xA778BE0)
#define RPG_CLIENT_VIRTUALCURSOR_OVERRIDESIMULATETOUCHACTION_OFFSET UNITYSDK_OFFSET(0xA779E60)
#define RPG_CLIENT_VIRTUALCURSOR_REMOVEMOVELISTENER_OFFSET UNITYSDK_OFFSET(0xA7786B0)
#define RPG_CLIENT_VIRTUALCURSOR_REMOVESTOPLISTENER_OFFSET UNITYSDK_OFFSET(0xA7787A0)
#define RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IUIDRAGINPUT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA77B1E0)
#define RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET UNITYSDK_OFFSET(0xA77B290)
#define RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xA77B3F0)
#define RPG_CLIENT_VIRTUALCURSOR_SETBOUNDSCLAMPER_OFFSET UNITYSDK_OFFSET(0xA778E00)
#define RPG_CLIENT_VIRTUALCURSOR_SETRAYCASTFILTER_OFFSET UNITYSDK_OFFSET(0xA779E10)
#define RPG_CLIENT_VIRTUALCURSOR_SETSTATUS_OFFSET UNITYSDK_OFFSET(0xA778E70)
#define RPG_CLIENT_VIRTUALCURSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA7782E0)
#define RPG_CLIENT_VIRTUALCURSOR_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA778300)
#define RPG_CLIENT_VIRTUALCURSOR_SHOW_OFFSET UNITYSDK_OFFSET(0xA779230)
#define RPG_CLIENT_VIRTUALCURSOR_SNAPTO_OFFSET UNITYSDK_OFFSET(0xA779660)
#define RPG_CLIENT_VIRTUALCURSOR_UPDATE_OFFSET UNITYSDK_OFFSET(0xA77A3F0)
#define RPG_CLIENT_VIRTUALCURSOR__CAMERA_OFFSET UNITYSDK_OFFSET(0xA77B090)
#define RPG_CLIENT_VIRTUALCURSOR__CLAMPPOS_OFFSET UNITYSDK_OFFSET(0xA778360)
#define RPG_CLIENT_VIRTUALCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA77B520)
#define RPG_CLIENT_VIRTUALCURSOR__DESELECTIFSELECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA77A9E0)
#define RPG_CLIENT_VIRTUALCURSOR__FINDFIRSTRAYCAST_OFFSET UNITYSDK_OFFSET(0xA77ABD0)
#define RPG_CLIENT_VIRTUALCURSOR__GETANIMNAME_OFFSET UNITYSDK_OFFSET(0xA779080)
#define RPG_CLIENT_VIRTUALCURSOR__GETVIRTUALCURSOREVENTDATA_OFFSET UNITYSDK_OFFSET(0xA77A890)
#define RPG_CLIENT_VIRTUALCURSOR__INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xA778A60)
#define RPG_CLIENT_VIRTUALCURSOR__ISCONTAINSTARGETRAYCAST_OFFSET UNITYSDK_OFFSET(0xA779B00)
#define RPG_CLIENT_VIRTUALCURSOR__ISRAYCASTVALID_OFFSET UNITYSDK_OFFSET(0xA77AE20)
#define RPG_CLIENT_VIRTUALCURSOR__ISUNDERVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0xA779960)
#define RPG_CLIENT_VIRTUALCURSOR__MAXSPEEDOFSTATUS_OFFSET UNITYSDK_OFFSET(0xA77B170)
#define RPG_CLIENT_VIRTUALCURSOR__MOVECURSORPOS_OFFSET UNITYSDK_OFFSET(0xA7795A0)
#define RPG_CLIENT_VIRTUALCURSOR__PLAYANIM_OFFSET UNITYSDK_OFFSET(0xA779150)
#define RPG_CLIENT_VIRTUALCURSOR__SETDAMPING_OFFSET UNITYSDK_OFFSET(0xA779FA0)
#define RPG_CLIENT_VIRTUALCURSOR__SETIDLE_OFFSET UNITYSDK_OFFSET(0xA778B50)
#define RPG_CLIENT_VIRTUALCURSOR__SETMOVE_OFFSET UNITYSDK_OFFSET(0xA779F10)
#define RPG_CLIENT_VIRTUALCURSOR__SETSNAP_OFFSET UNITYSDK_OFFSET(0xA7796C0)
#define RPG_CLIENT_VIRTUALCURSOR__SETUPICONPOS_OFFSET UNITYSDK_OFFSET(0xA778470)
#define RPG_CLIENT_VIRTUALCURSOR__SETUPICONVISIBLE_OFFSET UNITYSDK_OFFSET(0xA7791C0)
#define RPG_CLIENT_VIRTUALCURSOR__SIMULATETOUCH_OFFSET UNITYSDK_OFFSET(0xA77A480)
#define RPG_CLIENT_VIRTUALCURSOR__SPEEDFACTOROFSTATUS_OFFSET UNITYSDK_OFFSET(0xA77B100)
#define RPG_CLIENT_VIRTUALCURSOR__STOP_OFFSET UNITYSDK_OFFSET(0xA779EB0)
#define RPG_CLIENT_VIRTUALCURSOR__TRYADDINPUTPROCESSOR_OFFSET UNITYSDK_OFFSET(0xA7792B0)
#define RPG_CLIENT_VIRTUALCURSOR__TRYGETAXISVALUE_OFFSET UNITYSDK_OFFSET(0xA77A030)
#define RPG_CLIENT_VIRTUALCURSOR__TRYREMOVEINPUTPROCESSOR_OFFSET UNITYSDK_OFFSET(0xA778C30)

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursor_TypeDefinitionIndex = 60034;

	class VirtualCursor : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::RPG::Client::IVirtualCursor** StaticGet__Current_k__BackingField()
		{
			return (::RPG::Client::IVirtualCursor**)Il2CppClass::FromTypeDefinitionIndex(VirtualCursor_TypeDefinitionIndex)->GetStaticField(0x59E0);
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
		::Class_0_16E4307DCC419505_904* _SimulateTouchAction; // 0x98
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
		::Class_0_16E4307DCC419505_902* _BoundClamper; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* _RaycastResults; // 0xF8
		::Class_1_BA3EE563E6A792E6* _VirtualCursorEventData; // 0x100
		::UnityEngine::EventSystems::PointerEventData* _PointerEventData; // 0x108
		::Class_0_16E4307DCC419505_903* _RaycastFilter; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::IVirtualCursor* get_Current()
		{
			return ((::RPG::Client::IVirtualCursor*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_Current(::RPG::Client::IVirtualCursor* value)
		{
			return ((::System::Void(*)(::RPG::Client::IVirtualCursor*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SET_CURRENT_OFFSET))(value);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>* get_OnMove()
		{
			return ((::UnityEngine::Events::UnityEvent_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_ONMOVE_OFFSET))(this);
		}

		::UnityEngine::Events::UnityEvent* get_OnStop()
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_GET_ONSTOP_OFFSET))(this);
		}

		::System::Void AddMoveListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* listener)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ADDMOVELISTENER_OFFSET))(this, listener);
		}

		::System::Void RemoveMoveListener(::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>* listener)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_REMOVEMOVELISTENER_OFFSET))(this, listener);
		}

		::System::Void AddStopListener(::UnityEngine::Events::UnityAction* listener)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ADDSTOPLISTENER_OFFSET))(this, listener);
		}

		::System::Void RemoveStopListener(::UnityEngine::Events::UnityAction* listener)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_REMOVESTOPLISTENER_OFFSET))(this, listener);
		}

		::System::Void Init(::RPG::Client::UIController* ownerController)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_INIT_OFFSET))(this, ownerController);
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

		::System::Void SetBoundsClamper(::Class_0_16E4307DCC419505_902* clamper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_902*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SETBOUNDSCLAMPER_OFFSET))(this, clamper);
		}

		::System::Void SetStatus(::RPG::Client::VirtualCursorStatus status)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursorStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SETSTATUS_OFFSET))(this, status);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SHOW_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_HIDE_OFFSET))(this);
		}

		::System::Void Move(::UnityEngine::Vector2 speed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_MOVE_OFFSET))(this, speed);
		}

		::System::Void SnapTo(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SNAPTO_OFFSET))(this, position);
		}

		::System::Boolean IsHoverUI(::UnityEngine::Transform* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ISHOVERUI_OFFSET))(this, target);
		}

		::System::Boolean IsHoverOver(::UnityEngine::Transform* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_ISHOVEROVER_OFFSET))(this, target);
		}

		::System::Void SetRaycastFilter(::Class_0_16E4307DCC419505_903* filter)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_903*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_SETRAYCASTFILTER_OFFSET))(this, filter);
		}

		::System::Void OverrideSimulateTouchAction(::Class_0_16E4307DCC419505_904* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_904*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_OVERRIDESIMULATETOUCHACTION_OFFSET))(this, action);
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

		::System::Boolean _TryGetAxisValue(::UnityEngine::Vector2& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__TRYGETAXISVALUE_OFFSET))(this, value);
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

		::System::Void _DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__DESELECTIFSELECTIONCHANGED_OFFSET))(this, currentOverGo, pointerEvent);
		}

		::UnityEngine::EventSystems::RaycastResult _FindFirstRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* raycastResults)
		{
			return ((::UnityEngine::EventSystems::RaycastResult(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__FINDFIRSTRAYCAST_OFFSET))(this, raycastResults);
		}

		::System::Boolean _IsContainsTargetRaycast(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* raycastResults, ::UnityEngine::GameObject* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__ISCONTAINSTARGETRAYCAST_OFFSET))(this, raycastResults, target);
		}

		::System::Boolean _IsUnderVirtualCursor(::UnityEngine::Transform* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__ISUNDERVIRTUALCURSOR_OFFSET))(this, target);
		}

		::System::Boolean _IsRaycastValid(::UnityEngine::EventSystems::RaycastResult raycastResult)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::EventSystems::RaycastResult))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__ISRAYCASTVALID_OFFSET))(this, raycastResult);
		}

		::UnityEngine::Vector2 _ClampPos(::UnityEngine::Vector2 pos)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__CLAMPPOS_OFFSET))(this, pos);
		}

		::UnityEngine::Camera* _Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__CAMERA_OFFSET))(this);
		}

		::System::Void _MoveCursorPos(::UnityEngine::Vector2 speed)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__MOVECURSORPOS_OFFSET))(this, speed);
		}

		::System::Void _SetupIconPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__SETUPICONPOS_OFFSET))(this);
		}

		::System::Void _InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__INITCOMPONENT_OFFSET))(this);
		}

		::System::String* _GetAnimName(::RPG::Client::VirtualCursorStatus previous, ::RPG::Client::VirtualCursorStatus next)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::VirtualCursorStatus, ::RPG::Client::VirtualCursorStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__GETANIMNAME_OFFSET))(this, previous, next);
		}

		::System::Void _PlayAnim(::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR__PLAYANIM_OFFSET))(this, animName);
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

		::System::Void InControl_InControlInputModule_IInputProcessor_Process(::System::Boolean& usedEvent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_INCONTROL_INCONTROLINPUTMODULE_IINPUTPROCESSOR_PROCESS_OFFSET))(this, usedEvent);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerPress(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERPRESS_OFFSET))(this, gameObject, pointerEvent);
		}

		::System::Void RPG_Client_IVirtualCursorSimulateTouchAction_OnPointerUp(::UnityEngine::GameObject* gameObject, ::UnityEngine::EventSystems::PointerEventData* pointerEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIRTUALCURSOR_RPG_CLIENT_IVIRTUALCURSORSIMULATETOUCHACTION_ONPOINTERUP_OFFSET))(this, gameObject, pointerEvent);
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
