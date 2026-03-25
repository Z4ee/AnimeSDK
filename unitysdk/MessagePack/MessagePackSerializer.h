#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackCompression.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack { class MessagePackSerializer_CompiledMethods; }
namespace MessagePack { class MessagePackSerializer_LZ4Transform; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::IO { class Stream; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_GETUINT32WRITESIZE_OFFSET UNITYSDK_OFFSET(0x15D7A520)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_GET_DEFAULTOPTIONS_OFFSET UNITYSDK_OFFSET(0x15D77D40)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_ISMESSAGEPACKFIXEDSIZEPRIMITIVETYPEHELPER_OFFSET UNITYSDK_OFFSET(0x15D7A750)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4OPERATION_OFFSET UNITYSDK_OFFSET(0x15D77E40)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_SET_DEFAULTOPTIONS_OFFSET UNITYSDK_OFFSET(0x15D77E00)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TOLZ4BINARYCORE_OFFSET UNITYSDK_OFFSET(0x15D79480)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TRYDECOMPRESS_OFFSET UNITYSDK_OFFSET(0x15D787E0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_WRITEBIN32HEADER_OFFSET UNITYSDK_OFFSET(0x15D7A5D0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D7A940)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_TypeDefinitionIndex = 9067;

	class MessagePackSerializer : public ::System::Object
	{
	public:
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::MessagePackSerializer_CompiledMethods*>** StaticGet_Serializes()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::MessagePackSerializer_CompiledMethods*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x22FC0);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_defaultOptions()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x22FC8);
		}
		static ::System::Func_2<::System::Type*, ::MessagePack::MessagePackSerializer_CompiledMethods*>** StaticGet_CreateCompiledMethods()
		{
			return (::System::Func_2<::System::Type*, ::MessagePack::MessagePackSerializer_CompiledMethods*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x22FD0);
		}
		static ::MessagePack::MessagePackSerializer_LZ4Transform** StaticGet_LZ4CodecDecode()
		{
			return (::MessagePack::MessagePackSerializer_LZ4Transform**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x22FD8);
		}
		static ::MessagePack::MessagePackSerializer_LZ4Transform** StaticGet_LZ4CodecEncode()
		{
			return (::MessagePack::MessagePackSerializer_LZ4Transform**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x22FE0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_scratchArray()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER__CCTOR_OFFSET))();
		}

		static ::MessagePack::MessagePackSerializerOptions* get_DefaultOptions()
		{
			return ((::MessagePack::MessagePackSerializerOptions*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_GET_DEFAULTOPTIONS_OFFSET))();
		}

		static ::System::Void set_DefaultOptions(::MessagePack::MessagePackSerializerOptions* value)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_SET_DEFAULTOPTIONS_OFFSET))(value);
		}

		static ::System::Int32 LZ4Operation(::System::Buffers::ReadOnlySequence_1<::System::Byte>& input, ::System::Span_1<::System::Byte> output, ::MessagePack::MessagePackSerializer_LZ4Transform* lz4Operation)
		{
			return ((::System::Int32(*)(::System::Buffers::ReadOnlySequence_1<::System::Byte>&, ::System::Span_1<::System::Byte>, ::MessagePack::MessagePackSerializer_LZ4Transform*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4OPERATION_OFFSET))(input, output, lz4Operation);
		}

		static ::System::Boolean TryDecompress(::MessagePack::MessagePackReader& reader, ::System::Buffers::IBufferWriter_1<::System::Byte>* writer)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::System::Buffers::IBufferWriter_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TRYDECOMPRESS_OFFSET))(reader, writer);
		}

		static ::System::Void ToLZ4BinaryCore(::System::Buffers::ReadOnlySequence_1<::System::Byte>& msgpackUncompressedData, ::MessagePack::MessagePackWriter& writer, ::MessagePack::MessagePackCompression compression, ::System::Int32 minCompressionSize)
		{
			return ((::System::Void(*)(::System::Buffers::ReadOnlySequence_1<::System::Byte>&, ::MessagePack::MessagePackWriter&, ::MessagePack::MessagePackCompression, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TOLZ4BINARYCORE_OFFSET))(msgpackUncompressedData, writer, compression, minCompressionSize);
		}

		static ::System::Int32 GetUInt32WriteSize(::System::UInt32 value)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_GETUINT32WRITESIZE_OFFSET))(value);
		}

		static ::System::Void WriteBin32Header(::System::UInt32 value, ::System::Span_1<::System::Byte> span)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_WRITEBIN32HEADER_OFFSET))(value, span);
		}

		static ::System::Boolean IsMessagePackFixedSizePrimitiveTypeHelper(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_ISMESSAGEPACKFIXEDSIZEPRIMITIVETYPEHELPER_OFFSET))(type);
		}
	};
}
