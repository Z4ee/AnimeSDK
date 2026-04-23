#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x8DE19D0)
#define MIHOYOSDKJSON_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8DE1410)
#define MIHOYOSDKJSON_JSONARRAY_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x8DE1CA0)
#define MIHOYOSDKJSON_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x8DE19B0)
#define MIHOYOSDKJSON_JSONARRAY_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x8DE13D0)
#define MIHOYOSDKJSON_JSONARRAY_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x8DE1400)
#define MIHOYOSDKJSON_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8DE17B0)
#define MIHOYOSDKJSON_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8DE14C0)
#define MIHOYOSDKJSON_JSONARRAY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x8DE13F0)
#define MIHOYOSDKJSON_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x8DE1C40)
#define MIHOYOSDKJSON_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x8DE1B80)
#define MIHOYOSDKJSON_JSONARRAY_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x8DE13E0)
#define MIHOYOSDKJSON_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8DE1800)
#define MIHOYOSDKJSON_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8DE15A0)
#define MIHOYOSDKJSON_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x8DE1D20)
#define MIHOYOSDKJSON_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE2090)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 42657;

	class JSONArray : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYoSDKJSON::JSONNode*>* m_List; // 0x10
		::System::Boolean inline_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_SET_INLINE_OFFSET))(this, value);
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_ISARRAY_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::MiHoYoSDKJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_ADD_OFFSET))(this, aKey, aItem);
		}

		::MiHoYoSDKJSON::JSONNode* Remove(::System::Int32 aIndex)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_REMOVE_OFFSET))(this, aIndex);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_1(::MiHoYoSDKJSON::JSONNode* aNode)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_REMOVE_1_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYoSDKJSON::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
