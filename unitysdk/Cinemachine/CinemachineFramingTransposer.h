#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineFramingTransposer_AdjustmentMode.h"
#include "unitysdk/Cinemachine/CinemachineFramingTransposer_FramingMode.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_TransitionParams.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineCamera; }
namespace Cinemachine { class ICinemachineTargetGroup; }
namespace Cinemachine::Utility { class PositionPredictor; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_COMPUTEGROUPBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F9470A0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x1F9452A0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1F9452C0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1F9477E0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETTARGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F9476F0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_BODYAPPLIESAFTERAIM_OFFSET UNITYSDK_OFFSET(0x1F945170)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x1F944DF0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_INHERITINGPOSITION_OFFSET UNITYSDK_OFFSET(0x1F9454C0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F945030)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x1F945630)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F9455F0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x1F944CF0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x1F945160)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x1F945180)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F945690)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x1F9451C0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x1F9452E0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F944F60)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ORTHOOFFSETTOSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F945570)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SCREENTOORTHO_OFFSET UNITYSDK_OFFSET(0x1F9454E0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x1F944E30)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_INHERITINGPOSITION_OFFSET UNITYSDK_OFFSET(0x1F9454D0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x1F945660)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F945610)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x1F944D20)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x1F9451A0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F947F90)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFramingTransposer_TypeDefinitionIndex = 34700;

	class CinemachineFramingTransposer : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		// static const ::System::Single kMinimumCameraDistance; // 0x0
		// static const ::System::Single kMinimumGroupSize; // 0x0
		::UnityEngine::Vector3 m_TrackedObjectOffset; // 0x50
		::System::Single m_LookaheadTime; // 0x5C
		::System::Single m_LookaheadSmoothing; // 0x60
		::System::Boolean m_LookaheadIgnoreY; // 0x64
		::System::Single m_XDamping; // 0x68
		::System::Single m_YDamping; // 0x6C
		::System::Single m_ZDamping; // 0x70
		::System::Boolean m_TargetMovementOnly; // 0x74
		::System::Single m_ScreenX; // 0x78
		::System::Single m_ScreenY; // 0x7C
		::System::Single m_CameraDistance; // 0x80
		::System::Single m_DeadZoneWidth; // 0x84
		::System::Single m_DeadZoneHeight; // 0x88
		::System::Single m_DeadZoneDepth; // 0x8C
		::System::Boolean m_UnlimitedSoftZone; // 0x90
		::System::Single m_SoftZoneWidth; // 0x94
		::System::Single m_SoftZoneHeight; // 0x98
		::System::Single m_BiasX; // 0x9C
		::System::Single m_BiasY; // 0xA0
		::System::Boolean m_CenterOnActivate; // 0xA4
		::Cinemachine::CinemachineFramingTransposer_FramingMode m_GroupFramingMode; // 0xA8
		::Cinemachine::CinemachineFramingTransposer_AdjustmentMode m_AdjustmentMode; // 0xAC
		::System::Single m_GroupFramingSize; // 0xB0
		::System::Single m_MaxDollyIn; // 0xB4
		::System::Single m_MaxDollyOut; // 0xB8
		::System::Single m_MinimumDistance; // 0xBC
		::System::Single m_MaximumDistance; // 0xC0
		::System::Single m_MinimumFOV; // 0xC4
		::System::Single m_MaximumFOV; // 0xC8
		::System::Single m_MinimumOrthoSize; // 0xCC
		::System::Single m_MaximumOrthoSize; // 0xD0
		::UnityEngine::Vector3 m_PreviousCameraPosition; // 0xD4
		::Cinemachine::Utility::PositionPredictor* m_Predictor; // 0xE0
		::UnityEngine::Vector3 _TrackedPoint_k__BackingField; // 0xE8
		::System::Boolean _InheritingPosition_k__BackingField; // 0xF4
		::System::Single m_prevFOV; // 0xF8
		::UnityEngine::Quaternion m_prevRotation; // 0xFC
		::UnityEngine::Bounds _LastBounds_k__BackingField; // 0x10C
		::UnityEngine::Matrix4x4 _LastBoundsMatrix_k__BackingField; // 0x124

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rect get_SoftGuideRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_SOFTGUIDERECT_OFFSET))(this);
		}

		::System::Void set_SoftGuideRect(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_SOFTGUIDERECT_OFFSET))(this, value);
		}

		::UnityEngine::Rect get_HardGuideRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_HARDGUIDERECT_OFFSET))(this);
		}

		::System::Void set_HardGuideRect(::UnityEngine::Rect value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_HARDGUIDERECT_OFFSET))(this, value);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONVALIDATE_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_STAGE_OFFSET))(this);
		}

		::System::Boolean get_BodyAppliesAfterAim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_BODYAPPLIESAFTERAIM_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_TrackedPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_TRACKEDPOINT_OFFSET))(this);
		}

		::System::Void set_TrackedPoint(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_TRACKEDPOINT_OFFSET))(this, value);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* target, ::UnityEngine::Vector3 positionDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET))(this, target, positionDelta);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_FORCECAMERAPOSITION_OFFSET))(this, pos, rot);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* fromCam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams& transitionParams)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET))(this, fromCam, worldUp, deltaTime, transitionParams);
		}

		::System::Boolean get_InheritingPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_INHERITINGPOSITION_OFFSET))(this);
		}

		::System::Void set_InheritingPosition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_INHERITINGPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Rect ScreenToOrtho(::UnityEngine::Rect rScreen, ::System::Single orthoSize, ::System::Single aspect)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SCREENTOORTHO_OFFSET))(this, rScreen, orthoSize, aspect);
		}

		::UnityEngine::Vector3 OrthoOffsetToScreenBounds(::UnityEngine::Vector3 targetPos2D, ::UnityEngine::Rect screenRect)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ORTHOOFFSETTOSCREENBOUNDS_OFFSET))(this, targetPos2D, screenRect);
		}

		::UnityEngine::Bounds get_LastBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDS_OFFSET))(this);
		}

		::System::Void set_LastBounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDS_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 get_LastBoundsMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDSMATRIX_OFFSET))(this);
		}

		::System::Void set_LastBoundsMatrix(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDSMATRIX_OFFSET))(this, value);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}

		::System::Single GetTargetHeight(::UnityEngine::Vector2 boundsSize)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETTARGETHEIGHT_OFFSET))(this, boundsSize);
		}

		::UnityEngine::Vector3 ComputeGroupBounds(::Cinemachine::ICinemachineTargetGroup* group, ::Cinemachine::CameraState& curState)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::ICinemachineTargetGroup*, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_COMPUTEGROUPBOUNDS_OFFSET))(this, group, curState);
		}

		static ::UnityEngine::Bounds GetScreenSpaceGroupBoundingBox(::Cinemachine::ICinemachineTargetGroup* group, ::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion orientation)
		{
			return ((::UnityEngine::Bounds(*)(::Cinemachine::ICinemachineTargetGroup*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET))(group, pos, orientation);
		}
	};
}
