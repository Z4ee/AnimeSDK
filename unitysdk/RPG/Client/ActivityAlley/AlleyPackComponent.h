#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackComponent_AlleyPackDragColorState.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackDragStateEnum.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1091;
class Class_1_23F67DD15593C8D6;
namespace RPG::Client::ActivityAlley { class AlleyPackAnchor; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent_AlleyPackDragState; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent_AlleyPackIdleState; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent_AlleyPackRenderData; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent_AlleyPackSelectState; }
namespace RPG::Client::ActivityAlley { class AlleyPackComponent_AlleyPackSettleState; }
namespace RPG::Client::ActivityAlley { class AlleyPackController; }
namespace RPG::Client::ActivityAlley { class AlleyPackGoodData; }
namespace RPG::Client::ActivityAlley { class AlleyPackMatReference; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_AUTOSETTLE_OFFSET UNITYSDK_OFFSET(0xB08B7C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0xB08C120)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CANCELSETTLE_OFFSET UNITYSDK_OFFSET(0xB08B8D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CHECKBOUNDINTERSECT_OFFSET UNITYSDK_OFFSET(0xB08B9D0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CLEARANCHORSETTLEEFFECT_OFFSET UNITYSDK_OFFSET(0xB08B400)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB08A660)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DOROTATE_OFFSET UNITYSDK_OFFSET(0xB08C710)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DOSELECT_OFFSET UNITYSDK_OFFSET(0xB08C5B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0xB08B930)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ENDDRAG_OFFSET UNITYSDK_OFFSET(0xB08C3E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0xB08CD30)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_DRAGMERGEDBOUND_OFFSET UNITYSDK_OFFSET(0xB08CDF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_DRAGSTATE_OFFSET UNITYSDK_OFFSET(0xB08CD20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_FIRSTHEADANCHOR_OFFSET UNITYSDK_OFFSET(0xB08BBE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0xB089A60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONREMOVE_OFFSET UNITYSDK_OFFSET(0xB08B3B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONSELECT_OFFSET UNITYSDK_OFFSET(0xB08A930)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONSETTLE_OFFSET UNITYSDK_OFFSET(0xB08AC30)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0xB08AAA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_REFRESHCANANCHORSTATUS_OFFSET UNITYSDK_OFFSET(0xB08BDF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SETTLE_OFFSET UNITYSDK_OFFSET(0xB08B690)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SET_DRAGMERGEDBOUND_OFFSET UNITYSDK_OFFSET(0xB08CE10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SHOWANCHORSETTLEEFFECT_OFFSET UNITYSDK_OFFSET(0xB08AF90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xB08BC50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_TRIGGERREMOVEAUDIO_OFFSET UNITYSDK_OFFSET(0xB08B4F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__BEGINROTATE_OFFSET UNITYSDK_OFFSET(0xB08CA60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0xB08D360)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CHANGESTATE_OFFSET UNITYSDK_OFFSET(0xB08D0F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__COLLECTANCHORS_OFFSET UNITYSDK_OFFSET(0xB089B60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__COLLECTRENDERDATA_OFFSET UNITYSDK_OFFSET(0xB089E90)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB089950)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__DISPOSERENDERDATA_OFFSET UNITYSDK_OFFSET(0xB08A6B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__GETDELTATIME_OFFSET UNITYSDK_OFFSET(0xB08D310)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__GETTIMERRESET_OFFSET UNITYSDK_OFFSET(0xB08D180)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__ONROTATEFINISH_OFFSET UNITYSDK_OFFSET(0xB08C940)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__RESETDRAGCOLOR_OFFSET UNITYSDK_OFFSET(0xB08CE20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__SETDRAGCOLOR_OFFSET UNITYSDK_OFFSET(0xB08CF80)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__SWITCHDRAGSTATE_OFFSET UNITYSDK_OFFSET(0xB08AD50)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TICKTSTATE_OFFSET UNITYSDK_OFFSET(0xB08CCA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TRIGGERREMOVEAUDIO_OFFSET UNITYSDK_OFFSET(0xB08B540)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TRIGGERROTATEAUDIO_OFFSET UNITYSDK_OFFSET(0xB08CB20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TRIGGERSETTLEAUDIO_OFFSET UNITYSDK_OFFSET(0xB08B230)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__UPDATEDRAGSTATE_OFFSET UNITYSDK_OFFSET(0xB08BD50)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_TypeDefinitionIndex = 69167;

	class AlleyPackComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__AnchorListDefaultInitCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackComponent_TypeDefinitionIndex)->GetStaticField(0xE850);
		}
		::RPG::Client::ActivityAlley::AlleyPackController* PackControllerRef; // 0x18
		::UnityEngine::Transform* DragAnchorTransform; // 0x20
		::UnityEngine::Transform* RotateAnchorTransform; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackAnchor*>* HeadAnchorList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackAnchor*>* TailAnchorList; // 0x38
		::RPG::Client::ActivityAlley::AlleyPackGoodData* AlleyPackGoodData; // 0x40
		::System::Boolean IsDragging; // 0x48
		::System::Boolean IsRotate; // 0x49
		::Il2CppArray<::UnityEngine::Collider*>* _RootColliders; // 0x50
		::UnityEngine::Bounds _DragMergedBound_k__BackingField; // 0x58
		::System::Single OuterBoundOffsetX; // 0x70
		::System::Single OuterBoundOffsetZ; // 0x74
		::RPG::Client::ActivityAlley::AlleyPackDragStateEnum _DragState; // 0x78
		::System::Single _DeltaTime; // 0x7C
		::System::Action* _OnRotateFinishCallback; // 0x80
		::System::Boolean IsSelectHover; // 0x88
		::RPG::Client::ActivityAlley::AlleyPackComponent_AlleyPackDragColorState _DragColorState; // 0x8C
		::System::Collections::Generic::List_1<::RPG::Client::ActivityAlley::AlleyPackComponent_AlleyPackRenderData*>* _RenderDatas; // 0x90
		::RPG::Client::ActivityAlley::AlleyPackMatReference* _MatReference; // 0x98
		::RPG::Common::StateMachine_1<::RPG::Client::ActivityAlley::AlleyPackComponent*>* _StateMachine; // 0xA0
		::RPG::Client::ActivityAlley::AlleyPackComponent_AlleyPackIdleState* _PackIdleState; // 0xA8
		::RPG::Client::ActivityAlley::AlleyPackComponent_AlleyPackSelectState* _PackSelectState; // 0xB0
		::RPG::Client::ActivityAlley::AlleyPackComponent_AlleyPackDragState* _PackDragState; // 0xB8
		::RPG::Client::ActivityAlley::AlleyPackComponent_AlleyPackSettleState* _PackSettleState; // 0xC0
		::Class_1_23F67DD15593C8D6* _Timer; // 0xC8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _AnchorSettleEffects; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONSELECT_OFFSET))(this);
		}

		::System::Void OnUnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONUNSELECT_OFFSET))(this);
		}

		::System::Void OnSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONSETTLE_OFFSET))(this);
		}

		::System::Void OnRemove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONREMOVE_OFFSET))(this);
		}

		::System::Void TriggerRemoveAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_TRIGGERREMOVEAUDIO_OFFSET))(this);
		}

		::System::Void Settle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SETTLE_OFFSET))(this);
		}

		::System::Void AutoSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_AUTOSETTLE_OFFSET))(this);
		}

		::System::Void CancelSettle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CANCELSETTLE_OFFSET))(this);
		}

		::System::Void EnableColliderTrigger(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ENABLECOLLIDERTRIGGER_OFFSET))(this, a1);
		}

		::System::Tuple_2<::System::Boolean, ::System::Single>* CheckBoundIntersect(::UnityEngine::Bounds a1)
		{
			return ((::System::Tuple_2<::System::Boolean, ::System::Single>*(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CHECKBOUNDINTERSECT_OFFSET))(this, a1);
		}

		::System::Void _CollectAnchors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__COLLECTANCHORS_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchor* get_FirstHeadAnchor()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_FIRSTHEADANCHOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void BeginDrag(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_BEGINDRAG_OFFSET))(this, a1);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ENDDRAG_OFFSET))(this);
		}

		::System::Void DoSelect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DOSELECT_OFFSET))(this, a1);
		}

		::System::Void DoRotate(::System::Single a1, ::System::Boolean a2, ::System::Single a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DOROTATE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::IEnumerator* _BeginRotate(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__BEGINROTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRotateFinish(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__ONROTATEFINISH_OFFSET))(this, a1);
		}

		::System::Void _UpdateDragState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__UPDATEDRAGSTATE_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackDragStateEnum get_DragState()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackDragStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_DRAGSTATE_OFFSET))(this);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_BOUNDS_OFFSET))(this);
		}

		::UnityEngine::Bounds get_DragMergedBound()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_DRAGMERGEDBOUND_OFFSET))(this);
		}

		::System::Void set_DragMergedBound(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SET_DRAGMERGEDBOUND_OFFSET))(this, a1);
		}

		::System::Void RefreshCanAnchorStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_REFRESHCANANCHORSTATUS_OFFSET))(this);
		}

		::System::Void _CollectRenderData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__COLLECTRENDERDATA_OFFSET))(this);
		}

		::System::Void _DisposeRenderData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__DISPOSERENDERDATA_OFFSET))(this);
		}

		::System::Void _SetDragColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__SETDRAGCOLOR_OFFSET))(this, a1);
		}

		::System::Void _ResetDragColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__RESETDRAGCOLOR_OFFSET))(this);
		}

		::System::Void _SwitchDragState(::RPG::Client::ActivityAlley::AlleyPackDragStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackDragStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__SWITCHDRAGSTATE_OFFSET))(this, a1);
		}

		::Class_1_23F67DD15593C8D6* _GetTimerReset(::System::Single a1)
		{
			return ((::Class_1_23F67DD15593C8D6*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__GETTIMERRESET_OFFSET))(this, a1);
		}

		::System::Single _GetDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__GETDELTATIME_OFFSET))(this);
		}

		::System::Void _TickTState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TICKTSTATE_OFFSET))(this);
		}

		::System::Void _ChangeState(::Class_0_16E4307DCC419505_1091* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1091*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CHANGESTATE_OFFSET))(this, a1);
		}

		::System::Void ShowAnchorSettleEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SHOWANCHORSETTLEEFFECT_OFFSET))(this);
		}

		::System::Void ClearAnchorSettleEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CLEARANCHORSETTLEEFFECT_OFFSET))(this);
		}

		::System::Void _TriggerSettleAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TRIGGERSETTLEAUDIO_OFFSET))(this);
		}

		::System::Void _TriggerRotateAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TRIGGERROTATEAUDIO_OFFSET))(this);
		}

		::System::Void _TriggerRemoveAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TRIGGERREMOVEAUDIO_OFFSET))(this);
		}
	};
}
