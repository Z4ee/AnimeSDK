#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/FastZip_Overwrite.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/UseZip64.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Core { class DirectoryEventArgs; }
namespace ICSharpCode::SharpZipLib::Core { class INameTransform; }
namespace ICSharpCode::SharpZipLib::Core { class NameFilter; }
namespace ICSharpCode::SharpZipLib::Core { class ScanEventArgs; }
namespace ICSharpCode::SharpZipLib::Zip { class FastZipEvents; }
namespace ICSharpCode::SharpZipLib::Zip { class FastZip_ConfirmOverwriteDelegate; }
namespace ICSharpCode::SharpZipLib::Zip { class IEntryFactory; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipFile; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipOutputStream; }
namespace System { class String; }
namespace System::IO { class FileInfo; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_ADDFILECONTENTS_OFFSET UNITYSDK_OFFSET(0x1C439F70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CREATEZIP_1_OFFSET UNITYSDK_OFFSET(0x1C439020)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CREATEZIP_2_OFFSET UNITYSDK_OFFSET(0x1C438C70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CREATEZIP_OFFSET UNITYSDK_OFFSET(0x1C438BE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTENTRY_OFFSET UNITYSDK_OFFSET(0x1C439860)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTFILEENTRY_OFFSET UNITYSDK_OFFSET(0x1C43A140)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTZIP_1_OFFSET UNITYSDK_OFFSET(0x1C4391A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTZIP_2_OFFSET UNITYSDK_OFFSET(0x1C439280)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTZIP_OFFSET UNITYSDK_OFFSET(0x1C4390D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_CREATEEMPTYDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x1C438A20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_ENTRYFACTORY_OFFSET UNITYSDK_OFFSET(0x1C438AE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_NAMETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C438A60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1C438A40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_RESTOREATTRIBUTESONEXTRACT_OFFSET UNITYSDK_OFFSET(0x1C438BC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_RESTOREDATETIMEONEXTRACT_OFFSET UNITYSDK_OFFSET(0x1C438BA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_USEZIP64_OFFSET UNITYSDK_OFFSET(0x1C438B80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_MAKEEXTERNALATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C43A790)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_NAMEISVALID_OFFSET UNITYSDK_OFFSET(0x1C43A840)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_PROCESSDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1C439BD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_PROCESSFILE_OFFSET UNITYSDK_OFFSET(0x1C439D50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_CREATEEMPTYDIRECTORIES_OFFSET UNITYSDK_OFFSET(0x1C438A30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_ENTRYFACTORY_OFFSET UNITYSDK_OFFSET(0x1C438AF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_NAMETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C438A80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1C438A50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_RESTOREATTRIBUTESONEXTRACT_OFFSET UNITYSDK_OFFSET(0x1C438BD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_RESTOREDATETIMEONEXTRACT_OFFSET UNITYSDK_OFFSET(0x1C438BB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_USEZIP64_OFFSET UNITYSDK_OFFSET(0x1C438B90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C438990)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C438900)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int FastZip_TypeDefinitionIndex = 6706;

	class FastZip : public ::System::Object
	{
	public:
		::ICSharpCode::SharpZipLib::Zip::ZipOutputStream* outputStream_; // 0x10
		::ICSharpCode::SharpZipLib::Core::NameFilter* directoryFilter_; // 0x18
		::ICSharpCode::SharpZipLib::Core::INameTransform* extractNameTransform_; // 0x20
		::System::String* password_; // 0x28
		::System::String* sourceDirectory_; // 0x30
		::Il2CppArray<::System::Byte>* buffer_; // 0x38
		::ICSharpCode::SharpZipLib::Core::NameFilter* fileFilter_; // 0x40
		::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate* confirmDelegate_; // 0x48
		::ICSharpCode::SharpZipLib::Zip::FastZipEvents* events_; // 0x50
		::ICSharpCode::SharpZipLib::Zip::IEntryFactory* entryFactory_; // 0x58
		::ICSharpCode::SharpZipLib::Zip::ZipFile* zipFile_; // 0x60
		::ICSharpCode::SharpZipLib::Zip::FastZip_Overwrite overwrite_; // 0x68
		::System::Boolean continueRunning_; // 0x6C
		::System::Boolean restoreAttributesOnExtract_; // 0x6D
		::System::Boolean createEmptyDirectories_; // 0x6E
		::System::Boolean restoreDateTimeOnExtract_; // 0x6F
		::ICSharpCode::SharpZipLib::Zip::UseZip64 useZip64_; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICSharpCode::SharpZipLib::Zip::FastZipEvents* events)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::FastZipEvents*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP__CTOR_1_OFFSET))(this, events);
		}

		::System::Boolean get_CreateEmptyDirectories()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_CREATEEMPTYDIRECTORIES_OFFSET))(this);
		}

		::System::Void set_CreateEmptyDirectories(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_CREATEEMPTYDIRECTORIES_OFFSET))(this, value);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_PASSWORD_OFFSET))(this, value);
		}

		::ICSharpCode::SharpZipLib::Core::INameTransform* get_NameTransform()
		{
			return ((::ICSharpCode::SharpZipLib::Core::INameTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_NAMETRANSFORM_OFFSET))(this);
		}

		::System::Void set_NameTransform(::ICSharpCode::SharpZipLib::Core::INameTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Core::INameTransform*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_NAMETRANSFORM_OFFSET))(this, value);
		}

		::ICSharpCode::SharpZipLib::Zip::IEntryFactory* get_EntryFactory()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::IEntryFactory*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_ENTRYFACTORY_OFFSET))(this);
		}

		::System::Void set_EntryFactory(::ICSharpCode::SharpZipLib::Zip::IEntryFactory* value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::IEntryFactory*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_ENTRYFACTORY_OFFSET))(this, value);
		}

		::ICSharpCode::SharpZipLib::Zip::UseZip64 get_UseZip64()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::UseZip64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_USEZIP64_OFFSET))(this);
		}

		::System::Void set_UseZip64(::ICSharpCode::SharpZipLib::Zip::UseZip64 value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::UseZip64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_USEZIP64_OFFSET))(this, value);
		}

		::System::Boolean get_RestoreDateTimeOnExtract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_RESTOREDATETIMEONEXTRACT_OFFSET))(this);
		}

		::System::Void set_RestoreDateTimeOnExtract(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_RESTOREDATETIMEONEXTRACT_OFFSET))(this, value);
		}

		::System::Boolean get_RestoreAttributesOnExtract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_GET_RESTOREATTRIBUTESONEXTRACT_OFFSET))(this);
		}

		::System::Void set_RestoreAttributesOnExtract(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_SET_RESTOREATTRIBUTESONEXTRACT_OFFSET))(this, value);
		}

		::System::Void CreateZip(::System::String* zipFileName, ::System::String* sourceDirectory, ::System::Boolean recurse, ::System::String* fileFilter, ::System::String* directoryFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CREATEZIP_OFFSET))(this, zipFileName, sourceDirectory, recurse, fileFilter, directoryFilter);
		}

		::System::Void CreateZip_1(::System::String* zipFileName, ::System::String* sourceDirectory, ::System::Boolean recurse, ::System::String* fileFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CREATEZIP_1_OFFSET))(this, zipFileName, sourceDirectory, recurse, fileFilter);
		}

		::System::Void CreateZip_2(::System::IO::Stream* outputStream, ::System::String* sourceDirectory, ::System::Boolean recurse, ::System::String* fileFilter, ::System::String* directoryFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_CREATEZIP_2_OFFSET))(this, outputStream, sourceDirectory, recurse, fileFilter, directoryFilter);
		}

		::System::Void ExtractZip(::System::String* zipFileName, ::System::String* targetDirectory, ::System::String* fileFilter)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTZIP_OFFSET))(this, zipFileName, targetDirectory, fileFilter);
		}

		::System::Void ExtractZip_1(::System::String* zipFileName, ::System::String* targetDirectory, ::ICSharpCode::SharpZipLib::Zip::FastZip_Overwrite overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate* confirmDelegate, ::System::String* fileFilter, ::System::String* directoryFilter, ::System::Boolean restoreDateTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::ICSharpCode::SharpZipLib::Zip::FastZip_Overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTZIP_1_OFFSET))(this, zipFileName, targetDirectory, overwrite, confirmDelegate, fileFilter, directoryFilter, restoreDateTime);
		}

		::System::Void ExtractZip_2(::System::IO::Stream* inputStream, ::System::String* targetDirectory, ::ICSharpCode::SharpZipLib::Zip::FastZip_Overwrite overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate* confirmDelegate, ::System::String* fileFilter, ::System::String* directoryFilter, ::System::Boolean restoreDateTime, ::System::Boolean isStreamOwner)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::String*, ::ICSharpCode::SharpZipLib::Zip::FastZip_Overwrite, ::ICSharpCode::SharpZipLib::Zip::FastZip_ConfirmOverwriteDelegate*, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTZIP_2_OFFSET))(this, inputStream, targetDirectory, overwrite, confirmDelegate, fileFilter, directoryFilter, restoreDateTime, isStreamOwner);
		}

		::System::Void ProcessDirectory(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::DirectoryEventArgs*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_PROCESSDIRECTORY_OFFSET))(this, sender, e);
		}

		::System::Void ProcessFile(::System::Object* sender, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::ICSharpCode::SharpZipLib::Core::ScanEventArgs*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_PROCESSFILE_OFFSET))(this, sender, e);
		}

		::System::Void AddFileContents(::System::String* name, ::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_ADDFILECONTENTS_OFFSET))(this, name, stream);
		}

		::System::Void ExtractFileEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry, ::System::String* targetName)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTFILEENTRY_OFFSET))(this, entry, targetName);
		}

		::System::Void ExtractEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_EXTRACTENTRY_OFFSET))(this, entry);
		}

		static ::System::Int32 MakeExternalAttributes(::System::IO::FileInfo* info)
		{
			return ((::System::Int32(*)(::System::IO::FileInfo*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_MAKEEXTERNALATTRIBUTES_OFFSET))(info);
		}

		static ::System::Boolean NameIsValid(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_FASTZIP_NAMEISVALID_OFFSET))(name);
		}
	};
}
