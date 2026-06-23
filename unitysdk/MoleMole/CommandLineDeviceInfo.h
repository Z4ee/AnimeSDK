#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineDeviceInfo_TypeDefinitionIndex = 49455;

	struct alignas(8) CommandLineDeviceInfo
	{
		::System::String* operatingSystem; // 0x10
		::System::String* deviceName; // 0x18
		::System::String* deviceModel; // 0x20
		::System::String* graphicsDeviceName; // 0x28
		::System::String* graphicsDeviceType; // 0x30
		::System::String* graphicsDeviceVendor; // 0x38
		::System::String* graphicsDeviceVersion; // 0x40
		::System::Int32 graphicsMemorySize; // 0x48
		::System::Int32 processorCount; // 0x4C
		::System::Int32 processorFrequency; // 0x50
		::System::String* processorType; // 0x58
		::System::Int32 systemMemorySize; // 0x60
		::System::String* safeArea; // 0x68
		::System::Boolean isRichtapEffectSupported; // 0x70
		::System::Boolean isVibratorEffectSupported; // 0x71
	};
}
