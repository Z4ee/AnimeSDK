#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JContainer.h"
#include "unitysdk/Newtonsoft/Json/Linq/JTokenType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace Newtonsoft::Json { class JsonConverter; }
namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JProperty; }
namespace Newtonsoft::Json::Linq { class JPropertyKeyedCollection; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::ComponentModel { class AttributeCollection; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangingEventHandler; }
namespace System::ComponentModel { class TypeConverter; }

#define NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1645D210)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1645C0D0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_CLONETOKEN_OFFSET UNITYSDK_OFFSET(0x1645C6A0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_DEEPEQUALS_OFFSET UNITYSDK_OFFSET(0x1645C270)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_FROMOBJECT_1_OFFSET UNITYSDK_OFFSET(0x1645D000)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_FROMOBJECT_OFFSET UNITYSDK_OFFSET(0x1645CFE0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GETDEEPHASHCODE_OFFSET UNITYSDK_OFFSET(0x1645DD70)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1645DD80)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GET_CHILDRENTOKENS_OFFSET UNITYSDK_OFFSET(0x1645C0C0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x164311E0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1645C750)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1645C740)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_INDEXOFITEM_OFFSET UNITYSDK_OFFSET(0x1645C2D0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1645C2F0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_INTERNALPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1645C560)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_INTERNALPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x1645C670)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_LOAD_1_OFFSET UNITYSDK_OFFSET(0x1645CBD0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_LOAD_OFFSET UNITYSDK_OFFSET(0x164311D0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_ONPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1645DDE0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_ONPROPERTYCHANGING_OFFSET UNITYSDK_OFFSET(0x1645DE50)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1645CDA0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_PARSE_OFFSET UNITYSDK_OFFSET(0x1645CD90)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTY_OFFSET UNITYSDK_OFFSET(0x1645B9B0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1645D430)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1645C130)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1645C830)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___ADD_OFFSET UNITYSDK_OFFSET(0x1645D5F0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___CLEAR_OFFSET UNITYSDK_OFFSET(0x1645D640)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___CONTAINS_OFFSET UNITYSDK_OFFSET(0x1645D650)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___COPYTO_OFFSET UNITYSDK_OFFSET(0x1645D6E0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1645DBA0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___REMOVE_OFFSET UNITYSDK_OFFSET(0x1645DBB0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN__CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1645D260)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1645D3D0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1645D5A0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1645DEF0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET UNITYSDK_OFFSET(0x1645DF20)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1645D510)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x1645C350)
#define NEWTONSOFT_JSON_LINQ_JOBJECT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1645D120)
#define NEWTONSOFT_JSON_LINQ_JOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1645C1E0)
#define NEWTONSOFT_JSON_LINQ_JOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1645B870)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JObject_TypeDefinitionIndex = 8376;

	class JObject : public ::Newtonsoft::Json::Linq::JContainer
	{
	public:
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x48
		::System::ComponentModel::PropertyChangingEventHandler* PropertyChanging; // 0x50
		::Newtonsoft::Json::Linq::JPropertyKeyedCollection* _properties; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JObject* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JObject*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT__CTOR_1_OFFSET))(this, other);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* get_ChildrenTokens()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GET_CHILDRENTOKENS_OFFSET))(this);
		}

		::System::Void add_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_PROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_PropertyChanged(::System::ComponentModel::PropertyChangedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::PropertyChangedEventHandler*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_PROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Boolean DeepEquals(::Newtonsoft::Json::Linq::JToken* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_DEEPEQUALS_OFFSET))(this, node);
		}

		::System::Int32 IndexOfItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_INDEXOFITEM_OFFSET))(this, item);
		}

		::System::Void InsertItem(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item, ::System::Boolean skipParentCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_INSERTITEM_OFFSET))(this, index, item, skipParentCheck);
		}

		::System::Void ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::Newtonsoft::Json::Linq::JToken* existing)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_VALIDATETOKEN_OFFSET))(this, o, existing);
		}

		::System::Void InternalPropertyChanged(::Newtonsoft::Json::Linq::JProperty* childProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_INTERNALPROPERTYCHANGED_OFFSET))(this, childProperty);
		}

		::System::Void InternalPropertyChanging(::Newtonsoft::Json::Linq::JProperty* childProperty)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JProperty*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_INTERNALPROPERTYCHANGING_OFFSET))(this, childProperty);
		}

		::Newtonsoft::Json::Linq::JToken* CloneToken()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_CLONETOKEN_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JTokenType get_Type()
		{
			return ((::Newtonsoft::Json::Linq::JTokenType(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GET_TYPE_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JProperty* Property(::System::String* name)
		{
			return ((::Newtonsoft::Json::Linq::JProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_PROPERTY_OFFSET))(this, name);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::Object* key)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GET_ITEM_OFFSET))(this, key);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item_1(::System::String* propertyName)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GET_ITEM_1_OFFSET))(this, propertyName);
		}

		::System::Void set_Item(::System::String* propertyName, ::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SET_ITEM_OFFSET))(this, propertyName, value);
		}

		static ::Newtonsoft::Json::Linq::JObject* Load(::Newtonsoft::Json::JsonReader* reader)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::Newtonsoft::Json::JsonReader*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_LOAD_OFFSET))(reader);
		}

		static ::Newtonsoft::Json::Linq::JObject* Load_1(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_LOAD_1_OFFSET))(reader, settings);
		}

		static ::Newtonsoft::Json::Linq::JObject* Parse(::System::String* json)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_PARSE_OFFSET))(json);
		}

		static ::Newtonsoft::Json::Linq::JObject* Parse_1(::System::String* json, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::System::String*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_PARSE_1_OFFSET))(json, settings);
		}

		static ::Newtonsoft::Json::Linq::JObject* FromObject(::System::Object* o)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_FROMOBJECT_OFFSET))(o);
		}

		static ::Newtonsoft::Json::Linq::JObject* FromObject_1(::System::Object* o, ::Newtonsoft::Json::JsonSerializer* jsonSerializer)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::System::Object*, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_FROMOBJECT_1_OFFSET))(o, jsonSerializer);
		}

		::System::Void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>* converters)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonWriter*, ::Il2CppArray<::Newtonsoft::Json::JsonConverter*>*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_WRITETO_OFFSET))(this, writer, converters);
		}

		::System::Void Add(::System::String* propertyName, ::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ADD_OFFSET))(this, propertyName, value);
		}

		::System::Boolean System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN__CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_KEYS_OFFSET))(this);
		}

		::System::Boolean Remove(::System::String* propertyName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_REMOVE_OFFSET))(this, propertyName);
		}

		::System::Boolean TryGetValue(::System::String* propertyName, ::Newtonsoft::Json::Linq::JToken*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Linq::JToken*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_TRYGETVALUE_OFFSET))(this, propertyName, value);
		}

		::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* System_Collections_Generic_IDictionary_System_String_Newtonsoft_Json_Linq_JToken__get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_IDICTIONARY_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_VALUES_OFFSET))(this);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Add(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*> item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___ADD_OFFSET))(this, item);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Contains(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*> item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___CONTAINS_OFFSET))(this, item);
		}

		::System::Void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___CopyTo(::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*>>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*>>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_System_String_Newtonsoft_Json_Linq_JToken___Remove(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*> item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*>))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_NEWTONSOFT_JSON_LINQ_JTOKEN___REMOVE_OFFSET))(this, item);
		}

		::System::Int32 GetDeepHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GETDEEPHASHCODE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*>>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void OnPropertyChanged(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ONPROPERTYCHANGED_OFFSET))(this, propertyName);
		}

		::System::Void OnPropertyChanging(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_ONPROPERTYCHANGING_OFFSET))(this, propertyName);
		}

		::System::ComponentModel::AttributeCollection* System_ComponentModel_ICustomTypeDescriptor_GetAttributes()
		{
			return ((::System::ComponentModel::AttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETATTRIBUTES_OFFSET))(this);
		}

		::System::ComponentModel::TypeConverter* System_ComponentModel_ICustomTypeDescriptor_GetConverter()
		{
			return ((::System::ComponentModel::TypeConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JOBJECT_SYSTEM_COMPONENTMODEL_ICUSTOMTYPEDESCRIPTOR_GETCONVERTER_OFFSET))(this);
		}
	};
}
