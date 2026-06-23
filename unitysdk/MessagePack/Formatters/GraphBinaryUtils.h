#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MessagePack/MessagePackReader.h"
#include "unitysdk/MessagePack/MessagePackWriter.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class MessagePackSerializerOptions; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsMetaProperty; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D6E0510)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_GETPROPERTYHASH_OFFSET UNITYSDK_OFFSET(0x1D6E0B00)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_GETTYPERUNTIMEHASH_OFFSET UNITYSDK_OFFSET(0x1D6E0DB0)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_ISSHOULDHANDLEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D6E0730)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_LOGERROR_OFFSET UNITYSDK_OFFSET(0x1D6E13C0)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_LOGWARN_OFFSET UNITYSDK_OFFSET(0x1D6E1360)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_LOG_OFFSET UNITYSDK_OFFSET(0x1D6E12E0)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_TRYUSERESERVEDFORMATTERSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D6E1130)
#define MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6E1470)

namespace MessagePack::Formatters
{
	inline static constexpr unsigned int GraphBinaryUtils_TypeDefinitionIndex = 29425;

	class GraphBinaryUtils : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Type*>** StaticGet_s_PropertyTypeBlackList()
		{
			return (::System::Collections::Generic::List_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(GraphBinaryUtils_TypeDefinitionIndex)->GetStaticField(0x24BF0);
		}
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_s_NodeKeepPropEvenIgnore()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GraphBinaryUtils_TypeDefinitionIndex)->GetStaticField(0x24BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS__CCTOR_OFFSET))();
		}

		static ::System::Object* CreateInstance(::System::Type* genericType, ::Il2CppArray<::System::Type*>* genericTypeArguments, ::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Type*>*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_CREATEINSTANCE_OFFSET))(genericType, genericTypeArguments, arguments);
		}

		static ::System::Boolean IsShouldHandleProperty(::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty* property)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_ISSHOULDHANDLEPROPERTY_OFFSET))(property);
		}

		static ::System::UInt32 GetPropertyHash(::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty* property, ::MessagePack::MessagePackSerializerOptions* options)
		{
			return ((::System::UInt32(*)(::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*, ::MessagePack::MessagePackSerializerOptions*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_GETPROPERTYHASH_OFFSET))(property, options);
		}

		static ::System::UInt32 GetTypeRunTimeHash(::System::Type* type, ::MessagePack::MessagePackSerializerOptions* options, ::System::String*& translatedName)
		{
			return ((::System::UInt32(*)(::System::Type*, ::MessagePack::MessagePackSerializerOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_GETTYPERUNTIMEHASH_OFFSET))(type, options, translatedName);
		}

		static ::System::Boolean TryUseReservedFormatterSerialize(::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty* curProp, ::System::Object* Instance, ::System::Object* propertyValue, ::MessagePack::MessagePackWriter& writer)
		{
			return ((::System::Boolean(*)(::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*, ::System::Object*, ::System::Object*, ::MessagePack::MessagePackWriter&))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_TRYUSERESERVEDFORMATTERSERIALIZE_OFFSET))(curProp, Instance, propertyValue, writer);
		}

		static ::System::Void Log(::System::String* content, ::System::Boolean isError)
		{
			return ((::System::Void(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_LOG_OFFSET))(content, isError);
		}

		static ::System::Void LogWarn(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_LOGWARN_OFFSET))(content);
		}

		static ::System::Void LogError(::System::String* content)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_FORMATTERS_GRAPHBINARYUTILS_LOGERROR_OFFSET))(content);
		}
	};
}
