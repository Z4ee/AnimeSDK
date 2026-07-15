#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/DefaultValueHandling.h"
#include "unitysdk/Newtonsoft/Json/PreserveReferencesHandling.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonSerializerInternalBase.h"
#include "unitysdk/Newtonsoft/Json/TypeNameHandling.h"
#include "unitysdk/System/Nullable_1.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Serialization { class JsonArrayContract; }
namespace Newtonsoft::Json::Serialization { class JsonContainerContract; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class JsonDictionaryContract; }
namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonObjectContract; }
namespace Newtonsoft::Json::Serialization { class JsonPrimitiveContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerProxy; }
namespace Newtonsoft::Json::Serialization { class JsonStringContract; }
namespace System { class Array; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::Serialization { class ISerializable; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CALCULATEPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x15BB8140)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CHECKFORCIRCULARREFERENCE_OFFSET UNITYSDK_OFFSET(0x15BB6F20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETCONTRACTSAFE_OFFSET UNITYSDK_OFFSET(0x15BB1CC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETINTERNALSERIALIZER_OFFSET UNITYSDK_OFFSET(0x15BB2D00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x15BB8450)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x15BB7410)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HANDLEERROR_OFFSET UNITYSDK_OFFSET(0x15BB2B50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0x15BB6E20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_2_OFFSET UNITYSDK_OFFSET(0x15BB94B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x15BB6F10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x15BB8C40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x15BB7BB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x15BB77F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_RESOLVEISREFERENCE_OFFSET UNITYSDK_OFFSET(0x15BB6DA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZECONVERTABLE_OFFSET UNITYSDK_OFFSET(0x15BB36B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x15BB5A10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x15BB66A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZELIST_OFFSET UNITYSDK_OFFSET(0x15BB4B80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_1_OFFSET UNITYSDK_OFFSET(0x15BB9880)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x15BB5710)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x15BB4060)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x15BB2E20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x15BB5920)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x15BB2460)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x15BB1AB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x15BB8880)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15BB6E30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEREFERENCE_OFFSET UNITYSDK_OFFSET(0x15BB1D10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITETYPE_OFFSET UNITYSDK_OFFSET(0x15BB3090)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_TRYCONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x15BB7570)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEOBJECTSTART_OFFSET UNITYSDK_OFFSET(0x15BB7F70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCEIDPROPERTY_OFFSET UNITYSDK_OFFSET(0x15BB9000)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCE_OFFSET UNITYSDK_OFFSET(0x15BB1EA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x15BB94C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITETYPEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15BB31C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB1A60)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalWriter_TypeDefinitionIndex = 9403;

	class JsonSerializerInternalWriter : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _serializeStack; // 0x38
		::System::Type* _rootType; // 0x40
		::System::Int32 _rootLevel; // 0x48

		::System::Void _ctor(::Newtonsoft::Json::JsonSerializer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Serialize(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::System::Type* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer()
		{
			return ((::Newtonsoft::Json::Serialization::JsonSerializerProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETINTERNALSERIALIZER_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETCONTRACTSAFE_OFFSET))(this, a1);
		}

		::System::Void SerializePrimitive(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEPRIMITIVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SerializeValue(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::Serialization::JsonContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Nullable_1<::System::Boolean> ResolveIsReference(::Newtonsoft::Json::Serialization::JsonContract* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2, ::Newtonsoft::Json::Serialization::JsonContainerContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_RESOLVEISREFERENCE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ShouldWriteReference(::System::Object* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2, ::Newtonsoft::Json::Serialization::JsonContract* a3, ::Newtonsoft::Json::Serialization::JsonContainerContract* a4, ::Newtonsoft::Json::Serialization::JsonProperty* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEREFERENCE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean ShouldWriteProperty(::System::Object* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Boolean CheckForCircularReference(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::Serialization::JsonProperty* a3, ::Newtonsoft::Json::Serialization::JsonContract* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CHECKFORCIRCULARREFERENCE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteReference(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCE_OFFSET))(this, a1, a2);
		}

		::System::String* GetReference(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETREFERENCE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean TryConvertToString(::System::Object* a1, ::System::Type* a2, ::System::String*& a3)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Type*, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_TRYCONVERTTOSTRING_OFFSET))(a1, a2, a3);
		}

		::System::Void SerializeString(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::Serialization::JsonStringContract* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonStringContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZESTRING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSerializing(::Newtonsoft::Json::JsonWriter* a1, ::Newtonsoft::Json::Serialization::JsonContract* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnSerialized(::Newtonsoft::Json::JsonWriter* a1, ::Newtonsoft::Json::Serialization::JsonContract* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SerializeObject(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::Serialization::JsonObjectContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEOBJECT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean CalculatePropertyValues(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::Serialization::JsonContainerContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonProperty* a5, ::Newtonsoft::Json::Serialization::JsonContract*& a6, ::System::Object*& a7)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*&, ::System::Object*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CALCULATEPROPERTYVALUES_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void WriteObjectStart(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::Serialization::JsonContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEOBJECTSTART_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void WriteReferenceIdProperty(::Newtonsoft::Json::JsonWriter* a1, ::System::Type* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCEIDPROPERTY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void WriteTypeProperty(::Newtonsoft::Json::JsonWriter* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITETYPEPROPERTY_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasFlag(::Newtonsoft::Json::DefaultValueHandling a1, ::Newtonsoft::Json::DefaultValueHandling a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasFlag_1(::Newtonsoft::Json::PreserveReferencesHandling a1, ::Newtonsoft::Json::PreserveReferencesHandling a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::PreserveReferencesHandling, ::Newtonsoft::Json::PreserveReferencesHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasFlag_2(::Newtonsoft::Json::TypeNameHandling a1, ::Newtonsoft::Json::TypeNameHandling a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_2_OFFSET))(this, a1, a2);
		}

		::System::Void SerializeConvertable(::Newtonsoft::Json::JsonWriter* a1, ::Newtonsoft::Json::JsonConverter* a2, ::System::Object* a3, ::Newtonsoft::Json::Serialization::JsonContract* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::JsonConverter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZECONVERTABLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SerializeList(::Newtonsoft::Json::JsonWriter* a1, ::System::Collections::IEnumerable* a2, ::Newtonsoft::Json::Serialization::JsonArrayContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Collections::IEnumerable*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZELIST_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* a1, ::System::Array* a2, ::Newtonsoft::Json::Serialization::JsonArrayContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SerializeMultidimensionalArray_1(::Newtonsoft::Json::JsonWriter* a1, ::System::Array* a2, ::Newtonsoft::Json::Serialization::JsonArrayContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::System::Int32 a5, ::Il2CppArray<::System::Int32>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean WriteStartArray(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::Serialization::JsonArrayContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITESTARTARRAY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void SerializeISerializable(::Newtonsoft::Json::JsonWriter* a1, ::System::Runtime::Serialization::ISerializable* a2, ::Newtonsoft::Json::Serialization::JsonISerializableContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Runtime::Serialization::ISerializable*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEISERIALIZABLE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean ShouldWriteType(::Newtonsoft::Json::TypeNameHandling a1, ::Newtonsoft::Json::Serialization::JsonContract* a2, ::Newtonsoft::Json::Serialization::JsonProperty* a3, ::Newtonsoft::Json::Serialization::JsonContainerContract* a4, ::Newtonsoft::Json::Serialization::JsonProperty* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITETYPE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void SerializeDictionary(::Newtonsoft::Json::JsonWriter* a1, ::System::Collections::IDictionary* a2, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Collections::IDictionary*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEDICTIONARY_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::String* GetPropertyName(::Newtonsoft::Json::JsonWriter* a1, ::System::Object* a2, ::Newtonsoft::Json::Serialization::JsonContract* a3, ::System::Boolean& a4)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETPROPERTYNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HandleError(::Newtonsoft::Json::JsonWriter* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HANDLEERROR_OFFSET))(this, a1, a2);
		}

		::System::Boolean ShouldSerialize(::Newtonsoft::Json::JsonWriter* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDSERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsSpecified(::Newtonsoft::Json::JsonWriter* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ISSPECIFIED_OFFSET))(this, a1, a2, a3);
		}
	};
}
