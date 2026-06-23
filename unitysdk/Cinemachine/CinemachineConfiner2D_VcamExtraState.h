#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class ConfinerOven_BakedSolution; }

#define CINEMACHINE_CINEMACHINECONFINER2D_VCAMEXTRASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29E130)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineConfiner2D_VcamExtraState_TypeDefinitionIndex = 34024;

	class CinemachineConfiner2D_VcamExtraState : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* m_vcam; // 0x10
		::Cinemachine::ConfinerOven_BakedSolution* m_BakedSolution; // 0x18
		::UnityEngine::Vector3 m_PreviousDisplacement; // 0x20
		::UnityEngine::Vector3 m_DampedDisplacement; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECONFINER2D_VCAMEXTRASTATE__CTOR_OFFSET))(this);
		}
	};
}
