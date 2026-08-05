#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPENTRYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1FB750D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPENTRYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1FB75120)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPENTRYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1FB75110)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPENTRYENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB750C0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipFile_ZipEntryEnumerator_TypeDefinitionIndex = 6877;

	class ZipFile_ZipEntryEnumerator : public ::System::Object
	{
	public:
		::Il2CppArray<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>* array; // 0x10
		::System::Int32 index; // 0x18

		::System::Void _ctor(::Il2CppArray<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>* entries)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::ICSharpCode::SharpZipLib::Zip::ZipEntry*>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPENTRYENUMERATOR__CTOR_OFFSET))(this, entries);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPENTRYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPENTRYENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPENTRYENUMERATOR_MOVENEXT_OFFSET))(this);
		}
	};
}
