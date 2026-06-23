#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SimpleJSON/JSONNode.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryWriter; }

#define SIMPLEJSON_JSONARRAY_ADD_1_OFFSET UNITYSDK_OFFSET(0x1D2ECA20)
#define SIMPLEJSON_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1D2EC9C0)
#define SIMPLEJSON_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D2ECC00)
#define SIMPLEJSON_JSONARRAY_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x1D2ECBA0)
#define SIMPLEJSON_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1D2EC9A0)
#define SIMPLEJSON_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D2EC8B0)
#define SIMPLEJSON_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D2EC730)
#define SIMPLEJSON_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1D2ECB40)
#define SIMPLEJSON_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D2ECA80)
#define SIMPLEJSON_JSONARRAY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D2ED080)
#define SIMPLEJSON_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1D2EC940)
#define SIMPLEJSON_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1D2EC800)
#define SIMPLEJSON_JSONARRAY_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D2ECE40)
#define SIMPLEJSON_JSONARRAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D2ECC50)
#define SIMPLEJSON_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2ED160)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 8372;

	class JSONArray : public ::SimpleJSON::JSONNode
	{
	public:
		::System::Collections::Generic::List_1<::SimpleJSON::JSONNode*>* m_List; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__CTOR_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::SimpleJSON::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::SimpleJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* aKey, ::SimpleJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_ADD_OFFSET))(this, aKey, aItem);
		}

		::System::Void Add_1(::SimpleJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_ADD_1_OFFSET))(this, aItem);
		}

		::SimpleJSON::JSONNode* Remove(::System::Int32 aIndex)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_REMOVE_OFFSET))(this, aIndex);
		}

		::SimpleJSON::JSONNode* Remove_1(::SimpleJSON::JSONNode* aNode)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_REMOVE_1_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>* get_Childs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::SimpleJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_GET_CHILDS_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* aPrefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_TOSTRING_1_OFFSET))(this, aPrefix);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* aWriter)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_SERIALIZE_OFFSET))(this, aWriter);
		}
	};
}
