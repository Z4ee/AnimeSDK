#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/NAPInput/Attitude.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_NAPINPUT_IMUDATA_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0x1081C750)

namespace MoleMole::NAPInput
{
	inline static constexpr unsigned int IMUData_TypeDefinitionIndex = 56148;

	struct alignas(4) IMUData
	{
		::MoleMole::NAPInput::Attitude Attitude; // 0x10
		::UnityEngine::Vector3 Gyro; // 0x2C
		::UnityEngine::Vector3 Accel; // 0x38
		::System::Single DeltaTime; // 0x44

		static ::MoleMole::NAPInput::IMUData get_Empty()
		{
			return ((::MoleMole::NAPInput::IMUData(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_NAPINPUT_IMUDATA_GET_EMPTY_OFFSET))();
		}
	};
}
