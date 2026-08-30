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

#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_COMPUTEGROUPBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C57D50)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x18C55F90)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x18C55FB0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x18C588A0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETTARGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x18C58330)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_BODYAPPLIESAFTERAIM_OFFSET UNITYSDK_OFFSET(0x18C55DF0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x18C55A50)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_INHERITINGPOSITION_OFFSET UNITYSDK_OFFSET(0x18C56140)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x18C55C90)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x18C562B0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C56270)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x18C55950)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x18C55DE0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x18C55E00)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x18C56310)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x18C55E40)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x18C55FD0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x18C55BC0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ORTHOOFFSETTOSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C561F0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SCREENTOORTHO_OFFSET UNITYSDK_OFFSET(0x18C56160)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x18C55A90)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_INHERITINGPOSITION_OFFSET UNITYSDK_OFFSET(0x18C56150)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x18C562E0)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C56290)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x18C55980)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x18C55E20)
#define CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C59870)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineFramingTransposer_TypeDefinitionIndex = 38476;

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

		::System::Void set_SoftGuideRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_SOFTGUIDERECT_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_HardGuideRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_HARDGUIDERECT_OFFSET))(this);
		}

		::System::Void set_HardGuideRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_HARDGUIDERECT_OFFSET))(this, a1);
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

		::System::Void set_TrackedPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_TRACKEDPOINT_OFFSET))(this, a1);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Boolean OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single, ::Cinemachine::CinemachineVirtualCameraBase_TransitionParams&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_InheritingPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_INHERITINGPOSITION_OFFSET))(this);
		}

		::System::Void set_InheritingPosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_INHERITINGPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Rect ScreenToOrtho(::UnityEngine::Rect a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::UnityEngine::Rect(*)(::PVOID, ::UnityEngine::Rect, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SCREENTOORTHO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 OrthoOffsetToScreenBounds(::UnityEngine::Vector3 a1, ::UnityEngine::Rect a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_ORTHOOFFSETTOSCREENBOUNDS_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Bounds get_LastBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDS_OFFSET))(this);
		}

		::System::Void set_LastBounds(::UnityEngine::Bounds a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDS_OFFSET))(this, a1);
		}

		::UnityEngine::Matrix4x4 get_LastBoundsMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GET_LASTBOUNDSMATRIX_OFFSET))(this);
		}

		::System::Void set_LastBoundsMatrix(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_SET_LASTBOUNDSMATRIX_OFFSET))(this, a1);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_MUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Single GetTargetHeight(::UnityEngine::Vector2 a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETTARGETHEIGHT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 ComputeGroupBounds(::Cinemachine::ICinemachineTargetGroup* a1, ::Cinemachine::CameraState& a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::ICinemachineTargetGroup*, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_COMPUTEGROUPBOUNDS_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Bounds GetScreenSpaceGroupBoundingBox(::Cinemachine::ICinemachineTargetGroup* a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Quaternion a3)
		{
			return ((::UnityEngine::Bounds(*)(::Cinemachine::ICinemachineTargetGroup*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEFRAMINGTRANSPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET))(a1, a2, a3);
		}
	};
}
