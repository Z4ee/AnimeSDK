#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsSerializer; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_CLONE_OFFSET UNITYSDK_OFFSET(0x1C643BC0)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_COPYSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1C643D10)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C6434E0)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_FLUSHMEM_OFFSET UNITYSDK_OFFSET(0x1C6432F0)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_INTERNAL_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C643550)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_PRETTIFYJSON_OFFSET UNITYSDK_OFFSET(0x1C644070)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_SERIALIZEANDEXECUTENOCYCLES_1_OFFSET UNITYSDK_OFFSET(0x1C6353F0)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_SERIALIZEANDEXECUTENOCYCLES_OFFSET UNITYSDK_OFFSET(0x1C635A10)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C630400)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_SHOWDATA_OFFSET UNITYSDK_OFFSET(0x1C643E80)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_TRYDESERIALIZEOVERWRITE_OFFSET UNITYSDK_OFFSET(0x1C643B40)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C643230)
#define PARADOXNOTION_SERIALIZATION_JSONSERIALIZER___FLUSHDATACACHE_OFFSET UNITYSDK_OFFSET(0x1C6433F0)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int JSONSerializer_TypeDefinitionIndex = 29312;

	class JSONSerializer : public ::System::Object
	{
	public:
		static ::ParadoxNotion::Serialization::FullSerializer::fsSerializer** StaticGet_serializer()
		{
			return (::ParadoxNotion::Serialization::FullSerializer::fsSerializer**)Il2CppClass::FromTypeDefinitionIndex(JSONSerializer_TypeDefinitionIndex)->GetStaticField(0x23C90);
		}
		static ::System::Object** StaticGet_serializerLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(JSONSerializer_TypeDefinitionIndex)->GetStaticField(0x23C98);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>** StaticGet_dataCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>**)Il2CppClass::FromTypeDefinitionIndex(JSONSerializer_TypeDefinitionIndex)->GetStaticField(0x23CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER__CCTOR_OFFSET))();
		}

		static ::System::Void FlushMem()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_FLUSHMEM_OFFSET))();
		}

		static ::System::Void __FlushDataCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER___FLUSHDATACACHE_OFFSET))();
		}

		static ::System::String* Serialize(::System::Type* type, ::System::Object* instance, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* references, ::System::Boolean pretyJson)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Object*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_SERIALIZE_OFFSET))(type, instance, references, pretyJson);
		}

		static ::System::Object* Deserialize(::System::Type* type, ::System::String* json, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* references)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_DESERIALIZE_OFFSET))(type, json, references);
		}

		static ::System::Object* TryDeserializeOverwrite(::System::Object* instance, ::System::String* json, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* references)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_TRYDESERIALIZEOVERWRITE_OFFSET))(instance, json, references);
		}

		static ::System::Object* Internal_Deserialize(::System::Type* type, ::System::String* json, ::System::Collections::Generic::List_1<::UnityEngine::Object*>* references, ::System::Object* instance)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_INTERNAL_DESERIALIZE_OFFSET))(type, json, references, instance);
		}

		static ::System::Void SerializeAndExecuteNoCycles(::System::Type* type, ::System::Object* instance, ::System::Action_2<::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* call)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Object*, ::System::Action_2<::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_SERIALIZEANDEXECUTENOCYCLES_OFFSET))(type, instance, call);
		}

		static ::System::Void SerializeAndExecuteNoCycles_1(::System::Type* type, ::System::Object* instance, ::System::Action_1<::System::Object*>* beforeCall, ::System::Action_2<::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* afterCall)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Object*, ::System::Action_1<::System::Object*>*, ::System::Action_2<::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_SERIALIZEANDEXECUTENOCYCLES_1_OFFSET))(type, instance, beforeCall, afterCall);
		}

		static ::System::Object* Clone(::System::Object* original)
		{
			return ((::System::Object*(*)(::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_CLONE_OFFSET))(original);
		}

		static ::System::Void CopySerialized(::System::Object* source, ::System::Object* target)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_COPYSERIALIZED_OFFSET))(source, target);
		}

		static ::System::Void ShowData(::System::String* json, ::System::String* fileName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_SHOWDATA_OFFSET))(json, fileName);
		}

		static ::System::String* PrettifyJson(::System::String* json)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_JSONSERIALIZER_PRETTIFYJSON_OFFSET))(json);
		}
	};
}
