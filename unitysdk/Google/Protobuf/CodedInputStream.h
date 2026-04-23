#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class ExtensionRegistry; }
namespace Google::Protobuf { class IMessage; }
namespace System { class String; }
namespace System::IO { class Stream; }

#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_CHECKREADENDOFSTREAMTAG_OFFSET UNITYSDK_OFFSET(0x170D4D00)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_DECODEZIGZAG32_OFFSET UNITYSDK_OFFSET(0x170D6B60)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x170D4CA0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_DISCARDUNKNOWNFIELDS_OFFSET UNITYSDK_OFFSET(0x170D4C60)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_EXTENSIONREGISTRY_OFFSET UNITYSDK_OFFSET(0x170D4C80)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_ISATEND_OFFSET UNITYSDK_OFFSET(0x170D5210)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_LASTTAG_OFFSET UNITYSDK_OFFSET(0x170D4C50)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_REACHEDLIMIT_OFFSET UNITYSDK_OFFSET(0x170D52E0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_MAYBECONSUMETAG_OFFSET UNITYSDK_OFFSET(0x170D6B70)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_PEEKTAG_OFFSET UNITYSDK_OFFSET(0x170D4DD0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_POPLIMIT_OFFSET UNITYSDK_OFFSET(0x170D69C0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_PUSHLIMIT_OFFSET UNITYSDK_OFFSET(0x170D6940)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READBOOL_OFFSET UNITYSDK_OFFSET(0x170D6660)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READBYTES_OFFSET UNITYSDK_OFFSET(0x170D69F0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x170D57E0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READENUM_OFFSET UNITYSDK_OFFSET(0x170D6B30)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READFIXED32_OFFSET UNITYSDK_OFFSET(0x170D55A0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READFIXED64_OFFSET UNITYSDK_OFFSET(0x170D55B0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READFLOAT_OFFSET UNITYSDK_OFFSET(0x170D5B00)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READINT32_OFFSET UNITYSDK_OFFSET(0x170D64E0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READINT64_OFFSET UNITYSDK_OFFSET(0x170D64D0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READLENGTH_OFFSET UNITYSDK_OFFSET(0x170D55C0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READMESSAGE_OFFSET UNITYSDK_OFFSET(0x170D6770)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWBYTES_OFFSET UNITYSDK_OFFSET(0x170D5C10)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWBYTE_OFFSET UNITYSDK_OFFSET(0x170D6F10)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWLITTLEENDIAN32_OFFSET UNITYSDK_OFFSET(0x170D64F0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWLITTLEENDIAN64_OFFSET UNITYSDK_OFFSET(0x170D5800)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWVARINT32_OFFSET UNITYSDK_OFFSET(0x170D4F20)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWVARINT64_OFFSET UNITYSDK_OFFSET(0x170D6130)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READSINT32_OFFSET UNITYSDK_OFFSET(0x170D6B40)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READSTRING_OFFSET UNITYSDK_OFFSET(0x170D6680)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READTAG_OFFSET UNITYSDK_OFFSET(0x170D4E00)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READUINT32_OFFSET UNITYSDK_OFFSET(0x170D6B20)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READUINT64_OFFSET UNITYSDK_OFFSET(0x170D6120)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_RECOMPUTEBUFFERSIZEAFTERLIMIT_OFFSET UNITYSDK_OFFSET(0x170D70B0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_REFILLBUFFER_OFFSET UNITYSDK_OFFSET(0x170D70E0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SET_DISCARDUNKNOWNFIELDS_OFFSET UNITYSDK_OFFSET(0x170D4C70)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SET_EXTENSIONREGISTRY_OFFSET UNITYSDK_OFFSET(0x170D4C90)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SKIPGROUP_OFFSET UNITYSDK_OFFSET(0x170D5420)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SKIPIMPL_OFFSET UNITYSDK_OFFSET(0x170D72E0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SKIPLASTFIELD_OFFSET UNITYSDK_OFFSET(0x170D5300)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SKIPRAWBYTES_OFFSET UNITYSDK_OFFSET(0x170D55D0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SLOWREADRAWVARINT32_OFFSET UNITYSDK_OFFSET(0x170D6BC0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x170D45E0)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM__CTOR_2_OFFSET UNITYSDK_OFFSET(0x170D4C10)
#define GOOGLE_PROTOBUF_CODEDINPUTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x170D4B70)

namespace Google::Protobuf
{
	inline static constexpr unsigned int CodedInputStream_TypeDefinitionIndex = 6165;

	class CodedInputStream : public ::System::Object
	{
	public:
		::System::IO::Stream* input; // 0x10
		::Il2CppArray<::System::Byte>* buffer; // 0x18
		::Google::Protobuf::ExtensionRegistry* _ExtensionRegistry_k__BackingField; // 0x20
		::System::Int32 totalBytesRetired; // 0x28
		::System::UInt32 lastTag; // 0x2C
		::System::Boolean autoRelease; // 0x30
		::System::Boolean _DiscardUnknownFields_k__BackingField; // 0x31
		::System::Boolean hasNextTag; // 0x32
		::System::Boolean leaveOpen; // 0x33
		::System::UInt32 nextTag; // 0x34
		::System::Int32 bufferSizeAfterLimit; // 0x38
		::System::Int32 recursionLimit; // 0x3C
		::System::Int32 recursionDepth; // 0x40
		::System::Int32 currentLimit; // 0x44
		::System::Int32 bufferPos; // 0x48
		::System::Int32 sizeLimit; // 0x4C
		::System::Int32 bufferSize; // 0x50

		::System::Void _ctor(::Il2CppArray<::System::Byte>* buffer, ::System::Boolean autoRelease)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM__CTOR_OFFSET))(this, buffer, autoRelease);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset, ::System::Int32 length, ::System::Boolean autoRelease)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM__CTOR_1_OFFSET))(this, buffer, offset, length, autoRelease);
		}

		::System::Void _ctor_2(::System::IO::Stream* input, ::Il2CppArray<::System::Byte>* buffer, ::System::Int32 bufferPos, ::System::Int32 bufferSize, ::System::Boolean leaveOpen, ::System::Boolean autoRelease)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM__CTOR_2_OFFSET))(this, input, buffer, bufferPos, bufferSize, leaveOpen, autoRelease);
		}

		::System::UInt32 get_LastTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_LASTTAG_OFFSET))(this);
		}

		::System::Boolean get_DiscardUnknownFields()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_DISCARDUNKNOWNFIELDS_OFFSET))(this);
		}

		::System::Void set_DiscardUnknownFields(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SET_DISCARDUNKNOWNFIELDS_OFFSET))(this, value);
		}

		::Google::Protobuf::ExtensionRegistry* get_ExtensionRegistry()
		{
			return ((::Google::Protobuf::ExtensionRegistry*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_EXTENSIONREGISTRY_OFFSET))(this);
		}

		::System::Void set_ExtensionRegistry(::Google::Protobuf::ExtensionRegistry* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ExtensionRegistry*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SET_EXTENSIONREGISTRY_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_DISPOSE_OFFSET))(this);
		}

		::System::Void CheckReadEndOfStreamTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_CHECKREADENDOFSTREAMTAG_OFFSET))(this);
		}

		::System::UInt32 PeekTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_PEEKTAG_OFFSET))(this);
		}

		::System::UInt32 ReadTag()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READTAG_OFFSET))(this);
		}

		::System::Void SkipLastField()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SKIPLASTFIELD_OFFSET))(this);
		}

		::System::Void SkipGroup(::System::UInt32 startGroupTag)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SKIPGROUP_OFFSET))(this, startGroupTag);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READDOUBLE_OFFSET))(this);
		}

		::System::Single ReadFloat()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READFLOAT_OFFSET))(this);
		}

		::System::UInt64 ReadUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READUINT64_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READINT64_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READINT32_OFFSET))(this);
		}

		::System::UInt64 ReadFixed64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READFIXED64_OFFSET))(this);
		}

		::System::UInt32 ReadFixed32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READFIXED32_OFFSET))(this);
		}

		::System::Boolean ReadBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READBOOL_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READSTRING_OFFSET))(this);
		}

		::System::Void ReadMessage(::Google::Protobuf::IMessage* builder)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READMESSAGE_OFFSET))(this, builder);
		}

		::Google::Protobuf::ByteString* ReadBytes()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READBYTES_OFFSET))(this);
		}

		::System::UInt32 ReadUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READUINT32_OFFSET))(this);
		}

		::System::Int32 ReadEnum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READENUM_OFFSET))(this);
		}

		::System::Int32 ReadSInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READSINT32_OFFSET))(this);
		}

		::System::Int32 ReadLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READLENGTH_OFFSET))(this);
		}

		::System::Boolean MaybeConsumeTag(::System::UInt32 tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_MAYBECONSUMETAG_OFFSET))(this, tag);
		}

		::System::UInt32 SlowReadRawVarint32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SLOWREADRAWVARINT32_OFFSET))(this);
		}

		::System::UInt32 ReadRawVarint32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWVARINT32_OFFSET))(this);
		}

		::System::UInt64 ReadRawVarint64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWVARINT64_OFFSET))(this);
		}

		::System::UInt32 ReadRawLittleEndian32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWLITTLEENDIAN32_OFFSET))(this);
		}

		::System::UInt64 ReadRawLittleEndian64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWLITTLEENDIAN64_OFFSET))(this);
		}

		static ::System::Int32 DecodeZigZag32(::System::UInt32 n)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_DECODEZIGZAG32_OFFSET))(n);
		}

		::System::Int32 PushLimit(::System::Int32 byteLimit)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_PUSHLIMIT_OFFSET))(this, byteLimit);
		}

		::System::Void RecomputeBufferSizeAfterLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_RECOMPUTEBUFFERSIZEAFTERLIMIT_OFFSET))(this);
		}

		::System::Void PopLimit(::System::Int32 oldLimit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_POPLIMIT_OFFSET))(this, oldLimit);
		}

		::System::Boolean get_ReachedLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_REACHEDLIMIT_OFFSET))(this);
		}

		::System::Boolean get_IsAtEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_GET_ISATEND_OFFSET))(this);
		}

		::System::Boolean RefillBuffer(::System::Boolean mustSucceed)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_REFILLBUFFER_OFFSET))(this, mustSucceed);
		}

		::System::Byte ReadRawByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWBYTE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadRawBytes(::System::Int32 size)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_READRAWBYTES_OFFSET))(this, size);
		}

		::System::Void SkipRawBytes(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SKIPRAWBYTES_OFFSET))(this, size);
		}

		::System::Void SkipImpl(::System::Int32 amountToSkip)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_CODEDINPUTSTREAM_SKIPIMPL_OFFSET))(this, amountToSkip);
		}
	};
}
