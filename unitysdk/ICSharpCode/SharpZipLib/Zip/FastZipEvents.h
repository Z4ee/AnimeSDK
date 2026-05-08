#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace ICSharpCode::SharpZipLib::Core { class CompletedFileHandler; }
namespace ICSharpCode::SharpZipLib::Core { class DirectoryFailureHandler; }
namespace ICSharpCode::SharpZipLib::Core { class FileFailureHandler; }
namespace ICSharpCode::SharpZipLib::Core { class ProcessDirectoryHandler; }
namespace ICSharpCode::SharpZipLib::Core { class ProcessFileHandler; }
namespace ICSharpCode::SharpZipLib::Core { class ProgressHandler; }
namespace System { class Exception; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_GET_PROGRESSINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C211B90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONCOMPLETEDFILE_OFFSET UNITYSDK_OFFSET(0x1C211A00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONDIRECTORYFAILURE_OFFSET UNITYSDK_OFFSET(0x1C2117A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONFILEFAILURE_OFFSET UNITYSDK_OFFSET(0x1C211870)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONPROCESSDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C211AC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONPROCESSFILE_OFFSET UNITYSDK_OFFSET(0x1C211940)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_SET_PROGRESSINTERVAL_OFFSET UNITYSDK_OFFSET(0x1C211BA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C211BB0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int FastZipEvents_TypeDefinitionIndex = 6705;

	class FastZipEvents : public ::System::Object
	{
	public:
		::ICSharpCode::SharpZipLib::Core::ProcessFileHandler* ProcessFile; // 0x10
		::ICSharpCode::SharpZipLib::Core::ProgressHandler* Progress; // 0x18
		::ICSharpCode::SharpZipLib::Core::FileFailureHandler* FileFailure; // 0x20
		::ICSharpCode::SharpZipLib::Core::ProcessDirectoryHandler* ProcessDirectory; // 0x28
		::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler* DirectoryFailure; // 0x30
		::ICSharpCode::SharpZipLib::Core::CompletedFileHandler* CompletedFile; // 0x38
		::System::TimeSpan progressInterval_; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS__CTOR_OFFSET))(this);
		}

		::System::Boolean OnDirectoryFailure(::System::String* directory, ::System::Exception* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONDIRECTORYFAILURE_OFFSET))(this, directory, e);
		}

		::System::Boolean OnFileFailure(::System::String* file, ::System::Exception* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONFILEFAILURE_OFFSET))(this, file, e);
		}

		::System::Boolean OnProcessFile(::System::String* file)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONPROCESSFILE_OFFSET))(this, file);
		}

		::System::Boolean OnCompletedFile(::System::String* file)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONCOMPLETEDFILE_OFFSET))(this, file);
		}

		::System::Boolean OnProcessDirectory(::System::String* directory, ::System::Boolean hasMatchingFiles)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_ONPROCESSDIRECTORY_OFFSET))(this, directory, hasMatchingFiles);
		}

		::System::TimeSpan get_ProgressInterval()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_GET_PROGRESSINTERVAL_OFFSET))(this);
		}

		::System::Void set_ProgressInterval(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIPEVENTS_SET_PROGRESSINTERVAL_OFFSET))(this, value);
		}
	};
}
