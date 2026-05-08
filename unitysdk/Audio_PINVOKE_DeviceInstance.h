#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int Audio_PINVOKE_DeviceInstance_TypeDefinitionIndex = 67777;

struct alignas(4) Audio_PINVOKE_DeviceInstance
{
	::System::Int32 Size; // 0x10
	::System::Guid InstanceGuid; // 0x14
	::System::Guid ProductGuid; // 0x24
};
