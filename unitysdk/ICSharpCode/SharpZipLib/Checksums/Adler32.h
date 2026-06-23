#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E864A20)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_RESET_OFFSET UNITYSDK_OFFSET(0x1E864A40)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1E864AA0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_UPDATE_2_OFFSET UNITYSDK_OFFSET(0x1E864B20)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E864A50)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32__CTOR_OFFSET UNITYSDK_OFFSET(0x1E864A30)

namespace ICSharpCode::SharpZipLib::Checksums
{
	inline static constexpr unsigned int Adler32_TypeDefinitionIndex = 6772;

	class Adler32 : public ::System::Object
	{
	public:
		// static const ::System::UInt32 BASE = 0xFFF1; // 0x0
		::System::UInt32 checksum; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32__CTOR_OFFSET))(this);
		}

		::System::Int64 get_Value()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_GET_VALUE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_RESET_OFFSET))(this);
		}

		::System::Void Update(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_UPDATE_OFFSET))(this, value);
		}

		::System::Void Update_1(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_UPDATE_1_OFFSET))(this, buffer);
		}

		::System::Void Update_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_ADLER32_UPDATE_2_OFFSET))(this, buffer, offset, count);
		}
	};
}
