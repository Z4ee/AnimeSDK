#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_GET_COMPRESSEDSIZE_OFFSET UNITYSDK_OFFSET(0x1F950190)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_GET_CRC_OFFSET UNITYSDK_OFFSET(0x1F9501D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1F9501B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_SET_COMPRESSEDSIZE_OFFSET UNITYSDK_OFFSET(0x1F9501A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_SET_CRC_OFFSET UNITYSDK_OFFSET(0x1F9501E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1F9501C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9501F0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int DescriptorData_TypeDefinitionIndex = 6888;

	class DescriptorData : public ::System::Object
	{
	public:
		::System::Int64 size; // 0x10
		::System::Int64 compressedSize; // 0x18
		::System::Int64 crc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA__CTOR_OFFSET))(this);
		}

		::System::Int64 get_CompressedSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_GET_COMPRESSEDSIZE_OFFSET))(this);
		}

		::System::Void set_CompressedSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_SET_COMPRESSEDSIZE_OFFSET))(this, value);
		}

		::System::Int64 get_Size()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_SET_SIZE_OFFSET))(this, value);
		}

		::System::Int64 get_Crc()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_GET_CRC_OFFSET))(this);
		}

		::System::Void set_Crc(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DESCRIPTORDATA_SET_CRC_OFFSET))(this, value);
		}
	};
}
