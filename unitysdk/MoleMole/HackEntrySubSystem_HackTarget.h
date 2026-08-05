#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HackObjectType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/HackEntrySubSystem_HackTargetState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_C93CC3D2C2AC4067;
class Class_3_F1E1EC202F4215BC;
namespace MoleMole { class HackEntrySubSystem_SubsidiaryInfo; }
namespace MoleMole { class OverlayOutlineRenderer; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ADDSUBSIDIARY_OFFSET UNITYSDK_OFFSET(0x136B7AC0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEANUPALLEFFECTS_OFFSET UNITYSDK_OFFSET(0x136B9B00)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEANUPALLSUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x136B9870)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEAROUTLINESUPPRESSION_OFFSET UNITYSDK_OFFSET(0x136B9220)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_CLEARSUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x136B8080)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_COLLECTSUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x136B81C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_DEALLOCATE_OFFSET UNITYSDK_OFFSET(0x136B63A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_DOINACTIVE_OFFSET UNITYSDK_OFFSET(0x136B7A60)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_EXITFOCUS_OFFSET UNITYSDK_OFFSET(0x136B7960)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_FOCUS_OFFSET UNITYSDK_OFFSET(0x136B7920)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETCENTERPOSANDROTATION_OFFSET UNITYSDK_OFFSET(0x136B6D50)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETDETECTPOS_OFFSET UNITYSDK_OFFSET(0x136B7530)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETEFFECTSCRIPTFORCLEANUP_OFFSET UNITYSDK_OFFSET(0x136B98E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETSELFSCREENPOS_OFFSET UNITYSDK_OFFSET(0x136B7750)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GETTARGETHANDLE_OFFSET UNITYSDK_OFFSET(0x136B6BF0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_EFFECTSCRIPT_OFFSET UNITYSDK_OFFSET(0x136B63E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_INTERACTABLE_OFFSET UNITYSDK_OFFSET(0x136B6800)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_ISCOMPLETED_OFFSET UNITYSDK_OFFSET(0x136B6860)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_ISFOCUS_OFFSET UNITYSDK_OFFSET(0x136B7AA0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_GET_SUBSIDIARIES_OFFSET UNITYSDK_OFFSET(0x136B7AB0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_HIDEALLEFFECTS_OFFSET UNITYSDK_OFFSET(0x136B9960)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_HIDEEFFECT_OFFSET UNITYSDK_OFFSET(0x136B7B90)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_HIDESUBSIDIARYEFFECT_OFFSET UNITYSDK_OFFSET(0x136B7D20)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_INITEFFECTSCRIPT_OFFSET UNITYSDK_OFFSET(0x136B6440)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_INIT_OFFSET UNITYSDK_OFFSET(0x136B68C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x136B6BA0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_LINKSUBSIDIARY_OFFSET UNITYSDK_OFFSET(0x136B87D0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_MARKCOMPLETED_OFFSET UNITYSDK_OFFSET(0x136B6870)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_NOTIFYSUBSIDIARYEFFECTS_OFFSET UNITYSDK_OFFSET(0x136B8FC0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONEXITFOCUS_OFFSET UNITYSDK_OFFSET(0x136B78B0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONFOCUS_OFFSET UNITYSDK_OFFSET(0x136B7840)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONINTERACTSUCCESS_OFFSET UNITYSDK_OFFSET(0x136B7A20)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONINTERRUPTINTERACTING_OFFSET UNITYSDK_OFFSET(0x136B79E0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_ONSTARTINTERACTING_OFFSET UNITYSDK_OFFSET(0x136B79A0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_REMOVESUBSIDIARY_OFFSET UNITYSDK_OFFSET(0x136B7D80)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_RESET_OFFSET UNITYSDK_OFFSET(0x136B9B90)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SETALLSUBSIDIARYEFFECTSVISIBLE_OFFSET UNITYSDK_OFFSET(0x136B66D0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SETANDREFRESHEFFECTVISIBLE_OFFSET UNITYSDK_OFFSET(0x136B6580)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SETMANUALOUTLINEDISABLED_OFFSET UNITYSDK_OFFSET(0x136B93C0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SHOULDHIDEALLEFFECTS_OFFSET UNITYSDK_OFFSET(0x136B9A90)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SUPPRESSOUTLINES_OFFSET UNITYSDK_OFFSET(0x136B90F0)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_TRYGETCROWDSLOTWORLDPRS_OFFSET UNITYSDK_OFFSET(0x136B7040)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_TRYRESOLVEPENDINGSUBSIDIARY_OFFSET UNITYSDK_OFFSET(0x136B8E90)
#define MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x136B6350)

namespace MoleMole
{
	inline static constexpr unsigned int HackEntrySubSystem_HackTarget_TypeDefinitionIndex = 71362;

	class HackEntrySubSystem_HackTarget : public ::System::Object
	{
	public:
		// static const ::System::String* HackNormalEffectAnimName; // 0x0
		// static const ::System::String* HackSelectEffectAnimName; // 0x0
		::System::String* hackViewMobileTipKey; // 0x10
		::System::String* hackViewConsoleTipKey; // 0x18
		::MoleMole::EntityHandle entity; // 0x20
		::System::Collections::Generic::List_1<::System::UInt64>* _pendingSubsidiaryIds; // 0x30
		::System::String* detectPoint; // 0x38
		::MoleMole::OverlayOutlineRenderer* effectScript; // 0x40
		::Class_3_F1E1EC202F4215BC* hackObjectComponent; // 0x48
		::System::String* attachPoint; // 0x50
		::System::String* consoleTipKey; // 0x58
		::Class_3_C93CC3D2C2AC4067* characterModel; // 0x60
		::System::String* mobileTipKey; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::HackEntrySubSystem_SubsidiaryInfo*>* _subsidiaries; // 0x70
		::MoleMole::Config::HackObjectType hackObjectType; // 0x78
		::System::Single cachedAngleRangeMin; // 0x7C
		::System::Single cameraAngle; // 0x80
		::System::Boolean isInInteractDistanceAndAngle; // 0x84
		::System::Boolean showInteractPoint; // 0x85
		::System::Single maxInteractTime; // 0x88
		::System::Boolean isInCameraScreen; // 0x8C
		::System::Boolean hasAngleRangeRestriction; // 0x8D
		::System::Boolean haveAttachPoint; // 0x8E
		::UnityEngine::Vector3 attachOffset; // 0x90
		::System::Boolean useForwardAsAxis; // 0x9C
		::System::Boolean haveDetectPoint; // 0x9D
		::System::Boolean manualOutlineDisabled; // 0x9E
		::System::Boolean _subsidiaryUseOutLine; // 0x9F
		::System::Single cachedAngleRangeMax; // 0xA0
		::System::Boolean isFocus; // 0xA4
		::System::Boolean isBlockByCamera; // 0xA5
		::System::Boolean isInScreen; // 0xA6
		::System::Boolean isCompleted; // 0xA7
		::System::Single maxInteractionDistance; // 0xA8
		::System::Double cameraCenterSqrDistance; // 0xB0
		::System::Boolean _subsidiaryUseOverlap; // 0xB8
		::System::Boolean effectVisible; // 0xB9
		::System::Boolean effectVisibleBeforeCameraTransition; // 0xBA
		::System::Boolean initEffectScript; // 0xBB
		::MoleMole::HackEntrySubSystem_HackTargetState state; // 0xBC

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

		::System::Void SetManualOutlineDisabled(::System::Boolean disabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKENTRYSUBSYSTEM_HACKTARGET_SETMANUALOUTLINEDISABLED_OFFSET))(this, disabled);
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
