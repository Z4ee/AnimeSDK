#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/FileUpdateMode.h"
#include "unitysdk/System/Object.h"

namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_BASEARCHIVESTORAGE_GET_UPDATEMODE_OFFSET UNITYSDK_OFFSET(0x1ED0E740)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_BASEARCHIVESTORAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED0E730)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int BaseArchiveStorage_TypeDefinitionIndex = 6885;

	class BaseArchiveStorage : public ::System::Object
	{
	public:
		::ICSharpCode::SharpZipLib::Zip::FileUpdateMode updateMode_; // 0x10

		::System::Void _ctor(::ICSharpCode::SharpZipLib::Zip::FileUpdateMode updateMode)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::FileUpdateMode))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_BASEARCHIVESTORAGE__CTOR_OFFSET))(this, updateMode);
		}

		::ICSharpCode::SharpZipLib::Zip::FileUpdateMode get_UpdateMode()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::FileUpdateMode(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_BASEARCHIVESTORAGE_GET_UPDATEMODE_OFFSET))(this);
		}
	};
}
