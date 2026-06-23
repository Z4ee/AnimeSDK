#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_VEHICLE_VEHICLECONTROLINPUT_GET_NOINPUT_OFFSET UNITYSDK_OFFSET(0x8607E0)

namespace MoleMole::Vehicle
{
	inline static constexpr unsigned int VehicleControlInput_TypeDefinitionIndex = 58843;

	struct alignas(4) VehicleControlInput
	{
		::System::Single inputSteerDegree; // 0x10
		::System::Boolean triggerDash; // 0x14
		::System::Boolean holdDash; // 0x15
		::System::Boolean triggerDodge; // 0x16
		::System::Boolean holdDrift; // 0x17
		::System::Boolean toggleDrift; // 0x18

		::System::Boolean get_NoInput()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VEHICLE_VEHICLECONTROLINPUT_GET_NOINPUT_OFFSET))(this);
		}
	};
}
