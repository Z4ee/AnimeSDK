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

#define MIHOYOSDKJSON_JSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1CD550E0)
#define MIHOYOSDKJSON_JSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CD59770)
#define MIHOYOSDKJSON_JSONOBJECT_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1CD5A0A0)
#define MIHOYOSDKJSON_JSONOBJECT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1CD5A150)
#define MIHOYOSDKJSON_JSONOBJECT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1CD59D00)
#define MIHOYOSDKJSON_JSONOBJECT_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1CD59730)
#define MIHOYOSDKJSON_JSONOBJECT_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x1CD59760)
#define MIHOYOSDKJSON_JSONOBJECT_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1CD59AE0)
#define MIHOYOSDKJSON_JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CD597E0)
#define MIHOYOSDKJSON_JSONOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1CD59750)
#define MIHOYOSDKJSON_JSONOBJECT_HASKEY_OFFSET UNITYSDK_OFFSET(0x1CD5A040)
#define MIHOYOSDKJSON_JSONOBJECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1CD59E60)
#define MIHOYOSDKJSON_JSONOBJECT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1CD59EF0)
#define MIHOYOSDKJSON_JSONOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1CD59D20)
#define MIHOYOSDKJSON_JSONOBJECT_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1CD59740)
#define MIHOYOSDKJSON_JSONOBJECT_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1CD59B50)
#define MIHOYOSDKJSON_JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CD598F0)
#define MIHOYOSDKJSON_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1CD5A1D0)
#define MIHOYOSDKJSON_JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD55050)

namespace MiHoYoSDKJSON
{
	inline static constexpr unsigned int JSONObject_TypeDefinitionIndex = 46505;

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

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_SET_INLINE_OFFSET))(this, a1);
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

		::MiHoYoSDKJSON::JSONNode* get_Item(::System::String* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::MiHoYoSDKJSON::JSONNode* get_Item_1(::System::Int32 a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Int32 a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_ADD_OFFSET))(this, a1, a2);
		}

		::MiHoYoSDKJSON::JSONNode* Remove(::System::String* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_REMOVE_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_REMOVE_1_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONNode* Remove_2(::MiHoYoSDKJSON::JSONNode* a1)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_REMOVE_2_OFFSET))(this, a1);
		}

		::System::Boolean HasKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_HASKEY_OFFSET))(this, a1);
		}

		::MiHoYoSDKJSON::JSONNode* GetValueOrDefault(::System::String* a1, ::MiHoYoSDKJSON::JSONNode* a2)
		{
			return ((::MiHoYoSDKJSON::JSONNode*(*)(::PVOID, ::System::String*, ::MiHoYoSDKJSON::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GETVALUEORDEFAULT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYoSDKJSON::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYoSDKJSON::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYoSDKJSON::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYOSDKJSON_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
