#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA_GET_CRCPATCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1D68E5D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA_GET_SIZEPATCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1D68E5B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA_SET_CRCPATCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1D68E5E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA_SET_SIZEPATCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1D68E5C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E5F0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int EntryPatchData_TypeDefinitionIndex = 6885;

	class EntryPatchData : public ::System::Object
	{
	public:
		::System::Int64 crcPatchOffset_; // 0x10
		::System::Int64 sizePatchOffset_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA__CTOR_OFFSET))(this);
		}

		::System::Int64 get_SizePatchOffset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA_GET_SIZEPATCHOFFSET_OFFSET))(this);
		}

		::System::Void set_SizePatchOffset(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA_SET_SIZEPATCHOFFSET_OFFSET))(this, value);
		}

		::System::Int64 get_CrcPatchOffset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA_GET_CRCPATCHOFFSET_OFFSET))(this);
		}

		::System::Void set_CrcPatchOffset(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ENTRYPATCHDATA_SET_CRCPATCHOFFSET_OFFSET))(this, value);
		}
	};
}
