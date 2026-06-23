#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/FullBodyBipedEffector.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace RootMotion::FinalIK { class FullBodyBipedIK; }
namespace RootMotion::FinalIK { class InteractionEffector; }
namespace RootMotion::FinalIK { class InteractionLookAt; }
namespace RootMotion::FinalIK { class InteractionObject; }
namespace RootMotion::FinalIK { class InteractionSystem_InteractionDelegate; }
namespace RootMotion::FinalIK { class InteractionSystem_InteractionEventDelegate; }
namespace RootMotion::FinalIK { class InteractionTarget; }
namespace RootMotion::FinalIK { class InteractionTrigger; }
namespace RootMotion::FinalIK { class InteractionTrigger_Range; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1DAFE210)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_CONTACTISINRANGE_OFFSET UNITYSDK_OFFSET(0x1DB045F0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONOBJECTINRANGE_OFFSET UNITYSDK_OFFSET(0x1DB02240)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONOBJECTSINRANGE_OFFSET UNITYSDK_OFFSET(0x1DB02320)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONRANGE_OFFSET UNITYSDK_OFFSET(0x1DB01AF0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONTARGETINRANGE_OFFSET UNITYSDK_OFFSET(0x1DB02290)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONTARGETSINRANGE_OFFSET UNITYSDK_OFFSET(0x1DB024C0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTTRIGGERINDEX_OFFSET UNITYSDK_OFFSET(0x1DB01DA0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETINTERACTIONOBJECT_OFFSET UNITYSDK_OFFSET(0x1DB003C0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETMINACTIVEPROGRESS_OFFSET UNITYSDK_OFFSET(0x1DB00820)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETPROGRESS_OFFSET UNITYSDK_OFFSET(0x1DB005F0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETTRIGGERRANGE_OFFSET UNITYSDK_OFFSET(0x1DB02D30)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GET_IK_OFFSET UNITYSDK_OFFSET(0x1DB03050)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GET_ININTERACTION_OFFSET UNITYSDK_OFFSET(0x1DAFE260)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1DB03090)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GET_TRIGGERSINRANGE_OFFSET UNITYSDK_OFFSET(0x1DB03070)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONPAUSE_OFFSET UNITYSDK_OFFSET(0x1DB03F90)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONRESUME_OFFSET UNITYSDK_OFFSET(0x1DB03FB0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONSTOP_OFFSET UNITYSDK_OFFSET(0x1DB03FD0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISININTERACTION_OFFSET UNITYSDK_OFFSET(0x1DAFE6D0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISINSYNC_OFFSET UNITYSDK_OFFSET(0x1DAFEE70)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISPAUSED_1_OFFSET UNITYSDK_OFFSET(0x1DAFEBD0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1DAFE950)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DAFE500)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_LOOKATINTERACTION_OFFSET UNITYSDK_OFFSET(0x1DB03FF0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DB056B0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DB05130)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONFIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1DB05690)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONPOSTFBBIK_OFFSET UNITYSDK_OFFSET(0x1DB054E0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONPREFBBIK_OFFSET UNITYSDK_OFFSET(0x1DB05380)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0x1DB04050)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0x1DB04330)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1DAFE030)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENTUTORIAL1_OFFSET UNITYSDK_OFFSET(0x1DAFE080)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENTUTORIAL2_OFFSET UNITYSDK_OFFSET(0x1DAFE0D0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENTUTORIAL3_OFFSET UNITYSDK_OFFSET(0x1DAFE120)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENTUTORIAL4_OFFSET UNITYSDK_OFFSET(0x1DAFE170)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1DAFDFE0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_PAUSEALL_OFFSET UNITYSDK_OFFSET(0x1DAFFED0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_PAUSEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1DAFF840)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_RAYCASTING_OFFSET UNITYSDK_OFFSET(0x1DB04DF0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_RESUMEALL_OFFSET UNITYSDK_OFFSET(0x1DB00110)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_RESUMEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1DAFFA70)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_SET_IK_OFFSET UNITYSDK_OFFSET(0x1DB03060)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x1DB030A0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_SET_TRIGGERSINRANGE_OFFSET UNITYSDK_OFFSET(0x1DB03080)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_STARTINTERACTION_1_OFFSET UNITYSDK_OFFSET(0x1DAFF4D0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_STARTINTERACTION_OFFSET UNITYSDK_OFFSET(0x1DAFF160)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_START_OFFSET UNITYSDK_OFFSET(0x1DB030B0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_STOPALL_OFFSET UNITYSDK_OFFSET(0x1DB00350)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_STOPINTERACTION_OFFSET UNITYSDK_OFFSET(0x1DAFFCA0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1DAFE1C0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGEREFFECTORSREADY_OFFSET UNITYSDK_OFFSET(0x1DB02830)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGERINDEXISVALID_OFFSET UNITYSDK_OFFSET(0x1DB00EC0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGERINTERACTION_1_OFFSET UNITYSDK_OFFSET(0x1DB010B0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGERINTERACTION_2_OFFSET UNITYSDK_OFFSET(0x1DB014F0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGERINTERACTION_OFFSET UNITYSDK_OFFSET(0x1DB00AF0)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_UPDATEEFFECTORS_OFFSET UNITYSDK_OFFSET(0x1DB05150)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_UPDATETRIGGEREVENTBROADCASTING_OFFSET UNITYSDK_OFFSET(0x1DB03890)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1DB04A00)
#define ROOTMOTION_FINALIK_INTERACTIONSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB05B60)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionSystem_TypeDefinitionIndex = 38169;

	class InteractionSystem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* targetTag; // 0x18
		::System::Single fadeInTime; // 0x20
		::System::Single speed; // 0x24
		::System::Single resetToDefaultsSpeed; // 0x28
		::UnityEngine::Collider* characterCollider; // 0x30
		::UnityEngine::Transform* FPSCamera; // 0x38
		::UnityEngine::LayerMask camRaycastLayers; // 0x40
		::System::Single camRaycastDistance; // 0x44
		::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* _triggersInRange_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* inContact; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* bestRangeIndexes; // 0x58
		::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionStart; // 0x60
		::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionPause; // 0x68
		::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionPickUp; // 0x70
		::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionResume; // 0x78
		::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionStop; // 0x80
		::RootMotion::FinalIK::InteractionSystem_InteractionEventDelegate* OnInteractionEvent; // 0x88
		::UnityEngine::RaycastHit raycastHit; // 0x90
		::RootMotion::FinalIK::FullBodyBipedIK* fullBody; // 0xC8
		::RootMotion::FinalIK::InteractionLookAt* lookAt; // 0xD0
		::Il2CppArray<::RootMotion::FinalIK::InteractionEffector*>* interactionEffectors; // 0xD8
		::System::Boolean _initiated_k__BackingField; // 0xE0
		::UnityEngine::Collider* lastCollider; // 0xE8
		::UnityEngine::Collider* c; // 0xF0
		::System::Single lastTime; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void OpenTutorial1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENTUTORIAL1_OFFSET))(this);
		}

		::System::Void OpenTutorial2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENTUTORIAL2_OFFSET))(this);
		}

		::System::Void OpenTutorial3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENTUTORIAL3_OFFSET))(this);
		}

		::System::Void OpenTutorial4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_OPENTUTORIAL4_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ASTHREAD_OFFSET))(this);
		}

		::System::Boolean get_inInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GET_ININTERACTION_OFFSET))(this);
		}

		::System::Boolean IsInInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISININTERACTION_OFFSET))(this, effectorType);
		}

		::System::Boolean IsPaused(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISPAUSED_OFFSET))(this, effectorType);
		}

		::System::Boolean IsPaused_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISPAUSED_1_OFFSET))(this);
		}

		::System::Boolean IsInSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISINSYNC_OFFSET))(this);
		}

		::System::Boolean StartInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, ::System::Boolean interrupt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_STARTINTERACTION_OFFSET))(this, effectorType, interactionObject, interrupt);
		}

		::System::Boolean StartInteraction_1(::RootMotion::FinalIK::FullBodyBipedEffector effectorType, ::RootMotion::FinalIK::InteractionObject* interactionObject, ::RootMotion::FinalIK::InteractionTarget* target, ::System::Boolean interrupt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*, ::RootMotion::FinalIK::InteractionTarget*, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_STARTINTERACTION_1_OFFSET))(this, effectorType, interactionObject, target, interrupt);
		}

		::System::Boolean PauseInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_PAUSEINTERACTION_OFFSET))(this, effectorType);
		}

		::System::Boolean ResumeInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_RESUMEINTERACTION_OFFSET))(this, effectorType);
		}

		::System::Boolean StopInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_STOPINTERACTION_OFFSET))(this, effectorType);
		}

		::System::Void PauseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_PAUSEALL_OFFSET))(this);
		}

		::System::Void ResumeAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_RESUMEALL_OFFSET))(this);
		}

		::System::Void StopAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_STOPALL_OFFSET))(this);
		}

		::RootMotion::FinalIK::InteractionObject* GetInteractionObject(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)
		{
			return ((::RootMotion::FinalIK::InteractionObject*(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETINTERACTIONOBJECT_OFFSET))(this, effectorType);
		}

		::System::Single GetProgress(::RootMotion::FinalIK::FullBodyBipedEffector effectorType)
		{
			return ((::System::Single(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETPROGRESS_OFFSET))(this, effectorType);
		}

		::System::Single GetMinActiveProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETMINACTIVEPROGRESS_OFFSET))(this);
		}

		::System::Boolean TriggerInteraction(::System::Int32 index, ::System::Boolean interrupt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGERINTERACTION_OFFSET))(this, index, interrupt);
		}

		::System::Boolean TriggerInteraction_1(::System::Int32 index, ::System::Boolean interrupt, ::RootMotion::FinalIK::InteractionObject*& interactionObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RootMotion::FinalIK::InteractionObject*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGERINTERACTION_1_OFFSET))(this, index, interrupt, interactionObject);
		}

		::System::Boolean TriggerInteraction_2(::System::Int32 index, ::System::Boolean interrupt, ::RootMotion::FinalIK::InteractionTarget*& interactionTarget)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::RootMotion::FinalIK::InteractionTarget*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGERINTERACTION_2_OFFSET))(this, index, interrupt, interactionTarget);
		}

		::RootMotion::FinalIK::InteractionTrigger_Range* GetClosestInteractionRange()
		{
			return ((::RootMotion::FinalIK::InteractionTrigger_Range*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONRANGE_OFFSET))(this);
		}

		::RootMotion::FinalIK::InteractionObject* GetClosestInteractionObjectInRange()
		{
			return ((::RootMotion::FinalIK::InteractionObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONOBJECTINRANGE_OFFSET))(this);
		}

		::RootMotion::FinalIK::InteractionTarget* GetClosestInteractionTargetInRange()
		{
			return ((::RootMotion::FinalIK::InteractionTarget*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONTARGETINRANGE_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::InteractionObject*>* GetClosestInteractionObjectsInRange()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::InteractionObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONOBJECTSINRANGE_OFFSET))(this);
		}

		::Il2CppArray<::RootMotion::FinalIK::InteractionTarget*>* GetClosestInteractionTargetsInRange()
		{
			return ((::Il2CppArray<::RootMotion::FinalIK::InteractionTarget*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTINTERACTIONTARGETSINRANGE_OFFSET))(this);
		}

		::System::Boolean TriggerEffectorsReady(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGEREFFECTORSREADY_OFFSET))(this, index);
		}

		::RootMotion::FinalIK::InteractionTrigger_Range* GetTriggerRange(::System::Int32 index)
		{
			return ((::RootMotion::FinalIK::InteractionTrigger_Range*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETTRIGGERRANGE_OFFSET))(this, index);
		}

		::System::Int32 GetClosestTriggerIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GETCLOSESTTRIGGERINDEX_OFFSET))(this);
		}

		::RootMotion::FinalIK::FullBodyBipedIK* get_ik()
		{
			return ((::RootMotion::FinalIK::FullBodyBipedIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GET_IK_OFFSET))(this);
		}

		::System::Void set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedIK*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_SET_IK_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* get_triggersInRange()
		{
			return ((::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GET_TRIGGERSINRANGE_OFFSET))(this);
		}

		::System::Void set_triggersInRange(::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RootMotion::FinalIK::InteractionTrigger*>*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_SET_TRIGGERSINRANGE_OFFSET))(this, value);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_SET_INITIATED_OFFSET))(this, value);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_START_OFFSET))(this);
		}

		::System::Void InteractionPause(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONPAUSE_OFFSET))(this, effector, interactionObject);
		}

		::System::Void InteractionResume(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONRESUME_OFFSET))(this, effector, interactionObject);
		}

		::System::Void InteractionStop(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_INTERACTIONSTOP_OFFSET))(this, effector, interactionObject);
		}

		::System::Void LookAtInteraction(::RootMotion::FinalIK::FullBodyBipedEffector effector, ::RootMotion::FinalIK::InteractionObject* interactionObject)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::FullBodyBipedEffector, ::RootMotion::FinalIK::InteractionObject*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_LOOKATINTERACTION_OFFSET))(this, effector, interactionObject);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONTRIGGERENTER_OFFSET))(this, c);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* c)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONTRIGGEREXIT_OFFSET))(this, c);
		}

		::System::Boolean ContactIsInRange(::System::Int32 index, ::System::Int32& bestRangeIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_CONTACTISINRANGE_OFFSET))(this, index, bestRangeIndex);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void Raycasting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_RAYCASTING_OFFSET))(this);
		}

		::System::Void UpdateTriggerEventBroadcasting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_UPDATETRIGGEREVENTBROADCASTING_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateEffectors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_UPDATEEFFECTORS_OFFSET))(this);
		}

		::System::Void OnPreFBBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONPREFBBIK_OFFSET))(this);
		}

		::System::Void OnPostFBBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONPOSTFBBIK_OFFSET))(this);
		}

		::System::Void OnFixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONFIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::Boolean log)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_ISVALID_OFFSET))(this, log);
		}

		::System::Boolean TriggerIndexIsValid(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONSYSTEM_TRIGGERINDEXISVALID_OFFSET))(this, index);
		}
	};
}
