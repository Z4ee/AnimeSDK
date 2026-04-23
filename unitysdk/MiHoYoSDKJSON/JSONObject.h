#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNodeType.h"
#include "unitysdk/MiHoYoSDKJSON/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYoSDKJSON/JSONTextMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define MIHOYOSDKJSON_JSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x8DE7D00)
#define MIHOYOSDKJSON_JSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8DE76B0)
#define MIHOYOSDKJSON_JSONOBJECT_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x8DE82C0)
#define MIHOYOSDKJSON_JSONOBJECT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x8DE8380)
#define MIHOYOSDKJSON_JSONOBJECT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x8DE7CE0)
#define MIHOYOSDKJSON_JSONOBJECT_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x8DE7670)
#define MIHOYOSDKJSON_JSONOBJECT_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x8DE76A0)
#define MIHOYOSDKJSON_JSONOBJECT_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8DE7A50)
#define MIHOYOSDKJSON_JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8DE7730)
#define MIHOYOSDKJSON_JSONOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x8DE7690)
#define MIHOYOSDKJSON_JSONOBJECT_HASKEY_OFFSET UNITYSDK_OFFSET(0x8DE8260)
#define MIHOYOSDKJSON_JSONOBJECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x8DE80A0)
#define MIHOYOSDKJSON_JSONOBJECT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x8DE8130)
#define MIHOYOSDKJSON_JSONOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x8DE7FD0)
#define MIHOYOSDKJSON_JSONOBJECT_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x8DE7680)
#define MIHOYOSDKJSON_JSONOBJECT_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8DE7AC0)
#define MIHOYOSDKJSON_JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8DE77F0)
#define MIHOYOSDKJSON_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x8DE8400)
#define MIHOYOSDKJSON_JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x8DE5B20)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONObject_TypeDefinitionIndex = 42659;

	class JSONObject : public ::MiHoYoSDKJSON::JSONNode
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYoSDKJSON::JSONNode*>* m_Dict; // 0x10
		::System::Boolean inline_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_SET_INLINE_OFFSET))(this, value);
		}

		::MiHoYoSDKJSON::JSONNodeType get_Tag()
		{
			return ((::MiHoYoSDKJSON::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_ISOBJECT_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYoSDKJSON::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GETENUMERATOR_OFFSET))(this);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item(::System::String* aKey)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_ITEM_OFFSET))(this, aKey);
		}

		::System::Void set_Item(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_SET_ITEM_OFFSET))(this, aKey, value);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item_1(::System::Int32 aIndex)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_ITEM_1_OFFSET))(this, aIndex);
		}

		::System::Void set_Item_1(::System::Int32 aIndex, ::MiHoYoSDKJSON::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_SET_ITEM_1_OFFSET))(this, aIndex, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_ADD_OFFSET))(this, aKey, aItem);
		}

		::MiHoYoSDKJSON::JSONNode* Remove(::System::String* aKey)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_REMOVE_OFFSET))(this, aKey);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_REMOVE_1_OFFSET))(this, aIndex);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_2(::MiHoYoSDKJSON::JSONNode* aNode)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Boolean HasKey(::System::String* aKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_HASKEY_OFFSET))(this, aKey);
		}

		::MiHoYoSDKJSON::JSONNode* GetValueOrDefault(::System::String* aKey, ::MiHoYoSDKJSON::JSONNode* aDefault)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GETVALUEORDEFAULT_OFFSET))(this, aKey, aDefault);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYoSDKJSON::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
