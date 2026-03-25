#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/DefaultValueHandling.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonSerializerInternalBase.h"
#include "unitysdk/Newtonsoft/Json/Serialization/JsonSerializerInternalReader_PropertyPresence.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JTokenReader; }
namespace Newtonsoft::Json::Serialization { class JsonArrayContract; }
namespace Newtonsoft::Json::Serialization { class JsonContainerContract; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class JsonDictionaryContract; }
namespace Newtonsoft::Json::Serialization { class JsonISerializableContract; }
namespace Newtonsoft::Json::Serialization { class JsonObjectContract; }
namespace Newtonsoft::Json::Serialization { class JsonProperty; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerInternalReader_CreatorPropertyContext; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerProxy; }
namespace Newtonsoft::Json::Serialization { template <typename T> class ObjectConstructor_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ADDREFERENCE_OFFSET UNITYSDK_OFFSET(0x16487C20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CALCULATEPROPERTYDETAILS_OFFSET UNITYSDK_OFFSET(0x16487140)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CHECKPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x164821D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_COERCEEMPTYSTRINGTONULL_OFFSET UNITYSDK_OFFSET(0x16483BB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLEITEM_OFFSET UNITYSDK_OFFSET(0x1647D130)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x16485170)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJOBJECT_OFFSET UNITYSDK_OFFSET(0x16481E90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJTOKEN_OFFSET UNITYSDK_OFFSET(0x16481BE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATELIST_OFFSET UNITYSDK_OFFSET(0x164830C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWDICTIONARY_OFFSET UNITYSDK_OFFSET(0x16484F90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWLIST_OFFSET UNITYSDK_OFFSET(0x16485EA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWOBJECT_OFFSET UNITYSDK_OFFSET(0x16484DC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECTUSINGCREATORWITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x16488BA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECT_OFFSET UNITYSDK_OFFSET(0x16482360)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x164815E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZECONVERTABLE_OFFSET UNITYSDK_OFFSET(0x16481170)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x16480BA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENDPROCESSPROPERTY_OFFSET UNITYSDK_OFFSET(0x1648B480)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSUREARRAYCONTRACT_OFFSET UNITYSDK_OFFSET(0x16485DA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSURETYPE_OFFSET UNITYSDK_OFFSET(0x16483880)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONTRACTSAFE_OFFSET UNITYSDK_OFFSET(0x16480B60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x16480EE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETEXPECTEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x16483C50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETINTERNALSERIALIZER_OFFSET UNITYSDK_OFFSET(0x16481B30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HANDLEERROR_OFFSET UNITYSDK_OFFSET(0x164819F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x16487860)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASNODEFINEDTYPE_OFFSET UNITYSDK_OFFSET(0x16484D60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x164881C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x16487F90)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1647F6C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATELIST_OFFSET UNITYSDK_OFFSET(0x1647F010)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x16486100)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEOBJECT_OFFSET UNITYSDK_OFFSET(0x164800B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATE_OFFSET UNITYSDK_OFFSET(0x1647EAD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READEXTENSIONDATAVALUE_OFFSET UNITYSDK_OFFSET(0x1648B7E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READFORTYPE_OFFSET UNITYSDK_OFFSET(0x16480F60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIESTOKEN_OFFSET UNITYSDK_OFFSET(0x16483CE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIES_OFFSET UNITYSDK_OFFSET(0x16484650)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVEPROPERTYANDCREATORVALUES_OFFSET UNITYSDK_OFFSET(0x1648AC30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVETYPENAME_OFFSET UNITYSDK_OFFSET(0x16485890)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETEXTENSIONDATA_OFFSET UNITYSDK_OFFSET(0x1648B870)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYPRESENCE_OFFSET UNITYSDK_OFFSET(0x1648BC80)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x16486D20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1648BA50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDSETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x16487650)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_THROWUNEXPECTEDENDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x16488A30)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1647EA70)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalReader_TypeDefinitionIndex = 8337;

	class JsonSerializerInternalReader : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase
	{
	public:
		::System::Void _ctor(::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER__CTOR_OFFSET))(this, serializer);
		}

		::System::Void Populate(::Newtonsoft::Json::JsonReader* reader, ::System::Object* target)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATE_OFFSET))(this, reader, target);
		}

		::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Type* type)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONTRACTSAFE_OFFSET))(this, type);
		}

		::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Boolean checkAdditionalContent)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZE_OFFSET))(this, reader, objectType, checkAdditionalContent);
		}

		::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer()
		{
			return ((::Newtonsoft::Json::Serialization::JsonSerializerProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETINTERNALSERIALIZER_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* CreateJToken(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJTOKEN_OFFSET))(this, reader, contract);
		}

		::Newtonsoft::Json::Linq::JToken* CreateJObject(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJOBJECT_OFFSET))(this, reader);
		}

		::System::Object* CreateValueInternal(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEVALUEINTERNAL_OFFSET))(this, reader, objectType, contract, member, containerContract, containerMember, existingValue);
		}

		static ::System::Boolean CoerceEmptyStringToNull(::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::String* s)
		{
			return ((::System::Boolean(*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_COERCEEMPTYSTRINGTONULL_OFFSET))(objectType, contract, s);
		}

		::System::String* GetExpectedDescription(::Newtonsoft::Json::Serialization::JsonContract* contract)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETEXPECTEDDESCRIPTION_OFFSET))(this, contract);
		}

		::Newtonsoft::Json::JsonConverter* GetConverter(::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::JsonConverter* memberConverter, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONVERTER_OFFSET))(this, contract, memberConverter, containerContract, containerProperty);
		}

		::System::Object* CreateObject(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECT_OFFSET))(this, reader, objectType, contract, member, containerContract, containerMember, existingValue);
		}

		::System::Boolean ReadMetadataPropertiesToken(::Newtonsoft::Json::Linq::JTokenReader* reader, ::System::Type*& objectType, ::Newtonsoft::Json::Serialization::JsonContract*& contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue, ::System::Object*& newValue, ::System::String*& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JTokenReader*, ::System::Type*&, ::Newtonsoft::Json::Serialization::JsonContract*&, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::Object*&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIESTOKEN_OFFSET))(this, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
		}

		::System::Boolean ReadMetadataProperties(::Newtonsoft::Json::JsonReader* reader, ::System::Type*& objectType, ::Newtonsoft::Json::Serialization::JsonContract*& contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::Object* existingValue, ::System::Object*& newValue, ::System::String*& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*&, ::Newtonsoft::Json::Serialization::JsonContract*&, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::Object*&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIES_OFFSET))(this, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
		}

		::System::Void ResolveTypeName(::Newtonsoft::Json::JsonReader* reader, ::System::Type*& objectType, ::Newtonsoft::Json::Serialization::JsonContract*& contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::System::String* qualifiedTypeName)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*&, ::Newtonsoft::Json::Serialization::JsonContract*&, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVETYPENAME_OFFSET))(this, reader, objectType, contract, member, containerContract, containerMember, qualifiedTypeName);
		}

		::Newtonsoft::Json::Serialization::JsonArrayContract* EnsureArrayContract(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract)
		{
			return ((::Newtonsoft::Json::Serialization::JsonArrayContract*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSUREARRAYCONTRACT_OFFSET))(this, reader, objectType, contract);
		}

		::System::Object* CreateList(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::System::Object* existingValue, ::System::String* id)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATELIST_OFFSET))(this, reader, objectType, contract, member, existingValue, id);
		}

		::System::Boolean HasNoDefinedType(::Newtonsoft::Json::Serialization::JsonContract* contract)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASNODEFINEDTYPE_OFFSET))(this, contract);
		}

		::System::Object* EnsureType(::Newtonsoft::Json::JsonReader* reader, ::System::Object* value, ::System::Globalization::CultureInfo* culture, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Type* targetType)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*, ::System::Globalization::CultureInfo*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSURETYPE_OFFSET))(this, reader, value, culture, contract, targetType);
		}

		::System::Boolean SetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::JsonConverter* propertyConverter, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::Newtonsoft::Json::JsonReader* reader, ::System::Object* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYVALUE_OFFSET))(this, property, propertyConverter, containerContract, containerProperty, reader, target);
		}

		::System::Boolean CalculatePropertyDetails(::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::JsonConverter*& propertyConverter, ::Newtonsoft::Json::Serialization::JsonContainerContract* containerContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::Newtonsoft::Json::JsonReader* reader, ::System::Object* target, ::System::Boolean& useExistingValue, ::System::Object*& currentValue, ::Newtonsoft::Json::Serialization::JsonContract*& propertyContract, ::System::Boolean& gottenCurrentValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonConverter*&, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Object*, ::System::Boolean&, ::System::Object*&, ::Newtonsoft::Json::Serialization::JsonContract*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CALCULATEPROPERTYDETAILS_OFFSET))(this, property, propertyConverter, containerContract, containerProperty, reader, target, useExistingValue, currentValue, propertyContract, gottenCurrentValue);
		}

		::System::Void AddReference(::Newtonsoft::Json::JsonReader* reader, ::System::String* id, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ADDREFERENCE_OFFSET))(this, reader, id, value);
		}

		::System::Boolean HasFlag(::Newtonsoft::Json::DefaultValueHandling value, ::Newtonsoft::Json::DefaultValueHandling flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASFLAG_OFFSET))(this, value, flag);
		}

		::System::Boolean ShouldSetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDSETPROPERTYVALUE_OFFSET))(this, property, value);
		}

		::System::Collections::IList* CreateNewList(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract, ::System::Boolean& createdFromNonDefaultCreator)
		{
			return ((::System::Collections::IList*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWLIST_OFFSET))(this, reader, contract, createdFromNonDefaultCreator);
		}

		::System::Collections::IDictionary* CreateNewDictionary(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract, ::System::Boolean& createdFromNonDefaultCreator)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWDICTIONARY_OFFSET))(this, reader, contract, createdFromNonDefaultCreator);
		}

		::System::Void OnDeserializing(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZING_OFFSET))(this, reader, contract, value);
		}

		::System::Void OnDeserialized(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZED_OFFSET))(this, reader, contract, value);
		}

		::System::Object* PopulateDictionary(::System::Collections::IDictionary* dictionary, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::System::String* id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IDictionary*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEDICTIONARY_OFFSET))(this, dictionary, reader, contract, containerProperty, id);
		}

		::System::Object* PopulateMultidimensionalArray(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::System::String* id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEMULTIDIMENSIONALARRAY_OFFSET))(this, list, reader, contract, containerProperty, id);
		}

		::System::Void ThrowUnexpectedEndException(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* currentObject, ::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_THROWUNEXPECTEDENDEXCEPTION_OFFSET))(this, reader, contract, currentObject, message);
		}

		::System::Object* PopulateList(::System::Collections::IList* list, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonArrayContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::System::String* id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATELIST_OFFSET))(this, list, reader, contract, containerProperty, id);
		}

		::System::Object* CreateISerializable(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::System::String* id)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLE_OFFSET))(this, reader, contract, member, id);
		}

		::System::Object* CreateISerializableItem(::Newtonsoft::Json::Linq::JToken* token, ::System::Type* type, ::Newtonsoft::Json::Serialization::JsonISerializableContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLEITEM_OFFSET))(this, token, type, contract, member);
		}

		::System::Object* CreateObjectUsingCreatorWithParameters(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* creator, ::System::String* id)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECTUSINGCREATORWITHPARAMETERS_OFFSET))(this, reader, contract, containerProperty, creator, id);
		}

		::System::Object* DeserializeConvertable(::Newtonsoft::Json::JsonConverter* converter, ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZECONVERTABLE_OFFSET))(this, converter, reader, objectType, existingValue);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>* ResolvePropertyAndCreatorValues(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType)
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVEPROPERTYANDCREATORVALUES_OFFSET))(this, contract, containerProperty, reader, objectType);
		}

		::System::Boolean ReadForType(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Boolean hasConverter)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READFORTYPE_OFFSET))(this, reader, contract, hasConverter);
		}

		::System::Object* CreateNewObject(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* objectContract, ::Newtonsoft::Json::Serialization::JsonProperty* containerMember, ::Newtonsoft::Json::Serialization::JsonProperty* containerProperty, ::System::String* id, ::System::Boolean& createdFromNonDefaultCreator)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWOBJECT_OFFSET))(this, reader, objectContract, containerMember, containerProperty, id, createdFromNonDefaultCreator);
		}

		::System::Object* PopulateObject(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::System::String* id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEOBJECT_OFFSET))(this, newObject, reader, contract, member, id);
		}

		::System::Boolean ShouldDeserialize(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Object* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDDESERIALIZE_OFFSET))(this, reader, property, target);
		}

		::System::Boolean CheckPropertyName(::Newtonsoft::Json::JsonReader* reader, ::System::String* memberName)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CHECKPROPERTYNAME_OFFSET))(this, reader, memberName);
		}

		::System::Void SetExtensionData(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::JsonReader* reader, ::System::String* memberName, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETEXTENSIONDATA_OFFSET))(this, contract, member, reader, memberName, o);
		}

		::System::Object* ReadExtensionDataValue(::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::Newtonsoft::Json::Serialization::JsonProperty* member, ::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READEXTENSIONDATAVALUE_OFFSET))(this, contract, member, reader);
		}

		::System::Void EndProcessProperty(::System::Object* newObject, ::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonObjectContract* contract, ::System::Int32 initialDepth, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence presence, ::System::Boolean setDefaultValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::System::Int32, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENDPROCESSPROPERTY_OFFSET))(this, newObject, reader, contract, initialDepth, property, presence, setDefaultValue);
		}

		::System::Void SetPropertyPresence(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Serialization::JsonProperty* property, ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>* requiredProperties)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYPRESENCE_OFFSET))(this, reader, property, requiredProperties);
		}

		::System::Void HandleError(::Newtonsoft::Json::JsonReader* reader, ::System::Boolean readPastError, ::System::Int32 initialDepth)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HANDLEERROR_OFFSET))(this, reader, readPastError, initialDepth);
		}
	};
}
