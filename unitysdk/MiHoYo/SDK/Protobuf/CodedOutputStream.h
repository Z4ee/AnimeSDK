#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEBYTESSIZE_OFFSET UNITYSDK_OFFSET(0x1819CB30)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEENUMSIZE_OFFSET UNITYSDK_OFFSET(0x1819CC60)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT32SIZE_OFFSET UNITYSDK_OFFSET(0x1819C6F0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT64SIZE_OFFSET UNITYSDK_OFFSET(0x1819C600)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTELENGTHSIZE_OFFSET UNITYSDK_OFFSET(0x1819C910)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEMESSAGESIZE_OFFSET UNITYSDK_OFFSET(0x1819C9A0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT32SIZE_OFFSET UNITYSDK_OFFSET(0x1819C790)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT64SIZE_OFFSET UNITYSDK_OFFSET(0x1819C580)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESTRINGSIZE_OFFSET UNITYSDK_OFFSET(0x1819C7D0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT64SIZE_OFFSET UNITYSDK_OFFSET(0x1819C490)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1819D890)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x1819D940)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_REFRESHBUFFER_OFFSET UNITYSDK_OFFSET(0x1819D760)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBOOL_OFFSET UNITYSDK_OFFSET(0x1819D1A0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x1819D690)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1819CD60)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEENUM_OFFSET UNITYSDK_OFFSET(0x1819D6F0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x1819D060)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x1819D050)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITELENGTH_OFFSET UNITYSDK_OFFSET(0x1819D4F0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1819D520)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_1_OFFSET UNITYSDK_OFFSET(0x18199CD0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_OFFSET UNITYSDK_OFFSET(0x1819D500)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTE_OFFSET UNITYSDK_OFFSET(0x1819D1C0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN64_OFFSET UNITYSDK_OFFSET(0x1819CD70)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_1_OFFSET UNITYSDK_OFFSET(0x1819D730)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_OFFSET UNITYSDK_OFFSET(0x1819D720)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT32_OFFSET UNITYSDK_OFFSET(0x1819D080)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT64_OFFSET UNITYSDK_OFFSET(0x1819CF70)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1819D280)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_OFFSET UNITYSDK_OFFSET(0x1819D710)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x1819CF60)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1819D9D0)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int CodedOutputStream_TypeDefinitionIndex = 33905;

	class CodedOutputStream : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_Utf8Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0x4C1A0);
		}
		static ::System::Int32* StaticGet_DefaultBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0xE750);
		}
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::IO::Stream* output; // 0x18
		::System::Int32 limit; // 0x20
		::System::Boolean leaveOpen; // 0x24
		::System::Int32 position; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM__CCTOR_OFFSET))();
		}

		static ::System::Int32 ComputeUInt64Size(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT64SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeInt64Size(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT64SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeInt32Size(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT32SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeStringSize(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESTRINGSIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeMessageSize(::MiHoYo::SDK::Protobuf::IMessage* a1)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEMESSAGESIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeBytesSize(::MiHoYo::SDK::Protobuf::ByteString* a1)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEBYTESSIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeEnumSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEENUMSIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeLengthSize(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTELENGTHSIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeRawVarint32Size(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT32SIZE_OFFSET))(a1);
		}

		static ::System::Int32 ComputeRawVarint64Size(::System::UInt64 a1)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT64SIZE_OFFSET))(a1);
		}

		::System::Void WriteDouble(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEDOUBLE_OFFSET))(this, a1);
		}

		::System::Void WriteUInt64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT64_OFFSET))(this, a1);
		}

		::System::Void WriteInt64(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT64_OFFSET))(this, a1);
		}

		::System::Void WriteInt32(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT32_OFFSET))(this, a1);
		}

		::System::Void WriteBool(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBOOL_OFFSET))(this, a1);
		}

		::System::Void WriteString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITESTRING_OFFSET))(this, a1);
		}

		::System::Void WriteMessage(::MiHoYo::SDK::Protobuf::IMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void WriteBytes(::MiHoYo::SDK::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBYTES_OFFSET))(this, a1);
		}

		::System::Void WriteEnum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEENUM_OFFSET))(this, a1);
		}

		::System::Void WriteLength(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITELENGTH_OFFSET))(this, a1);
		}

		::System::Void WriteTag(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_OFFSET))(this, a1);
		}

		::System::Void WriteRawTag(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_OFFSET))(this, a1);
		}

		::System::Void WriteRawTag_1(::System::Byte a1, ::System::Byte a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_1_OFFSET))(this, a1, a2);
		}

		::System::Void WriteRawVarint32(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT32_OFFSET))(this, a1);
		}

		::System::Void WriteRawVarint64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT64_OFFSET))(this, a1);
		}

		::System::Void WriteRawLittleEndian64(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN64_OFFSET))(this, a1);
		}

		::System::Void WriteRawByte(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTE_OFFSET))(this, a1);
		}

		::System::Void WriteRawBytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_OFFSET))(this, a1);
		}

		::System::Void WriteRawBytes_1(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RefreshBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_REFRESHBUFFER_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_DISPOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_FLUSH_OFFSET))(this);
		}
	};
}
