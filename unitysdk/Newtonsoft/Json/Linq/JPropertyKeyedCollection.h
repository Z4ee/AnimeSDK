#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1ED5A9C0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CHANGEITEMKEY_OFFSET UNITYSDK_OFFSET(0x1ED5AC00)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1ED5B030)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_COMPARE_OFFSET UNITYSDK_OFFSET(0x1ED5BD40)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x1ED5AE30)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1ED5B0D0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ENSUREDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1ED5AB30)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x1ED5AF60)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1ED5B850)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1ED5B9C0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1ED5BAF0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INDEXOFREFERENCE_OFFSET UNITYSDK_OFFSET(0x1ED5BC20)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1ED5B180)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1ED5B340)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x1ED5AFD0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1ED5B240)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_SETITEM_OFFSET UNITYSDK_OFFSET(0x1ED5B4E0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1ED5B900)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED5C070)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED5A920)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JPropertyKeyedCollection_TypeDefinitionIndex = 7184;

	class JPropertyKeyedCollection : public ::System::Collections::ObjectModel::Collection_1<::Newtonsoft::Json::Linq::JToken*>
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::String*>** StaticGet_Comparer()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JPropertyKeyedCollection_TypeDefinitionIndex)->GetStaticField(0x60A0);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Newtonsoft::Json::Linq::JToken*>* _dictionary; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION__CCTOR_OFFSET))();
		}

		::System::Void AddKey(::System::String* key, ::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ADDKEY_OFFSET))(this, key, item);
		}

		::System::Void ChangeItemKey(::Newtonsoft::Json::Linq::JToken* item, ::System::String* newKey)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CHANGEITEMKEY_OFFSET))(this, item, newKey);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CLEARITEMS_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINS_OFFSET))(this, key);
		}

		::System::Boolean ContainsItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINSITEM_OFFSET))(this, item);
		}

		::System::Void EnsureDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ENSUREDICTIONARY_OFFSET))(this);
		}

		::System::String* GetKeyForItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GETKEYFORITEM_OFFSET))(this, item);
		}

		::System::Void InsertItem(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INSERTITEM_OFFSET))(this, index, item);
		}

		::System::Boolean Remove(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVE_OFFSET))(this, key);
		}

		::System::Void RemoveItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEITEM_OFFSET))(this, index);
		}

		::System::Void RemoveKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEKEY_OFFSET))(this, key);
		}

		::System::Void SetItem(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_SETITEM_OFFSET))(this, index, item);
		}

		::Newtonsoft::Json::Linq::JToken* get_Item(::System::String* key)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_ITEM_OFFSET))(this, key);
		}

		::System::Boolean TryGetValue(::System::String* key, ::Newtonsoft::Json::Linq::JToken*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Linq::JToken*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_TRYGETVALUE_OFFSET))(this, key, value);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>* get_Values()
		{
			return ((::System::Collections::Generic::ICollection_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_VALUES_OFFSET))(this);
		}

		::System::Int32 IndexOfReference(::Newtonsoft::Json::Linq::JToken* t)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INDEXOFREFERENCE_OFFSET))(this, t);
		}

		::System::Boolean Compare(::Newtonsoft::Json::Linq::JPropertyKeyedCollection* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JPropertyKeyedCollection*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_COMPARE_OFFSET))(this, other);
		}
	};
}
