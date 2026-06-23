#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SimpleJSON/JSONNode.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class BinaryWriter; }

#define SIMPLEJSON_JSONCLASS_ADD_OFFSET UNITYSDK_OFFSET(0x1BFFC6B0)
#define SIMPLEJSON_JSONCLASS_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1BFFC630)
#define SIMPLEJSON_JSONCLASS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BFFCBE0)
#define SIMPLEJSON_JSONCLASS_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x1BFFCB80)
#define SIMPLEJSON_JSONCLASS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BFFC610)
#define SIMPLEJSON_JSONCLASS_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1BFFC4D0)
#define SIMPLEJSON_JSONCLASS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BFFC260)
#define SIMPLEJSON_JSONCLASS_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x1BFFCB20)
#define SIMPLEJSON_JSONCLASS_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1BFFC970)
#define SIMPLEJSON_JSONCLASS_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1BFFCA00)
#define SIMPLEJSON_JSONCLASS_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BFFC890)
#define SIMPLEJSON_JSONCLASS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BFFD1E0)
#define SIMPLEJSON_JSONCLASS_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1BFFC540)
#define SIMPLEJSON_JSONCLASS_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BFFC390)
#define SIMPLEJSON_JSONCLASS_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BFFCE80)
#define SIMPLEJSON_JSONCLASS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BFFCC30)
#define SIMPLEJSON_JSONCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BFFD3B0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONClass_TypeDefinitionIndex = 8334;

	class JSONClass : public ::SimpleJSON::JSONNode
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SimpleJSON::JSONNode*>* m_Dict; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS__CTOR_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* get_Item(::System::String* aKey)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_ITEM_OFFSET))(this, aKey);
		}

		::System::Void set_Item(::System::String* aKey, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_SET_ITEM_OFFSET))(this, aKey, value);
		}

		::SimpleJSON::JSONNode* get_Item_1(::System::Int32 aIndex)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_ITEM_1_OFFSET))(this, aIndex);
		}

		::System::Void set_Item_1(::System::Int32 aIndex, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_SET_ITEM_1_OFFSET))(this, aIndex, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean ContainsKey(::System::String* aKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_CONTAINSKEY_OFFSET))(this, aKey);
		}

		::System::Void Add(::System::String* aKey, ::SimpleJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_ADD_OFFSET))(this, aKey, aItem);
		}

		::SimpleJSON::JSONNode* Remove(::System::String* aKey)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_REMOVE_OFFSET))(this, aKey);
		}

		::SimpleJSON::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_REMOVE_1_OFFSET))(this, aIndex);
		}

		::SimpleJSON::JSONNode* Remove_2(::SimpleJSON::JSONNode* aNode)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* get_Keys()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_KEYS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>* get_Childs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GET_CHILDS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* aPrefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_TOSTRING_1_OFFSET))(this, aPrefix);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* aWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_SERIALIZE_OFFSET))(this, aWriter);
		}
	};
}
