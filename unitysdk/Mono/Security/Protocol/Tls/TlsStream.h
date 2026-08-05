#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/IO/SeekOrigin.h"
#include "unitysdk/System/IO/Stream.h"

namespace System::IO { class MemoryStream; }

#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1F6017C0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_CANREAD_OFFSET UNITYSDK_OFFSET(0x1F600E60)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_CANSEEK_OFFSET UNITYSDK_OFFSET(0x1F600E70)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_CANWRITE_OFFSET UNITYSDK_OFFSET(0x1F600E50)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1F600DC0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1F600E20)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F600DF0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READBYTES_OFFSET UNITYSDK_OFFSET(0x1F601360)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READBYTE_OFFSET UNITYSDK_OFFSET(0x1F6011B0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READINT16_OFFSET UNITYSDK_OFFSET(0x1F6011F0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READINT24_OFFSET UNITYSDK_OFFSET(0x1F601240)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READINT32_OFFSET UNITYSDK_OFFSET(0x1F6012C0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READSMALLVALUE_OFFSET UNITYSDK_OFFSET(0x1F600FC0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READ_OFFSET UNITYSDK_OFFSET(0x1F601120)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_RESET_OFFSET UNITYSDK_OFFSET(0x1F600380)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_SEEK_OFFSET UNITYSDK_OFFSET(0x1F601800)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_SETLENGTH_OFFSET UNITYSDK_OFFSET(0x1F6017E0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1F600E90)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_TOARRAY_OFFSET UNITYSDK_OFFSET(0x1F600350)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITEINT24_OFFSET UNITYSDK_OFFSET(0x1F601600)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_1_OFFSET UNITYSDK_OFFSET(0x1F6007A0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_2_OFFSET UNITYSDK_OFFSET(0x1F6000E0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_3_OFFSET UNITYSDK_OFFSET(0x1F601790)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_4_OFFSET UNITYSDK_OFFSET(0x1F6002A0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_5_OFFSET UNITYSDK_OFFSET(0x1F601560)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x1F601450)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F600EB0)
#define MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5FFFF0)

namespace Mono::Security::Protocol::Tls
{
	inline static constexpr unsigned int TlsStream_TypeDefinitionIndex = 2389;

	class TlsStream : public ::System::IO::Stream
	{
	public:
		// static const ::System::Int32 temp_size = 0x4; // 0x0
		::System::IO::MemoryStream* buffer; // 0x28
		::Il2CppArray<::System::Byte>* temp; // 0x30
		::System::Boolean canRead; // 0x38
		::System::Boolean canWrite; // 0x39

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* data)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM__CTOR_1_OFFSET))(this, data);
		}

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_EOF_OFFSET))(this);
		}

		::System::Boolean get_CanWrite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_CANWRITE_OFFSET))(this);
		}

		::System::Boolean get_CanRead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_CANREAD_OFFSET))(this);
		}

		::System::Boolean get_CanSeek()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_CANSEEK_OFFSET))(this);
		}

		::System::Int64 get_Position()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_SET_POSITION_OFFSET))(this, value);
		}

		::System::Int64 get_Length()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_GET_LENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadSmallValue(::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READSMALLVALUE_OFFSET))(this, length);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READBYTE_OFFSET))(this);
		}

		::System::Int16 ReadInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READINT16_OFFSET))(this);
		}

		::System::Int32 ReadInt24()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READINT24_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READINT32_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadBytes(::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READBYTES_OFFSET))(this, count);
		}

		::System::Void Write(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_OFFSET))(this, value);
		}

		::System::Void Write_1(::System::Int16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_1_OFFSET))(this, value);
		}

		::System::Void WriteInt24(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITEINT24_OFFSET))(this, value);
		}

		::System::Void Write_2(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_2_OFFSET))(this, value);
		}

		::System::Void Write_3(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_3_OFFSET))(this, value);
		}

		::System::Void Write_4(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_4_OFFSET))(this, buffer);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_RESET_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ToArray()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_TOARRAY_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_FLUSH_OFFSET))(this);
		}

		::System::Void SetLength(::System::Int64 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_SETLENGTH_OFFSET))(this, length);
		}

		::System::Int64 Seek(::System::Int64 offset, ::System::IO::SeekOrigin loc)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::IO::SeekOrigin))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_SEEK_OFFSET))(this, offset, loc);
		}

		::System::Int32 Read(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_READ_OFFSET))(this, buffer, offset, count);
		}

		::System::Void Write_5(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_SECURITY_PROTOCOL_TLS_TLSSTREAM_WRITE_5_OFFSET))(this, buffer, offset, count);
		}
	};
}
