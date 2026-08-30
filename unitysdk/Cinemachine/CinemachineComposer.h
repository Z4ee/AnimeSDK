#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComponentBase.h"
#include "unitysdk/Cinemachine/CinemachineComposer_FovCache.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine::Utility { class PositionPredictor; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINECOMPOSER_CLAMPVERTICALBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C4FFD0)
#define CINEMACHINE_CINEMACHINECOMPOSER_FORCECAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0x18C4E690)
#define CINEMACHINE_CINEMACHINECOMPOSER_GETLOOKATPOINTANDSETTRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x18C4DD00)
#define CINEMACHINE_CINEMACHINECOMPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x18C4E6B0)
#define CINEMACHINE_CINEMACHINECOMPOSER_GET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x18C4F4B0)
#define CINEMACHINE_CINEMACHINECOMPOSER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x18C4DB60)
#define CINEMACHINE_CINEMACHINECOMPOSER_GET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x18C4F480)
#define CINEMACHINE_CINEMACHINECOMPOSER_GET_STAGE_OFFSET UNITYSDK_OFFSET(0x18C4DCB0)
#define CINEMACHINE_CINEMACHINECOMPOSER_GET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x18C4DCC0)
#define CINEMACHINE_CINEMACHINECOMPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x18C4E8D0)
#define CINEMACHINE_CINEMACHINECOMPOSER_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x18C4E100)
#define CINEMACHINE_CINEMACHINECOMPOSER_ONWORLDWARPED_OFFSET UNITYSDK_OFFSET(0x18C4E280)
#define CINEMACHINE_CINEMACHINECOMPOSER_PREPIPELINEMUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x18C4E6C0)
#define CINEMACHINE_CINEMACHINECOMPOSER_ROTATETOSCREENBOUNDS_OFFSET UNITYSDK_OFFSET(0x18C4F810)
#define CINEMACHINE_CINEMACHINECOMPOSER_SET_HARDGUIDERECT_OFFSET UNITYSDK_OFFSET(0x18C4FEA0)
#define CINEMACHINE_CINEMACHINECOMPOSER_SET_SOFTGUIDERECT_OFFSET UNITYSDK_OFFSET(0x18C4FDD0)
#define CINEMACHINE_CINEMACHINECOMPOSER_SET_TRACKEDPOINT_OFFSET UNITYSDK_OFFSET(0x18C4DCE0)
#define CINEMACHINE_CINEMACHINECOMPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C50300)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineComposer_TypeDefinitionIndex = 38474;

	class CinemachineComposer : public ::Cinemachine::CinemachineComponentBase
	{
	public:
		::UnityEngine::Vector3 m_TrackedObjectOffset; // 0x50
		::System::Single m_LookaheadTime; // 0x5C
		::System::Single m_LookaheadSmoothing; // 0x60
		::System::Boolean m_LookaheadIgnoreY; // 0x64
		::System::Single m_HorizontalDamping; // 0x68
		::System::Single m_VerticalDamping; // 0x6C
		::System::Single m_ScreenX; // 0x70
		::System::Single m_ScreenY; // 0x74
		::System::Single m_DeadZoneWidth; // 0x78
		::System::Single m_DeadZoneHeight; // 0x7C
		::System::Single m_SoftZoneWidth; // 0x80
		::System::Single m_SoftZoneHeight; // 0x84
		::System::Single m_BiasX; // 0x88
		::System::Single m_BiasY; // 0x8C
		::System::Boolean m_CenterOnActivate; // 0x90
		::UnityEngine::Vector3 _TrackedPoint_k__BackingField; // 0x94
		::UnityEngine::Vector3 m_CameraPosPrevFrame; // 0xA0
		::UnityEngine::Vector3 m_LookAtPrevFrame; // 0xAC
		::UnityEngine::Vector2 m_ScreenOffsetPrevFrame; // 0xB8
		::UnityEngine::Quaternion m_CameraOrientationPrevFrame; // 0xC0
		::Cinemachine::Utility::PositionPredictor* m_Predictor; // 0xD0
		::Cinemachine::CinemachineComposer_FovCache mCache; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::CinemachineCore_Stage get_Stage()
		{
			return ((::Cinemachine::CinemachineCore_Stage(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_STAGE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_TrackedPoint()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_TRACKEDPOINT_OFFSET))(this);
		}

		::System::Void set_TrackedPoint(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_SET_TRACKEDPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetLookAtPointAndSetTrackedPoint(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GETLOOKATPOINTANDSETTRACKEDPOINT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void OnWorldWarped(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_ONWORLDWARPED_OFFSET))(this, a1, a2);
		}

		::System::Void ForceCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_FORCECAMERAPOSITION_OFFSET))(this, a1, a2);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void PrePipelineMutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_PREPIPELINEMUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_MUTATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rect get_SoftGuideRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_SOFTGUIDERECT_OFFSET))(this);
		}

		::System::Void set_SoftGuideRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_SET_SOFTGUIDERECT_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_HardGuideRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_GET_HARDGUIDERECT_OFFSET))(this);
		}

		::System::Void set_HardGuideRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_SET_HARDGUIDERECT_OFFSET))(this, a1);
		}

		::System::Void RotateToScreenBounds(::Cinemachine::CameraState& a1, ::UnityEngine::Rect a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion& a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::UnityEngine::Quaternion&, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_ROTATETOSCREENBOUNDS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean ClampVerticalBounds(::UnityEngine::Rect& a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOMPOSER_CLAMPVERTICALBOUNDS_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
