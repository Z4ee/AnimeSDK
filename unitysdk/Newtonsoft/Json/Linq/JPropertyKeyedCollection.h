#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ADDKEY_OFFSET UNITYSDK_OFFSET(0x1BEB5290)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1BEB54D0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BEB6120)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1BEB5560)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ENSUREDICTIONARY_OFFSET UNITYSDK_OFFSET(0x1BEB5400)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GETKEYFORITEM_OFFSET UNITYSDK_OFFSET(0x1BEB5610)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1BEB5E90)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INDEXOFREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BEB6050)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1BEB5680)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1BEB5740)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEKEY_OFFSET UNITYSDK_OFFSET(0x1BEB5940)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_SETITEM_OFFSET UNITYSDK_OFFSET(0x1BEB59A0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1BEB5DD0)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEB6490)
#define NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEB5220)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JPropertyKeyedCollection_TypeDefinitionIndex = 9695;

	class JPropertyKeyedCollection : public ::System::Collections::ObjectModel::Collection_1<::Newtonsoft::Json::Linq::JToken*>
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::String*>** StaticGet_Comparer()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(JPropertyKeyedCollection_TypeDefinitionIndex)->GetStaticField(0x3DB70);
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

		::System::Void AddKey(::System::String* a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ADDKEY_OFFSET))(this, a1, a2);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CLEARITEMS_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void EnsureDictionary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_ENSUREDICTIONARY_OFFSET))(this);
		}

		::System::String* GetKeyForItem(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GETKEYFORITEM_OFFSET))(this, a1);
		}

		::System::Void InsertItem(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INSERTITEM_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveItem(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void RemoveKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_REMOVEKEY_OFFSET))(this, a1);
		}

		::System::Void SetItem(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_SETITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean TryGetValue(::System::String* a1, ::Newtonsoft::Json::Linq::JToken*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Newtonsoft::Json::Linq::JToken*&))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::ICollection_1<::System::String*>* get_Keys()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_GET_KEYS_OFFSET))(this);
		}

		::System::Int32 IndexOfReference(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_INDEXOFREFERENCE_OFFSET))(this, a1);
		}

		::System::Boolean Compare(::Newtonsoft::Json::Linq::JPropertyKeyedCollection* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JPropertyKeyedCollection*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JPROPERTYKEYEDCOLLECTION_COMPARE_OFFSET))(this, a1);
		}
	};
}
