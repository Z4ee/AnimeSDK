#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Tar { class TarEntry; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_ENTRYFACTORYADAPTER_CREATEENTRYFROMFILE_OFFSET UNITYSDK_OFFSET(0x1C45EE60)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_ENTRYFACTORYADAPTER_CREATEENTRY_1_OFFSET UNITYSDK_OFFSET(0x1C45EEF0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_ENTRYFACTORYADAPTER_CREATEENTRY_OFFSET UNITYSDK_OFFSET(0x1C45EDD0)
#define ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_ENTRYFACTORYADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45EF80)

namespace ICSharpCode::SharpZipLib::Tar
{
	inline static constexpr unsigned int TarInputStream_EntryFactoryAdapter_TypeDefinitionIndex = 6689;

	class TarInputStream_EntryFactoryAdapter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_ENTRYFACTORYADAPTER__CTOR_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntry(::System::String* name)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_ENTRYFACTORYADAPTER_CREATEENTRY_OFFSET))(this, name);
		}

		::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntryFromFile(::System::String* fileName)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_ENTRYFACTORYADAPTER_CREATEENTRYFROMFILE_OFFSET))(this, fileName);
		}

		::ICSharpCode::SharpZipLib::Tar::TarEntry* CreateEntry_1(::Il2CppArray<::System::Byte>* headerBuffer)
		{
			return ((::ICSharpCode::SharpZipLib::Tar::TarEntry*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_TAR_TARINPUTSTREAM_ENTRYFACTORYADAPTER_CREATEENTRY_1_OFFSET))(this, headerBuffer);
		}
	};
}
