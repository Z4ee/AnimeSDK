#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D6862C0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_RESET_OFFSET UNITYSDK_OFFSET(0x1D6862B0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1D686380)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_UPDATE_2_OFFSET UNITYSDK_OFFSET(0x1D686400)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D6862D0)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D686560)
#define ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D67D890)

namespace ICSharpCode::SharpZipLib::Checksums
{
	inline static constexpr unsigned int StrangeCRC_TypeDefinitionIndex = 6774;

	class StrangeCRC : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_crc32Table()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(StrangeCRC_TypeDefinitionIndex)->GetStaticField(0x5C60);
		}
		::System::Int32 globalCrc; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_RESET_OFFSET))(this);
		}

		::System::Int64 get_Value()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_GET_VALUE_OFFSET))(this);
		}

		::System::Void Update(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_UPDATE_OFFSET))(this, value);
		}

		::System::Void Update_1(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_UPDATE_1_OFFSET))(this, buffer);
		}

		::System::Void Update_2(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CHECKSUMS_STRANGECRC_UPDATE_2_OFFSET))(this, buffer, offset, count);
		}
	};
}
