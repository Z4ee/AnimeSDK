#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FOUNDATION_MEMORYHELPER_GETFILESIZE_OFFSET UNITYSDK_OFFSET(0x1BAE68D0)
#define FOUNDATION_MEMORYHELPER_GETMEMORYGB_1_OFFSET UNITYSDK_OFFSET(0x1BAE6F20)
#define FOUNDATION_MEMORYHELPER_GETMEMORYGB_2_OFFSET UNITYSDK_OFFSET(0x1BAE6FD0)
#define FOUNDATION_MEMORYHELPER_GETMEMORYGB_3_OFFSET UNITYSDK_OFFSET(0x1BAE7080)
#define FOUNDATION_MEMORYHELPER_GETMEMORYGB_OFFSET UNITYSDK_OFFSET(0x1BAE6E70)
#define FOUNDATION_MEMORYHELPER_GETMEMORYMB_1_OFFSET UNITYSDK_OFFSET(0x1BAE6C40)
#define FOUNDATION_MEMORYHELPER_GETMEMORYMB_2_OFFSET UNITYSDK_OFFSET(0x1BAE6CF0)
#define FOUNDATION_MEMORYHELPER_GETMEMORYMB_3_OFFSET UNITYSDK_OFFSET(0x1BAE6DA0)
#define FOUNDATION_MEMORYHELPER_GETMEMORYMB_OFFSET UNITYSDK_OFFSET(0x1BAE6B90)
#define FOUNDATION_MEMORYHELPER_GETMEMSIZE_OFFSET UNITYSDK_OFFSET(0x1BAE6970)

namespace Foundation
{
	inline static constexpr unsigned int MemoryHelper_TypeDefinitionIndex = 7859;

	class MemoryHelper : public ::System::Object
	{
	public:
		// static const ::System::Int32 MEMORY_DIVIDER_KB = 0x400; // 0x0
		// static const ::System::Int32 MEMORY_DIVIDER_MB = 0x100000; // 0x0
		// static const ::System::Int32 MEMORY_DIVIDER_GB = 0x40000000; // 0x0

		static ::System::String* GetFileSize(::System::String* fileName)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETFILESIZE_OFFSET))(fileName);
		}

		static ::System::String* GetMemSize(::System::Int64 len, ::System::String* format)
		{
			return ((::System::String*(*)(::System::Int64, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETMEMSIZE_OFFSET))(len, format);
		}

		static ::System::String* GetMemoryMB(::System::UInt32 size)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETMEMORYMB_OFFSET))(size);
		}

		static ::System::String* GetMemoryMB_1(::System::Int32 size)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETMEMORYMB_1_OFFSET))(size);
		}

		static ::System::String* GetMemoryMB_2(::System::Int64 size)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETMEMORYMB_2_OFFSET))(size);
		}

		static ::System::String* GetMemoryMB_3(::System::UInt64 size)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETMEMORYMB_3_OFFSET))(size);
		}

		static ::System::String* GetMemoryGB(::System::UInt32 size)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETMEMORYGB_OFFSET))(size);
		}

		static ::System::String* GetMemoryGB_1(::System::Int32 size)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETMEMORYGB_1_OFFSET))(size);
		}

		static ::System::String* GetMemoryGB_2(::System::Int64 size)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETMEMORYGB_2_OFFSET))(size);
		}

		static ::System::String* GetMemoryGB_3(::System::UInt64 size)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + FOUNDATION_MEMORYHELPER_GETMEMORYGB_3_OFFSET))(size);
		}
	};
}
