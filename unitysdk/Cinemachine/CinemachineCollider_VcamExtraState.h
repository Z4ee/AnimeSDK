#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_ADDPOINTTODEBUGPATH_OFFSET UNITYSDK_OFFSET(0x1E81C2D0)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_APPLYDISTANCESMOOTHING_OFFSET UNITYSDK_OFFSET(0x1E81C2E0)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_RESETDISTANCESMOOTHING_OFFSET UNITYSDK_OFFSET(0x1E81C530)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_UPDATEDISTANCESMOOTHING_OFFSET UNITYSDK_OFFSET(0x1E81C420)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81C650)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollider_VcamExtraState_TypeDefinitionIndex = 34019;

	class CinemachineCollider_VcamExtraState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* debugResolutionPath; // 0x10
		::System::Single colliderDisplacement; // 0x18
		::UnityEngine::Vector3 m_previousDisplacementCorrection; // 0x1C
		::System::Boolean targetObscured; // 0x28
		::System::Single m_SmoothedDistance; // 0x2C
		::System::Single occlusionStartTime; // 0x30
		::UnityEngine::Vector3 m_previousDisplacement; // 0x34
		::System::Single m_SmoothedTime; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE__CTOR_OFFSET))(this);
		}

		::System::Void AddPointToDebugPath(::UnityEngine::Vector3 p)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_ADDPOINTTODEBUGPATH_OFFSET))(this, p);
		}

		::System::Single ApplyDistanceSmoothing(::System::Single distance, ::System::Single smoothingTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_APPLYDISTANCESMOOTHING_OFFSET))(this, distance, smoothingTime);
		}

		::System::Void UpdateDistanceSmoothing(::System::Single distance, ::System::Single smoothingTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_UPDATEDISTANCESMOOTHING_OFFSET))(this, distance, smoothingTime);
		}

		::System::Void ResetDistanceSmoothing(::System::Single smoothingTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_RESETDISTANCESMOOTHING_OFFSET))(this, smoothingTime);
		}
	};
}
