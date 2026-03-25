#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_ADDPOINTTODEBUGPATH_OFFSET UNITYSDK_OFFSET(0x119A4AE0)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_APPLYDISTANCESMOOTHING_OFFSET UNITYSDK_OFFSET(0x119A3030)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_RESETDISTANCESMOOTHING_OFFSET UNITYSDK_OFFSET(0x119A3100)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_UPDATEDISTANCESMOOTHING_OFFSET UNITYSDK_OFFSET(0x119A2F90)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x119A6B20)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollider_VcamExtraState_TypeDefinitionIndex = 30771;

	class CinemachineCollider_VcamExtraState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* debugResolutionPath; // 0x10
		::System::Single m_SmoothedDistance; // 0x18
		::UnityEngine::Vector3 m_previousDisplacementCorrection; // 0x1C
		::UnityEngine::Vector3 m_previousDisplacement; // 0x28
		::System::Single occlusionStartTime; // 0x34
		::System::Boolean targetObscured; // 0x38
		::System::Single colliderDisplacement; // 0x3C
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
