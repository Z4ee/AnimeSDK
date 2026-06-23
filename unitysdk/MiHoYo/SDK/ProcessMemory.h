#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PROCESSMEMORY_GETPROCESSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1BBCD610)
#define MIHOYO_SDK_PROCESSMEMORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCD990)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProcessMemory_TypeDefinitionIndex = 19709;

	class ProcessMemory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROCESSMEMORY__CTOR_OFFSET))(this);
		}

		static ::System::Int64 GetProcessMemorySize(::System::Int32 processId)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROCESSMEMORY_GETPROCESSMEMORYSIZE_OFFSET))(processId);
		}
	};
}
