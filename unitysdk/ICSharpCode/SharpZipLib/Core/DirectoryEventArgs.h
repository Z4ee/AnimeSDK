#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Core/ScanEventArgs.h"

namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_DIRECTORYEVENTARGS_GET_HASMATCHINGFILES_OFFSET UNITYSDK_OFFSET(0x1C45C4C0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_DIRECTORYEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C45C450)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int DirectoryEventArgs_TypeDefinitionIndex = 6646;

	class DirectoryEventArgs : public ::ICSharpCode::SharpZipLib::Core::ScanEventArgs
	{
	public:
		::System::Boolean hasMatchingFiles_; // 0x20

		::System::Void _ctor(::System::String* name, ::System::Boolean hasMatchingFiles)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_DIRECTORYEVENTARGS__CTOR_OFFSET))(this, name, hasMatchingFiles);
		}

		::System::Boolean get_HasMatchingFiles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_DIRECTORYEVENTARGS_GET_HASMATCHINGFILES_OFFSET))(this);
		}
	};
}
