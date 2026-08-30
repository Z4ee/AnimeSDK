#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack { class MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize; }
namespace MessagePack { class MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6CAFC0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CB000)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C___CTOR_B__14_4_OFFSET UNITYSDK_OFFSET(0x1B6CB010)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C___CTOR_B__14_5_OFFSET UNITYSDK_OFFSET(0x1B6CB060)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer_CompiledMethods___c_TypeDefinitionIndex = 7165;

	class MessagePackSerializer_CompiledMethods___c : public ::System::Object
	{
	public:
		static ::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize** StaticGet___9__14_4()
		{
			return (::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackWriterSerialize**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_CompiledMethods___c_TypeDefinitionIndex)->GetStaticField(0x2E930);
		}
		static ::MessagePack::MessagePackSerializer_CompiledMethods___c** StaticGet___9()
		{
			return (::MessagePack::MessagePackSerializer_CompiledMethods___c**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_CompiledMethods___c_TypeDefinitionIndex)->GetStaticField(0x2E938);
		}
		static ::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize** StaticGet___9__14_5()
		{
			return (::MessagePack::MessagePackSerializer_CompiledMethods_MessagePackReaderDeserialize**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSerializer_CompiledMethods___c_TypeDefinitionIndex)->GetStaticField(0x2E940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C__CTOR_OFFSET))(this);
		}

		::System::Void __ctor_b__14_4(::MessagePack::MessagePackWriter& a1, ::System::Object* a2, ::MessagePack::MessagePackSerializerOptions* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C___CTOR_B__14_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* __ctor_b__14_5(::MessagePack::MessagePackReader& a1, ::MessagePack::MessagePackSerializerOptions* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER_COMPILEDMETHODS___C___CTOR_B__14_5_OFFSET))(this, a1, a2);
		}
	};
}
