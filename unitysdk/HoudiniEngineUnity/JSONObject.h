#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1EEE8430)
#define HOUDINIENGINEUNITY_JSONOBJECT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EEE7EA0)
#define HOUDINIENGINEUNITY_JSONOBJECT_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x1EEE7F00)
#define HOUDINIENGINEUNITY_JSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1EEE7E30)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1EEE8930)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1EEE8410)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1EEE7DF0)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x1EEE7E20)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1EEE8240)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EEE7F60)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1EEE7E10)
#define HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1EEE8750)
#define HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1EEE87E0)
#define HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1EEE8610)
#define HOUDINIENGINEUNITY_JSONOBJECT_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1EEE7E00)
#define HOUDINIENGINEUNITY_JSONOBJECT_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1EEE82B0)
#define HOUDINIENGINEUNITY_JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1EEE8090)
#define HOUDINIENGINEUNITY_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1EEE89B0)
#define HOUDINIENGINEUNITY_JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEE9380)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONObject_TypeDefinitionIndex = 39381;

	class JSONObject : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HoudiniEngineUnity::JSONNode*>* m_Dict; // 0x10
		::System::Boolean inline_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_SET_INLINE_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_ISOBJECT_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_CLEAR_OFFSET))(this);
		}

		::System::Boolean ContainsKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_CONTAINSKEY_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNode* get_Item(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::JSONNode* get_Item_1(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Int32 a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_ADD_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::JSONNode* Remove(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_1_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNode* Remove_2(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
