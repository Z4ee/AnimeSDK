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

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CALCULATEPROPERTYVALUES_OFFSET UNITYSDK_OFFSET(0x1D9DD4A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CHECKFORCIRCULARREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D9DC790)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETCONTRACTSAFE_OFFSET UNITYSDK_OFFSET(0x1D9D8E80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETINTERNALSERIALIZER_OFFSET UNITYSDK_OFFSET(0x1D9D98F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1D9DD7D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D9DCA90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HANDLEERROR_OFFSET UNITYSDK_OFFSET(0x1D9D9820)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_1_OFFSET UNITYSDK_OFFSET(0x1D9DC660)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_2_OFFSET UNITYSDK_OFFSET(0x1D9DE3B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1D9DC780)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ISSPECIFIED_OFFSET UNITYSDK_OFFSET(0x1D9DDE10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1D9DD0F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZING_OFFSET UNITYSDK_OFFSET(0x1D9DCEA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_RESOLVEISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D9DC5E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZECONVERTABLE_OFFSET UNITYSDK_OFFSET(0x1D9D9EB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1D9DB6E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1D9DC0D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZELIST_OFFSET UNITYSDK_OFFSET(0x1D9DACB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_1_OFFSET UNITYSDK_OFFSET(0x1D9DE660)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x1D9DB4E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D9DA480)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1D9D99B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZESTRING_OFFSET UNITYSDK_OFFSET(0x1D9DB660)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEVALUE_OFFSET UNITYSDK_OFFSET(0x1D9D92E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D9D8C30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D9DDBC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEDYNAMICPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D9DEB00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D9DC670)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D9D8ED0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITETYPE_OFFSET UNITYSDK_OFFSET(0x1D9D9B20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_TRYCONVERTTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D9DCBF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEOBJECTSTART_OFFSET UNITYSDK_OFFSET(0x1D9DD340)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCEIDPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D9DE180)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D9D9060)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITESTARTARRAY_OFFSET UNITYSDK_OFFSET(0x1D9DE3C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITETYPEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D9D9C50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D8AE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalWriter_TypeDefinitionIndex = 7142;

	class JsonSerializerInternalWriter : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase
	{
	public:
		::System::Type* _rootType; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* _serializeStack; // 0x40
		::System::Int32 _rootLevel; // 0x48

		::System::Void _ctor(::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER__CTOR_OFFSET))(this, serializer);
		}

		::System::Void Serialize(::Newtonsoft::Json::JsonWriter* jsonWriter, ::System::Object* value, ::System::Type* objectType)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZE_OFFSET))(this, jsonWriter, value, objectType);
		}

		::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer()
		{
			return ((::Newtonsoft::Json::Serialization::JsonSerializerProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETINTERNALSERIALIZER_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Object* value)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETCONTRACTSAFE_OFFSET))(this, value);
		}

		::System::Void SerializePrimitive(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonPrimitiveContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEPRIMITIVE_OFFSET))(this, writer, value, contract, member, containerContract, containerProperty);
		}

		::System::Void SerializeValue(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContract* valueContract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEVALUE_OFFSET))(this, writer, value, valueContract, member, containerContract, containerProperty);
		}

		::System::Nullable_1<::System::Boolean> ResolveIsReference(::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Nullable_1<::System::Boolean>(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_RESOLVEISREFERENCE_OFFSET))(this, contract, property, collectionContract, containerProperty);
		}

		::System::Boolean ShouldWriteReference(::System::Object* value, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonContract* valueContract, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEREFERENCE_OFFSET))(this, value, property, valueContract, collectionContract, containerProperty);
		}

		::System::Boolean ShouldWriteProperty(::System::Object* memberValue, ::Newtonsoft::Json::Serialization::JsonProperty* property)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEPROPERTY_OFFSET))(this, memberValue, property);
		}

		::System::Boolean CheckForCircularReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CHECKFORCIRCULARREFERENCE_OFFSET))(this, writer, value, property, contract, containerContract, containerProperty);
		}

		::System::Void WriteReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCE_OFFSET))(this, writer, value);
		}

		::System::String* GetReference(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETREFERENCE_OFFSET))(this, writer, value);
		}

		static ::System::Boolean TryConvertToString(::System::Object* value, ::System::Type* type, ::System::String*& s)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Type*, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_TRYCONVERTTOSTRING_OFFSET))(value, type, s);
		}

		::System::Void SerializeString(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonStringContract* contract)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonStringContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZESTRING_OFFSET))(this, writer, value, contract);
		}

		::System::Void OnSerializing(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZING_OFFSET))(this, writer, contract, value);
		}

		::System::Void OnSerialized(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ONSERIALIZED_OFFSET))(this, writer, contract, value);
		}

		::System::Void SerializeObject(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEOBJECT_OFFSET))(this, writer, value, contract, member, collectionContract, containerProperty);
		}

		::System::Boolean CalculatePropertyValues(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContainerContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonContract*& memberContract, ::System::Object*& memberValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContract*&, ::System::Object*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_CALCULATEPROPERTYVALUES_OFFSET))(this, writer, value, contract, member, property, memberContract, memberValue);
		}

		::System::Void WriteObjectStart(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEOBJECTSTART_OFFSET))(this, writer, value, contract, member, collectionContract, containerProperty);
		}

		::System::Void WriteReferenceIdProperty(::Newtonsoft::Json::JsonWriter* writer, ::System::Type* type, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITEREFERENCEIDPROPERTY_OFFSET))(this, writer, type, value);
		}

		::System::Void WriteTypeProperty(::Newtonsoft::Json::JsonWriter* writer, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITETYPEPROPERTY_OFFSET))(this, writer, type);
		}

		::System::Boolean HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_OFFSET))(this, value, flag);
		}

		::System::Boolean HasFlag_1(::Newtonsoft::Json::PreserveReferencesHandling value, ::Newtonsoft::Json::PreserveReferencesHandling flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::PreserveReferencesHandling, ::Newtonsoft::Json::PreserveReferencesHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_1_OFFSET))(this, value, flag);
		}

		::System::Boolean HasFlag_2(::Newtonsoft::Json::TypeNameHandling value, ::Newtonsoft::Json::TypeNameHandling flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::TypeNameHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HASFLAG_2_OFFSET))(this, value, flag);
		}

		::System::Void SerializeConvertable(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::JsonConverter* converter, ::System::Object* value, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::JsonConverter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZECONVERTABLE_OFFSET))(this, writer, converter, value, contract, collectionContract, containerProperty);
		}

		::System::Void SerializeList(::Newtonsoft::Json::JsonWriter* writer, ::System::Collections::IEnumerable* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Collections::IEnumerable*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZELIST_OFFSET))(this, writer, values, contract, member, collectionContract, containerProperty);
		}

		::System::Void SerializeMultidimensionalArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Array* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_OFFSET))(this, writer, values, contract, member, collectionContract, containerProperty);
		}

		::System::Void SerializeMultidimensionalArray_1(::Newtonsoft::Json::JsonWriter* writer, ::System::Array* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::System::Int32 initialDepth, ::Il2CppArray<::System::Int32>* indices)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Array*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEMULTIDIMENSIONALARRAY_1_OFFSET))(this, writer, values, contract, member, initialDepth, indices);
		}

		::System::Boolean WriteStartArray(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* values, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_WRITESTARTARRAY_OFFSET))(this, writer, values, contract, member, containerContract, containerProperty);
		}

		::System::Void SerializeISerializable(::Newtonsoft::Json::JsonWriter* writer, ::System::Runtime::Serialization::ISerializable* value, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Runtime::Serialization::ISerializable*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEISERIALIZABLE_OFFSET))(this, writer, value, contract, member, collectionContract, containerProperty);
		}

		::System::Boolean ShouldWriteDynamicProperty(::System::Object* memberValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITEDYNAMICPROPERTY_OFFSET))(this, memberValue);
		}

		::System::Boolean ShouldWriteType(::Newtonsoft::Json::TypeNameHandling typeNameHandlingFlag, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::TypeNameHandling, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDWRITETYPE_OFFSET))(this, typeNameHandlingFlag, contract, member, containerContract, containerProperty);
		}

		::System::Void SerializeDictionary(::Newtonsoft::Json::JsonWriter* writer, ::System::Collections::IDictionary* values, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* collectionContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Collections::IDictionary*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SERIALIZEDICTIONARY_OFFSET))(this, writer, values, contract, member, collectionContract, containerProperty);
		}

		::System::String* GetPropertyName(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* name, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Boolean& escape)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_GETPROPERTYNAME_OFFSET))(this, writer, name, contract, escape);
		}

		::System::Void HandleError(::Newtonsoft::Json::JsonWriter* writer, ::System::Int32 initialDepth)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_HANDLEERROR_OFFSET))(this, writer, initialDepth);
		}

		::System::Boolean ShouldSerialize(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_SHOULDSERIALIZE_OFFSET))(this, writer, property, target);
		}

		::System::Boolean IsSpecified(::Newtonsoft::Json::JsonWriter* writer, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALWRITER_ISSPECIFIED_OFFSET))(this, writer, property, target);
		}
	};
}
