#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollider_Enum_3_7308758C8F0641E3.h"
#include "unitysdk/MoleMole/Vehicle/VehicleCollider_Enum_3_B92C1798682AC0E0.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine { class Collider; }

#define MOLEMOLE_VEHICLE_VEHICLECOLLIDER_GETRADIUS_OFFSET UNITYSDK_OFFSET(0xC93A1F0)
#define MOLEMOLE_VEHICLE_VEHICLECOLLIDER_ONTRIGGERENTER_OFFSET UNITYSDK_OFFSET(0xC939950)
#define MOLEMOLE_VEHICLE_VEHICLECOLLIDER_ONTRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xC939DF0)
#define MOLEMOLE_VEHICLE_VEHICLECOLLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0xC93A3D0)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleCollider_TypeDefinitionIndex = 43912;

	class VehicleCollider : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::Vehicle::VehicleCollider_Enum_3_7308758C8F0641E3 ColliderType; // 0x18
		::MoleMole::Vehicle::VehicleCollider_Enum_3_B92C1798682AC0E0 MaterialType; // 0x1C
		::System::String* HitSound; // 0x20
		::System::Boolean OverrideMaxSpeed; // 0x28
		::System::Single MaxSpeed; // 0x2C
		::System::Single BaseSpeed; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECOLLIDER__CTOR_OFFSET))(this);
		}

		::System::Void OnTriggerEnter(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECOLLIDER_ONTRIGGERENTER_OFFSET))(this, a1);
		}

		::System::Void OnTriggerExit(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECOLLIDER_ONTRIGGEREXIT_OFFSET))(this, a1);
		}

		::System::Single GetRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECOLLIDER_GETRADIUS_OFFSET))(this);
		}
	};
}
