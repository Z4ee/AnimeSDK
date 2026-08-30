#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SimpleJSON/JSONNode.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class BinaryWriter; }

#define SIMPLEJSON_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1EEDA090)
#define SIMPLEJSON_JSONARRAY_CLONE_OFFSET UNITYSDK_OFFSET(0x1EEDACF0)
#define SIMPLEJSON_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EEDA2B0)
#define SIMPLEJSON_JSONARRAY_GET_CHILDS_OFFSET UNITYSDK_OFFSET(0x1EEDA230)
#define SIMPLEJSON_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EEDA070)
#define SIMPLEJSON_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1EED9FC0)
#define SIMPLEJSON_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EED9E70)
#define SIMPLEJSON_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1EEDA1D0)
#define SIMPLEJSON_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1EEDA110)
#define SIMPLEJSON_JSONARRAY_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EEDAAD0)
#define SIMPLEJSON_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1EED9FF0)
#define SIMPLEJSON_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EED9EF0)
#define SIMPLEJSON_JSONARRAY_TOSTRINGWITHCOMMENT_OFFSET UNITYSDK_OFFSET(0x1EEDA750)
#define SIMPLEJSON_JSONARRAY_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1EEDA500)
#define SIMPLEJSON_JSONARRAY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EEDA310)
#define SIMPLEJSON_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEDAE60)

namespace SimpleJSON
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 9898;

	class JSONArray : public ::SimpleJSON::JSONNode
	{
	public:
		::System::Collections::Generic::List_1<::SimpleJSON::JSONNode*>* m_List; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY__CTOR_OFFSET))(this);
		}

		::SimpleJSON::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::SimpleJSON::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::SimpleJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_ADD_OFFSET))(this, a1, a2);
		}

		::SimpleJSON::JSONNode* Remove(::System::Int32 a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_REMOVE_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Remove_1(::SimpleJSON::JSONNode* a1)
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_REMOVE_1_OFFSET))(this, a1);
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

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToStringWithComment(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_TOSTRINGWITHCOMMENT_OFFSET))(this, a1);
		}

		::System::Void Serialize(::System::IO::BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::BinaryWriter*))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_SERIALIZE_OFFSET))(this, a1);
		}

		::SimpleJSON::JSONNode* Clone()
		{
			return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIMPLEJSON_JSONARRAY_CLONE_OFFSET))(this);
		}
	};
}
