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

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ADDEXTENSION_OFFSET UNITYSDK_OFFSET(0x12BA4FE0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_APPLYPOSITIONBLENDMETHOD_OFFSET UNITYSDK_OFFSET(0x12B7CA90)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_CREATEBLEND_OFFSET UNITYSDK_OFFSET(0x12BA5BB0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_1_OFFSET UNITYSDK_OFFSET(0x12B63B50)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_2_OFFSET UNITYSDK_OFFSET(0x12B8A7F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x12B7FCD0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_1_OFFSET UNITYSDK_OFFSET(0x12BA4D60)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_2_OFFSET UNITYSDK_OFFSET(0x12BA4E40)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET UNITYSDK_OFFSET(0x12B786B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ENSURESTARTED_OFFSET UNITYSDK_OFFSET(0x12B6C2A0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x12BA5B00)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETINPUTAXISPROVIDER_OFFSET UNITYSDK_OFFSET(0x12B820D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x12BA1AA0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x12BA5080)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOWTARGETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x12BA4D20)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x12BA50D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKATTARGETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x12BA4D40)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x12B67B10)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x12B7ACC0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x12BA5100)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12BA5090)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VALIDATINGSTREAMVERSION_OFFSET UNITYSDK_OFFSET(0x12BA2B20)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x12BA50B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEONTRANSITIONINEXTENSIONS_OFFSET UNITYSDK_OFFSET(0x12B66620)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x12B67420)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET UNITYSDK_OFFSET(0x12BA4300)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x12BA50F0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_MOVETOTOPOFPRIORITYSUBQUEUE_OFFSET UNITYSDK_OFFSET(0x12BA59B0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12B822C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x12BA5630)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12BA51E0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x12BA59C0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x12BA5120)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x12B665D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x12B81380)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONWORLDWARPED_OFFSET UNITYSDK_OFFSET(0x12BA5A60)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_PULLSTATEFROMVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x12BA5D10)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_REMOVEEXTENSION_OFFSET UNITYSDK_OFFSET(0x12BA5060)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVEFOLLOW_OFFSET UNITYSDK_OFFSET(0x12BA5820)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVELOOKAT_OFFSET UNITYSDK_OFFSET(0x12BA5690)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_FOLLOWTARGETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x12BA4D30)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_LOOKATTARGETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x12BA4D50)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PREVIOUSSTATEISVALID_OFFSET UNITYSDK_OFFSET(0x12BA5110)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x12BA50A0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_VALIDATINGSTREAMVERSION_OFFSET UNITYSDK_OFFSET(0x12BA4D10)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_START_OFFSET UNITYSDK_OFFSET(0x12BA51D0)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x12B67090)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATESLAVESTATUS_OFFSET UNITYSDK_OFFSET(0x12BA5510)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATEVCAMPOOLSTATUS_OFFSET UNITYSDK_OFFSET(0x12BA5570)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x12BA5680)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BA6960)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCameraBase_TypeDefinitionIndex = 36596;

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

		::System::Void set_ValidatingStreamVersion(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_VALIDATINGSTREAMVERSION_OFFSET))(this, value);
		}

		::System::Single get_FollowTargetAttachment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_FOLLOWTARGETATTACHMENT_OFFSET))(this);
		}

		::System::Void set_FollowTargetAttachment(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_FOLLOWTARGETATTACHMENT_OFFSET))(this, value);
		}

		::System::Single get_LookAtTargetAttachment()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_LOOKATTARGETATTACHMENT_OFFSET))(this);
		}

		::System::Void set_LookAtTargetAttachment(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_LOOKATTARGETATTACHMENT_OFFSET))(this, value);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Single DetachedFollowTargetDamp(::System::Single initial, ::System::Single dampTime, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_OFFSET))(this, initial, dampTime, deltaTime);
		}

		::UnityEngine::Vector3 DetachedFollowTargetDamp_1(::UnityEngine::Vector3 initial, ::UnityEngine::Vector3 dampTime, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_1_OFFSET))(this, initial, dampTime, deltaTime);
		}

		::UnityEngine::Vector3 DetachedFollowTargetDamp_2(::UnityEngine::Vector3 initial, ::System::Single dampTime, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDFOLLOWTARGETDAMP_2_OFFSET))(this, initial, dampTime, deltaTime);
		}

		::System::Single DetachedLookAtTargetDamp(::System::Single initial, ::System::Single dampTime, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_OFFSET))(this, initial, dampTime, deltaTime);
		}

		::UnityEngine::Vector3 DetachedLookAtTargetDamp_1(::UnityEngine::Vector3 initial, ::UnityEngine::Vector3 dampTime, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_1_OFFSET))(this, initial, dampTime, deltaTime);
		}

		::UnityEngine::Vector3 DetachedLookAtTargetDamp_2(::UnityEngine::Vector3 initial, ::System::Single dampTime, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_DETACHEDLOOKATTARGETDAMP_2_OFFSET))(this, initial, dampTime, deltaTime);
		}

		::System::Void AddExtension(::Cinemachine::CinemachineExtension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineExtension*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ADDEXTENSION_OFFSET))(this, extension);
		}

		::System::Void RemoveExtension(::Cinemachine::CinemachineExtension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineExtension*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_REMOVEEXTENSION_OFFSET))(this, extension);
		}

		::System::Void InvokePostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& newState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPOSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, newState, deltaTime);
		}

		::System::Void InvokePrePipelineMutateCameraStateCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CameraState& newState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEPREPIPELINEMUTATECAMERASTATECALLBACK_OFFSET))(this, vcam, newState, deltaTime);
		}

		::System::Boolean InvokeOnTransitionInExtensions(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_INVOKEONTRANSITIONINEXTENSIONS_OFFSET))(this, fromCam, worldUp, deltaTime);
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

		::System::Void set_Priority(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PRIORITY_OFFSET))(this, value);
		}

		::System::Void ApplyPositionBlendMethod(::Cinemachine::CameraState& state, ::Cinemachine::CinemachineVirtualCameraBase_BlendHint hint)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::Cinemachine::CinemachineVirtualCameraBase_BlendHint))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_APPLYPOSITIONBLENDMETHOD_OFFSET))(this, state, hint);
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

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* vcam, ::System::Boolean dominantChildOnly)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ISLIVECHILD_OFFSET))(this, vcam, dominantChildOnly);
		}

		::System::Boolean get_PreviousStateIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_GET_PREVIOUSSTATEISVALID_OFFSET))(this);
		}

		::System::Void set_PreviousStateIsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_SET_PREVIOUSSTATEISVALID_OFFSET))(this, value);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATECAMERASTATE_OFFSET))(this, worldUp, deltaTime);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime);
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

		::UnityEngine::Transform* ResolveLookAt(::UnityEngine::Transform* localLookAt)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVELOOKAT_OFFSET))(this, localLookAt);
		}

		::UnityEngine::Transform* ResolveFollow(::UnityEngine::Transform* localFollow)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_RESOLVEFOLLOW_OFFSET))(this, localFollow);
		}

		::System::Void UpdateVcamPoolStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_UPDATEVCAMPOOLSTATUS_OFFSET))(this);
		}

		::System::Void MoveToTopOfPrioritySubqueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_MOVETOTOPOFPRIORITYSUBQUEUE_OFFSET))(this);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void OnWorldWarped(::UnityEngine::Vector3 positionDelta, ::System::Single yawDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_ONWORLDWARPED_OFFSET))(this, positionDelta, yawDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::Cinemachine::CinemachineBlend* CreateBlend(::Cinemachine::ICinemachineCamera* camA, ::Cinemachine::ICinemachineCamera* camB, ::Cinemachine::CinemachineBlendDefinition blendDef, ::Cinemachine::CinemachineBlend* activeBlend)
		{
			return ((::Cinemachine::CinemachineBlend*(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::CinemachineBlendDefinition, ::Cinemachine::CinemachineBlend*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_CREATEBLEND_OFFSET))(this, camA, camB, blendDef, activeBlend);
		}

		::Cinemachine::CameraState PullStateFromVirtualCamera(::UnityEngine::Vector3 worldUp, ::Cinemachine::LensSettings& lens)
		{
			return ((::Cinemachine::CameraState(*)(::PVOID, ::UnityEngine::Vector3, ::Cinemachine::LensSettings&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERABASE_PULLSTATEFROMVIRTUALCAMERA_OFFSET))(this, worldUp, lens);
		}
	};
}
