#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy::Controllers { class CurvyController; }

#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ORIENTATIONDAMPER_DAMPENVECTOR_OFFSET UNITYSDK_OFFSET(0x1E54E470)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ORIENTATIONDAMPER_DAMP_OFFSET UNITYSDK_OFFSET(0x1E54DF80)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ORIENTATIONDAMPER_RESET_OFFSET UNITYSDK_OFFSET(0x1E54E540)
#define FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ORIENTATIONDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E54DF70)

namespace FluffyUnderware::Curvy::Controllers
{
	inline static constexpr unsigned int CurvyController_OrientationDamper_TypeDefinitionIndex = 39561;

	class CurvyController_OrientationDamper : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::Controllers::CurvyController* controller; // 0x10
		::UnityEngine::Vector3 UpDampingVelocity; // 0x18
		::UnityEngine::Vector3 DirectionDampingVelocity; // 0x24

		::System::Void _ctor(::FluffyUnderware::Curvy::Controllers::CurvyController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::Controllers::CurvyController*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ORIENTATIONDAMPER__CTOR_OFFSET))(this, controller);
		}

		::UnityEngine::Quaternion Damp(::UnityEngine::Quaternion sourceOrientation, ::UnityEngine::Vector3 targetForward, ::UnityEngine::Vector3 targetUp, ::System::Single deltaTime)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ORIENTATIONDAMPER_DAMP_OFFSET))(this, sourceOrientation, targetForward, targetUp, deltaTime);
		}

		::UnityEngine::Vector3 DampenVector(::UnityEngine::Vector3 current, ::UnityEngine::Vector3 target, ::System::Single deltaTime, ::System::Single dampingTime, ::UnityEngine::Vector3& velocity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ORIENTATIONDAMPER_DAMPENVECTOR_OFFSET))(this, current, target, deltaTime, dampingTime, velocity);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CONTROLLERS_CURVYCONTROLLER_ORIENTATIONDAMPER_RESET_OFFSET))(this);
		}
	};
}
