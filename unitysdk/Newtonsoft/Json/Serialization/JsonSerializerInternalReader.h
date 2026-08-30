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

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ADDREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BEE6020)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CALCULATEPROPERTYDETAILS_OFFSET UNITYSDK_OFFSET(0x1BEE53C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CHECKPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1BEDECD0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_COERCEEMPTYSTRINGTONULL_OFFSET UNITYSDK_OFFSET(0x1BEE0DC0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLEITEM_OFFSET UNITYSDK_OFFSET(0x1BED7920)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLE_OFFSET UNITYSDK_OFFSET(0x1BEE2960)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJOBJECT_OFFSET UNITYSDK_OFFSET(0x1BEDE6E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJTOKEN_OFFSET UNITYSDK_OFFSET(0x1BEDE3A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATELIST_OFFSET UNITYSDK_OFFSET(0x1BEDFF50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1BEE2780)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWLIST_OFFSET UNITYSDK_OFFSET(0x1BEE3B40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1BEE25B0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECTUSINGCREATORWITHPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1BEE73C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BEDEE50)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEVALUEINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BEDD940)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZECONVERTABLE_OFFSET UNITYSDK_OFFSET(0x1BEDD180)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BEDC6A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENDPROCESSPROPERTY_OFFSET UNITYSDK_OFFSET(0x1BEEAB60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSUREARRAYCONTRACT_OFFSET UNITYSDK_OFFSET(0x1BEE3A40)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSURETYPE_OFFSET UNITYSDK_OFFSET(0x1BEE0A00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONTRACTSAFE_OFFSET UNITYSDK_OFFSET(0x1BEDC660)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1BEDCBA0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETEXPECTEDDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1BEE0E60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETINTERNALSERIALIZER_OFFSET UNITYSDK_OFFSET(0x1BEDE280)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HANDLEERROR_OFFSET UNITYSDK_OFFSET(0x1BEDE0E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASFLAG_OFFSET UNITYSDK_OFFSET(0x1BEE5C10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASNODEFINEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BEE2550)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZED_OFFSET UNITYSDK_OFFSET(0x1BEE6820)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZING_OFFSET UNITYSDK_OFFSET(0x1BEE64C0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1BEDA7E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATELIST_OFFSET UNITYSDK_OFFSET(0x1BED9EB0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEMULTIDIMENSIONALARRAY_OFFSET UNITYSDK_OFFSET(0x1BEE3D60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BEDB710)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATE_OFFSET UNITYSDK_OFFSET(0x1BED9640)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READEXTENSIONDATAVALUE_OFFSET UNITYSDK_OFFSET(0x1BEEAED0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READFORTYPE_OFFSET UNITYSDK_OFFSET(0x1BEDCC20)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIESTOKEN_OFFSET UNITYSDK_OFFSET(0x1BEE0EF0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BEE1790)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVEPROPERTYANDCREATORVALUES_OFFSET UNITYSDK_OFFSET(0x1BEE9E70)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVETYPENAME_OFFSET UNITYSDK_OFFSET(0x1BEE33A0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETEXTENSIONDATA_OFFSET UNITYSDK_OFFSET(0x1BEEAF60)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYPRESENCE_OFFSET UNITYSDK_OFFSET(0x1BEEB430)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1BEE4E10)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BEEB0F0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDSETPROPERTYVALUE_OFFSET UNITYSDK_OFFSET(0x1BEE5A00)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_THROWUNEXPECTEDENDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1BEE71E0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BED9630)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalReader_TypeDefinitionIndex = 9677;

	class JsonSerializerInternalReader : public ::Newtonsoft::Json::Serialization::JsonSerializerInternalBase
	{
	public:
		::System::Void _ctor(::Newtonsoft::Json::JsonSerializer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER__CTOR_OFFSET))(this, a1);
		}

		::System::Void Populate(::Newtonsoft::Json::JsonReader* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATE_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Serialization::JsonContract* GetContractSafe(::System::Type* a1)
		{
			return ((::Newtonsoft::Json::Serialization::JsonContract*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONTRACTSAFE_OFFSET))(this, a1);
		}

		::System::Object* Deserialize(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::System::Boolean a3)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::Newtonsoft::Json::Serialization::JsonSerializerProxy* GetInternalSerializer()
		{
			return ((::Newtonsoft::Json::Serialization::JsonSerializerProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETINTERNALSERIALIZER_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* CreateJToken(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonContract* a2)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJTOKEN_OFFSET))(this, a1, a2);
		}

		::Newtonsoft::Json::Linq::JToken* CreateJObject(::Newtonsoft::Json::JsonReader* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEJOBJECT_OFFSET))(this, a1);
		}

		::System::Object* CreateValueInternal(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::Newtonsoft::Json::Serialization::JsonContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6, ::System::Object* a7)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEVALUEINTERNAL_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean CoerceEmptyStringToNull(::System::Type* a1, ::Newtonsoft::Json::Serialization::JsonContract* a2, ::System::String* a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_COERCEEMPTYSTRINGTONULL_OFFSET))(a1, a2, a3);
		}

		::System::String* GetExpectedDescription(::Newtonsoft::Json::Serialization::JsonContract* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETEXPECTEDDESCRIPTION_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::JsonConverter* GetConverter(::Newtonsoft::Json::Serialization::JsonContract* a1, ::Newtonsoft::Json::JsonConverter* a2, ::Newtonsoft::Json::Serialization::JsonContainerContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4)
		{
			return ((::Newtonsoft::Json::JsonConverter*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_GETCONVERTER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* CreateObject(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::Newtonsoft::Json::Serialization::JsonContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6, ::System::Object* a7)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Boolean ReadMetadataPropertiesToken(::Newtonsoft::Json::Linq::JTokenReader* a1, ::System::Type*& a2, ::Newtonsoft::Json::Serialization::JsonContract*& a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6, ::System::Object* a7, ::System::Object*& a8, ::System::String*& a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JTokenReader*, ::System::Type*&, ::Newtonsoft::Json::Serialization::JsonContract*&, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::Object*&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIESTOKEN_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Boolean ReadMetadataProperties(::Newtonsoft::Json::JsonReader* a1, ::System::Type*& a2, ::Newtonsoft::Json::Serialization::JsonContract*& a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6, ::System::Object* a7, ::System::Object*& a8, ::System::String*& a9)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*&, ::Newtonsoft::Json::Serialization::JsonContract*&, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::Object*&, ::System::String*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READMETADATAPROPERTIES_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		::System::Void ResolveTypeName(::Newtonsoft::Json::JsonReader* a1, ::System::Type*& a2, ::Newtonsoft::Json::Serialization::JsonContract*& a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::Serialization::JsonContainerContract* a5, ::Newtonsoft::Json::Serialization::JsonProperty* a6, ::System::String* a7)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*&, ::Newtonsoft::Json::Serialization::JsonContract*&, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVETYPENAME_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::Newtonsoft::Json::Serialization::JsonArrayContract* EnsureArrayContract(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::Newtonsoft::Json::Serialization::JsonContract* a3)
		{
			return ((::Newtonsoft::Json::Serialization::JsonArrayContract*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSUREARRAYCONTRACT_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* CreateList(::Newtonsoft::Json::JsonReader* a1, ::System::Type* a2, ::Newtonsoft::Json::Serialization::JsonContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::System::Object* a5, ::System::String* a6)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATELIST_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean HasNoDefinedType(::Newtonsoft::Json::Serialization::JsonContract* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonContract*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASNODEFINEDTYPE_OFFSET))(this, a1);
		}

		::System::Object* EnsureType(::Newtonsoft::Json::JsonReader* a1, ::System::Object* a2, ::System::Globalization::CultureInfo* a3, ::Newtonsoft::Json::Serialization::JsonContract* a4, ::System::Type* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Object*, ::System::Globalization::CultureInfo*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENSURETYPE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean SetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* a1, ::Newtonsoft::Json::JsonConverter* a2, ::Newtonsoft::Json::Serialization::JsonContainerContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::JsonReader* a5, ::System::Object* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYVALUE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean CalculatePropertyDetails(::Newtonsoft::Json::Serialization::JsonProperty* a1, ::Newtonsoft::Json::JsonConverter*& a2, ::Newtonsoft::Json::Serialization::JsonContainerContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::Newtonsoft::Json::JsonReader* a5, ::System::Object* a6, ::System::Boolean& a7, ::System::Object*& a8, ::Newtonsoft::Json::Serialization::JsonContract*& a9, ::System::Boolean& a10)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonConverter*&, ::Newtonsoft::Json::Serialization::JsonContainerContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Object*, ::System::Boolean&, ::System::Object*&, ::Newtonsoft::Json::Serialization::JsonContract*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CALCULATEPROPERTYDETAILS_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		::System::Void AddReference(::Newtonsoft::Json::JsonReader* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ADDREFERENCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HasFlag(::Newtonsoft::Json::DefaultValueHandling a1, ::Newtonsoft::Json::DefaultValueHandling a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::DefaultValueHandling, ::Newtonsoft::Json::DefaultValueHandling))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HASFLAG_OFFSET))(this, a1, a2);
		}

		::System::Boolean ShouldSetPropertyValue(::Newtonsoft::Json::Serialization::JsonProperty* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDSETPROPERTYVALUE_OFFSET))(this, a1, a2);
		}

		::System::Collections::IList* CreateNewList(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonArrayContract* a2, ::System::Boolean& a3)
		{
			return ((::System::Collections::IList*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWLIST_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IDictionary* CreateNewDictionary(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* a2, ::System::Boolean& a3)
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWDICTIONARY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDeserializing(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonContract* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZING_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDeserialized(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonContract* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ONDESERIALIZED_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* PopulateDictionary(::System::Collections::IDictionary* a1, ::Newtonsoft::Json::JsonReader* a2, ::Newtonsoft::Json::Serialization::JsonDictionaryContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::System::String* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IDictionary*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonDictionaryContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEDICTIONARY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* PopulateMultidimensionalArray(::System::Collections::IList* a1, ::Newtonsoft::Json::JsonReader* a2, ::Newtonsoft::Json::Serialization::JsonArrayContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::System::String* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEMULTIDIMENSIONALARRAY_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ThrowUnexpectedEndException(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonContract* a2, ::System::Object* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_THROWUNEXPECTEDENDEXCEPTION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* PopulateList(::System::Collections::IList* a1, ::Newtonsoft::Json::JsonReader* a2, ::Newtonsoft::Json::Serialization::JsonArrayContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::System::String* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Collections::IList*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonArrayContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATELIST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* CreateISerializable(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonISerializableContract* a2, ::Newtonsoft::Json::Serialization::JsonProperty* a3, ::System::String* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* CreateISerializableItem(::Newtonsoft::Json::Linq::JToken* a1, ::System::Type* a2, ::Newtonsoft::Json::Serialization::JsonISerializableContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Type*, ::Newtonsoft::Json::Serialization::JsonISerializableContract*, ::Newtonsoft::Json::Serialization::JsonProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEISERIALIZABLEITEM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Object* CreateObjectUsingCreatorWithParameters(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonObjectContract* a2, ::Newtonsoft::Json::Serialization::JsonProperty* a3, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* a4, ::System::String* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATEOBJECTUSINGCREATORWITHPARAMETERS_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* DeserializeConvertable(::Newtonsoft::Json::JsonConverter* a1, ::Newtonsoft::Json::JsonReader* a2, ::System::Type* a3, ::System::Object* a4)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonConverter*, ::Newtonsoft::Json::JsonReader*, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_DESERIALIZECONVERTABLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>* ResolvePropertyAndCreatorValues(::Newtonsoft::Json::Serialization::JsonObjectContract* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2, ::Newtonsoft::Json::JsonReader* a3, ::System::Type* a4)
		{
			return ((::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_CreatorPropertyContext*>*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::Type*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_RESOLVEPROPERTYANDCREATORVALUES_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ReadForType(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonContract* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READFORTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* CreateNewObject(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonObjectContract* a2, ::Newtonsoft::Json::Serialization::JsonProperty* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::System::String* a5, ::System::Boolean& a6)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CREATENEWOBJECT_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Object* PopulateObject(::System::Object* a1, ::Newtonsoft::Json::JsonReader* a2, ::Newtonsoft::Json::Serialization::JsonObjectContract* a3, ::Newtonsoft::Json::Serialization::JsonProperty* a4, ::System::String* a5)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_POPULATEOBJECT_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean ShouldDeserialize(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SHOULDDESERIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckPropertyName(::Newtonsoft::Json::JsonReader* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_CHECKPROPERTYNAME_OFFSET))(this, a1, a2);
		}

		::System::Void SetExtensionData(::Newtonsoft::Json::Serialization::JsonObjectContract* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2, ::Newtonsoft::Json::JsonReader* a3, ::System::String* a4, ::System::Object* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETEXTENSIONDATA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* ReadExtensionDataValue(::Newtonsoft::Json::Serialization::JsonObjectContract* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2, ::Newtonsoft::Json::JsonReader* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_READEXTENSIONDATAVALUE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndProcessProperty(::System::Object* a1, ::Newtonsoft::Json::JsonReader* a2, ::Newtonsoft::Json::Serialization::JsonObjectContract* a3, ::System::Int32 a4, ::Newtonsoft::Json::Serialization::JsonProperty* a5, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonObjectContract*, ::System::Int32, ::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_ENDPROCESSPROPERTY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetPropertyPresence(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Serialization::JsonProperty* a2, ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Serialization::JsonProperty*, ::System::Collections::Generic::Dictionary_2<::Newtonsoft::Json::Serialization::JsonProperty*, ::Newtonsoft::Json::Serialization::JsonSerializerInternalReader_PropertyPresence>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_SETPROPERTYPRESENCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HandleError(::Newtonsoft::Json::JsonReader* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALREADER_HANDLEERROR_OFFSET))(this, a1, a2, a3);
		}
	};
}
