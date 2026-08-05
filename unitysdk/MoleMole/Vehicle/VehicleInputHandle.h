#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vehicle/VehicleControlInput.h"
#include "unitysdk/System/Object.h"

class Class_1_B7E341C5F1A6F199;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE_METHOD_1_F391094F7C731F97_OFFSET UNITYSDK_OFFSET(0x11E568A0)
#define MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE_METHOD_1_F74E03079DF2932E_OFFSET UNITYSDK_OFFSET(0x11E56AC0)
#define MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E56890)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleInputHandle_TypeDefinitionIndex = 57515;

	class VehicleInputHandle : public ::System::Object
	{
	public:
		::MoleMole::Vehicle::VehicleControlInput _cacheButtonInput; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_F391094F7C731F97(::MoleMole::Vehicle::VehicleControlInput& a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleControlInput&, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE_METHOD_1_F391094F7C731F97_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_F74E03079DF2932E(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLEINPUTHANDLE_METHOD_1_F74E03079DF2932E_OFFSET))(this, a1, a2);
		}
	};
}
