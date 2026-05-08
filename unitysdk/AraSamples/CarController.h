#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace AraSamples { class AxleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class WheelCollider; }

#define ARASAMPLES_CARCONTROLLER_APPLYLOCALPOSITIONTOVISUALS_OFFSET UNITYSDK_OFFSET(0x1BED2FA0)
#define ARASAMPLES_CARCONTROLLER_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1BED30B0)
#define ARASAMPLES_CARCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED32D0)

namespace AraSamples
{
	inline static constexpr unsigned int CarController_TypeDefinitionIndex = 31366;

	class CarController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::AraSamples::AxleInfo*>* axleInfos; // 0x18
		::System::Single maxMotorTorque; // 0x20
		::System::Single maxSteeringAngle; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_CARCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void ApplyLocalPositionToVisuals(::UnityEngine::WheelCollider* collider)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::WheelCollider*))((::PBYTE)hIl2Cpp + ARASAMPLES_CARCONTROLLER_APPLYLOCALPOSITIONTOVISUALS_OFFSET))(this, collider);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARASAMPLES_CARCONTROLLER_FIXEDUPDATE_OFFSET))(this);
		}
	};
}
