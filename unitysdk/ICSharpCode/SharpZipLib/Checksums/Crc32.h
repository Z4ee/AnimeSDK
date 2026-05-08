#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_COMPUTECRC32_OFFSET UNITYSDK_OFFSET(0x1C553670)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C553710)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_RESET_OFFSET UNITYSDK_OFFSET(0x1C553730)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C553720)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1C5537F0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_UPDATE_2_OFFSET UNITYSDK_OFFSET(0x1C553870)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C553740)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C553AA0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32__CTOR_OFFSET UNITYSDK_OFFSET(0x1C553A90)

namespace ICSharpCode::SharpZipLib::Checksums
{
	inline static constexpr unsigned int Crc32_TypeDefinitionIndex = 6642;

	class Crc32 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_CrcTable()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Crc32_TypeDefinitionIndex)->GetStaticField(0x5AE0);
		}
		// static const ::System::UInt32 CrcSeed = 0xFFFFFFFF; // 0x0
		::System::UInt32 crc; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32__CCTOR_OFFSET))();
		}

		static ::System::UInt32 ComputeCrc32(::System::UInt32 oldCrc, ::System::Byte value)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_COMPUTECRC32_OFFSET))(oldCrc, value);
		}

		::System::Int64 get_Value()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_RESET_OFFSET))(this);
		}

		::System::Void Update(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_UPDATE_OFFSET))(this, value);
		}

		::System::Void Update_1(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_UPDATE_1_OFFSET))(this, buffer);
		}

		::System::Void Update_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_CRC32_UPDATE_2_OFFSET))(this, buffer, offset, count);
		}
	};
}
