#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_DYNAMICDISKDATASOURCE_GETSOURCE_OFFSET UNITYSDK_OFFSET(0x1B2C6200)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_DYNAMICDISKDATASOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2C61F0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int DynamicDiskDataSource_TypeDefinitionIndex = 6748;

	class DynamicDiskDataSource : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DYNAMICDISKDATASOURCE__CTOR_OFFSET))(this);
		}

		::System::IO::Stream* GetSource(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry, ::System::String* name)
		{
			return ((::System::IO::Stream*(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_DYNAMICDISKDATASOURCE_GETSOURCE_OFFSET))(this, entry, name);
		}
	};
}
