#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }

#define SYSTEM_BUFFER_BLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x1BBA5E60)
#define SYSTEM_BUFFER_BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x1BBA5D30)
#define SYSTEM_BUFFER_INDEXOFBYTE_OFFSET UNITYSDK_OFFSET(0x1BBA5A90)
#define SYSTEM_BUFFER_INTERNALBLOCKCOPY_OFFSET UNITYSDK_OFFSET(0x1BBA5A80)
#define SYSTEM_BUFFER_MEMCPY1_OFFSET UNITYSDK_OFFSET(0x1BBA62A0)
#define SYSTEM_BUFFER_MEMCPY2_OFFSET UNITYSDK_OFFSET(0x1BBA6410)
#define SYSTEM_BUFFER_MEMCPY4_OFFSET UNITYSDK_OFFSET(0x1BBA6340)
#define SYSTEM_BUFFER_MEMCPY_1_OFFSET UNITYSDK_OFFSET(0x1BBA5CF0)
#define SYSTEM_BUFFER_MEMCPY_2_OFFSET UNITYSDK_OFFSET(0x1BBA6490)
#define SYSTEM_BUFFER_MEMCPY_OFFSET UNITYSDK_OFFSET(0x1BBA5CB0)
#define SYSTEM_BUFFER_MEMORYCOPY_OFFSET UNITYSDK_OFFSET(0x1BBA61A0)
#define SYSTEM_BUFFER_ZEROMEMORY_OFFSET UNITYSDK_OFFSET(0x1BBA5C50)
#define SYSTEM_BUFFER__BYTELENGTH_OFFSET UNITYSDK_OFFSET(0x1BBA5BD0)

namespace System
{
	inline static constexpr unsigned int Buffer_TypeDefinitionIndex = 206;

	class Buffer : public ::System::Object
	{
	public:
		static ::System::Boolean InternalBlockCopy(::System::Array* a1, ::System::Int32 a2, ::System::Array* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_INTERNALBLOCKCOPY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 IndexOfByte(::System::Byte* a1, ::System::Byte a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::System::Byte*, ::System::Byte, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_INDEXOFBYTE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 _ByteLength(::System::Array* a1)
		{
			return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER__BYTELENGTH_OFFSET))(a1);
		}

		static ::System::Void ZeroMemory(::System::Byte* a1, ::System::Int64 a2)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_ZEROMEMORY_OFFSET))(a1, a2);
		}

		static ::System::Void Memcpy(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Byte* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Byte*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void Memcpy_1(::System::Byte* a1, ::System::Int32 a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 ByteLength(::System::Array* a1)
		{
			return ((::System::Int32(*)(::System::Array*))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_BYTELENGTH_OFFSET))(a1);
		}

		static ::System::Void BlockCopy(::System::Array* a1, ::System::Int32 a2, ::System::Array* a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::System::Array*, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_BLOCKCOPY_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void MemoryCopy(::System::Void* a1, ::System::Void* a2, ::System::Int64 a3, ::System::Int64 a4)
		{
			return ((::System::Void(*)(::System::Void*, ::System::Void*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMORYCOPY_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void memcpy4(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY4_OFFSET))(a1, a2, a3);
		}

		static ::System::Void memcpy2(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY2_OFFSET))(a1, a2, a3);
		}

		static ::System::Void memcpy1(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void Memcpy_2(::System::Byte* a1, ::System::Byte* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::System::Byte*, ::System::Byte*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_BUFFER_MEMCPY_2_OFFSET))(a1, a2, a3);
		}
	};
}
