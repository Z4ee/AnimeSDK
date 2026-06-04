#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PROCESSMEMORY_GETPROCESSMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x183FBDB0)
#define MIHOYO_SDK_PROCESSMEMORY__CTOR_OFFSET UNITYSDK_OFFSET(0x183FC1F0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProcessMemory_TypeDefinitionIndex = 7894;

	class ProcessMemory : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROCESSMEMORY__CTOR_OFFSET))(this);
		}

		static ::System::Int64 GetProcessMemorySize(::System::Int32 a1)
		{
			return ((::System::Int64(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROCESSMEMORY_GETPROCESSMEMORYSIZE_OFFSET))(a1);
		}
	};
}
