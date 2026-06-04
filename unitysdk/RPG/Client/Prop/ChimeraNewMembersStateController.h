#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationStateControllerBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client::Prop { class ChimeraBillboardCanvasAdaptingScaler; }
namespace RPG::Client::Prop { class ChimeraNewMembersModelInstance; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_CLAIMANDSTARTSWITCHING_OFFSET UNITYSDK_OFFSET(0xC529DF0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC528230)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_ONENTER_OFFSET UNITYSDK_OFFSET(0xC5286B0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_ONEXIT_OFFSET UNITYSDK_OFFSET(0xC528DB0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_REACTDITHERSPAWNALL_OFFSET UNITYSDK_OFFSET(0xC529FC0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_REACTMOVETOARRIVALANCHORS_OFFSET UNITYSDK_OFFSET(0xC52A100)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_REACTSETINTERACTIONENABLED_OFFSET UNITYSDK_OFFSET(0xC52A3D0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_REACTSHOWPANELS_OFFSET UNITYSDK_OFFSET(0xC52A420)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_SETLAYERASDEFAULTRECURSIVELY_OFFSET UNITYSDK_OFFSET(0xC52A560)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC528D50)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC52A600)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xC529340)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__INIT_OFFSET UNITYSDK_OFFSET(0xC528280)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__LEAVEROUTINE_OFFSET UNITYSDK_OFFSET(0xC529F30)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__MOVEROUTINE_OFFSET UNITYSDK_OFFSET(0xC52A320)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__ONTIMELINEENTEREND_OFFSET UNITYSDK_OFFSET(0xC529AE0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__ONTIMELINEEXITEND_OFFSET UNITYSDK_OFFSET(0xC529CD0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__ONTOUCHSTART_OFFSET UNITYSDK_OFFSET(0xC5296C0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__REGISTERTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0xC5293E0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__SETINTERACTIONENABLED_OFFSET UNITYSDK_OFFSET(0xC5291F0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__UNREGISTERTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0xC529550)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET UNITYSDK_OFFSET(0xC52A800)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET UNITYSDK_OFFSET(0xC52A810)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___IFIXBASEPROXY__HANDLEUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0xC52A820)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___IFIXBASEPROXY__INIT_OFFSET UNITYSDK_OFFSET(0xC52A7A0)
#define RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___LEAVEROUTINE_B__31_0_OFFSET UNITYSDK_OFFSET(0xC52A6C0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraNewMembersStateController_TypeDefinitionIndex = 73017;

	class ChimeraNewMembersStateController : public ::RPG::Client::Prop::ChimeraPreparationStateControllerBase
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraNewMembersModelInstance*>* ChimeraInstances; // 0x38
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _SpawnAnchors; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _ArriveAnchors; // 0x48
		::UnityEngine::Playables::PlayableDirector* _TimelineEnter; // 0x50
		::UnityEngine::Playables::PlayableDirector* _TimelineExit; // 0x58
		::System::Single _InteractBlockDuration; // 0x60
		::System::Single _InteractRaycastLength; // 0x64
		::UnityEngine::Canvas* BillboardCanvas; // 0x68
		::RPG::Client::Prop::ChimeraBillboardCanvasAdaptingScaler* _BillboardCanvasScaler; // 0x70
		::System::Collections::Generic::List_1<::System::UInt32>* ChimeraIDs; // 0x78
		::System::Action* OnTickUI; // 0x80
		::UnityEngine::Coroutine* _MoveCoroutine; // 0x88
		::UnityEngine::Coroutine* _LeaveCoroutine; // 0x90
		::RPG::Client::LuaUIController* _LuaUIController; // 0x98
		::System::Nullable_1<::System::UInt32> _EnterBlockID; // 0xA0
		::System::Nullable_1<::System::UInt32> _ExitBlockID; // 0xA8
		::System::Boolean _IsInteractionEnabled; // 0xB0
		::Il2CppArray<::UnityEngine::RaycastHit>* _RaycastHits; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__CTOR_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraPreparationState get_State()
		{
			return ((::RPG::Client::Prop::ChimeraPreparationState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_GET_STATE_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__INIT_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_ONENTER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_ONEXIT_OFFSET))(this);
		}

		::System::Void _HandleUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__HANDLEUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void _RegisterTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__REGISTERTOUCHEVENTS_OFFSET))(this);
		}

		::System::Void _UnregisterTouchEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__UNREGISTERTOUCHEVENTS_OFFSET))(this);
		}

		::System::Void _OnTouchStart(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__ONTOUCHSTART_OFFSET))(this, a1);
		}

		::System::Void _OnTimelineEnterEnd(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__ONTIMELINEENTEREND_OFFSET))(this, a1);
		}

		::System::Void _OnTimelineExitEnd(::UnityEngine::Playables::PlayableDirector* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__ONTIMELINEEXITEND_OFFSET))(this, a1);
		}

		::System::Void ClaimAndStartSwitching()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_CLAIMANDSTARTSWITCHING_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _LeaveRoutine()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__LEAVEROUTINE_OFFSET))(this);
		}

		::System::Void ReactDitherSpawnAll(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_REACTDITHERSPAWNALL_OFFSET))(this, a1);
		}

		::System::Void ReactMoveToArrivalAnchors(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_REACTMOVETOARRIVALANCHORS_OFFSET))(this, a1);
		}

		::System::Void ReactSetInteractionEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_REACTSETINTERACTIONENABLED_OFFSET))(this, a1);
		}

		::System::Void _SetInteractionEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__SETINTERACTIONENABLED_OFFSET))(this, a1);
		}

		::System::Void ReactShowPanels()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_REACTSHOWPANELS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* _MoveRoutine(::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a2, ::System::Single a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER__MOVEROUTINE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetLayerAsDefaultRecursively(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER_SETLAYERASDEFAULTRECURSIVELY_OFFSET))(this, a1);
		}

		::System::Boolean __LeaveRoutine_b__31_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___LEAVEROUTINE_B__31_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___IFIXBASEPROXY__INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___IFIXBASEPROXY_ONENTER_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___IFIXBASEPROXY_ONEXIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__HandleUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERANEWMEMBERSSTATECONTROLLER___IFIXBASEPROXY__HANDLEUISCREENSIZECHANGED_OFFSET))(this);
		}
	};
}
