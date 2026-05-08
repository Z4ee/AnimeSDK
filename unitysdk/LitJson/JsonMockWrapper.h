#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LitJson/JsonType.h"
#include "unitysdk/System/Object.h"

namespace LitJson { class JsonWriter; }
namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }

#define LITJSON_JSONMOCKWRAPPER_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19DBCF00)
#define LITJSON_JSONMOCKWRAPPER_GETCOMMENT_OFFSET UNITYSDK_OFFSET(0x19DBCF90)
#define LITJSON_JSONMOCKWRAPPER_GETDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DBCF10)
#define LITJSON_JSONMOCKWRAPPER_GETINT_OFFSET UNITYSDK_OFFSET(0x19DBCF20)
#define LITJSON_JSONMOCKWRAPPER_GETJSONTYPE_OFFSET UNITYSDK_OFFSET(0x19DBCF30)
#define LITJSON_JSONMOCKWRAPPER_GETLONG_OFFSET UNITYSDK_OFFSET(0x19DBCF40)
#define LITJSON_JSONMOCKWRAPPER_GETSTRING_OFFSET UNITYSDK_OFFSET(0x19DBCF50)
#define LITJSON_JSONMOCKWRAPPER_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x19DBCE90)
#define LITJSON_JSONMOCKWRAPPER_GET_ISBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19DBCEA0)
#define LITJSON_JSONMOCKWRAPPER_GET_ISDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DBCEB0)
#define LITJSON_JSONMOCKWRAPPER_GET_ISINT_OFFSET UNITYSDK_OFFSET(0x19DBCEC0)
#define LITJSON_JSONMOCKWRAPPER_GET_ISLONG_OFFSET UNITYSDK_OFFSET(0x19DBCED0)
#define LITJSON_JSONMOCKWRAPPER_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x19DBCEE0)
#define LITJSON_JSONMOCKWRAPPER_GET_ISSTRING_OFFSET UNITYSDK_OFFSET(0x19DBCEF0)
#define LITJSON_JSONMOCKWRAPPER_SETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19DBCFD0)
#define LITJSON_JSONMOCKWRAPPER_SETCOMMENT_OFFSET UNITYSDK_OFFSET(0x19DBD030)
#define LITJSON_JSONMOCKWRAPPER_SETDOUBLE_OFFSET UNITYSDK_OFFSET(0x19DBCFE0)
#define LITJSON_JSONMOCKWRAPPER_SETINT_OFFSET UNITYSDK_OFFSET(0x19DBCFF0)
#define LITJSON_JSONMOCKWRAPPER_SETJSONTYPE_OFFSET UNITYSDK_OFFSET(0x19DBD000)
#define LITJSON_JSONMOCKWRAPPER_SETLONG_OFFSET UNITYSDK_OFFSET(0x19DBD010)
#define LITJSON_JSONMOCKWRAPPER_SETSTRING_OFFSET UNITYSDK_OFFSET(0x19DBD020)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19DBD170)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19DBD140)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19DBD150)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19DBD160)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_ADD_OFFSET UNITYSDK_OFFSET(0x19DBD1F0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_CLEAR_OFFSET UNITYSDK_OFFSET(0x19DBD200)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19DBD210)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19DBD230)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19DBD190)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19DBD1A0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DBD1D0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x19DBD1B0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x19DBD1C0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_REMOVE_OFFSET UNITYSDK_OFFSET(0x19DBD220)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DBD1E0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19DBD180)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x19DBD0D0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x19DBD0E0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19DBD0F0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19DBD090)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19DBD0A0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DBD0B0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19DBD100)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x19DBD110)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19DBD130)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x19DBD120)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DBD0C0)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19DBD260)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DBD240)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_INSERT_OFFSET UNITYSDK_OFFSET(0x19DBD270)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19DBD280)
#define LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19DBD250)
#define LITJSON_JSONMOCKWRAPPER_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x19DBD080)
#define LITJSON_JSONMOCKWRAPPER_TOJSON_OFFSET UNITYSDK_OFFSET(0x19DBD040)
#define LITJSON_JSONMOCKWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBB5C0)

namespace LitJson
{
	inline static constexpr unsigned int JsonMockWrapper_TypeDefinitionIndex = 8056;

	class JsonMockWrapper : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GET_ISARRAY_OFFSET))(this);
		}

		::System::Boolean get_IsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GET_ISBOOLEAN_OFFSET))(this);
		}

		::System::Boolean get_IsDouble()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GET_ISDOUBLE_OFFSET))(this);
		}

		::System::Boolean get_IsInt()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GET_ISINT_OFFSET))(this);
		}

		::System::Boolean get_IsLong()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GET_ISLONG_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GET_ISOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GET_ISSTRING_OFFSET))(this);
		}

		::System::Boolean GetBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GETBOOLEAN_OFFSET))(this);
		}

		::System::Double GetDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GETDOUBLE_OFFSET))(this);
		}

		::System::Int32 GetInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GETINT_OFFSET))(this);
		}

		::LitJson::JsonType GetJsonType()
		{
			return ((::LitJson::JsonType(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GETJSONTYPE_OFFSET))(this);
		}

		::System::Int64 GetLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GETLONG_OFFSET))(this);
		}

		::System::String* GetString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GETSTRING_OFFSET))(this);
		}

		::System::String* GetComment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_GETCOMMENT_OFFSET))(this);
		}

		::System::Void SetBoolean(::System::Boolean val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SETBOOLEAN_OFFSET))(this, val);
		}

		::System::Void SetDouble(::System::Double val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SETDOUBLE_OFFSET))(this, val);
		}

		::System::Void SetInt(::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SETINT_OFFSET))(this, val);
		}

		::System::Void SetJsonType(::LitJson::JsonType type)
		{
			return ((::System::Void(*)(::PVOID, ::LitJson::JsonType))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SETJSONTYPE_OFFSET))(this, type);
		}

		::System::Void SetLong(::System::Int64 val)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SETLONG_OFFSET))(this, val);
		}

		::System::Void SetString(::System::String* val)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SETSTRING_OFFSET))(this, val);
		}

		::System::Void SetComment(::System::String* comment)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SETCOMMENT_OFFSET))(this, comment);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_TOJSON_OFFSET))(this);
		}

		::System::Void ToJson_1(::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_TOJSON_1_OFFSET))(this, writer);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 i, ::System::Object* v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, i, v);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Int32 System_Collections_ICollection_get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Collections::ICollection* System_Collections_IDictionary_get_Keys()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::ICollection* System_Collections_IDictionary_get_Values()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_VALUES_OFFSET))(this);
		}

		::System::Object* System_Collections_IDictionary_get_Item(::System::Object* key)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GET_ITEM_OFFSET))(this, key);
		}

		::System::Void System_Collections_IDictionary_set_Item(::System::Object* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_SET_ITEM_OFFSET))(this, key, value);
		}

		::System::Void System_Collections_IDictionary_Add(::System::Object* k, ::System::Object* v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_ADD_OFFSET))(this, k, v);
		}

		::System::Void System_Collections_IDictionary_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IDictionary_Contains(::System::Object* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_CONTAINS_OFFSET))(this, key);
		}

		::System::Void System_Collections_IDictionary_Remove(::System::Object* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_REMOVE_OFFSET))(this, key);
		}

		::System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_IDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_Specialized_IOrderedDictionary_get_Item(::System::Int32 idx)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_GET_ITEM_OFFSET))(this, idx);
		}

		::System::Void System_Collections_Specialized_IOrderedDictionary_set_Item(::System::Int32 idx, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_SET_ITEM_OFFSET))(this, idx, value);
		}

		::System::Collections::IDictionaryEnumerator* System_Collections_Specialized_IOrderedDictionary_GetEnumerator()
		{
			return ((::System::Collections::IDictionaryEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void System_Collections_Specialized_IOrderedDictionary_Insert(::System::Int32 i, ::System::Object* k, ::System::Object* v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_INSERT_OFFSET))(this, i, k, v);
		}

		::System::Void System_Collections_Specialized_IOrderedDictionary_RemoveAt(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_JSONMOCKWRAPPER_SYSTEM_COLLECTIONS_SPECIALIZED_IORDEREDDICTIONARY_REMOVEAT_OFFSET))(this, i);
		}
	};
}
