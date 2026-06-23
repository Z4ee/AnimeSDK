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
namespace MessagePack { class TinyJsonReader; }
namespace MessagePack::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::IO { class Stream; }
namespace System::IO { class TextReader; }
namespace System::IO { class TextWriter; }
namespace System::Threading::Tasks { class Task; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTFROMJSON_1_OFFSET UNITYSDK_OFFSET(0x1C626BD0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTFROMJSON_2_OFFSET UNITYSDK_OFFSET(0x1C626620)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTFROMJSON_OFFSET UNITYSDK_OFFSET(0x1C6264A0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTTOJSON_1_OFFSET UNITYSDK_OFFSET(0x1C624880)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTTOJSON_2_OFFSET UNITYSDK_OFFSET(0x1C6249B0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTTOJSON_OFFSET UNITYSDK_OFFSET(0x1C6247E0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_DESERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1C629000)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_DESERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1C629150)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_DESERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1C6292B0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C628ED0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_FROMJSONCORE_OFFSET UNITYSDK_OFFSET(0x1C626FA0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_GETORADD_OFFSET UNITYSDK_OFFSET(0x1C6288D0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_GETUINT32WRITESIZE_OFFSET UNITYSDK_OFFSET(0x1C6298C0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_GET_DEFAULTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C629410)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_ISMESSAGEPACKFIXEDSIZEPRIMITIVETYPEHELPER_OFFSET UNITYSDK_OFFSET(0x1C6299F0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4OPERATION_OFFSET UNITYSDK_OFFSET(0x1C6294D0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZEASYNC_OFFSET UNITYSDK_OFFSET(0x1C628D70)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1C628960)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1C628AC0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1C628C10)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C628790)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_SET_DEFAULTOPTIONS_OFFSET UNITYSDK_OFFSET(0x1C629470)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TOJSONCORE_OFFSET UNITYSDK_OFFSET(0x1C6259B0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TOLZ4BINARYCORE_OFFSET UNITYSDK_OFFSET(0x1C6279A0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TRYDECOMPRESS_OFFSET UNITYSDK_OFFSET(0x1C624E60)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_WRITEBIN32HEADER_OFFSET UNITYSDK_OFFSET(0x1C6298F0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_WRITEJSONSTRING_OFFSET UNITYSDK_OFFSET(0x1C6283B0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6285D0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_TypeDefinitionIndex = 30268;

	class MessagePackSerializer : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::MessagePack::MessagePackSerializer_CompiledMethods*>** StaticGet_CreateCompiledMethods()
		{
			return (::System::Func_2<::System::Type*, ::MessagePack::MessagePackSerializer_CompiledMethods*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x23A80);
		}
		static ::MessagePack::MessagePackSerializer_LZ4Transform** StaticGet_LZ4CodecDecode()
		{
			return (::MessagePack::MessagePackSerializer_LZ4Transform**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x23A88);
		}
		static ::MessagePack::MessagePackSerializer_LZ4Transform** StaticGet_LZ4CodecEncode()
		{
			return (::MessagePack::MessagePackSerializer_LZ4Transform**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x23A90);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet__DefaultOptions_k__BackingField()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x23A98);
		}
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::MessagePackSerializer_CompiledMethods*>** StaticGet_Serializes()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::MessagePackSerializer_CompiledMethods*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x23AA0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_scratchArray()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		// static const ::System::Int32 LZ4NotCompressionSizeInLz4BlockType = 0x40; // 0x0
		// static const ::System::Int32 MaxHintSize = 0x100000; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER__CCTOR_OFFSET))();
		}

		static ::System::String* ConvertToJson(::System::ReadOnlyMemory_1<::System::Byte> bytes, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::String*(*)(::System::ReadOnlyMemory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTTOJSON_OFFSET))(bytes, options, cancellationToken);
		}

		static ::System::String* ConvertToJson_1(::System::Buffers::ReadOnlySequence_1<::System::Byte>& bytes, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::String*(*)(::System::Buffers::ReadOnlySequence_1<::System::Byte>&, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTTOJSON_1_OFFSET))(bytes, options, cancellationToken);
		}

		static ::System::Void ConvertToJson_2(::MessagePack::MessagePackReader& reader, ::System::IO::TextWriter* jsonWriter, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackReader&, ::System::IO::TextWriter*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTTOJSON_2_OFFSET))(reader, jsonWriter, options);
		}

		static ::System::Void ConvertFromJson(::System::String* str, ::MessagePack::MessagePackWriter& writer, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::System::String*, ::MessagePack::MessagePackWriter&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTFROMJSON_OFFSET))(str, writer, options);
		}

		static ::Il2CppArray<::System::Byte>* ConvertFromJson_1(::System::String* str, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTFROMJSON_1_OFFSET))(str, options, cancellationToken);
		}

		static ::System::Void ConvertFromJson_2(::System::IO::TextReader* reader, ::MessagePack::MessagePackWriter& writer, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::System::IO::TextReader*, ::MessagePack::MessagePackWriter&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_CONVERTFROMJSON_2_OFFSET))(reader, writer, options);
		}

		static ::System::UInt32 FromJsonCore(::MessagePack::TinyJsonReader* jr, ::MessagePack::MessagePackWriter& writer)
		{
			return ((::System::UInt32(*)(::MessagePack::TinyJsonReader*, ::MessagePack::MessagePackWriter&))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_FROMJSONCORE_OFFSET))(jr, writer);
		}

		static ::System::Void ToJsonCore(::MessagePack::MessagePackReader& reader, ::System::IO::TextWriter* writer, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackReader&, ::System::IO::TextWriter*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TOJSONCORE_OFFSET))(reader, writer, options);
		}

		static ::System::Void WriteJsonString(::System::String* value, ::System::IO::TextWriter* builder)
		{
			return ((::System::Void(*)(::System::String*, ::System::IO::TextWriter*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_WRITEJSONSTRING_OFFSET))(value, builder);
		}

		static ::System::Void Serialize(::System::Type* type, ::MessagePack::MessagePackWriter& writer, ::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::System::Type*, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZE_OFFSET))(type, writer, obj, options);
		}

		static ::System::Void Serialize_1(::System::Type* type, ::System::Buffers::IBufferWriter_1<::System::Byte>* writer, ::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Buffers::IBufferWriter_1<::System::Byte>*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZE_1_OFFSET))(type, writer, obj, options, cancellationToken);
		}

		static ::Il2CppArray<::System::Byte>* Serialize_2(::System::Type* type, ::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Type*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZE_2_OFFSET))(type, obj, options, cancellationToken);
		}

		static ::System::Void Serialize_3(::System::Type* type, ::System::IO::Stream* stream, ::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IO::Stream*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZE_3_OFFSET))(type, stream, obj, options, cancellationToken);
		}

		static ::System::Threading::Tasks::Task* SerializeAsync(::System::Type* type, ::System::IO::Stream* stream, ::System::Object* obj, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Threading::Tasks::Task*(*)(::System::Type*, ::System::IO::Stream*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_SERIALIZEASYNC_OFFSET))(type, stream, obj, options, cancellationToken);
		}

		static ::System::Object* Deserialize(::System::Type* type, ::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::System::Type*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_DESERIALIZE_OFFSET))(type, reader, options);
		}

		static ::System::Object* Deserialize_1(::System::Type* type, ::System::IO::Stream* stream, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::IO::Stream*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_DESERIALIZE_1_OFFSET))(type, stream, options, cancellationToken);
		}

		static ::System::Object* Deserialize_2(::System::Type* type, ::System::ReadOnlyMemory_1<::System::Byte> bytes, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::ReadOnlyMemory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_DESERIALIZE_2_OFFSET))(type, bytes, options, cancellationToken);
		}

		static ::System::Object* Deserialize_3(::System::Type* type, ::System::Buffers::ReadOnlySequence_1<::System::Byte> bytes, ::MessagePack::MessagePackSerializerOptions* options, ::System::Threading::CancellationToken cancellationToken)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::Buffers::ReadOnlySequence_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_DESERIALIZE_3_OFFSET))(type, bytes, options, cancellationToken);
		}

		static ::MessagePack::MessagePackSerializer_CompiledMethods* GetOrAdd(::System::Type* type)
		{
			return ((::MessagePack::MessagePackSerializer_CompiledMethods*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_GETORADD_OFFSET))(type);
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

		static ::System::Void ToLZ4BinaryCore(::System::Buffers::ReadOnlySequence_1<::System::Byte>& msgpackUncompressedData, ::MessagePack::MessagePackWriter& writer, ::MessagePack::MessagePackCompression compression)
		{
			return ((::System::Void(*)(::System::Buffers::ReadOnlySequence_1<::System::Byte>&, ::MessagePack::MessagePackWriter&, ::MessagePack::MessagePackCompression))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TOLZ4BINARYCORE_OFFSET))(msgpackUncompressedData, writer, compression);
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
