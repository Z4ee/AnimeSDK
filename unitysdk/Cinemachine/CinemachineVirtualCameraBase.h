#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_StandbyUpdateMode.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class CinemachineExtension; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x172A56C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_APPLYPOSITIONBLENDMETHOD_OFFSET UNITYSDK_OFFSET(0x1727C340)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_CREATEBLEND_OFFSET UNITYSDK_OFFSET(0x1D213530)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_1_OFFSET UNITYSDK_OFFSET(0x17262480)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_2_OFFSET UNITYSDK_OFFSET(0x17289DE0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x1727FB70)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_1_OFFSET UNITYSDK_OFFSET(0x172A5560)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_2_OFFSET UNITYSDK_OFFSET(0x172A5640)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x17277A80)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ENSURESTARTED_OFFSET UNITYSDK_OFFSET(0x1726ADE0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1D2133C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x1D2126F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x172A2550)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x172A57A0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOWTARGETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x172A5520)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x172A57F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKATTARGETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x172A5540)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17266760)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1727A110)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x172A5820)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x172A57B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VALIDATINGSTREAMVERSION_OFFSET UNITYSDK_OFFSET(0x172A3720)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x172A57D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEONTRANSITIONINEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x172651A0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x172660C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x172A4730)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x172A5810)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_MOVETOTOPOFPRIORITYSUBQUEUE_OFFSET UNITYSDK_OFFSET(0x1D213110)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x17281F40)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D212CF0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D212830)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1D213120)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x172A5840)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x172650F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1D2127F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONWORLDWARPED_OFFSET UNITYSDK_OFFSET(0x1D213270)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_PULLSTATEFROMVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1D2136F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_REMOVEEXTENSION_OFFSET UNITYSDK_OFFSET(0x172A5780)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVEFOLLOW_OFFSET UNITYSDK_OFFSET(0x1D212F30)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVELOOKAT_OFFSET UNITYSDK_OFFSET(0x1D212D50)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_FOLLOWTARGETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x172A5530)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_LOOKATTARGETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x172A5550)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x172A5830)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x172A57C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_VALIDATINGSTREAMVERSION_OFFSET UNITYSDK_OFFSET(0x172A5510)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_START_OFFSET UNITYSDK_OFFSET(0x172A58F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x17265CF0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATESLAVESTATUS_OFFSET UNITYSDK_OFFSET(0x1D212BD0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATEVCAMPOOLSTATUS_OFFSET UNITYSDK_OFFSET(0x1D212C30)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D212D40)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D214370)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCameraBase_TypeDefinitionIndex = 37678;

	class CinemachineVirtualCameraBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::String*>* m_ExcludedPropertiesInInspector; // 0x18
		::Il2CppArray<::Cinemachine::CinemachineCore_Stage>* m_LockStageInInspector; // 0x20
		::System::Int32 m_ValidatingStreamVersion; // 0x28
		::System::Boolean m_OnValidateCalled; // 0x2C
		::System::Int32 m_StreamingVersion; // 0x30
		::System::Int32 m_Priority; // 0x34
		::System::Single _FollowTargetAttachment_k__BackingField; // 0x38
		::System::Single _LookAtTargetAttachment_k__BackingField; // 0x3C
		::Cinemachine::CinemachineVirtualCameraBase_StandbyUpdateMode m_StandbyUpdate; // 0x40
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineExtension*>* mExtensions; // 0x48
		::System::Boolean _PreviousStateIsValid_k__BackingField; // 0x50
		::System::Boolean m_WasStarted; // 0x51
		::System::Boolean mSlaveStatusUpdated; // 0x52
		::Cinemachine::CinemachineVirtualCameraBase* m_parentVcam; // 0x58
		::System::Int32 m_QueuePriority; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ValidatingStreamVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VALIDATINGSTREAMVERSION_OFFSET))(this);
		}

		::System::Void set_ValidatingStreamVersion(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_VALIDATINGSTREAMVERSION_OFFSET))(this, a1);
		}

		::System::Single get_FollowTargetAttachment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOWTARGETATTACHMENT_OFFSET))(this);
		}

		::System::Void set_FollowTargetAttachment(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_FOLLOWTARGETATTACHMENT_OFFSET))(this, a1);
		}

		::System::Single get_LookAtTargetAttachment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKATTARGETATTACHMENT_OFFSET))(this);
		}

		::System::Void set_LookAtTargetAttachment(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_LOOKATTARGETATTACHMENT_OFFSET))(this, a1);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Single DetachedFollowTargetDamp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 DetachedFollowTargetDamp_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 DetachedFollowTargetDamp_2(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Single DetachedLookAtTargetDamp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 DetachedLookAtTargetDamp_1(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_1_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 DetachedLookAtTargetDamp_2(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddExtension(::Cinemachine::CinemachineExtension* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineExtension*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ADDEXTENSION_OFFSET))(this, a1);
		}

		::System::Void RemoveExtension(::Cinemachine::CinemachineExtension* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineExtension*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_REMOVEEXTENSION_OFFSET))(this, a1);
		}

		::System::Void InvokePostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState& a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InvokePrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CameraState& a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean InvokeOnTransitionInExtensions(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEONTRANSITIONINEXTENSIONS_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PRIORITY_OFFSET))(this, a1);
		}

		::System::Void ApplyPositionBlendMethod(::Cinemachine::CameraState& a1, ::Cinemachine::CinemachineVirtualCameraBase_BlendHint a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::Cinemachine::CinemachineVirtualCameraBase_BlendHint))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_APPLYPOSITIONBLENDMETHOD_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* get_VirtualCameraGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::ICinemachineCamera* get_ParentCamera()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PARENTCAMERA_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ISLIVECHILD_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_PreviousStateIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PREVIOUSSTATEISVALID_OFFSET))(this);
		}

		::System::Void set_PreviousStateIsValid(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PREVIOUSSTATEISVALID_OFFSET))(this, a1);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_START_OFFSET))(this);
		}

		::System::Void EnsureStarted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ENSURESTARTED_OFFSET))(this);
		}

		::Cinemachine::AxisState_IInputAxisProvider* GetInputAxisProvider()
		{
			return ((::Cinemachine::AxisState_IInputAxisProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETINPUTAXISPROVIDER_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateSlaveStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATESLAVESTATUS_OFFSET))(this);
		}

		::UnityEngine::Transform* ResolveLookAt(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVELOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* ResolveFollow(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVEFOLLOW_OFFSET))(this, a1);
		}

		::System::Void UpdateVcamPoolStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATEVCAMPOOLSTATUS_OFFSET))(this);
		}

		::System::Void MoveToTopOfPrioritySubqueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_MOVETOTOPOFPRIORITYSUBQUEUE_OFFSET))(this);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void OnWorldWarped(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONWORLDWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineBlend* CreateBlend(::Cinemachine::ICinemachineCamera* a1, ::Cinemachine::ICinemachineCamera* a2, ::Cinemachine::CinemachineBlendDefinition a3, ::Cinemachine::CinemachineBlend* a4)
		{
			return ((::Cinemachine::CinemachineBlend*(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition, ::Cinemachine::CinemachineBlend*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_CREATEBLEND_OFFSET))(this, a1, a2, a3, a4);
		}

		::Cinemachine::CameraState PullStateFromVirtualCamera(::UnityEngine::Vector3 a1, ::Cinemachine::LensSettings& a2)
		{
			return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3, ::Cinemachine::LensSettings&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_PULLSTATEFROMVIRTUALCAMERA_OFFSET))(this, a1, a2);
		}
	};
}
