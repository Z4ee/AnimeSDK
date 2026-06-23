#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CAMERAPOSITION_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1E15E7E0)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CAMERAPOSITION_ISINRANGE_OFFSET UNITYSDK_OFFSET(0x1E15EC00)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CAMERAPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E15F070)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionTrigger_CameraPosition_TypeDefinitionIndex = 38119;

	class InteractionTrigger_CameraPosition : public ::System::Object
	{
	public:
		::UnityEngine::Collider* lookAtTarget; // 0x10
		::UnityEngine::Vector3 direction; // 0x18
		::System::Single maxDistance; // 0x24
		::System::Single maxAngle; // 0x28
		::System::Boolean fixYAxis; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CAMERAPOSITION__CTOR_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CAMERAPOSITION_GETROTATION_OFFSET))(this);
		}

		::System::Boolean IsInRange(::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit hit, ::UnityEngine::Transform* trigger, ::System::Single& error)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::RaycastHit, ::UnityEngine::Transform*, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_CAMERAPOSITION_ISINRANGE_OFFSET))(this, raycastFrom, hit, trigger, error);
		}
	};
}
