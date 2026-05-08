#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace ICSharpCode::SharpZipLib::Zip::Compression { class Inflater; }
namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams { class InflaterInputBuffer; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_BEGINWRITE_OFFSET UNITYSDK_OFFSET(0x1C219930)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C219980)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_FILL_OFFSET UNITYSDK_OFFSET(0x1C2195F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1C2197C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0x1C2195B0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1C2196D0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1C219700)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1C219710)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1C219430)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1C219720)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C219740)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1C2199C0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1C2197F0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C219840)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SET_ISSTREAMOWNER_OFFSET UNITYSDK_OFFSET(0x1C219440)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1C219770)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SKIP_OFFSET UNITYSDK_OFFSET(0x1C219450)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_STOPDECRYPTING_OFFSET UNITYSDK_OFFSET(0x1C219590)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_WRITEBYTE_OFFSET UNITYSDK_OFFSET(0x1C2198E0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1C219890)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C219420)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C2192A0)
#define ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C219240)

namespace ICSharpCode::SharpZipLib::Zip::Compression::Streams
{
	inline static constexpr unsigned int InflaterInputStream_TypeDefinitionIndex = 6672;

	class InflaterInputStream : public ::System::IO::Stream
	{
	public:
		::System::IO::Stream* baseInputStream; // 0x28
		::ICSharpCode::SharpZipLib::Zip::Compression::Streams::InflaterInputBuffer* inputBuffer; // 0x30
		::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* inf; // 0x38
		::System::Boolean isStreamOwner; // 0x40
		::System::Boolean isClosed; // 0x41
		::System::Int64 csize; // 0x48

		::System::Void _ctor(::System::IO::Stream* baseInputStream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM__CTOR_OFFSET))(this, baseInputStream);
		}

		::System::Void _ctor_1(::System::IO::Stream* baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* inf)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM__CTOR_1_OFFSET))(this, baseInputStream, inf);
		}

		::System::Void _ctor_2(::System::IO::Stream* baseInputStream, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater* inflater, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::ICSharpCode::SharpZipLib::Zip::Compression::Inflater*, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM__CTOR_2_OFFSET))(this, baseInputStream, inflater, bufferSize);
		}

		::System::Boolean get_IsStreamOwner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_ISSTREAMOWNER_OFFSET))(this);
		}

		::System::Void set_IsStreamOwner(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SET_ISSTREAMOWNER_OFFSET))(this, value);
		}

		::System::Int64 Skip(::System::Int64 count)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SKIP_OFFSET))(this, count);
		}

		::System::Void StopDecrypting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_STOPDECRYPTING_OFFSET))(this);
		}

		::System::Int32 get_Available()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Void Fill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_FILL_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin origin)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SEEK_OFFSET))(this, offset, origin);
		}

		::System::Void SetLength(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_SETLENGTH_OFFSET))(this, value);
		}

		::System::Void Write(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_WRITE_OFFSET))(this, buffer, offset, count);
		}

		::System::Void WriteByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_WRITEBYTE_OFFSET))(this, value);
		}

		::System::IAsyncResult* BeginWrite(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count, ::System::AsyncCallback* callback, ::System::Object* state)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_BEGINWRITE_OFFSET))(this, buffer, offset, count, callback, state);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_CLOSE_OFFSET))(this);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ICSHARPCODE_SHARPZIPLIB_ZIP_COMPRESSION_STREAMS_INFLATERINPUTSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}
	};
}
