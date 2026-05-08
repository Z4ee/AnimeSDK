#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LitJson/JsonType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class IJsonWrapper; }
namespace LitJson { class JsonWriter; }
namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define LITJSON_JSONDATA_ADD_OFFSET UNITYSDK_OFFSET(0x19DB9170)
#define LITJSON_JSONDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0x19DBAD60)
#define LITJSON_JSONDATA_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x19DB5720)
#define LITJSON_JSONDATA_ENSURECOLLECTION_OFFSET UNITYSDK_OFFSET(0x19DB5150)
#define LITJSON_JSONDATA_ENSUREDICTIONARY_OFFSET UNITYSDK_OFFSET(0x19DB55B0)
#define LITJSON_JSONDATA_ENSURELIST_OFFSET UNITYSDK_OFFSET(0x19DB66F0)
#define LITJSON_JSONDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x19DBAE90)
#define LITJSON_JSONDATA_GETCOMMENT_OFFSET UNITYSDK_OFFSET(0x19DB8EB0)
#define LITJSON_JSONDATA_GETJSONTYPE_OFFSET UNITYSDK_OFFSET(0x19DBB090)
#define LITJSON_JSONDATA_GET_ASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19DB5220)
#define LITJSON_JSONDATA_GET_ASBOOL_OFFSET UNITYSDK_OFFSET(0x19DB5320)
#define LITJSON_JSONDATA_GET_ASDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DB52A0)
#define LITJSON_JSONDATA_GET_ASINT_OFFSET UNITYSDK_OFFSET(0x19DB5330)
#define LITJSON_JSONDATA_GET_ASLONG_OFFSET UNITYSDK_OFFSET(0x19DB53B0)
#define LITJSON_JSONDATA_GET_ASSTRING_OFFSET UNITYSDK_OFFSET(0x19DB5440)
#define LITJSON_JSONDATA_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x19DB54B0)
#define LITJSON_JSONDATA_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19DB5060)
#define LITJSON_JSONDATA_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x19DB5200)
#define LITJSON_JSONDATA_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19DB5210)
#define LITJSON_JSONDATA_GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DB5290)
#define LITJSON_JSONDATA_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x19DB5310)
#define LITJSON_JSONDATA_GET_ISLONG_OFFSET UNITYSDK_OFFSET(0x19DB53A0)
#define LITJSON_JSONDATA_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x19DB5420)
#define LITJSON_JSONDATA_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x19DB5430)
#define LITJSON_JSONDATA_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x19DB7920)
#define LITJSON_JSONDATA_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DB7840)
#define LITJSON_JSONDATA_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19DB54D0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19DB8C40)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DB8CB0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETINT_OFFSET UNITYSDK_OFFSET(0x19DB8D20)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETLONG_OFFSET UNITYSDK_OFFSET(0x19DB8D90)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x19DB8E00)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x19DB6590)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19DB65A0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DB65B0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x19DB65C0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISLONG_OFFSET UNITYSDK_OFFSET(0x19DB65D0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x19DB65E0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x19DB65F0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19DB8E70)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DB8EC0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETINT_OFFSET UNITYSDK_OFFSET(0x19DB8F00)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETLONG_OFFSET UNITYSDK_OFFSET(0x19DB8F40)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETSTRING_OFFSET UNITYSDK_OFFSET(0x19DB8F80)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x19DB90E0)
#define LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_TOJSON_OFFSET UNITYSDK_OFFSET(0x19DB8FD0)
#define LITJSON_JSONDATA_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19DB7F90)
#define LITJSON_JSONDATA_OP_EXPLICIT_2_OFFSET UNITYSDK_OFFSET(0x19DB8000)
#define LITJSON_JSONDATA_OP_EXPLICIT_3_OFFSET UNITYSDK_OFFSET(0x19DB8080)
#define LITJSON_JSONDATA_OP_EXPLICIT_4_OFFSET UNITYSDK_OFFSET(0x19DB8100)
#define LITJSON_JSONDATA_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x19DB7F20)
#define LITJSON_JSONDATA_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x19DB7DF0)
#define LITJSON_JSONDATA_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x19DB7E40)
#define LITJSON_JSONDATA_OP_IMPLICIT_3_OFFSET UNITYSDK_OFFSET(0x19DB7E80)
#define LITJSON_JSONDATA_OP_IMPLICIT_4_OFFSET UNITYSDK_OFFSET(0x19DB7ED0)
#define LITJSON_JSONDATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x19DB7DB0)
#define LITJSON_JSONDATA_REMOVE_OFFSET UNITYSDK_OFFSET(0x19DBA930)
#define LITJSON_JSONDATA_SETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19DB8E90)
#define LITJSON_JSONDATA_SETCOMMENT_OFFSET UNITYSDK_OFFSET(0x19DB8FC0)
#define LITJSON_JSONDATA_SETDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DB8EE0)
#define LITJSON_JSONDATA_SETINT_OFFSET UNITYSDK_OFFSET(0x19DB8F20)
#define LITJSON_JSONDATA_SETJSONTYPE_OFFSET UNITYSDK_OFFSET(0x19DBB0A0)
#define LITJSON_JSONDATA_SETLONG_OFFSET UNITYSDK_OFFSET(0x19DB8F60)
#define LITJSON_JSONDATA_SETSTRING_OFFSET UNITYSDK_OFFSET(0x19DB8FA0)
#define LITJSON_JSONDATA_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x19DB54C0)
#define LITJSON_JSONDATA_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x19DB7550)
#define LITJSON_JSONDATA_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DB6B80)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19DB8170)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19DB59A0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19DB59B0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19DB5AA0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x19DB8270)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x19DB84C0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19DB8640)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19DB8730)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19DB5B90)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19DB5C80)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DB68F0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19DB5D70)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x19DB6180)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x19DB87F0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DB69D0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19DB8B60)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x19DB9160)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x19DB92C0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19DB93B0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19DB6600)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19DB6800)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DB73E0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19DB94A0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x19DB9590)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19DB9790)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x19DB96A0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DB74C0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19DB9880)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DB7030)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_INSERT_OFFSET UNITYSDK_OFFSET(0x19DB9960)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19DB9AE0)
#define LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DB7110)
#define LITJSON_JSONDATA_TOJSONDATA_OFFSET UNITYSDK_OFFSET(0x19DB6B00)
#define LITJSON_JSONDATA_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x19DB9120)
#define LITJSON_JSONDATA_TOJSON_2_OFFSET UNITYSDK_OFFSET(0x19DBB270)
#define LITJSON_JSONDATA_TOJSON_OFFSET UNITYSDK_OFFSET(0x19DB8FE0)
#define LITJSON_JSONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19DBB380)
#define LITJSON_JSONDATA_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x19DB58B0)
#define LITJSON_JSONDATA_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x19DBA820)
#define LITJSON_JSONDATA_WRITEJSON_OFFSET UNITYSDK_OFFSET(0x19DB9D10)
#define LITJSON_JSONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19DB7AC0)
#define LITJSON_JSONDATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19DB7AD0)
#define LITJSON_JSONDATA__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19DB7AE0)
#define LITJSON_JSONDATA__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19DB7AF0)
#define LITJSON_JSONDATA__CTOR_5_OFFSET UNITYSDK_OFFSET(0x19DB7B00)
#define LITJSON_JSONDATA__CTOR_6_OFFSET UNITYSDK_OFFSET(0x19DB7DA0)
#define LITJSON_JSONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19DB7AB0)

namespace LitJson
{
	inline static constexpr unsigned int JsonData_TypeDefinitionIndex = 8099;

	class JsonData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::LitJson::JsonData*>>* object_list; // 0x10
		::System::Collections::Generic::IList_1<::LitJson::JsonData*>* inst_array; // 0x18
		::System::Collections::Generic::IDictionary_2<::System::String*, ::LitJson::JsonData*>* inst_object; // 0x20
		::System::String* json; // 0x28
		::System::String* comment; // 0x30
		::System::String* inst_string; // 0x38
		::System::Boolean inst_boolean; // 0x40
		::LitJson::JsonType type; // 0x44
		::System::Int32 inst_int; // 0x48
		::System::Double inst_double; // 0x50
		::System::Int64 inst_long; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Boolean boolean)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA__CTOR_1_OFFSET))(this, boolean);
		}

		::System::Void _ctor_2(::System::Double number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA__CTOR_2_OFFSET))(this, number);
		}

		::System::Void _ctor_3(::System::Int32 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA__CTOR_3_OFFSET))(this, number);
		}

		::System::Void _ctor_4(::System::Int64 number)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA__CTOR_4_OFFSET))(this, number);
		}

		::System::Void _ctor_5(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA__CTOR_5_OFFSET))(this, obj);
		}

		::System::Void _ctor_6(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA__CTOR_6_OFFSET))(this, str);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ISBOOLEAN_OFFSET))(this);
		}

		::System::Boolean get_AsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ASBOOLEAN_OFFSET))(this);
		}

		::System::Boolean get_IsDouble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ISDOUBLE_OFFSET))(this);
		}

		::System::Double get_AsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ASDOUBLE_OFFSET))(this);
		}

		::System::Boolean get_IsInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ISINT_OFFSET))(this);
		}

		::System::Boolean get_AsBool()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ASBOOL_OFFSET))(this);
		}

		::System::Int32 get_AsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ASINT_OFFSET))(this);
		}

		::System::Boolean get_IsLong()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ISLONG_OFFSET))(this);
		}

		::System::Int64 get_AsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ASLONG_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ISOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ISSTRING_OFFSET))(this);
		}

		::System::String* get_AsString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ASSTRING_OFFSET))(this);
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_COMMENT_OFFSET))(this);
		}

		::System::Void set_Comment(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SET_COMMENT_OFFSET))(this, value);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_KEYS_OFFSET))(this);
		}

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_CONTAINSKEY_OFFSET))(this, key);
		}

		::System::Boolean TryGetValue(::System::String* key, ::LitJson::JsonData*& val)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::LitJson::JsonData*&))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_TRYGETVALUE_OFFSET))(this, key, val);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Collections::ICollection* System_Collections_IDictionary_get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* System_Collections_IDictionary_get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Boolean LitJson_IJsonWrapper_get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean LitJson_IJsonWrapper_get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISBOOLEAN_OFFSET))(this);
		}

		::System::Boolean LitJson_IJsonWrapper_get_IsDouble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISDOUBLE_OFFSET))(this);
		}

		::System::Boolean LitJson_IJsonWrapper_get_IsInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISINT_OFFSET))(this);
		}

		::System::Boolean LitJson_IJsonWrapper_get_IsLong()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISLONG_OFFSET))(this);
		}

		::System::Boolean LitJson_IJsonWrapper_get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISOBJECT_OFFSET))(this);
		}

		::System::Boolean LitJson_IJsonWrapper_get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GET_ISSTRING_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Object* System_Collections_Specialized_IOrderedDictionary_get_Item(::System::Int32 idx)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_GET_ITEM_OFFSET))(this, idx);
		}

		::System::Void System_Collections_Specialized_IOrderedDictionary_set_Item(::System::Int32 idx, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_SET_ITEM_OFFSET))(this, idx, value);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::LitJson::JsonData* get_Item(::System::String* prop_name)
		{
			return ((::LitJson::JsonData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ITEM_OFFSET))(this, prop_name);
		}

		::System::Void set_Item(::System::String* prop_name, ::LitJson::JsonData* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::LitJson::JsonData*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SET_ITEM_OFFSET))(this, prop_name, value);
		}

		::LitJson::JsonData* get_Item_1(::System::Int32 index)
		{
			return ((::LitJson::JsonData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GET_ITEM_1_OFFSET))(this, index);
		}

		::System::Void set_Item_1(::System::Int32 index, ::LitJson::JsonData* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::LitJson::JsonData*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SET_ITEM_1_OFFSET))(this, index, value);
		}

		static ::LitJson::JsonData* op_Implicit(::System::Boolean data)
		{
			return ((::LitJson::JsonData*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_IMPLICIT_OFFSET))(data);
		}

		static ::LitJson::JsonData* op_Implicit_1(::System::Double data)
		{
			return ((::LitJson::JsonData*(*)(::System::Double))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_IMPLICIT_1_OFFSET))(data);
		}

		static ::LitJson::JsonData* op_Implicit_2(::System::Int32 data)
		{
			return ((::LitJson::JsonData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_IMPLICIT_2_OFFSET))(data);
		}

		static ::LitJson::JsonData* op_Implicit_3(::System::Int64 data)
		{
			return ((::LitJson::JsonData*(*)(::System::Int64))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_IMPLICIT_3_OFFSET))(data);
		}

		static ::LitJson::JsonData* op_Implicit_4(::System::String* data)
		{
			return ((::LitJson::JsonData*(*)(::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_IMPLICIT_4_OFFSET))(data);
		}

		static ::System::Boolean op_Explicit(::LitJson::JsonData* data)
		{
			return ((::System::Boolean(*)(::LitJson::JsonData*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_EXPLICIT_OFFSET))(data);
		}

		static ::System::Double op_Explicit_1(::LitJson::JsonData* data)
		{
			return ((::System::Double(*)(::LitJson::JsonData*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_EXPLICIT_1_OFFSET))(data);
		}

		static ::System::Int32 op_Explicit_2(::LitJson::JsonData* data)
		{
			return ((::System::Int32(*)(::LitJson::JsonData*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_EXPLICIT_2_OFFSET))(data);
		}

		static ::System::Int64 op_Explicit_3(::LitJson::JsonData* data)
		{
			return ((::System::Int64(*)(::LitJson::JsonData*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_EXPLICIT_3_OFFSET))(data);
		}

		static ::System::String* op_Explicit_4(::LitJson::JsonData* data)
		{
			return ((::System::String*(*)(::LitJson::JsonData*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_OP_EXPLICIT_4_OFFSET))(data);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void System_Collections_IDictionary_Add(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_ADD_OFFSET))(this, key, value);
		}

		::System::Void System_Collections_IDictionary_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_CONTAINS_OFFSET))(this, key);
		}

		::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_IDictionary_Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IDICTIONARY_REMOVE_OFFSET))(this, key);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean LitJson_IJsonWrapper_GetBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETBOOLEAN_OFFSET))(this);
		}

		::System::Double LitJson_IJsonWrapper_GetDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETDOUBLE_OFFSET))(this);
		}

		::System::Int32 LitJson_IJsonWrapper_GetInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETINT_OFFSET))(this);
		}

		::System::Int64 LitJson_IJsonWrapper_GetLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETLONG_OFFSET))(this);
		}

		::System::String* LitJson_IJsonWrapper_GetString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_GETSTRING_OFFSET))(this);
		}

		::System::Void LitJson_IJsonWrapper_SetBoolean(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETBOOLEAN_OFFSET))(this, val);
		}

		::System::String* GetComment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GETCOMMENT_OFFSET))(this);
		}

		::System::Void SetBoolean(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SETBOOLEAN_OFFSET))(this, val);
		}

		::System::Void LitJson_IJsonWrapper_SetDouble(::System::Double val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETDOUBLE_OFFSET))(this, val);
		}

		::System::Void SetDouble(::System::Double val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SETDOUBLE_OFFSET))(this, val);
		}

		::System::Void LitJson_IJsonWrapper_SetInt(::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETINT_OFFSET))(this, val);
		}

		::System::Void SetInt(::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SETINT_OFFSET))(this, val);
		}

		::System::Void LitJson_IJsonWrapper_SetLong(::System::Int64 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETLONG_OFFSET))(this, val);
		}

		::System::Void SetLong(::System::Int64 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SETLONG_OFFSET))(this, val);
		}

		::System::Void LitJson_IJsonWrapper_SetString(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_SETSTRING_OFFSET))(this, val);
		}

		::System::Void SetString(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SETSTRING_OFFSET))(this, val);
		}

		::System::Void SetComment(::System::String* comment)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SETCOMMENT_OFFSET))(this, comment);
		}

		::System::String* LitJson_IJsonWrapper_ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_TOJSON_OFFSET))(this);
		}

		::System::Void LitJson_IJsonWrapper_ToJson_1(::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_LITJSON_IJSONWRAPPER_TOJSON_1_OFFSET))(this, writer);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Collections::IDictionaryEnumerator* System_Collections_Specialized_IOrderedDictionary_GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_Specialized_IOrderedDictionary_Insert(::System::Int32 idx, ::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_INSERT_OFFSET))(this, idx, key, value);
		}

		::System::Void System_Collections_Specialized_IOrderedDictionary_RemoveAt(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_REMOVEAT_OFFSET))(this, idx);
		}

		::System::Collections::ICollection* EnsureCollection()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_ENSURECOLLECTION_OFFSET))(this);
		}

		::System::Collections::IDictionary* EnsureDictionary()
		{
			return ((::System::Collections::IDictionary*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_ENSUREDICTIONARY_OFFSET))(this);
		}

		::System::Collections::IList* EnsureList()
		{
			return ((::System::Collections::IList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_ENSURELIST_OFFSET))(this);
		}

		::LitJson::JsonData* ToJsonData(::System::Object* obj)
		{
			return ((::LitJson::JsonData*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_TOJSONDATA_OFFSET))(this, obj);
		}

		static ::System::Void WriteJson(::LitJson::IJsonWrapper* obj, ::LitJson::JsonWriter* writer, ::System::Boolean nested, ::System::Boolean obj_comma)
		{
			return ((::System::Void(*)(::LitJson::IJsonWrapper*, ::LitJson::JsonWriter*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_WRITEJSON_OFFSET))(obj, writer, nested, obj_comma);
		}

		static ::System::Boolean WriteComment(::LitJson::IJsonWrapper* obj, ::LitJson::JsonWriter* writer, ::System::Boolean add_comma)
		{
			return ((::System::Boolean(*)(::LitJson::IJsonWrapper*, ::LitJson::JsonWriter*, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_WRITECOMMENT_OFFSET))(obj, writer, add_comma);
		}

		::System::Int32 Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_ADD_OFFSET))(this, value);
		}

		::System::Boolean Remove(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_REMOVE_OFFSET))(this, obj);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_CLEAR_OFFSET))(this);
		}

		::System::Boolean Equals(::LitJson::JsonData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::LitJson::JsonData*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_EQUALS_OFFSET))(this, x);
		}

		::LitJson::JsonType GetJsonType()
		{
			return ((::LitJson::JsonType(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_GETJSONTYPE_OFFSET))(this);
		}

		::System::Void SetJsonType(::LitJson::JsonType type)
		{
			return ((::System::Void(*)(::PVOID, ::LitJson::JsonType))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_SETJSONTYPE_OFFSET))(this, type);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_TOJSON_OFFSET))(this);
		}

		::System::Void ToJson_1(::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_TOJSON_1_OFFSET))(this, writer);
		}

		::System::String* ToJson_2(::System::Int32 indent, ::System::Boolean prettify)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_TOJSON_2_OFFSET))(this, indent, prettify);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONDATA_TOSTRING_OFFSET))(this);
		}
	};
}
