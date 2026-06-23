#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace MessagePack::Formatters { class GraphObjectDynamic_FallbackFormatter_DeSerializeMethod; }
namespace MessagePack::Formatters { class GraphObjectDynamic_FallbackFormatter_SerializeMethod; }
namespace MessagePack::Formatters { class IMessagePackFormatter; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class TypeInfo; }

#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_CALLDESERIALIZEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D1DEEA0)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_CLEARDELEGATESCACHE_OFFSET UNITYSDK_OFFSET(0x1D1DE690)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1DF2D0)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_GENERATEONEFORMATTERDYNAMIC_OFFSET UNITYSDK_OFFSET(0x1D1DDA60)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_GETORCREATEDESERIALIZEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D1DE790)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_GETORCREATESERIALIZEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1D1DDD90)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_GET_CACHEDFORMATTERS_OFFSET UNITYSDK_OFFSET(0x1D1DF270)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D1DD790)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1DF500)
#define MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DF400)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphObjectDynamic_FallbackFormatter_TypeDefinitionIndex = 29759;

	class GraphObjectDynamic_FallbackFormatter : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>** StaticGet_FormatterGetters()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>**)Il2CppClass::FromTypeDefinitionIndex(GraphObjectDynamic_FallbackFormatter_TypeDefinitionIndex)->GetStaticField(0x23E10);
		}
		static ::MessagePack::Formatters::GraphObjectDynamic_FallbackFormatter** StaticGet_Instance()
		{
			return (::MessagePack::Formatters::GraphObjectDynamic_FallbackFormatter**)Il2CppClass::FromTypeDefinitionIndex(GraphObjectDynamic_FallbackFormatter_TypeDefinitionIndex)->GetStaticField(0x23E18);
		}
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::GraphObjectDynamic_FallbackFormatter_SerializeMethod*>* SerializerDelegates; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::GraphObjectDynamic_FallbackFormatter_DeSerializeMethod*>* DeSerializerDelegates; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER__CCTOR_OFFSET))();
		}

		::System::Void Serialize(::MessagePack::MessagePackWriter& writer, ::System::Object* value, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Void(*)(::PVOID, ::MessagePack::MessagePackWriter&, ::System::Object*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_SERIALIZE_OFFSET))(this, writer, value, options);
		}

		::System::Void ClearDelegatesCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_CLEARDELEGATESCACHE_OFFSET))(this);
		}

		::System::Void GetOrCreateSerializeDelegate(::System::Type* type, ::System::Reflection::TypeInfo* ti, ::System::Type* formatterType, ::MessagePack::Formatters::GraphObjectDynamic_FallbackFormatter_SerializeMethod*& serializerDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::TypeInfo*, ::System::Type*, ::MessagePack::Formatters::GraphObjectDynamic_FallbackFormatter_SerializeMethod*&))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_GETORCREATESERIALIZEDELEGATE_OFFSET))(this, type, ti, formatterType, serializerDelegate);
		}

		::System::Void GetOrCreateDeserializeDelegate(::System::Type* type, ::System::Reflection::TypeInfo* ti, ::System::Type* formatterType, ::MessagePack::Formatters::GraphObjectDynamic_FallbackFormatter_DeSerializeMethod*& deSerializerDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Reflection::TypeInfo*, ::System::Type*, ::MessagePack::Formatters::GraphObjectDynamic_FallbackFormatter_DeSerializeMethod*&))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_GETORCREATEDESERIALIZEDELEGATE_OFFSET))(this, type, ti, formatterType, deSerializerDelegate);
		}

		::System::Object* CallDeserializeDelegate(::System::Type* type, ::System::Reflection::TypeInfo* ti, ::System::Object* formatter, ::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Reflection::TypeInfo*, ::System::Object*, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_CALLDESERIALIZEDELEGATE_OFFSET))(this, type, ti, formatter, reader, options);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>* get_CachedFormatters()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Type*, ::MessagePack::Formatters::IMessagePackFormatter*>*(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_GET_CACHEDFORMATTERS_OFFSET))();
		}

		::System::Object* GenerateOneFormatterDynamic(::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_GENERATEONEFORMATTERDYNAMIC_OFFSET))(this, type);
		}

		::System::Object* Deserialize(::MessagePack::MessagePackReader& reader, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::MessagePackReader&, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHOBJECTDYNAMIC_FALLBACKFORMATTER_DESERIALIZE_OFFSET))(this, reader, options);
		}
	};
}
