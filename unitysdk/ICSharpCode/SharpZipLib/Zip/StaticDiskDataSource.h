#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_STATICDISKDATASOURCE_GETSOURCE_OFFSET UNITYSDK_OFFSET(0x1E82F270)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_STATICDISKDATASOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82F260)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int StaticDiskDataSource_TypeDefinitionIndex = 6878;

	class StaticDiskDataSource : public ::System::Object
	{
	public:
		::System::String* fileName_; // 0x10

		::System::Void _ctor(::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_STATICDISKDATASOURCE__CTOR_OFFSET))(this, fileName);
		}

		::System::IO::Stream* GetSource()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_STATICDISKDATASOURCE_GETSOURCE_OFFSET))(this);
		}
	};
}
