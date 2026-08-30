#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JEnumerable_1.h"
#include "unitysdk/Newtonsoft/Json/Linq/JToken.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::ComponentModel { class ListChangedEventArgs; }
namespace System::ComponentModel { class ListChangedEventHandler; }

#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDANDSKIPPARENTCHECK_OFFSET UNITYSDK_OFFSET(0x1BEAF130)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BEADC50)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x1BEA84C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CHECKREENTRANCY_OFFSET UNITYSDK_OFFSET(0x1BEAE360)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1BEAB600)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1BEAB700)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x1BEABE90)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSEQUAL_OFFSET UNITYSDK_OFFSET(0x1BEA8710)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BEAC810)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_COPYITEMSTO_OFFSET UNITYSDK_OFFSET(0x1BEABF30)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEFROMCONTENT_OFFSET UNITYSDK_OFFSET(0x1BEAF300)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREPARENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1BEAEC20)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREVALUE_OFFSET UNITYSDK_OFFSET(0x1BEB0980)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GETITEM_OFFSET UNITYSDK_OFFSET(0x1BEA98D0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BE6FA00)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x1BEAE630)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_HASVALUES_OFFSET UNITYSDK_OFFSET(0x1BEAE480)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_LAST_OFFSET UNITYSDK_OFFSET(0x1BEAE8E0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1BEAA580)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ISMULTICONTENT_OFFSET UNITYSDK_OFFSET(0x1BEAEBA0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ISTOKENUNCHANGED_OFFSET UNITYSDK_OFFSET(0x1BEAEDC0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ONLISTCHANGED_OFFSET UNITYSDK_OFFSET(0x1BEAE3F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x1BEAF430)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_READTOKENFROM_OFFSET UNITYSDK_OFFSET(0x1BEA9180)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1BEAF3B0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEMAT_OFFSET UNITYSDK_OFFSET(0x1BEAACF0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1BEAC700)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEITEM_OFFSET UNITYSDK_OFFSET(0x1BEAEEC0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SETITEM_OFFSET UNITYSDK_OFFSET(0x1BEA9AA0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__ADD_OFFSET UNITYSDK_OFFSET(0x1BEB06B0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__CLEAR_OFFSET UNITYSDK_OFFSET(0x1BEB0740)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__CONTAINS_OFFSET UNITYSDK_OFFSET(0x1BEB07C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__COPYTO_OFFSET UNITYSDK_OFFSET(0x1BEB0850)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1BEB08E0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__REMOVE_OFFSET UNITYSDK_OFFSET(0x1BEB08F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BEB0590)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__INDEXOF_OFFSET UNITYSDK_OFFSET(0x1BEB03D0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__INSERT_OFFSET UNITYSDK_OFFSET(0x1BEB0460)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1BEB0500)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BEB0620)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1BEB1260)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1BEB12F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1BEB1300)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1BEB0A10)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BEB0B30)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1BEB0BB0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1BEB0EF0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1BEB0F00)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BEB10B0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1BEB0CC0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1BEB0DD0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1BEB1020)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BEB0F10)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BEB1140)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x1BEAEFE0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEA7F50)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA7ED0)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JContainer_TypeDefinitionIndex = 9713;

	class JContainer : public ::Newtonsoft::Json::Linq::JToken
	{
	public:
		::System::ComponentModel::ListChangedEventHandler* _listChanged; // 0x30
		::System::Object* _syncRoot; // 0x38
		::System::Boolean _busy; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void CheckReentrancy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CHECKREENTRANCY_OFFSET))(this);
		}

		::System::Void OnListChanged(::System::ComponentModel::ListChangedEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ListChangedEventArgs*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ONLISTCHANGED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_HASVALUES_OFFSET))(this);
		}

		::System::Boolean ContentsEqual(::Newtonsoft::Json::Linq::JContainer* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSEQUAL_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* get_First()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_FIRST_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JToken* get_Last()
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_LAST_OFFSET))(this);
		}

		::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*> Children()
		{
			return ((::Newtonsoft::Json::Linq::JEnumerable_1<::Newtonsoft::Json::Linq::JToken*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CHILDREN_OFFSET))(this);
		}

		::System::Boolean IsMultiContent(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ISMULTICONTENT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* EnsureParentToken(::Newtonsoft::Json::Linq::JToken* a1, ::System::Boolean a2)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREPARENTTOKEN_OFFSET))(this, a1, a2);
		}

		::System::Void InsertItem(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_INSERTITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveItemAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEMAT_OFFSET))(this, a1);
		}

		::System::Boolean RemoveItem(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEM_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* GetItem(::System::Int32 a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GETITEM_OFFSET))(this, a1);
		}

		::System::Void SetItem(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SETITEM_OFFSET))(this, a1, a2);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CLEARITEMS_OFFSET))(this);
		}

		::System::Void ReplaceItem(::Newtonsoft::Json::Linq::JToken* a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEITEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean ContainsItem(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTAINSITEM_OFFSET))(this, a1);
		}

		::System::Void CopyItemsTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_COPYITEMSTO_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean IsTokenUnchanged(::Newtonsoft::Json::Linq::JToken* a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ISTOKENUNCHANGED_OFFSET))(a1, a2);
		}

		::System::Void ValidateToken(::Newtonsoft::Json::Linq::JToken* a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_VALIDATETOKEN_OFFSET))(this, a1, a2);
		}

		::System::Void Add(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_OFFSET))(this, a1);
		}

		::System::Void AddAndSkipParentCheck(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDANDSKIPPARENTCHECK_OFFSET))(this, a1);
		}

		::System::Void AddInternal(::System::Int32 a1, ::System::Object* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDINTERNAL_OFFSET))(this, a1, a2, a3);
		}

		static ::Newtonsoft::Json::Linq::JToken* CreateFromContent(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEFROMCONTENT_OFFSET))(a1);
		}

		::System::Void RemoveAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEALL_OFFSET))(this);
		}

		::System::Void ReadTokenFrom(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Linq::JsonLoadSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_READTOKENFROM_OFFSET))(this, a1, a2);
		}

		::System::Void ReadContentFrom(::Newtonsoft::Json::JsonReader* a1, ::Newtonsoft::Json::Linq::JsonLoadSettings* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_READCONTENTFROM_OFFSET))(this, a1, a2);
		}

		::System::Int32 ContentsHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSHASHCODE_OFFSET))(this);
		}

		::System::Int32 System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__INDEXOF_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__INSERT_OFFSET))(this, a1, a2);
		}

		::System::Void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__REMOVEAT_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item(::System::Int32 a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item(::System::Int32 a1, ::Newtonsoft::Json::Linq::JToken* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__ADD_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__CONTAINS_OFFSET))(this, a1);
		}

		::System::Void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo(::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Boolean System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove(::Newtonsoft::Json::Linq::JToken* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__REMOVE_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Linq::JToken* EnsureValue(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREVALUE_OFFSET))(this, a1);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, a1);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean System_Collections_ICollection_get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* System_Collections_ICollection_get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET))(this);
		}
	};
}
