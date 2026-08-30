#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define INCONTROL_INPUTDEVICE_ANALOGSNAPSHOTENTRY_TRACKMINMAXVALUE_OFFSET UNITYSDK_OFFSET(0x3AF1510)

namespace InControl
{
	inline static constexpr unsigned int InputDevice_AnalogSnapshotEntry_TypeDefinitionIndex = 39539;

	struct alignas(4) InputDevice_AnalogSnapshotEntry
	{
		::System::Single value; // 0x10
		::System::Single maxValue; // 0x14
		::System::Single minValue; // 0x18

		::System::Void TrackMinMaxValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INCONTROL_INPUTDEVICE_ANALOGSNAPSHOTENTRY_TRACKMINMAXVALUE_OFFSET))(this, a1);
		}
	};
}
