#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x14ECA10)
#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x14ECA90)
#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x14ECA00)
#define CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_VALIDATE_OFFSET UNITYSDK_OFFSET(0x14EC000)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineInputAxisDriver_TypeDefinitionIndex = 30860;

	struct alignas(8) CinemachineInputAxisDriver
	{
		// static const ::System::Single Epsilon; // 0x0
		::System::Single multiplier; // 0x10
		::System::Single accelTime; // 0x14
		::System::Single decelTime; // 0x18
		::System::String* name; // 0x20
		::System::Single inputValue; // 0x28
		::System::Single mCurrentSpeed; // 0x2C

		::System::Void Validate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_VALIDATE_OFFSET))(this);
		}

		/*
		::System::Boolean Update(::System::Single deltaTime, ::Cinemachine::AxisBase& axis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Cinemachine::AxisBase&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_OFFSET))(this, deltaTime, axis);
		}
		*/

		/*
		::System::Single ClampValue(::Cinemachine::AxisBase& axis, ::System::Single v)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::AxisBase&, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_CLAMPVALUE_OFFSET))(this, axis, v);
		}
		*/

		/*
		::System::Boolean Update_1(::System::Single deltaTime, ::Cinemachine::AxisState& axis)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::Cinemachine::AxisState&))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEINPUTAXISDRIVER_UPDATE_1_OFFSET))(this, deltaTime, axis);
		}
		*/
	};
}
