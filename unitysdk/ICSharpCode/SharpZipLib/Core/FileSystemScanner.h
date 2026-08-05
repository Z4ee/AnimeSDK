#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Core { class CompletedFileHandler; }
namespace ICSharpCode::SharpZipLib::Core { class DirectoryFailureHandler; }
namespace ICSharpCode::SharpZipLib::Core { class FileFailureHandler; }
namespace ICSharpCode::SharpZipLib::Core { class IScanFilter; }
namespace ICSharpCode::SharpZipLib::Core { class ProcessDirectoryHandler; }
namespace ICSharpCode::SharpZipLib::Core { class ProcessFileHandler; }
namespace System { class Exception; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONCOMPLETEFILE_OFFSET UNITYSDK_OFFSET(0x1F93DE50)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONDIRECTORYFAILURE_OFFSET UNITYSDK_OFFSET(0x1F93DBE0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONFILEFAILURE_OFFSET UNITYSDK_OFFSET(0x1F93DCB0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONPROCESSDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1F93DF10)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONPROCESSFILE_OFFSET UNITYSDK_OFFSET(0x1F93DD90)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_SCANDIR_OFFSET UNITYSDK_OFFSET(0x1F93DFF0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_SCAN_OFFSET UNITYSDK_OFFSET(0x1F93DFE0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F93DAE0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F93DBC0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F93DBD0)
#define ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F93DA50)

namespace ICSharpCode::SharpZipLib::Core
{
	inline static constexpr unsigned int FileSystemScanner_TypeDefinitionIndex = 6789;

	class FileSystemScanner : public ::System::Object
	{
	public:
		::ICSharpCode::SharpZipLib::Core::IScanFilter* directoryFilter_; // 0x10
		::ICSharpCode::SharpZipLib::Core::ProcessFileHandler* ProcessFile; // 0x18
		::ICSharpCode::SharpZipLib::Core::DirectoryFailureHandler* DirectoryFailure; // 0x20
		::ICSharpCode::SharpZipLib::Core::CompletedFileHandler* CompletedFile; // 0x28
		::ICSharpCode::SharpZipLib::Core::FileFailureHandler* FileFailure; // 0x30
		::ICSharpCode::SharpZipLib::Core::IScanFilter* fileFilter_; // 0x38
		::ICSharpCode::SharpZipLib::Core::ProcessDirectoryHandler* ProcessDirectory; // 0x40
		::System::Boolean alive_; // 0x48

		::System::Void _ctor(::System::String* filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER__CTOR_OFFSET))(this, filter);
		}

		::System::Void _ctor_1(::System::String* fileFilter, ::System::String* directoryFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER__CTOR_1_OFFSET))(this, fileFilter, directoryFilter);
		}

		::System::Void _ctor_2(::ICSharpCode::SharpZipLib::Core::IScanFilter* fileFilter)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Core::IScanFilter*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER__CTOR_2_OFFSET))(this, fileFilter);
		}

		::System::Void _ctor_3(::ICSharpCode::SharpZipLib::Core::IScanFilter* fileFilter, ::ICSharpCode::SharpZipLib::Core::IScanFilter* directoryFilter)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Core::IScanFilter*, ::ICSharpCode::SharpZipLib::Core::IScanFilter*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER__CTOR_3_OFFSET))(this, fileFilter, directoryFilter);
		}

		::System::Boolean OnDirectoryFailure(::System::String* directory, ::System::Exception* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONDIRECTORYFAILURE_OFFSET))(this, directory, e);
		}

		::System::Boolean OnFileFailure(::System::String* file, ::System::Exception* e)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONFILEFAILURE_OFFSET))(this, file, e);
		}

		::System::Void OnProcessFile(::System::String* file)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONPROCESSFILE_OFFSET))(this, file);
		}

		::System::Void OnCompleteFile(::System::String* file)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONCOMPLETEFILE_OFFSET))(this, file);
		}

		::System::Void OnProcessDirectory(::System::String* directory, ::System::Boolean hasMatchingFiles)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_ONPROCESSDIRECTORY_OFFSET))(this, directory, hasMatchingFiles);
		}

		::System::Void Scan(::System::String* directory, ::System::Boolean recurse)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_SCAN_OFFSET))(this, directory, recurse);
		}

		::System::Void ScanDir(::System::String* directory, ::System::Boolean recurse)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_CORE_FILESYSTEMSCANNER_SCANDIR_OFFSET))(this, directory, recurse);
		}
	};
}
