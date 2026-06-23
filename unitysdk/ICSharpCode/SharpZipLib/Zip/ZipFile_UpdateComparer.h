#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UPDATECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E78EEA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UPDATECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78EFB0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipFile_UpdateComparer_TypeDefinitionIndex = 6870;

	class ZipFile_UpdateComparer : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UPDATECOMPARER__CTOR_OFFSET))(this);
		}

		::System::Int32 Compare(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_UPDATECOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
