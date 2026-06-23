#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HackObjectType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_HackTargetState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_F1E1EC202F4215BC;
namespace MoleMole { class HackEntrySubSystem_SubsidiaryInfo; }
namespace MoleMole { class OverlayOutlineRenderer; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ADDSUBSIDIARY_OFFSET UNITYSDK_OFFSET(0x13EEE870)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEANUPALLEFFECTS_OFFSET UNITYSDK_OFFSET(0x13EF0360)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEANUPALLSUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x13EF00C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEAROUTLINESUPPRESSION_OFFSET UNITYSDK_OFFSET(0x13EEFF30)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEARSUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x13EEEE30)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_COLLECTSUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x13EEEF70)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x13EED170)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_DOINACTIVE_OFFSET UNITYSDK_OFFSET(0x13EEE810)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_EXITFOCUS_OFFSET UNITYSDK_OFFSET(0x13EEE710)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_FOCUS_OFFSET UNITYSDK_OFFSET(0x13EEE6D0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETCENTERPOSANDROTATION_OFFSET UNITYSDK_OFFSET(0x13EEDB00)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETDETECTPOS_OFFSET UNITYSDK_OFFSET(0x13EEE2E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETEFFECTSCRIPTFORCLEANUP_OFFSET UNITYSDK_OFFSET(0x13EF0130)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETSELFSCREENPOS_OFFSET UNITYSDK_OFFSET(0x13EEE500)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETTARGETHANDLE_OFFSET UNITYSDK_OFFSET(0x13EED9A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_EFFECTSCRIPT_OFFSET UNITYSDK_OFFSET(0x13EED1B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x13EED5C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x13EED620)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x13EEE850)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_SUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x13EEE860)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_HIDEALLEFFECTS_OFFSET UNITYSDK_OFFSET(0x13EF01B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_HIDEEFFECT_OFFSET UNITYSDK_OFFSET(0x13EEE940)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_HIDESUBSIDIARYEFFECT_OFFSET UNITYSDK_OFFSET(0x13EEEAD0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_INITEFFECTSCRIPT_OFFSET UNITYSDK_OFFSET(0x13EED210)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_INIT_OFFSET UNITYSDK_OFFSET(0x13EED680)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x13EED950)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_LINKSUBSIDIARY_OFFSET UNITYSDK_OFFSET(0x13EEF500)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_MARKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x13EED630)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_NOTIFYSUBSIDIARYEFFECTS_OFFSET UNITYSDK_OFFSET(0x13EEFD10)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONEXITFOCUS_OFFSET UNITYSDK_OFFSET(0x13EEE660)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONFOCUS_OFFSET UNITYSDK_OFFSET(0x13EEE5F0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONINTERACTSUCCESS_OFFSET UNITYSDK_OFFSET(0x13EEE7D0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONINTERRUPTINTERACTING_OFFSET UNITYSDK_OFFSET(0x13EEE790)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONSTARTINTERACTING_OFFSET UNITYSDK_OFFSET(0x13EEE750)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_REMOVESUBSIDIARY_OFFSET UNITYSDK_OFFSET(0x13EEEB30)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_RESET_OFFSET UNITYSDK_OFFSET(0x13EF03F0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SETALLSUBSIDIARYEFFECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x13EED490)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SETANDREFRESHEFFECTVISIBLE_OFFSET UNITYSDK_OFFSET(0x13EED340)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SHOULDHIDEALLEFFECTS_OFFSET UNITYSDK_OFFSET(0x13EF02F0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SUPPRESSOUTLINES_OFFSET UNITYSDK_OFFSET(0x13EEFE00)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_TRYGETCROWDSLOTWORLDPRS_OFFSET UNITYSDK_OFFSET(0x13EEDDF0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_TRYRESOLVEPENDINGSUBSIDIARY_OFFSET UNITYSDK_OFFSET(0x13EEFBD0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x13EED120)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_HackTarget_TypeDefinitionIndex = 83319;

	class HackEntrySubSystem_HackTarget : public ::System::Object
	{
	public:
		// static const ::System::String* HackNormalEffectAnimName; // 0x0
		// static const ::System::String* HackSelectEffectAnimName; // 0x0
		::System::String* attachPoint; // 0x10
		::System::String* mobileTipKey; // 0x18
		::System::String* hackViewConsoleTipKey; // 0x20
		::System::String* consoleTipKey; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::HackEntrySubSystem_SubsidiaryInfo*>* _subsidiaries; // 0x30
		::System::Collections::Generic::List_1<::System::UInt64>* _pendingSubsidiaryIds; // 0x38
		::System::String* detectPoint; // 0x40
		::System::String* hackViewMobileTipKey; // 0x48
		::Class_3_DFD5D1FDB9D2A4AC* characterModel; // 0x50
		::MoleMole::OverlayOutlineRenderer* effectScript; // 0x58
		::MoleMole::EntityHandle entity; // 0x60
		::Class_3_F1E1EC202F4215BC* hackObjectComponent; // 0x70
		::UnityEngine::Vector3 attachOffset; // 0x78
		::System::Boolean isInScreen; // 0x84
		::System::Boolean isFocus; // 0x85
		::System::Double cameraCenterSqrDistance; // 0x88
		::System::Boolean effectVisible; // 0x90
		::System::Boolean initEffectScript; // 0x91
		::System::Boolean effectVisibleBeforeCameraTransition; // 0x92
		::System::Boolean isCompleted; // 0x93
		::System::Single cameraAngle; // 0x94
		::MoleMole::Config::HackObjectType hackObjectType; // 0x98
		::System::Single maxInteractionDistance; // 0x9C
		::System::Boolean isInInteractDistanceAndAngle; // 0xA0
		::System::Boolean _subsidiaryUseOutLine; // 0xA1
		::System::Boolean haveAttachPoint; // 0xA2
		::System::Boolean isBlockByCamera; // 0xA3
		::MoleMole::HackEntrySubSystem_HackTargetState state; // 0xA4
		::System::Single maxInteractTime; // 0xA8
		::System::Boolean isInCameraScreen; // 0xAC
		::System::Boolean _subsidiaryUseOverlap; // 0xAD
		::System::Boolean showInteractPoint; // 0xAE
		::System::Boolean haveDetectPoint; // 0xAF

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET__CTOR_OFFSET))(this);
		}

		::MoleMole::OverlayOutlineRenderer* get_EffectScript()
		{
			return ((::MoleMole::OverlayOutlineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_EFFECTSCRIPT_OFFSET))(this);
		}

		::System::Void InitEffectScript()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_INITEFFECTSCRIPT_OFFSET))(this);
		}

		::System::Void SetAndRefreshEffectVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SETANDREFRESHEFFECTVISIBLE_OFFSET))(this, visible);
		}

		::System::Boolean get_Interactable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_INTERACTABLE_OFFSET))(this);
		}

		::System::Boolean get_IsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_ISCOMPLETED_OFFSET))(this);
		}

		::System::Void MarkCompleted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_MARKCOMPLETED_OFFSET))(this);
		}

		::System::Void Init(::MoleMole::Battle::Entity* entity, ::System::String* attachPointName, ::UnityEngine::Vector3 attachOffset, ::System::Single maxInteractOffset, ::System::Single interactTime, ::System::String* detectPointName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_INIT_OFFSET))(this, entity, attachPointName, attachOffset, maxInteractOffset, interactTime, detectPointName);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ISVISIBLE_OFFSET))(this);
		}

		::System::UInt32 GetTargetHandle()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETTARGETHANDLE_OFFSET))(this);
		}

		::System::Void GetCenterPosAndRotation(::UnityEngine::Vector3& centerPos, ::UnityEngine::Quaternion& centerRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETCENTERPOSANDROTATION_OFFSET))(this, centerPos, centerRot);
		}

		::System::Boolean TryGetCrowdSlotWorldPRS(::System::String* slotName, ::UnityEngine::Vector3& slotPos, ::UnityEngine::Quaternion& slotRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_TRYGETCROWDSLOTWORLDPRS_OFFSET))(this, slotName, slotPos, slotRot);
		}

		::System::Void GetDetectPos(::UnityEngine::Vector3& detectPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETDETECTPOS_OFFSET))(this, detectPos);
		}

		::UnityEngine::Vector3 GetSelfScreenPos(::UnityEngine::Camera* cam)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETSELFSCREENPOS_OFFSET))(this, cam);
		}

		::System::Void OnFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONFOCUS_OFFSET))(this);
		}

		::System::Void OnExitFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONEXITFOCUS_OFFSET))(this);
		}

		::System::Void Focus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_FOCUS_OFFSET))(this);
		}

		::System::Void ExitFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_EXITFOCUS_OFFSET))(this);
		}

		::System::Void OnStartInteracting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONSTARTINTERACTING_OFFSET))(this);
		}

		::System::Void OnInterruptInteracting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONINTERRUPTINTERACTING_OFFSET))(this);
		}

		::System::Void OnInteractSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONINTERACTSUCCESS_OFFSET))(this);
		}

		::System::Void DoInactive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_DOINACTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_ISFOCUS_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HackEntrySubSystem_SubsidiaryInfo*>* get_Subsidiaries()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::MoleMole::HackEntrySubSystem_SubsidiaryInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_SUBSIDIARIES_OFFSET))(this);
		}

		::System::Void AddSubsidiary(::MoleMole::HackEntrySubSystem_SubsidiaryInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::HackEntrySubSystem_SubsidiaryInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ADDSUBSIDIARY_OFFSET))(this, info);
		}

		static ::System::Void HideEffect(::MoleMole::OverlayOutlineRenderer* script)
		{
			return ((::System::Void(*)(::MoleMole::OverlayOutlineRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_HIDEEFFECT_OFFSET))(script);
		}

		static ::System::Void HideSubsidiaryEffect(::MoleMole::HackEntrySubSystem_SubsidiaryInfo* info)
		{
			return ((::System::Void(*)(::MoleMole::HackEntrySubSystem_SubsidiaryInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_HIDESUBSIDIARYEFFECT_OFFSET))(info);
		}

		::System::Boolean RemoveSubsidiary(::System::UInt32 entityId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_REMOVESUBSIDIARY_OFFSET))(this, entityId);
		}

		::System::Void ClearSubsidiaries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEARSUBSIDIARIES_OFFSET))(this);
		}

		::System::Void CollectSubsidiaries(::System::Boolean isCameraMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_COLLECTSUBSIDIARIES_OFFSET))(this, isCameraMode);
		}

		::System::Void LinkSubsidiary(::MoleMole::EntityHandle subsidiaryEntityHandle, ::System::Boolean isCameraMode)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_LINKSUBSIDIARY_OFFSET))(this, subsidiaryEntityHandle, isCameraMode);
		}

		::System::Boolean TryResolvePendingSubsidiary(::System::UInt64 combinedId, ::MoleMole::EntityHandle entityHandle, ::System::Boolean isCameraMode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_TRYRESOLVEPENDINGSUBSIDIARY_OFFSET))(this, combinedId, entityHandle, isCameraMode);
		}

		::System::Void NotifySubsidiaryEffects(::System::Boolean interact)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_NOTIFYSUBSIDIARYEFFECTS_OFFSET))(this, interact);
		}

		::System::Void SetAllSubsidiaryEffectsVisible(::System::Boolean visible)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SETALLSUBSIDIARYEFFECTSVISIBLE_OFFSET))(this, visible);
		}

		::System::Void SuppressOutlines()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SUPPRESSOUTLINES_OFFSET))(this);
		}

		::System::Void ClearOutlineSuppression()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEAROUTLINESUPPRESSION_OFFSET))(this);
		}

		::System::Void CleanupAllSubsidiaries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEANUPALLSUBSIDIARIES_OFFSET))(this);
		}

		::MoleMole::OverlayOutlineRenderer* GetEffectScriptForCleanup()
		{
			return ((::MoleMole::OverlayOutlineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETEFFECTSCRIPTFORCLEANUP_OFFSET))(this);
		}

		::System::Void HideAllEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_HIDEALLEFFECTS_OFFSET))(this);
		}

		::System::Boolean ShouldHideAllEffects()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SHOULDHIDEALLEFFECTS_OFFSET))(this);
		}

		::System::Void CleanupAllEffects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEANUPALLEFFECTS_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_RESET_OFFSET))(this);
		}

		::System::Void Deallocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_DEALLOCATE_OFFSET))(this);
		}
	};
}
