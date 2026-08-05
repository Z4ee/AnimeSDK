#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Newtonsoft/Json/Linq/JEnumerable_1.h"
#include "unitysdk/Newtonsoft/Json/Linq/JToken.h"

namespace Newtonsoft::Json { class JsonReader; }
namespace Newtonsoft::Json { class JsonWriter; }
namespace Newtonsoft::Json::Linq { class JsonLoadSettings; }
namespace Newtonsoft::Json::Linq { class JsonMergeSettings; }
namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDANDSKIPPARENTCHECK_OFFSET UNITYSDK_OFFSET(0x1ED58320)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDFIRST_OFFSET UNITYSDK_OFFSET(0x1ED58410)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1ED55330)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_OFFSET UNITYSDK_OFFSET(0x1ED58230)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CHECKREENTRANCY_OFFSET UNITYSDK_OFFSET(0x1ED55860)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1ED560F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1ED57640)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x1ED57A70)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSEQUAL_OFFSET UNITYSDK_OFFSET(0x1ED55A50)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED58FC0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_COPYITEMSTO_OFFSET UNITYSDK_OFFSET(0x1ED57A90)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATECHILDRENCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1ED558F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEFROMCONTENT_OFFSET UNITYSDK_OFFSET(0x1ED58420)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEWRITER_OFFSET UNITYSDK_OFFSET(0x1ED584F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_DESCENDANTSANDSELF_OFFSET UNITYSDK_OFFSET(0x1ED56260)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_DESCENDANTS_OFFSET UNITYSDK_OFFSET(0x1ED56190)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREPARENTTOKEN_OFFSET UNITYSDK_OFFSET(0x1ED56350)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREVALUE_OFFSET UNITYSDK_OFFSET(0x1ED593A0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GETDESCENDANTS_OFFSET UNITYSDK_OFFSET(0x1ED561F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GETITEM_OFFSET UNITYSDK_OFFSET(0x1ED56DD0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1ED58050)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_FIRST_OFFSET UNITYSDK_OFFSET(0x1ED55E00)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_HASVALUES_OFFSET UNITYSDK_OFFSET(0x1ED55970)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_LAST_OFFSET UNITYSDK_OFFSET(0x1ED55F70)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_INSERTITEM_OFFSET UNITYSDK_OFFSET(0x1ED56450)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ISMULTICONTENT_OFFSET UNITYSDK_OFFSET(0x1ED562C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_ISTOKENUNCHANGED_OFFSET UNITYSDK_OFFSET(0x1ED57550)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGEENUMERABLECONTENT_OFFSET UNITYSDK_OFFSET(0x1ED598D0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGE_1_OFFSET UNITYSDK_OFFSET(0x1ED585F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGE_OFFSET UNITYSDK_OFFSET(0x1ED58590)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_READCONTENTFROM_OFFSET UNITYSDK_OFFSET(0x1ED58740)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_READTOKENFROM_OFFSET UNITYSDK_OFFSET(0x1ED58600)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1ED58580)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEMAT_OFFSET UNITYSDK_OFFSET(0x1ED56910)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1ED56D90)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEALL_OFFSET UNITYSDK_OFFSET(0x1ED58540)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEITEM_OFFSET UNITYSDK_OFFSET(0x1ED57A20)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SETITEM_OFFSET UNITYSDK_OFFSET(0x1ED56EB0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__ADD_OFFSET UNITYSDK_OFFSET(0x1ED59340)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__CLEAR_OFFSET UNITYSDK_OFFSET(0x1ED59350)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__CONTAINS_OFFSET UNITYSDK_OFFSET(0x1ED59360)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__COPYTO_OFFSET UNITYSDK_OFFSET(0x1ED59370)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1ED59380)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__REMOVE_OFFSET UNITYSDK_OFFSET(0x1ED59390)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1ED59320)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__INDEXOF_OFFSET UNITYSDK_OFFSET(0x1ED592E0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__INSERT_OFFSET UNITYSDK_OFFSET(0x1ED592F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1ED59310)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1ED59330)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x1ED59870)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1ED59880)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1ED59890)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET UNITYSDK_OFFSET(0x1ED59430)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ED594E0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1ED594F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x1ED596E0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1ED596F0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1ED597B0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1ED59590)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET UNITYSDK_OFFSET(0x1ED59630)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1ED597A0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x1ED59700)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1ED597C0)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER_VALIDATETOKEN_OFFSET UNITYSDK_OFFSET(0x1ED58120)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ED54F60)
#define NEWTONSOFT_JSON_LINQ_JCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED54F10)

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int JContainer_TypeDefinitionIndex = 7174;

	class JContainer : public ::Newtonsoft::Json::Linq::JToken
	{
	public:
		::System::Object* _syncRoot; // 0x30
		::System::Boolean _busy; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Newtonsoft::Json::Linq::JContainer* other)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER__CTOR_1_OFFSET))(this, other);
		}

		::System::Void CheckReentrancy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CHECKREENTRANCY_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>* CreateChildrenCollection()
		{
			return ((::System::Collections::Generic::IList_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATECHILDRENCOLLECTION_OFFSET))(this);
		}

		::System::Boolean get_HasValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GET_HASVALUES_OFFSET))(this);
		}

		::System::Boolean ContentsEqual(::Newtonsoft::Json::Linq::JContainer* container)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JContainer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSEQUAL_OFFSET))(this, container);
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

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* Descendants()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_DESCENDANTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* DescendantsAndSelf()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_DESCENDANTSANDSELF_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>* GetDescendants(::System::Boolean self)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GETDESCENDANTS_OFFSET))(this, self);
		}

		::System::Boolean IsMultiContent(::System::Object* content)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ISMULTICONTENT_OFFSET))(this, content);
		}

		::Newtonsoft::Json::Linq::JToken* EnsureParentToken(::Newtonsoft::Json::Linq::JToken* item, ::System::Boolean skipParentCheck)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREPARENTTOKEN_OFFSET))(this, item, skipParentCheck);
		}

		::System::Void InsertItem(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item, ::System::Boolean skipParentCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_INSERTITEM_OFFSET))(this, index, item, skipParentCheck);
		}

		::System::Void RemoveItemAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEMAT_OFFSET))(this, index);
		}

		::System::Boolean RemoveItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEITEM_OFFSET))(this, item);
		}

		::Newtonsoft::Json::Linq::JToken* GetItem(::System::Int32 index)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_GETITEM_OFFSET))(this, index);
		}

		::System::Void SetItem(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SETITEM_OFFSET))(this, index, item);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CLEARITEMS_OFFSET))(this);
		}

		::System::Void ReplaceItem(::Newtonsoft::Json::Linq::JToken* existing, ::Newtonsoft::Json::Linq::JToken* replacement)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEITEM_OFFSET))(this, existing, replacement);
		}

		::System::Boolean ContainsItem(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTAINSITEM_OFFSET))(this, item);
		}

		::System::Void CopyItemsTo(::System::Array* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_COPYITEMSTO_OFFSET))(this, array, arrayIndex);
		}

		static ::System::Boolean IsTokenUnchanged(::Newtonsoft::Json::Linq::JToken* currentValue, ::Newtonsoft::Json::Linq::JToken* newValue)
		{
			return ((::System::Boolean(*)(::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ISTOKENUNCHANGED_OFFSET))(currentValue, newValue);
		}

		::System::Void ValidateToken(::Newtonsoft::Json::Linq::JToken* o, ::Newtonsoft::Json::Linq::JToken* existing)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_VALIDATETOKEN_OFFSET))(this, o, existing);
		}

		::System::Void Add(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADD_OFFSET))(this, content);
		}

		::System::Void AddAndSkipParentCheck(::Newtonsoft::Json::Linq::JToken* token)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDANDSKIPPARENTCHECK_OFFSET))(this, token);
		}

		::System::Void AddFirst(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDFIRST_OFFSET))(this, content);
		}

		::System::Void AddInternal(::System::Int32 index, ::System::Object* content, ::System::Boolean skipParentCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ADDINTERNAL_OFFSET))(this, index, content, skipParentCheck);
		}

		static ::Newtonsoft::Json::Linq::JToken* CreateFromContent(::System::Object* content)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEFROMCONTENT_OFFSET))(content);
		}

		::Newtonsoft::Json::JsonWriter* CreateWriter()
		{
			return ((::Newtonsoft::Json::JsonWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CREATEWRITER_OFFSET))(this);
		}

		::System::Void ReplaceAll(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REPLACEALL_OFFSET))(this, content);
		}

		::System::Void RemoveAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_REMOVEALL_OFFSET))(this);
		}

		::System::Void Merge(::System::Object* content)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGE_OFFSET))(this, content);
		}

		::System::Void Merge_1(::System::Object* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Linq::JsonMergeSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGE_1_OFFSET))(this, content, settings);
		}

		::System::Void ReadTokenFrom(::Newtonsoft::Json::JsonReader* reader, ::Newtonsoft::Json::Linq::JsonLoadSettings* options)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_READTOKENFROM_OFFSET))(this, reader, options);
		}

		::System::Void ReadContentFrom(::Newtonsoft::Json::JsonReader* r, ::Newtonsoft::Json::Linq::JsonLoadSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonReader*, ::Newtonsoft::Json::Linq::JsonLoadSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_READCONTENTFROM_OFFSET))(this, r, settings);
		}

		::System::Int32 ContentsHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_CONTENTSHASHCODE_OFFSET))(this);
		}

		::System::Int32 System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__IndexOf(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Int32(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__INDEXOF_OFFSET))(this, item);
		}

		::System::Void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__Insert(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__INSERT_OFFSET))(this, index, item);
		}

		::System::Void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__REMOVEAT_OFFSET))(this, index);
		}

		::Newtonsoft::Json::Linq::JToken* System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__get_Item(::System::Int32 index)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_Generic_IList_Newtonsoft_Json_Linq_JToken__set_Item(::System::Int32 index, ::Newtonsoft::Json::Linq::JToken* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ILIST_NEWTONSOFT_JSON_LINQ_JTOKEN__SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Add(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__ADD_OFFSET))(this, item);
		}

		::System::Void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Contains(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__CONTAINS_OFFSET))(this, item);
		}

		::System::Void System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__CopyTo(::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>* array, ::System::Int32 arrayIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Newtonsoft::Json::Linq::JToken*>*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__COPYTO_OFFSET))(this, array, arrayIndex);
		}

		::System::Boolean System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean System_Collections_Generic_ICollection_Newtonsoft_Json_Linq_JToken__Remove(::Newtonsoft::Json::Linq::JToken* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::Newtonsoft::Json::Linq::JToken*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_GENERIC_ICOLLECTION_NEWTONSOFT_JSON_LINQ_JTOKEN__REMOVE_OFFSET))(this, item);
		}

		::Newtonsoft::Json::Linq::JToken* EnsureValue(::System::Object* value)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_ENSUREVALUE_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_Add(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_ADD_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_CLEAR_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_Contains(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_CONTAINS_OFFSET))(this, value);
		}

		::System::Int32 System_Collections_IList_IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_Insert(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_INSERT_OFFSET))(this, index, value);
		}

		::System::Boolean System_Collections_IList_get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean System_Collections_IList_get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void System_Collections_IList_Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void System_Collections_IList_RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Object* System_Collections_IList_get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void System_Collections_IList_set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ILIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Void System_Collections_ICollection_CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_SYSTEM_COLLECTIONS_ICOLLECTION_COPYTO_OFFSET))(this, array, index);
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

		static ::System::Void MergeEnumerableContent(::Newtonsoft::Json::Linq::JContainer* target, ::System::Collections::IEnumerable* content, ::Newtonsoft::Json::Linq::JsonMergeSettings* settings)
		{
			return ((::System::Void(*)(::Newtonsoft::Json::Linq::JContainer*, ::System::Collections::IEnumerable*, ::Newtonsoft::Json::Linq::JsonMergeSettings*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_LINQ_JCONTAINER_MERGEENUMERABLECONTENT_OFFSET))(target, content, settings);
		}
	};
}
