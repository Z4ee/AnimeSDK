#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf { class IMessage; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_CHECKREADENDOFSTREAMTAG_OFFSET UNITYSDK_OFFSET(0x1E5C6D80)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5C6D40)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_GET_ISATEND_OFFSET UNITYSDK_OFFSET(0x1E5C7210)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_GET_LASTTAG_OFFSET UNITYSDK_OFFSET(0x1E5C6D30)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_GET_REACHEDLIMIT_OFFSET UNITYSDK_OFFSET(0x1E5C8570)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_MAYBECONSUMETAG_OFFSET UNITYSDK_OFFSET(0x1E5C8710)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_PEEKTAG_OFFSET UNITYSDK_OFFSET(0x1E5C6DD0)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_POPLIMIT_OFFSET UNITYSDK_OFFSET(0x1E5C8590)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_PUSHLIMIT_OFFSET UNITYSDK_OFFSET(0x1E5C84E0)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READBOOL_OFFSET UNITYSDK_OFFSET(0x1E5C7E00)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READBYTES_OFFSET UNITYSDK_OFFSET(0x1E5C85C0)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x1E5C7570)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READENUM_OFFSET UNITYSDK_OFFSET(0x1E5C8700)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READFIXED32_OFFSET UNITYSDK_OFFSET(0x1E5C7470)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READFIXED64_OFFSET UNITYSDK_OFFSET(0x1E5C7480)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READINT32_OFFSET UNITYSDK_OFFSET(0x1E5C7C80)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READINT64_OFFSET UNITYSDK_OFFSET(0x1E5C7C70)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READLENGTH_OFFSET UNITYSDK_OFFSET(0x1E5C7490)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READMESSAGE_OFFSET UNITYSDK_OFFSET(0x1E5C8340)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWBYTES_OFFSET UNITYSDK_OFFSET(0x1E5C7F40)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWBYTE_OFFSET UNITYSDK_OFFSET(0x1E5C8AE0)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWLITTLEENDIAN32_OFFSET UNITYSDK_OFFSET(0x1E5C7C90)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWLITTLEENDIAN64_OFFSET UNITYSDK_OFFSET(0x1E5C7590)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWVARINT32_OFFSET UNITYSDK_OFFSET(0x1E5C6F00)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWVARINT64_OFFSET UNITYSDK_OFFSET(0x1E5C78A0)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C7E20)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READTAG_OFFSET UNITYSDK_OFFSET(0x1E5C6E00)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READUINT64_OFFSET UNITYSDK_OFFSET(0x1E5C7890)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_RECOMPUTEBUFFERSIZEAFTERLIMIT_OFFSET UNITYSDK_OFFSET(0x1E5C8B40)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_REFILLBUFFER_OFFSET UNITYSDK_OFFSET(0x1E5C8B70)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SKIPGROUP_OFFSET UNITYSDK_OFFSET(0x1E5C7360)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SKIPIMPL_OFFSET UNITYSDK_OFFSET(0x1E5C8D00)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SKIPLASTFIELD_OFFSET UNITYSDK_OFFSET(0x1E5C7240)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SKIPRAWBYTES_OFFSET UNITYSDK_OFFSET(0x1E5C74A0)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SLOWREADRAWVARINT32_OFFSET UNITYSDK_OFFSET(0x1E5C8760)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C6CF0)
#define MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C6C10)

namespace MiHoYo::SDK::Protobuf
{
	inline static constexpr unsigned int CodedInputStream_TypeDefinitionIndex = 28448;

	class CodedInputStream : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* buffer; // 0x10
		::System::IO::Stream* input; // 0x18
		::System::Int32 bufferPos; // 0x20
		::System::Int32 recursionLimit; // 0x24
		::System::Int32 totalBytesRetired; // 0x28
		::System::Int32 bufferSize; // 0x2C
		::System::UInt32 lastTag; // 0x30
		::System::UInt32 nextTag; // 0x34
		::System::Int32 currentLimit; // 0x38
		::System::Int32 bufferSizeAfterLimit; // 0x3C
		::System::Int32 sizeLimit; // 0x40
		::System::Boolean hasNextTag; // 0x44
		::System::Boolean leaveOpen; // 0x45
		::System::Int32 recursionDepth; // 0x48

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM__CTOR_OFFSET))(this, buffer);
		}

		::System::Void _ctor_1(::System::IO::Stream* input, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferPos, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM__CTOR_1_OFFSET))(this, input, buffer, bufferPos, bufferSize);
		}

		::System::UInt32 get_LastTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_GET_LASTTAG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_DISPOSE_OFFSET))(this);
		}

		::System::Void CheckReadEndOfStreamTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_CHECKREADENDOFSTREAMTAG_OFFSET))(this);
		}

		::System::UInt32 PeekTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_PEEKTAG_OFFSET))(this);
		}

		::System::UInt32 ReadTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READTAG_OFFSET))(this);
		}

		::System::Void SkipLastField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SKIPLASTFIELD_OFFSET))(this);
		}

		::System::Void SkipGroup(::System::UInt32 startGroupTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SKIPGROUP_OFFSET))(this, startGroupTag);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READDOUBLE_OFFSET))(this);
		}

		::System::UInt64 ReadUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READUINT64_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READINT64_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READINT32_OFFSET))(this);
		}

		::System::UInt64 ReadFixed64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READFIXED64_OFFSET))(this);
		}

		::System::UInt32 ReadFixed32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READFIXED32_OFFSET))(this);
		}

		::System::Boolean ReadBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READBOOL_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READSTRING_OFFSET))(this);
		}

		::System::Void ReadMessage(::MiHoYo::SDK::Protobuf::IMessage* builder)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READMESSAGE_OFFSET))(this, builder);
		}

		::MiHoYo::SDK::Protobuf::ByteString* ReadBytes()
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READBYTES_OFFSET))(this);
		}

		::System::Int32 ReadEnum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READENUM_OFFSET))(this);
		}

		::System::Int32 ReadLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READLENGTH_OFFSET))(this);
		}

		::System::Boolean MaybeConsumeTag(::System::UInt32 tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_MAYBECONSUMETAG_OFFSET))(this, tag);
		}

		::System::UInt32 SlowReadRawVarint32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SLOWREADRAWVARINT32_OFFSET))(this);
		}

		::System::UInt32 ReadRawVarint32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWVARINT32_OFFSET))(this);
		}

		::System::UInt64 ReadRawVarint64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWVARINT64_OFFSET))(this);
		}

		::System::UInt32 ReadRawLittleEndian32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWLITTLEENDIAN32_OFFSET))(this);
		}

		::System::UInt64 ReadRawLittleEndian64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWLITTLEENDIAN64_OFFSET))(this);
		}

		::System::Int32 PushLimit(::System::Int32 byteLimit)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_PUSHLIMIT_OFFSET))(this, byteLimit);
		}

		::System::Void RecomputeBufferSizeAfterLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_RECOMPUTEBUFFERSIZEAFTERLIMIT_OFFSET))(this);
		}

		::System::Void PopLimit(::System::Int32 oldLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_POPLIMIT_OFFSET))(this, oldLimit);
		}

		::System::Boolean get_ReachedLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_GET_REACHEDLIMIT_OFFSET))(this);
		}

		::System::Boolean get_IsAtEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_GET_ISATEND_OFFSET))(this);
		}

		::System::Boolean RefillBuffer(::System::Boolean mustSucceed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_REFILLBUFFER_OFFSET))(this, mustSucceed);
		}

		::System::Byte ReadRawByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWBYTE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadRawBytes(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_READRAWBYTES_OFFSET))(this, size);
		}

		::System::Void SkipRawBytes(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SKIPRAWBYTES_OFFSET))(this, size);
		}

		::System::Void SkipImpl(::System::Int32 amountToSkip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_CODEDINPUTSTREAM_SKIPIMPL_OFFSET))(this, amountToSkip);
		}
	};
}
