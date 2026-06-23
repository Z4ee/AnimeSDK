#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/TestOperation.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipFile; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_ADDERROR_OFFSET UNITYSDK_OFFSET(0x1E82F360)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_BYTESTESTED_OFFSET UNITYSDK_OFFSET(0x1E82F340)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_ENTRYVALID_OFFSET UNITYSDK_OFFSET(0x1E82F350)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1E82F320)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_ERRORCOUNT_OFFSET UNITYSDK_OFFSET(0x1E82F330)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_FILE_OFFSET UNITYSDK_OFFSET(0x1E82F310)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_OPERATION_OFFSET UNITYSDK_OFFSET(0x1E82F300)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_SETBYTESTESTED_OFFSET UNITYSDK_OFFSET(0x1E82F3A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_SETENTRY_OFFSET UNITYSDK_OFFSET(0x1E82F380)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_SETOPERATION_OFFSET UNITYSDK_OFFSET(0x1E82F370)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E82F2F0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int TestStatus_TypeDefinitionIndex = 6863;

	class TestStatus : public ::System::Object
	{
	public:
		::ICSharpCode::SharpZipLib::Zip::ZipFile* file_; // 0x10
		::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry_; // 0x18
		::System::Boolean entryValid_; // 0x20
		::System::Int32 errorCount_; // 0x24
		::System::Int64 bytesTested_; // 0x28
		::ICSharpCode::SharpZipLib::Zip::TestOperation operation_; // 0x30

		::System::Void _ctor(::ICSharpCode::SharpZipLib::Zip::ZipFile* file)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS__CTOR_OFFSET))(this, file);
		}

		::ICSharpCode::SharpZipLib::Zip::TestOperation get_Operation()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::TestOperation(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_OPERATION_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipFile* get_File()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipFile*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_FILE_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* get_Entry()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_ENTRY_OFFSET))(this);
		}

		::System::Int32 get_ErrorCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_ERRORCOUNT_OFFSET))(this);
		}

		::System::Int64 get_BytesTested()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_BYTESTESTED_OFFSET))(this);
		}

		::System::Boolean get_EntryValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_GET_ENTRYVALID_OFFSET))(this);
		}

		::System::Void AddError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_ADDERROR_OFFSET))(this);
		}

		::System::Void SetOperation(::ICSharpCode::SharpZipLib::Zip::TestOperation operation)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::TestOperation))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_SETOPERATION_OFFSET))(this, operation);
		}

		::System::Void SetEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_SETENTRY_OFFSET))(this, entry);
		}

		::System::Void SetBytesTested(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_TESTSTATUS_SETBYTESTESTED_OFFSET))(this, value);
		}
	};
}
