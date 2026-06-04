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

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_GETUINT32WRITESIZE_OFFSET UNITYSDK_OFFSET(0x18184180)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_GET_DEFAULTOPTIONS_OFFSET UNITYSDK_OFFSET(0x18182120)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_ISMESSAGEPACKFIXEDSIZEPRIMITIVETYPEHELPER_OFFSET UNITYSDK_OFFSET(0x181843A0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4OPERATION_OFFSET UNITYSDK_OFFSET(0x18182220)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_SET_DEFAULTOPTIONS_OFFSET UNITYSDK_OFFSET(0x181821E0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TOLZ4BINARYCORE_OFFSET UNITYSDK_OFFSET(0x18183260)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_TRYDECOMPRESS_OFFSET UNITYSDK_OFFSET(0x18182630)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_WRITEBIN32HEADER_OFFSET UNITYSDK_OFFSET(0x18184230)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18184560)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_TypeDefinitionIndex = 7167;

	class MessagePackSerializer : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializer_LZ4Transform** StaticGet_LZ4CodecEncode()
		{
			return (::MessagePack::MessagePackSerializer_LZ4Transform**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0xA1A0);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet_defaultOptions()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0xA1A8);
		}
		static ::System::Func_2<::System::Type*, ::MessagePack::MessagePackSerializer_CompiledMethods*>** StaticGet_CreateCompiledMethods()
		{
			return (::System::Func_2<::System::Type*, ::MessagePack::MessagePackSerializer_CompiledMethods*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0xA1B0);
		}
		static ::MessagePack::MessagePackSerializer_LZ4Transform** StaticGet_LZ4CodecDecode()
		{
			return (::MessagePack::MessagePackSerializer_LZ4Transform**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0xA1B8);
		}
		static ::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::MessagePackSerializer_CompiledMethods*>** StaticGet_Serializes()
		{
			return (::MessagePack::Internal::ThreadsafeTypeKeyHashTable_1<::MessagePack::MessagePackSerializer_CompiledMethods*>**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_TypeDefinitionIndex)->GetStaticField(0xA1C0);
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

		static ::System::Void set_DefaultOptions(::MessagePack::MessagePackSerializerOptions* a1)
		{
			return ((::System::Void(*)(::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_SET_DEFAULTOPTIONS_OFFSET))(a1);
		}

		static ::System::Int32 LZ4Operation(::System::Buffers::ReadOnlySequence_1<::System::Byte>& a1, ::System::Span_1<::System::Byte> a2, ::MessagePack::MessagePackSerializer_LZ4Transform* a3)
		{
			return ((::System::Int32(*)(::System::Buffers::ReadOnlySequence_1<::System::Byte>&, ::System::Span_1<::System::Byte>, ::MessagePack::MessagePackSerializer_LZ4Transform*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_LZ4OPERATION_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryDecompress(::MessagePack::MessagePackReader& a1, ::System::Buffers::IBufferWriter_1<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::MessagePack::MessagePackReader&, ::System::Buffers::IBufferWriter_1<::System::Byte>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TRYDECOMPRESS_OFFSET))(a1, a2);
		}

		static ::System::Void ToLZ4BinaryCore(::System::Buffers::ReadOnlySequence_1<::System::Byte>& a1, ::MessagePack::MessagePackWriter& a2, ::MessagePack::MessagePackCompression a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::System::Buffers::ReadOnlySequence_1<::System::Byte>&, ::MessagePack::MessagePackWriter&, ::MessagePack::MessagePackCompression, ::System::Int32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_TOLZ4BINARYCORE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 GetUInt32WriteSize(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_GETUINT32WRITESIZE_OFFSET))(a1);
		}

		static ::System::Void WriteBin32Header(::System::UInt32 a1, ::System::Span_1<::System::Byte> a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Span_1<::System::Byte>))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_WRITEBIN32HEADER_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsMessagePackFixedSizePrimitiveTypeHelper(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_ISMESSAGEPACKFIXEDSIZEPRIMITIVETYPEHELPER_OFFSET))(a1);
		}
	};
}
