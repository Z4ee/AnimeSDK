#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineConfiner2D_ShapeCache.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace UnityEngine { class Collider2D; }

#define CINEMACHINE_CINEMACHINECONFINER2D_CALCULATEHALFFRUSTUMHEIGHT_OFFSET UNITYSDK_OFFSET(0x1E699F80)
#define CINEMACHINE_CINEMACHINECONFINER2D_INVALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x1E699740)
#define CINEMACHINE_CINEMACHINECONFINER2D_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E699FE0)
#define CINEMACHINE_CINEMACHINECONFINER2D_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E699820)
#define CINEMACHINE_CINEMACHINECONFINER2D_RESET_OFFSET UNITYSDK_OFFSET(0x1E69A000)
#define CINEMACHINE_CINEMACHINECONFINER2D_VALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x1E6997E0)
#define CINEMACHINE_CINEMACHINECONFINER2D__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69A010)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner2D_TypeDefinitionIndex = 34023;

	class CinemachineConfiner2D : public ::Cinemachine::CinemachineExtension
	{
	public:
		// static const ::System::Single k_cornerAngleTreshold; // 0x0
		::UnityEngine::Collider2D* m_BoundingShape2D; // 0x28
		::System::Single m_Damping; // 0x30
		::System::Single m_MaxWindowSize; // 0x34
		::System::Single m_MaxComputationTimePerFrameInSeconds; // 0x38
		::Cinemachine::CinemachineConfiner2D_ShapeCache m_shapeCache; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D__CTOR_OFFSET))(this);
		}

		::System::Void InvalidateCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_INVALIDATECACHE_OFFSET))(this);
		}

		::System::Boolean ValidateCache(::System::Single cameraAspectRatio)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_VALIDATECACHE_OFFSET))(this, cameraAspectRatio);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
		}

		::System::Single CalculateHalfFrustumHeight(::Cinemachine::CameraState& state, ::System::Single& cameraPosLocalZ)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_CALCULATEHALFFRUSTUMHEIGHT_OFFSET))(this, state, cameraPosLocalZ);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_ONVALIDATE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_RESET_OFFSET))(this);
		}
	};
}
