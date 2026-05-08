#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class GraphMemoryStreamBufferWriter; }
namespace MessagePack { class IFormatterResolver; }
namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ATTACHEXTRAFORMATTER_OFFSET UNITYSDK_OFFSET(0x1AFD7CD0)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ATTACHEXTRARESOLVER_OFFSET UNITYSDK_OFFSET(0x1AFD7DF0)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ENLARGEBUFF_OFFSET UNITYSDK_OFFSET(0x1AFD7F10)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x1AFD7580)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_MARKUNINIT_OFFSET UNITYSDK_OFFSET(0x1AFD7920)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_RESET_OFFSET UNITYSDK_OFFSET(0x1AFD7C00)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFD7570)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__GETDEFAULTFORMATTERS_OFFSET UNITYSDK_OFFSET(0x1AFD7B80)
#define PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__GETDEFAULTRESOLVERS_OFFSET UNITYSDK_OFFSET(0x1AFD7980)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int General_BinarySerializer_TypeDefinitionIndex = 27217;

	class General_BinarySerializer : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet__sharedSerializeResolver()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(General_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x209F0);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet__sharedSerializeOption()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(General_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x209F8);
		}
		static ::MessagePack::GraphMemoryStreamBufferWriter** StaticGet__generalBufferWriter()
		{
			return (::MessagePack::GraphMemoryStreamBufferWriter**)Il2CppClass::FromTypeDefinitionIndex(General_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x20A00);
		}
		static ::MessagePack::IFormatterResolver** StaticGet__sharedDeserializeResolver()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(General_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x20A08);
		}
		static ::MessagePack::MessagePackSerializerOptions** StaticGet__sharedDesSerializeOption()
		{
			return (::MessagePack::MessagePackSerializerOptions**)Il2CppClass::FromTypeDefinitionIndex(General_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x20A10);
		}
		static ::System::Boolean* StaticGet__isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(General_BinarySerializer_TypeDefinitionIndex)->GetStaticField(0x4A30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__CCTOR_OFFSET))();
		}

		static ::System::Void MarkUnInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_MARKUNINIT_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_INIT_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>* _GetDefaultResolvers(::System::Boolean isContainsAutoGen)
		{
			return ((::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__GETDEFAULTRESOLVERS_OFFSET))(isContainsAutoGen);
		}

		static ::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* _GetDefaultFormatters()
		{
			return ((::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER__GETDEFAULTFORMATTERS_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_RESET_OFFSET))();
		}

		static ::System::Void AttachExtraFormatter(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>* formatters)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MessagePack::Formatters::IMessagePackFormatter*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ATTACHEXTRAFORMATTER_OFFSET))(formatters);
		}

		static ::System::Void AttachExtraResolver(::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>* resolvers)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ATTACHEXTRARESOLVER_OFFSET))(resolvers);
		}

		static ::System::Void EnlargeBuff(::System::Int32 size)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_GENERAL_BINARYSERIALIZER_ENLARGEBUFF_OFFSET))(size);
		}
	};
}
