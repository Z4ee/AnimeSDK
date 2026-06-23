#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/Cinemachine/CinemachineConfiner_Mode.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider2D; }
namespace UnityEngine { class Collider; }

#define CINEMACHINE_CINEMACHINECONFINER_CAMERAWASDISPLACED_OFFSET UNITYSDK_OFFSET(0x1E7AEC30)
#define CINEMACHINE_CINEMACHINECONFINER_CONFINEPOINT_OFFSET UNITYSDK_OFFSET(0x1E7AF7E0)
#define CINEMACHINE_CINEMACHINECONFINER_CONFINESCREENEDGES_OFFSET UNITYSDK_OFFSET(0x1E7AF200)
#define CINEMACHINE_CINEMACHINECONFINER_CONNECTTOVCAM_OFFSET UNITYSDK_OFFSET(0x1E7AED00)
#define CINEMACHINE_CINEMACHINECONFINER_GETCAMERADISPLACEMENTDISTANCE_OFFSET UNITYSDK_OFFSET(0x1E7AEC90)
#define CINEMACHINE_CINEMACHINECONFINER_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0x1E7AEFE0)
#define CINEMACHINE_CINEMACHINECONFINER_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E7AED10)
#define CINEMACHINE_CINEMACHINECONFINER_INVALIDATEPATHCACHE_OFFSET UNITYSDK_OFFSET(0x1E7AFCF0)
#define CINEMACHINE_CINEMACHINECONFINER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E7AECF0)
#define CINEMACHINE_CINEMACHINECONFINER_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0x1E7AEFF0)
#define CINEMACHINE_CINEMACHINECONFINER_VALIDATEPATHCACHE_OFFSET UNITYSDK_OFFSET(0x1E7AFD10)
#define CINEMACHINE_CINEMACHINECONFINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B0640)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner_TypeDefinitionIndex = 34020;

	class CinemachineConfiner : public ::Cinemachine::CinemachineExtension
	{
	public:
		::Cinemachine::CinemachineConfiner_Mode m_ConfineMode; // 0x28
		::UnityEngine::Collider* m_BoundingVolume; // 0x30
		::UnityEngine::Collider2D* m_BoundingShape2D; // 0x38
		::UnityEngine::Collider2D* m_BoundingShape2DCache; // 0x40
		::System::Boolean m_ConfineScreenEdges; // 0x48
		::System::Single m_Damping; // 0x4C
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>* m_pathCache; // 0x50
		::System::Int32 m_pathTotalPointCount; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER__CTOR_OFFSET))(this);
		}

		::System::Boolean CameraWasDisplaced(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_CAMERAWASDISPLACED_OFFSET))(this, vcam);
		}

		::System::Single GetCameraDisplacementDistance(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_GETCAMERADISPLACEMENTDISTANCE_OFFSET))(this, vcam);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_ONVALIDATE_OFFSET))(this);
		}

		::System::Void ConnectToVcam(::System::Boolean connect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_CONNECTTOVCAM_OFFSET))(this, connect);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_GET_ISVALID_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CinemachineCore_Stage stage, ::Cinemachine::CameraState& state, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_POSTPIPELINESTAGECALLBACK_OFFSET))(this, vcam, stage, state, deltaTime);
		}

		::System::Void InvalidatePathCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_INVALIDATEPATHCACHE_OFFSET))(this);
		}

		::System::Boolean ValidatePathCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_VALIDATEPATHCACHE_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConfinePoint(::UnityEngine::Vector3 camPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_CONFINEPOINT_OFFSET))(this, camPos);
		}

		::UnityEngine::Vector3 ConfineScreenEdges(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::Cinemachine::CameraState& state)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER_CONFINESCREENEDGES_OFFSET))(this, vcam, state);
		}
	};
}
