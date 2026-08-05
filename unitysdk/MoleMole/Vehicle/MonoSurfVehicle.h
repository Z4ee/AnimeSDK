#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }

#define MOLEMOLE_VEHICLE_MONOSURFVEHICLE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F17D40)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int MonoSurfVehicle_TypeDefinitionIndex = 50260;

	class MonoSurfVehicle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Animator* driverAnimator; // 0x18
		::UnityEngine::Animator* vehicleAnimator; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_MONOSURFVEHICLE__CTOR_OFFSET))(this);
		}
	};
}
