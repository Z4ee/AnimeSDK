#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SimpleJSON/JSONNode.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class BinaryWriter; }

#define SIMPLEJSON_JSONCLASS_ADD_OFFSET UNITYSDK_OFFSET(0x18355000)
#define SIMPLEJSON_JSONCLASS_CLONE_OFFSET UNITYSDK_OFFSET(0x18356570)
#define SIMPLEJSON_JSONCLASS_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x18354FA0)
#define SIMPLEJSON_JSONCLASS_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18355520)
#define SIMPLEJSON_JSONCLASS_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x183554A0)
#define SIMPLEJSON_JSONCLASS_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18354F80)
#define SIMPLEJSON_JSONCLASS_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x18354E40)
#define SIMPLEJSON_JSONCLASS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18354C80)
#define SIMPLEJSON_JSONCLASS_GET_KEYS_OFFSET UNITYSDK_OFFSET(0x18355420)
#define SIMPLEJSON_JSONCLASS_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x18355260)
#define SIMPLEJSON_JSONCLASS_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x183552F0)
#define SIMPLEJSON_JSONCLASS_REMOVE_OFFSET UNITYSDK_OFFSET(0x18355190)
#define SIMPLEJSON_JSONCLASS_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x18356870)
#define SIMPLEJSON_JSONCLASS_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x18354EB0)
#define SIMPLEJSON_JSONCLASS_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18354D30)
#define SIMPLEJSON_JSONCLASS_TOSTRINGWITHCOMMENT_OFFSET UNITYSDK_OFFSET(0x18355E20)
#define SIMPLEJSON_JSONCLASS_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x18355A70)
#define SIMPLEJSON_JSONCLASS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18355580)
#define SIMPLEJSON_JSONCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x183567F0)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONClass_TypeDefinitionIndex = 9649;

	class JSONClass : public ::SimpleJSON::JSONNode
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::SimpleJSON::JSONNode*>* m_Dict; // 0x28

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

		::System::String* ToStringWithComment(::System::String* aPrefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_TOSTRINGWITHCOMMENT_OFFSET))(this, aPrefix);
		}

		::SimpleJSON::JSONNode* Clone()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_CLONE_OFFSET))(this);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* aWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONCLASS_SERIALIZE_OFFSET))(this, aWriter);
		}
	};
}
