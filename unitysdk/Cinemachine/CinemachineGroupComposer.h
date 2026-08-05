#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineComposer.h"
#include "unitysdk/Cinemachine/CinemachineGroupComposer_AdjustmentMode.h"
#include "unitysdk/Cinemachine/CinemachineGroupComposer_FramingMode.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class ICinemachineTargetGroup; }

#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1F948210)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET UNITYSDK_OFFSET(0x1F949230)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETTARGETHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F949820)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x1F9481B0)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F948170)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_MUTATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x1F948230)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F9480B0)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_SET_LASTBOUNDSMATRIX_OFFSET UNITYSDK_OFFSET(0x1F9481E0)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER_SET_LASTBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F948190)
#define CINEMACHINE_CINEMACHINEGROUPCOMPOSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F949950)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineGroupComposer_TypeDefinitionIndex = 34703;

	class CinemachineGroupComposer : public ::Cinemachine::CinemachineComposer
	{
	public:
		::System::Single m_GroupFramingSize; // 0x128
		::Cinemachine::CinemachineGroupComposer_FramingMode m_FramingMode; // 0x12C
		::System::Single m_FrameDamping; // 0x130
		::Cinemachine::CinemachineGroupComposer_AdjustmentMode m_AdjustmentMode; // 0x134
		::System::Single m_MaxDollyIn; // 0x138
		::System::Single m_MaxDollyOut; // 0x13C
		::System::Single m_MinimumDistance; // 0x140
		::System::Single m_MaximumDistance; // 0x144
		::System::Single m_MinimumFOV; // 0x148
		::System::Single m_MaximumFOV; // 0x14C
		::System::Single m_MinimumOrthoSize; // 0x150
		::System::Single m_MaximumOrthoSize; // 0x154
		::System::Single m_prevFramingDistance; // 0x158
		::System::Single m_prevFOV; // 0x15C
		::UnityEngine::Bounds _LastBounds_k__BackingField; // 0x160
		::UnityEngine::Matrix4x4 _LastBoundsMatrix_k__BackingField; // 0x178

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_ONVALIDATE_OFFSET))(this);
		}

		::UnityEngine::Bounds get_LastBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GET_LASTBOUNDS_OFFSET))(this);
		}

		::System::Void set_LastBounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_SET_LASTBOUNDS_OFFSET))(this, value);
		}

		::UnityEngine::Matrix4x4 get_LastBoundsMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GET_LASTBOUNDSMATRIX_OFFSET))(this);
		}

		::System::Void set_LastBoundsMatrix(::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_SET_LASTBOUNDSMATRIX_OFFSET))(this, value);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void MutateCameraState(::Cinemachine::CameraState& curState, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_MUTATECAMERASTATE_OFFSET))(this, curState, deltaTime);
		}

		::System::Single GetTargetHeight(::UnityEngine::Vector2 boundsSize)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETTARGETHEIGHT_OFFSET))(this, boundsSize);
		}

		static ::UnityEngine::Bounds GetScreenSpaceGroupBoundingBox(::Cinemachine::ICinemachineTargetGroup* group, ::UnityEngine::Matrix4x4 observer, ::UnityEngine::Vector3& newFwd)
		{
			return ((::UnityEngine::Bounds(*)(::Cinemachine::ICinemachineTargetGroup*, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEGROUPCOMPOSER_GETSCREENSPACEGROUPBOUNDINGBOX_OFFSET))(group, observer, newFwd);
		}
	};
}
