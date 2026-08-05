#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/CompressionMethod.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/ZipFile_UpdateCommand.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip { class IStaticDataSource; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GETSOURCE_OFFSET UNITYSDK_OFFSET(0x1F866700)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_COMMAND_OFFSET UNITYSDK_OFFSET(0x1F866680)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_CRCPATCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1F8666C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1F8665B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1F866690)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_OFFSETBASEDSIZE_OFFSET UNITYSDK_OFFSET(0x1F8666E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_OUTENTRY_OFFSET UNITYSDK_OFFSET(0x1F8665C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_SIZEPATCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1F8666A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_SET_CRCPATCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1F8666D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_SET_OFFSETBASEDSIZE_OFFSET UNITYSDK_OFFSET(0x1F8666F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_SET_SIZEPATCHOFFSET_OFFSET UNITYSDK_OFFSET(0x1F8666B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F866170)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F866270)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1F866330)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1F866430)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1F866460)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1F8664D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1F8665A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F866140)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipFile_ZipUpdate_TypeDefinitionIndex = 6875;

	class ZipFile_ZipUpdate : public ::System::Object
	{
	public:
		::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry_; // 0x10
		::ICSharpCode::SharpZipLib::Zip::ZipEntry* outEntry_; // 0x18
		::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* dataSource_; // 0x20
		::System::String* filename_; // 0x28
		::System::Int64 crcPatchOffset_; // 0x30
		::System::Int64 sizePatchOffset_; // 0x38
		::System::Int64 _offsetBasedSize; // 0x40
		::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateCommand command_; // 0x48

		::System::Void _ctor(::System::String* fileName, ::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_OFFSET))(this, fileName, entry);
		}

		::System::Void _ctor_1(::System::String* fileName, ::System::String* entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod compressionMethod)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_1_OFFSET))(this, fileName, entryName, compressionMethod);
		}

		::System::Void _ctor_2(::System::String* fileName, ::System::String* entryName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_2_OFFSET))(this, fileName, entryName);
		}

		::System::Void _ctor_3(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* dataSource, ::System::String* entryName, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod compressionMethod)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::System::String*, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_3_OFFSET))(this, dataSource, entryName, compressionMethod);
		}

		::System::Void _ctor_4(::ICSharpCode::SharpZipLib::Zip::IStaticDataSource* dataSource, ::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::IStaticDataSource*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_4_OFFSET))(this, dataSource, entry);
		}

		::System::Void _ctor_5(::ICSharpCode::SharpZipLib::Zip::ZipEntry* original, ::ICSharpCode::SharpZipLib::Zip::ZipEntry* updated)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_5_OFFSET))(this, original, updated);
		}

		::System::Void _ctor_6(::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateCommand command, ::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateCommand, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_6_OFFSET))(this, command, entry);
		}

		::System::Void _ctor_7(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE__CTOR_7_OFFSET))(this, entry);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* get_Entry()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_ENTRY_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipEntry* get_OutEntry()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_OUTENTRY_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateCommand get_Command()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::ZipFile_UpdateCommand(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_COMMAND_OFFSET))(this);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_FILENAME_OFFSET))(this);
		}

		::System::Int64 get_SizePatchOffset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_SIZEPATCHOFFSET_OFFSET))(this);
		}

		::System::Void set_SizePatchOffset(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_SET_SIZEPATCHOFFSET_OFFSET))(this, value);
		}

		::System::Int64 get_CrcPatchOffset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_CRCPATCHOFFSET_OFFSET))(this);
		}

		::System::Void set_CrcPatchOffset(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_SET_CRCPATCHOFFSET_OFFSET))(this, value);
		}

		::System::Int64 get_OffsetBasedSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GET_OFFSETBASEDSIZE_OFFSET))(this);
		}

		::System::Void set_OffsetBasedSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_SET_OFFSETBASEDSIZE_OFFSET))(this, value);
		}

		::System::IO::Stream* GetSource()
		{
			return ((::System::IO::Stream*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPFILE_ZIPUPDATE_GETSOURCE_OFFSET))(this);
		}
	};
}
