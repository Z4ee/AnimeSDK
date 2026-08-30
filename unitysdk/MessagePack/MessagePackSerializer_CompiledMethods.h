#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlyMemory_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/Tasks/ValueTask_1.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack { class MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize; }
namespace MessagePack { class MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System::Buffers { template <typename T> class IBufferWriter_1; }
namespace System::IO { class Stream; }
namespace System::Reflection { class MethodInfo; }
namespace System::Threading::Tasks { class Task; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_GETMETHOD_OFFSET UNITYSDK_OFFSET(0x1B6CAC80)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_GET_PREFERINTERPRETATION_OFFSET UNITYSDK_OFFSET(0x1B6CAC30)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_THROWREFSTRUCTNOTSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1B6CAF60)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C72D0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods_TypeDefinitionIndex = 7162;

	class MessagePackSerializer_CompiledMethods : public ::System::Object
	{
	public:
		::System::Action_4<::System::Buffers::IBufferWriter_1<::System::Byte>*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken>* Serialize_IBufferWriter_T_Options_CancellationToken; // 0x10
		::System::Func_4<::System::ReadOnlyMemory_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken, ::System::Object*>* Deserialize_ReadOnlyMemory_Options; // 0x18
		::System::Func_5<::System::IO::Stream*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::Task*>* SerializeAsync_Stream_T_Options_CancellationToken; // 0x20
		::System::Func_4<::System::IO::Stream*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken, ::System::Object*>* Deserialize_Stream_Options_CancellationToken; // 0x28
		::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize* Deserialize_MessagePackReader_Options; // 0x30
		::System::Func_4<::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken, ::Il2CppArray<::System::Byte>*>* Serialize_T_Options; // 0x38
		::System::Func_4<::System::IO::Stream*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken, ::System::Threading::Tasks::ValueTask_1<::System::Object*>>* DeserializeAsync_Stream_Options_CancellationToken; // 0x40
		::System::Func_4<::System::Buffers::ReadOnlySequence_1<::System::Byte>, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken, ::System::Object*>* Deserialize_ReadOnlySequence_Options_CancellationToken; // 0x48
		::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize* Serialize_MessagePackWriter_T_Options; // 0x50
		::System::Action_4<::System::IO::Stream*, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*, ::System::Threading::CancellationToken>* Serialize_Stream_T_Options_CancellationToken; // 0x58

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_PreferInterpretation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_GET_PREFERINTERPRETATION_OFFSET))(this);
		}

		static ::System::Void ThrowRefStructNotSupported()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_THROWREFSTRUCTNOTSUPPORTED_OFFSET))();
		}

		static ::System::Reflection::MethodInfo* GetMethod(::System::String* a1, ::System::Type* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Reflection::MethodInfo*(*)(::System::String*, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS_GETMETHOD_OFFSET))(a1, a2, a3);
		}
	};
}
