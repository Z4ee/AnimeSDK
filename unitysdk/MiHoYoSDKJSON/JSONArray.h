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

#define MIHOYOSDKJSON_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1CD53DC0)
#define MIHOYOSDKJSON_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD53650)
#define MIHOYOSDKJSON_JSONARRAY_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1CD54070)
#define MIHOYOSDKJSON_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CD53DA0)
#define MIHOYOSDKJSON_JSONARRAY_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1CD53610)
#define MIHOYOSDKJSON_JSONARRAY_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x1CD53640)
#define MIHOYOSDKJSON_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1CD53BC0)
#define MIHOYOSDKJSON_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CD53700)
#define MIHOYOSDKJSON_JSONARRAY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1CD53630)
#define MIHOYOSDKJSON_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1CD54010)
#define MIHOYOSDKJSON_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CD53F50)
#define MIHOYOSDKJSON_JSONARRAY_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1CD53620)
#define MIHOYOSDKJSON_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1CD53C10)
#define MIHOYOSDKJSON_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CD537D0)
#define MIHOYOSDKJSON_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1CD540F0)
#define MIHOYOSDKJSON_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD546D0)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 46503;

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

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_SET_INLINE_OFFSET))(this, a1);
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

		::MiHoYoSDKJSON::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_ADD_OFFSET))(this, a1, a2);
		}

		::MiHoYoSDKJSON::JSONNode* Remove(::System::Int32 a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_REMOVE_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_1(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYoSDKJSON::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
