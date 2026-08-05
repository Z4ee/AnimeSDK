#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/CompressionMethod.h"
#include "unitysdk/ICSharpCode/SharpZipLib/Zip/ZipEntry_Known.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace ICSharpCode::SharpZipLib::Zip { class ZipExtraData; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_CLEANNAME_OFFSET UNITYSDK_OFFSET(0x1FBA30F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBA2F80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_FORCEZIP64_OFFSET UNITYSDK_OFFSET(0x1FBA2190)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESENCRYPTIONSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1FBA25F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESKEYSIZE_OFFSET UNITYSDK_OFFSET(0x1FBA1F30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESOVERHEADSIZE_OFFSET UNITYSDK_OFFSET(0x1FBA2620)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESSALTLEN_OFFSET UNITYSDK_OFFSET(0x1FBA2600)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CANDECOMPRESS_OFFSET UNITYSDK_OFFSET(0x1FBA2110)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CENTRALHEADERREQUIRESZIP64_OFFSET UNITYSDK_OFFSET(0x1FBA1FD0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1FBA2DF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSEDSIZE_OFFSET UNITYSDK_OFFSET(0x1FBA2330)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSIONMETHODFORHEADER_OFFSET UNITYSDK_OFFSET(0x1FBA2450)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1FBA23C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CRC_OFFSET UNITYSDK_OFFSET(0x1FBA2360)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CRYPTOCHECKVALUE_OFFSET UNITYSDK_OFFSET(0x1FBA1CE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0x1FBA2230)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_DOSTIME_OFFSET UNITYSDK_OFFSET(0x1FBA2210)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_EXTERNALFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1FBA1D60)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x1FBA2480)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1FBA1D00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_HASCRC_OFFSET UNITYSDK_OFFSET(0x1FBA1C80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_HOSTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1FBA1DB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISCRYPTED_OFFSET UNITYSDK_OFFSET(0x1FBA1C90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1FBA2030)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISDOSENTRY_OFFSET UNITYSDK_OFFSET(0x1FBA1D90)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISFILE_OFFSET UNITYSDK_OFFSET(0x1FBA2E80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISUNICODETEXT_OFFSET UNITYSDK_OFFSET(0x1FBA1CB0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_LOCALHEADERREQUIRESZIP64_OFFSET UNITYSDK_OFFSET(0x1FBA21B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FBA22F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1FBA1D40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1FBA2300)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_VERSIONMADEBY_OFFSET UNITYSDK_OFFSET(0x1FBA1D80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1FBA1DF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ZIPFILEINDEX_OFFSET UNITYSDK_OFFSET(0x1FBA1D20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_HASDOSATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1FBA1DC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISCOMPRESSIONMETHODSUPPORTED_1_OFFSET UNITYSDK_OFFSET(0x1FBA2440)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISCOMPRESSIONMETHODSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1FBA2180)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISZIP64FORCED_OFFSET UNITYSDK_OFFSET(0x1FBA21A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_PROCESSAESEXTRADATA_OFFSET UNITYSDK_OFFSET(0x1FBA2C80)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_PROCESSEXTRADATA_OFFSET UNITYSDK_OFFSET(0x1FBA2640)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_AESKEYSIZE_OFFSET UNITYSDK_OFFSET(0x1FBA2540)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1FBA2E00)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_COMPRESSEDSIZE_OFFSET UNITYSDK_OFFSET(0x1FBA2350)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_COMPRESSIONMETHOD_OFFSET UNITYSDK_OFFSET(0x1FBA23D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_CRC_OFFSET UNITYSDK_OFFSET(0x1FBA2380)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_CRYPTOCHECKVALUE_OFFSET UNITYSDK_OFFSET(0x1FBA1CF0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_DATETIME_OFFSET UNITYSDK_OFFSET(0x1FBA1920)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_DOSTIME_OFFSET UNITYSDK_OFFSET(0x1FBA2220)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_EXTERNALFILEATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1FBA1D70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_EXTRADATA_OFFSET UNITYSDK_OFFSET(0x1FBA2490)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1FBA1D10)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_HOSTSYSTEM_OFFSET UNITYSDK_OFFSET(0x1FBA1DE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_ISCRYPTED_OFFSET UNITYSDK_OFFSET(0x1FBA1CA0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_ISUNICODETEXT_OFFSET UNITYSDK_OFFSET(0x1FBA1CC0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_OFFSET_OFFSET UNITYSDK_OFFSET(0x1FBA1D50)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x1FBA2320)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_ZIPFILEINDEX_OFFSET UNITYSDK_OFFSET(0x1FBA1D30)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBA30E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBA1900)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FBA17D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FBA1B70)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBA17B0)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipEntry_TypeDefinitionIndex = 6852;

	class ZipEntry : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* extra; // 0x10
		::System::String* name; // 0x18
		::System::String* comment; // 0x20
		::System::Int64 offset; // 0x28
		::ICSharpCode::SharpZipLib::Zip::ZipEntry_Known known; // 0x30
		::System::Boolean forceZip64_; // 0x31
		::System::Byte cryptoCheckValue_; // 0x32
		::System::UInt16 versionToExtract; // 0x34
		::System::UInt16 versionMadeBy; // 0x36
		::System::Int32 externalFileAttributes; // 0x38
		::System::UInt64 size; // 0x40
		::System::Int32 _aesVer; // 0x48
		::System::Int32 flags; // 0x4C
		::ICSharpCode::SharpZipLib::Zip::CompressionMethod method; // 0x50
		::System::UInt32 crc; // 0x54
		::System::UInt64 compressedSize; // 0x58
		::System::Int64 zipFileIndex; // 0x60
		::System::UInt32 dosTime; // 0x68
		::System::Int32 _aesEncryptionStrength; // 0x6C

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::String* name, ::System::Int32 versionRequiredToExtract)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY__CTOR_1_OFFSET))(this, name, versionRequiredToExtract);
		}

		::System::Void _ctor_2(::System::String* name, ::System::Int32 versionRequiredToExtract, ::System::Int32 madeByInfo, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY__CTOR_2_OFFSET))(this, name, versionRequiredToExtract, madeByInfo, method);
		}

		::System::Void _ctor_3(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY__CTOR_3_OFFSET))(this, entry);
		}

		::System::Boolean get_HasCrc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_HASCRC_OFFSET))(this);
		}

		::System::Boolean get_IsCrypted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISCRYPTED_OFFSET))(this);
		}

		::System::Void set_IsCrypted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_ISCRYPTED_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnicodeText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISUNICODETEXT_OFFSET))(this);
		}

		::System::Void set_IsUnicodeText(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_ISUNICODETEXT_OFFSET))(this, value);
		}

		::System::Byte get_CryptoCheckValue()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CRYPTOCHECKVALUE_OFFSET))(this);
		}

		::System::Void set_CryptoCheckValue(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_CRYPTOCHECKVALUE_OFFSET))(this, value);
		}

		::System::Int32 get_Flags()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Int64 get_ZipFileIndex()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ZIPFILEINDEX_OFFSET))(this);
		}

		::System::Void set_ZipFileIndex(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_ZIPFILEINDEX_OFFSET))(this, value);
		}

		::System::Int64 get_Offset()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_OFFSET_OFFSET))(this);
		}

		::System::Void set_Offset(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_OFFSET_OFFSET))(this, value);
		}

		::System::Int32 get_ExternalFileAttributes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_EXTERNALFILEATTRIBUTES_OFFSET))(this);
		}

		::System::Void set_ExternalFileAttributes(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_EXTERNALFILEATTRIBUTES_OFFSET))(this, value);
		}

		::System::Int32 get_VersionMadeBy()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_VERSIONMADEBY_OFFSET))(this);
		}

		::System::Boolean get_IsDOSEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISDOSENTRY_OFFSET))(this);
		}

		::System::Boolean HasDosAttributes(::System::Int32 attributes)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_HASDOSATTRIBUTES_OFFSET))(this, attributes);
		}

		::System::Int32 get_HostSystem()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_HOSTSYSTEM_OFFSET))(this);
		}

		::System::Void set_HostSystem(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_HOSTSYSTEM_OFFSET))(this, value);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_VERSION_OFFSET))(this);
		}

		::System::Boolean get_CanDecompress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CANDECOMPRESS_OFFSET))(this);
		}

		::System::Void ForceZip64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_FORCEZIP64_OFFSET))(this);
		}

		::System::Boolean IsZip64Forced()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISZIP64FORCED_OFFSET))(this);
		}

		::System::Boolean get_LocalHeaderRequiresZip64()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_LOCALHEADERREQUIRESZIP64_OFFSET))(this);
		}

		::System::Boolean get_CentralHeaderRequiresZip64()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CENTRALHEADERREQUIRESZIP64_OFFSET))(this);
		}

		::System::Int64 get_DosTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_DOSTIME_OFFSET))(this);
		}

		::System::Void set_DosTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_DOSTIME_OFFSET))(this, value);
		}

		::System::DateTime get_DateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_DATETIME_OFFSET))(this);
		}

		::System::Void set_DateTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_DATETIME_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_NAME_OFFSET))(this);
		}

		::System::Int64 get_Size()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_SIZE_OFFSET))(this, value);
		}

		::System::Int64 get_CompressedSize()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSEDSIZE_OFFSET))(this);
		}

		::System::Void set_CompressedSize(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_COMPRESSEDSIZE_OFFSET))(this, value);
		}

		::System::Int64 get_Crc()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_CRC_OFFSET))(this);
		}

		::System::Void set_Crc(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_CRC_OFFSET))(this, value);
		}

		::ICSharpCode::SharpZipLib::Zip::CompressionMethod get_CompressionMethod()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::CompressionMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSIONMETHOD_OFFSET))(this);
		}

		::System::Void set_CompressionMethod(::ICSharpCode::SharpZipLib::Zip::CompressionMethod value)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::CompressionMethod))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_COMPRESSIONMETHOD_OFFSET))(this, value);
		}

		::ICSharpCode::SharpZipLib::Zip::CompressionMethod get_CompressionMethodForHeader()
		{
			return ((::ICSharpCode::SharpZipLib::Zip::CompressionMethod(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMPRESSIONMETHODFORHEADER_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_ExtraData()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_EXTRADATA_OFFSET))(this);
		}

		::System::Void set_ExtraData(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_EXTRADATA_OFFSET))(this, value);
		}

		::System::Int32 get_AESKeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESKEYSIZE_OFFSET))(this);
		}

		::System::Void set_AESKeySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_AESKEYSIZE_OFFSET))(this, value);
		}

		::System::Byte get_AESEncryptionStrength()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESENCRYPTIONSTRENGTH_OFFSET))(this);
		}

		::System::Int32 get_AESSaltLen()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESSALTLEN_OFFSET))(this);
		}

		::System::Int32 get_AESOverheadSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_AESOVERHEADSIZE_OFFSET))(this);
		}

		::System::Void ProcessExtraData(::System::Boolean localHeader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_PROCESSEXTRADATA_OFFSET))(this, localHeader);
		}

		::System::Void ProcessAESExtraData(::ICSharpCode::SharpZipLib::Zip::ZipExtraData* extraData)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipExtraData*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_PROCESSAESEXTRADATA_OFFSET))(this, extraData);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_COMMENT_OFFSET))(this);
		}

		::System::Void set_Comment(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_SET_COMMENT_OFFSET))(this, value);
		}

		::System::Boolean get_IsDirectory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISDIRECTORY_OFFSET))(this);
		}

		::System::Boolean get_IsFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_GET_ISFILE_OFFSET))(this);
		}

		::System::Boolean IsCompressionMethodSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISCOMPRESSIONMETHODSUPPORTED_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_CLONE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean IsCompressionMethodSupported_1(::ICSharpCode::SharpZipLib::Zip::CompressionMethod method)
		{
			return ((::System::Boolean(*)(::ICSharpCode::SharpZipLib::Zip::CompressionMethod))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_ISCOMPRESSIONMETHODSUPPORTED_1_OFFSET))(method);
		}

		static ::System::String* CleanName(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPENTRY_CLEANNAME_OFFSET))(name);
		}
	};
}
