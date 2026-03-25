#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackComponent_AlleyPackDragColorState.h"
#include "unitysdk/RPG/Client/ActivityAlley/AlleyPackDragStateEnum.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_925;
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

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_AUTOSETTLE_OFFSET UNITYSDK_OFFSET(0x8ED9320)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_BEGINDRAG_OFFSET UNITYSDK_OFFSET(0x8ED9CD0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CANCELSETTLE_OFFSET UNITYSDK_OFFSET(0x8ED9370)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CHECKBOUNDINTERSECT_OFFSET UNITYSDK_OFFSET(0x8ED95F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CLEARANCHORSETTLEEFFECT_OFFSET UNITYSDK_OFFSET(0x8ED8BF0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8ED7EB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DOROTATE_OFFSET UNITYSDK_OFFSET(0x8EDA1C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DOSELECT_OFFSET UNITYSDK_OFFSET(0x8EDA140)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ENABLECOLLIDERTRIGGER_OFFSET UNITYSDK_OFFSET(0x8ED9540)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ENDDRAG_OFFSET UNITYSDK_OFFSET(0x8EDA060)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x8EDAFB0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_DRAGMERGEDBOUND_OFFSET UNITYSDK_OFFSET(0x8EDB080)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_DRAGSTATE_OFFSET UNITYSDK_OFFSET(0x8EDAFA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_FIRSTHEADANCHOR_OFFSET UNITYSDK_OFFSET(0x8ED9810)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_INIT_OFFSET UNITYSDK_OFFSET(0x8ED72E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x8ED8BA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONSELECT_OFFSET UNITYSDK_OFFSET(0x8ED8200)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONSETTLE_OFFSET UNITYSDK_OFFSET(0x8ED8520)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0x8ED8380)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_REFRESHCANANCHORSTATUS_OFFSET UNITYSDK_OFFSET(0x8ED99A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SETTLE_OFFSET UNITYSDK_OFFSET(0x8ED8E60)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SET_DRAGMERGEDBOUND_OFFSET UNITYSDK_OFFSET(0x8EDB0A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SHOWANCHORSETTLEEFFECT_OFFSET UNITYSDK_OFFSET(0x8ED87C0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x8ED9890)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_TRIGGERREMOVEAUDIO_OFFSET UNITYSDK_OFFSET(0x8ED8CC0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__BEGINROTATE_OFFSET UNITYSDK_OFFSET(0x8EDA5A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x8EDB840)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CHANGESTATE_OFFSET UNITYSDK_OFFSET(0x8EDB5E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__COLLECTANCHORS_OFFSET UNITYSDK_OFFSET(0x8ED73E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__COLLECTRENDERDATA_OFFSET UNITYSDK_OFFSET(0x8ED76B0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x8ED71A0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__DISPOSERENDERDATA_OFFSET UNITYSDK_OFFSET(0x8ED7F00)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__GETDELTATIME_OFFSET UNITYSDK_OFFSET(0x8EDB7F0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__GETTIMERRESET_OFFSET UNITYSDK_OFFSET(0x8EDB670)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__ONROTATEFINISH_OFFSET UNITYSDK_OFFSET(0x8EDA480)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__RESETDRAGCOLOR_OFFSET UNITYSDK_OFFSET(0x8EDB2E0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__SETDRAGCOLOR_OFFSET UNITYSDK_OFFSET(0x8EDB450)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__SWITCHDRAGSTATE_OFFSET UNITYSDK_OFFSET(0x8ED8580)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TICKTSTATE_OFFSET UNITYSDK_OFFSET(0x8EDAF20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TRIGGERREMOVEAUDIO_OFFSET UNITYSDK_OFFSET(0x8ED8D10)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TRIGGERROTATEAUDIO_OFFSET UNITYSDK_OFFSET(0x8EDADA0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TRIGGERSETTLEAUDIO_OFFSET UNITYSDK_OFFSET(0x8ED8A20)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__UPDATEDRAGSTATE_OFFSET UNITYSDK_OFFSET(0x8ED9900)

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackComponent_TypeDefinitionIndex = 60744;

	class AlleyPackComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet__AnchorListDefaultInitCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AlleyPackComponent_TypeDefinitionIndex)->GetStaticField(0xD200);
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

		::System::Void EnableColliderTrigger(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ENABLECOLLIDERTRIGGER_OFFSET))(this, isEnable);
		}

		::System::Tuple_2<::System::Boolean, ::System::Single>* CheckBoundIntersect(::UnityEngine::Bounds otherBound)
		{
			return ((::System::Tuple_2<::System::Boolean, ::System::Single>*(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_CHECKBOUNDINTERSECT_OFFSET))(this, otherBound);
		}

		::System::Void _CollectAnchors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__COLLECTANCHORS_OFFSET))(this);
		}

		::RPG::Client::ActivityAlley::AlleyPackAnchor* get_FirstHeadAnchor()
		{
			return ((::RPG::Client::ActivityAlley::AlleyPackAnchor*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_GET_FIRSTHEADANCHOR_OFFSET))(this);
		}

		::System::Void Tick(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_TICK_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void BeginDrag(::System::Boolean immediateStartDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_BEGINDRAG_OFFSET))(this, immediateStartDrag);
		}

		::System::Void EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ENDDRAG_OFFSET))(this);
		}

		::System::Void DoSelect(::System::Boolean forceHover)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DOSELECT_OFFSET))(this, forceHover);
		}

		::System::Void DoRotate(::System::Single targetYawAngle, ::System::Boolean doImmediately, ::System::Single maxRotateSpeed, ::System::Action* rotateFinishCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_DOROTATE_OFFSET))(this, targetYawAngle, doImmediately, maxRotateSpeed, rotateFinishCallback);
		}

		::System::Collections::IEnumerator* _BeginRotate(::System::Single targetYaw, ::System::Single maxRotateSpeed)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__BEGINROTATE_OFFSET))(this, targetYaw, maxRotateSpeed);
		}

		::System::Void _OnRotateFinish(::System::Single targetYawAngle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__ONROTATEFINISH_OFFSET))(this, targetYawAngle);
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

		::System::Void set_DragMergedBound(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_SET_DRAGMERGEDBOUND_OFFSET))(this, value);
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

		::System::Void _SetDragColor(::System::Boolean canSettle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__SETDRAGCOLOR_OFFSET))(this, canSettle);
		}

		::System::Void _ResetDragColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__RESETDRAGCOLOR_OFFSET))(this);
		}

		::System::Void _SwitchDragState(::RPG::Client::ActivityAlley::AlleyPackDragStateEnum state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityAlley::AlleyPackDragStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__SWITCHDRAGSTATE_OFFSET))(this, state);
		}

		::Class_1_23F67DD15593C8D6* _GetTimerReset(::System::Single timeSpawn)
		{
			return ((::Class_1_23F67DD15593C8D6*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__GETTIMERRESET_OFFSET))(this, timeSpawn);
		}

		::System::Single _GetDeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__GETDELTATIME_OFFSET))(this);
		}

		::System::Void _TickTState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__TICKTSTATE_OFFSET))(this);
		}

		::System::Void _ChangeState(::Class_0_16E4307DCC419505_925* state)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_925*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT__CHANGESTATE_OFFSET))(this, state);
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
