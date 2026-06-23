#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/Compression/Streams/DeflaterOutputStream.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/CompressionMethod.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/UseZip64.h"

namespace ICSharpCode::SharpZipLib::Checksums { class Crc32; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipExtraData; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::IO { class Stream; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_ADDEXTRADATAAES_OFFSET UNITYSDK_OFFSET(0x1E790A90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_CLOSEENTRY_OFFSET UNITYSDK_OFFSET(0x1E790050)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_COPYANDENCRYPT_OFFSET UNITYSDK_OFFSET(0x1E790FE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_FINISH_OFFSET UNITYSDK_OFFSET(0x1E7910B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_GETLEVEL_OFFSET UNITYSDK_OFFSET(0x1E78F330)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x1E78F240)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_GET_USEZIP64_OFFSET UNITYSDK_OFFSET(0x1E78F350)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_PUTNEXTENTRY_OFFSET UNITYSDK_OFFSET(0x1E78F480)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_SETCOMMENT_OFFSET UNITYSDK_OFFSET(0x1E78F250)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x1E78F300)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_SET_USEZIP64_OFFSET UNITYSDK_OFFSET(0x1E78F360)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITEAESHEADER_OFFSET UNITYSDK_OFFSET(0x1E790BE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITEENCRYPTIONHEADER_OFFSET UNITYSDK_OFFSET(0x1E790C90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITELEINT_OFFSET UNITYSDK_OFFSET(0x1E78F3C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITELELONG_OFFSET UNITYSDK_OFFSET(0x1E78F450)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITELESHORT_OFFSET UNITYSDK_OFFSET(0x1E78F370)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1E790DC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E78F100)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E78EFC0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipOutputStream_TypeDefinitionIndex = 6890;

	class ZipOutputStream : public ::ICSharpCode::SharpZipLib::Zip::Compression::Streams::DeflaterOutputStream
	{
	public:
		::ICSharpCode::SharpZipLib::Zip::ZipEntry* curEntry; // 0x60
		::ICSharpCode::SharpZipLib::Checksums::Crc32* crc; // 0x68
		::Il2CppArray<::System::Byte>* zipComment; // 0x70
		::System::Collections::ArrayList* entries; // 0x78
		::System::Int32 defaultCompressionLevel; // 0x80
		::System::Boolean patchEntryHeader; // 0x84
		::System::Int64 size; // 0x88
		::System::Int64 crcPatchPos; // 0x90
		::ICSharpCode::SharpZipLib::Zip::UseZip64 useZip64_; // 0x98
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod curMethod; // 0x9C
		::System::Int64 offset; // 0xA0
		::System::Int64 sizePatchPos; // 0xA8

		::System::Void _ctor(::System::IO::Stream* baseOutputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM__CTOR_OFFSET))(this, baseOutputStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* baseOutputStream, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM__CTOR_1_OFFSET))(this, baseOutputStream, bufferSize);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void SetComment(::System::String* comment)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_SETCOMMENT_OFFSET))(this, comment);
		}

		::System::Void SetLevel(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_SETLEVEL_OFFSET))(this, level);
		}

		::System::Int32 GetLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_GETLEVEL_OFFSET))(this);
		}

		::ICSharpCode::SharpZipLib::Zip::UseZip64 get_UseZip64()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::UseZip64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_GET_USEZIP64_OFFSET))(this);
		}

		::System::Void set_UseZip64(::ICSharpCode::SharpZipLib::Zip::UseZip64 value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::UseZip64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_SET_USEZIP64_OFFSET))(this, value);
		}

		::System::Void WriteLeShort(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITELESHORT_OFFSET))(this, value);
		}

		::System::Void WriteLeInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITELEINT_OFFSET))(this, value);
		}

		::System::Void WriteLeLong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITELELONG_OFFSET))(this, value);
		}

		::System::Void PutNextEntry(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_PUTNEXTENTRY_OFFSET))(this, entry);
		}

		::System::Void CloseEntry()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_CLOSEENTRY_OFFSET))(this);
		}

		::System::Void WriteEncryptionHeader(::System::Int64 crcValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITEENCRYPTIONHEADER_OFFSET))(this, crcValue);
		}

		static ::System::Void AddExtraDataAES(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry, ::ICSharpCode::SharpZipLib::Zip::ZipExtraData* extraData)
		{
			return ((::System::Void(*)(::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::ICSharpCode::SharpZipLib::Zip::ZipExtraData*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_ADDEXTRADATAAES_OFFSET))(entry, extraData);
		}

		::System::Void WriteAESHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITEAESHEADER_OFFSET))(this, entry);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void CopyAndEncrypt(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_COPYANDENCRYPT_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPOUTPUTSTREAM_FINISH_OFFSET))(this);
		}
	};
}
