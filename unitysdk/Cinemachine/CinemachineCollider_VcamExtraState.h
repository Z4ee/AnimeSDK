#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_ADDPOINTTODEBUGPATH_OFFSET UNITYSDK_OFFSET(0x14632600)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_APPLYDISTANCESMOOTHING_OFFSET UNITYSDK_OFFSET(0x14630B50)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_RESETDISTANCESMOOTHING_OFFSET UNITYSDK_OFFSET(0x14630C20)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_UPDATEDISTANCESMOOTHING_OFFSET UNITYSDK_OFFSET(0x14630AB0)
#define CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x14634630)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCollider_VcamExtraState_TypeDefinitionIndex = 36791;

	class CinemachineCollider_VcamExtraState : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* debugResolutionPath; // 0x10
		::System::Single colliderDisplacement; // 0x18
		::System::Single m_SmoothedDistance; // 0x1C
		::System::Boolean targetObscured; // 0x20
		::System::Single m_SmoothedTime; // 0x24
		::System::Single occlusionStartTime; // 0x28
		::UnityEngine::Vector3 m_previousDisplacementCorrection; // 0x2C
		::UnityEngine::Vector3 m_previousDisplacement; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE__CTOR_OFFSET))(this);
		}

		::System::Void AddPointToDebugPath(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_ADDPOINTTODEBUGPATH_OFFSET))(this, a1);
		}

		::System::Single ApplyDistanceSmoothing(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_APPLYDISTANCESMOOTHING_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateDistanceSmoothing(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_UPDATEDISTANCESMOOTHING_OFFSET))(this, a1, a2);
		}

		::System::Void ResetDistanceSmoothing(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECOLLIDER_VCAMEXTRASTATE_RESETDISTANCESMOOTHING_OFFSET))(this, a1);
		}
	};
}
