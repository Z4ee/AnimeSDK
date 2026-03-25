#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }

#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEBYTESSIZE_OFFSET UNITYSDK_OFFSET(0x15D94C90)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEENUMSIZE_OFFSET UNITYSDK_OFFSET(0x15D94DC0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT32SIZE_OFFSET UNITYSDK_OFFSET(0x15D94860)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT64SIZE_OFFSET UNITYSDK_OFFSET(0x15D94770)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTELENGTHSIZE_OFFSET UNITYSDK_OFFSET(0x15D94A80)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEMESSAGESIZE_OFFSET UNITYSDK_OFFSET(0x15D94B10)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT32SIZE_OFFSET UNITYSDK_OFFSET(0x15D94900)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT64SIZE_OFFSET UNITYSDK_OFFSET(0x15D946F0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESTRINGSIZE_OFFSET UNITYSDK_OFFSET(0x15D94940)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT64SIZE_OFFSET UNITYSDK_OFFSET(0x15D94600)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D95AD0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_FLUSH_OFFSET UNITYSDK_OFFSET(0x15D95B80)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_REFRESHBUFFER_OFFSET UNITYSDK_OFFSET(0x15D959A0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBOOL_OFFSET UNITYSDK_OFFSET(0x15D953D0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBYTES_OFFSET UNITYSDK_OFFSET(0x15D958D0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x15D94EC0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEENUM_OFFSET UNITYSDK_OFFSET(0x15D95930)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT32_OFFSET UNITYSDK_OFFSET(0x15D95260)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT64_OFFSET UNITYSDK_OFFSET(0x15D95250)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITELENGTH_OFFSET UNITYSDK_OFFSET(0x15D95730)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEMESSAGE_OFFSET UNITYSDK_OFFSET(0x15D95760)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_1_OFFSET UNITYSDK_OFFSET(0x15D91D90)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_OFFSET UNITYSDK_OFFSET(0x15D95740)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTE_OFFSET UNITYSDK_OFFSET(0x15D953F0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN64_OFFSET UNITYSDK_OFFSET(0x15D94ED0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_1_OFFSET UNITYSDK_OFFSET(0x15D95970)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_OFFSET UNITYSDK_OFFSET(0x15D95960)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT32_OFFSET UNITYSDK_OFFSET(0x15D95280)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT64_OFFSET UNITYSDK_OFFSET(0x15D95160)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x15D954B0)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_OFFSET UNITYSDK_OFFSET(0x15D95950)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT64_OFFSET UNITYSDK_OFFSET(0x15D95150)
#define MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D95C10)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int CodedOutputStream_TypeDefinitionIndex = 27999;

	class CodedOutputStream : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_Utf8Encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0x21520);
		}
		static ::System::Int32* StaticGet_DefaultBufferSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CodedOutputStream_TypeDefinitionIndex)->GetStaticField(0x8CE0);
		}
		::System::IO::Stream* output; // 0x10
		::Il2CppArray<::System::Byte>* buffer; // 0x18
		::System::Boolean leaveOpen; // 0x20
		::System::Int32 limit; // 0x24
		::System::Int32 position; // 0x28

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM__CCTOR_OFFSET))();
		}

		static ::System::Int32 ComputeUInt64Size(::System::UInt64 value)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEUINT64SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeInt64Size(::System::Int64 value)
		{
			return ((::System::Int32(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT64SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeInt32Size(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEINT32SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeStringSize(::System::String* value)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTESTRINGSIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeMessageSize(::MiHoYo::SDK::Protobuf::IMessage* value)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEMESSAGESIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeBytesSize(::MiHoYo::SDK::Protobuf::ByteString* value)
		{
			return ((::System::Int32(*)(::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEBYTESSIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeEnumSize(::System::Int32 value)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTEENUMSIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeLengthSize(::System::Int32 length)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTELENGTHSIZE_OFFSET))(length);
		}

		static ::System::Int32 ComputeRawVarint32Size(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT32SIZE_OFFSET))(value);
		}

		static ::System::Int32 ComputeRawVarint64Size(::System::UInt64 value)
		{
			return ((::System::Int32(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_COMPUTERAWVARINT64SIZE_OFFSET))(value);
		}

		::System::Void WriteDouble(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEDOUBLE_OFFSET))(this, value);
		}

		::System::Void WriteUInt64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEUINT64_OFFSET))(this, value);
		}

		::System::Void WriteInt64(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT64_OFFSET))(this, value);
		}

		::System::Void WriteInt32(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEINT32_OFFSET))(this, value);
		}

		::System::Void WriteBool(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBOOL_OFFSET))(this, value);
		}

		::System::Void WriteString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITESTRING_OFFSET))(this, value);
		}

		::System::Void WriteMessage(::MiHoYo::SDK::Protobuf::IMessage* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEMESSAGE_OFFSET))(this, value);
		}

		::System::Void WriteBytes(::MiHoYo::SDK::Protobuf::ByteString* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEBYTES_OFFSET))(this, value);
		}

		::System::Void WriteEnum(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITEENUM_OFFSET))(this, value);
		}

		::System::Void WriteLength(::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITELENGTH_OFFSET))(this, length);
		}

		::System::Void WriteTag(::System::UInt32 tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITETAG_OFFSET))(this, tag);
		}

		::System::Void WriteRawTag(::System::Byte b1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_OFFSET))(this, b1);
		}

		::System::Void WriteRawTag_1(::System::Byte b1, ::System::Byte b2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWTAG_1_OFFSET))(this, b1, b2);
		}

		::System::Void WriteRawVarint32(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT32_OFFSET))(this, value);
		}

		::System::Void WriteRawVarint64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWVARINT64_OFFSET))(this, value);
		}

		::System::Void WriteRawLittleEndian64(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWLITTLEENDIAN64_OFFSET))(this, value);
		}

		::System::Void WriteRawByte(::System::Byte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTE_OFFSET))(this, value);
		}

		::System::Void WriteRawBytes(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_OFFSET))(this, value);
		}

		::System::Void WriteRawBytes_1(::Il2CppArray<::System::Byte>* value, ::System::Int32 offset, ::System::Int32 length)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDOUTPUTSTREAM_WRITERAWBYTES_1_OFFSET))(this, value, offset, length);
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
