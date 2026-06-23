#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace ICSharpCode::SharpZipLib::Zip { class DescriptorData; }
namespace ICSharpCode::SharpZipLib::Zip { class EntryPatchData; }
namespace ICSharpCode::SharpZipLib::Zip { class ZipEntry; }
namespace System { class String; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E7F4890)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1E7F47A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1E7F4650)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1E7F4680)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E7F46B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1E7F4770)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1E7F4630)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1E7F46E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E7F4710)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_LOCATEBLOCKWITHSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1E7F4F20)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READDATADESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F5910)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLEINT_OFFSET UNITYSDK_OFFSET(0x1E7F4FE0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLELONG_OFFSET UNITYSDK_OFFSET(0x1E7F5700)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLESHORT_OFFSET UNITYSDK_OFFSET(0x1E7F5630)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1E7F4830)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1E7F47D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1E7F4800)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1E7F4640)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1E7F4740)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITEDATADESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7F5780)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITEENDOFCENTRALDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1E7F51E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELEINT_OFFSET UNITYSDK_OFFSET(0x1E7F4E40)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELELONG_OFFSET UNITYSDK_OFFSET(0x1E7F51B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELESHORT_OFFSET UNITYSDK_OFFSET(0x1E7F4ED0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELEUINT_OFFSET UNITYSDK_OFFSET(0x1E7F55A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELEULONG_OFFSET UNITYSDK_OFFSET(0x1E7F5750)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELEUSHORT_OFFSET UNITYSDK_OFFSET(0x1E7F5550)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELOCALHEADER_OFFSET UNITYSDK_OFFSET(0x1E7F48C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITEZIP64ENDOFCENTRALDIRECTORY_OFFSET UNITYSDK_OFFSET(0x1E7F5010)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1E7F4860)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7F45D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7F4510)

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int ZipHelperStream_TypeDefinitionIndex = 6886;

	class ZipHelperStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* stream_; // 0x28
		::System::Boolean isOwner_; // 0x30

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM__CTOR_1_OFFSET))(this, stream);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanTimeout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANTIMEOUT_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Void WriteLocalHeader(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry, ::ICSharpCode::SharpZipLib::Zip::EntryPatchData* patchData)
		{
			return ((::System::Void(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*, ::ICSharpCode::SharpZipLib::Zip::EntryPatchData*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELOCALHEADER_OFFSET))(this, entry, patchData);
		}

		::System::Int64 LocateBlockWithSignature(::System::Int32 signature, ::System::Int64 endLocation, ::System::Int32 minimumBlockSize, ::System::Int32 maximumVariableData)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::Int64, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_LOCATEBLOCKWITHSIGNATURE_OFFSET))(this, signature, endLocation, minimumBlockSize, maximumVariableData);
		}

		::System::Void WriteZip64EndOfCentralDirectory(::System::Int64 noOfEntries, ::System::Int64 sizeEntries, ::System::Int64 centralDirOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITEZIP64ENDOFCENTRALDIRECTORY_OFFSET))(this, noOfEntries, sizeEntries, centralDirOffset);
		}

		::System::Void WriteEndOfCentralDirectory(::System::Int64 noOfEntries, ::System::Int64 sizeEntries, ::System::Int64 startOfCentralDirectory, ::Il2CppArray<::System::Byte>* comment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITEENDOFCENTRALDIRECTORY_OFFSET))(this, noOfEntries, sizeEntries, startOfCentralDirectory, comment);
		}

		::System::Int32 ReadLEShort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLESHORT_OFFSET))(this);
		}

		::System::Int32 ReadLEInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLEINT_OFFSET))(this);
		}

		::System::Int64 ReadLELong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READLELONG_OFFSET))(this);
		}

		::System::Void WriteLEShort(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELESHORT_OFFSET))(this, value);
		}

		::System::Void WriteLEUshort(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELEUSHORT_OFFSET))(this, value);
		}

		::System::Void WriteLEInt(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELEINT_OFFSET))(this, value);
		}

		::System::Void WriteLEUint(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELEUINT_OFFSET))(this, value);
		}

		::System::Void WriteLELong(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELELONG_OFFSET))(this, value);
		}

		::System::Void WriteLEUlong(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITELEULONG_OFFSET))(this, value);
		}

		::System::Int32 WriteDataDescriptor(::ICSharpCode::SharpZipLib::Zip::ZipEntry* entry)
		{
			return ((::System::Int32(*)(::PVOID, ::ICSharpCode::SharpZipLib::Zip::ZipEntry*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_WRITEDATADESCRIPTOR_OFFSET))(this, entry);
		}

		::System::Void ReadDataDescriptor(::System::Boolean zip64, ::ICSharpCode::SharpZipLib::Zip::DescriptorData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::ICSharpCode::SharpZipLib::Zip::DescriptorData*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_ZIPHELPERSTREAM_READDATADESCRIPTOR_OFFSET))(this, zip64, data);
		}
	};
}
