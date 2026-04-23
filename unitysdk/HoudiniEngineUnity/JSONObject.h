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

#define HOUDINIENGINEUNITY_JSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x8CD2DC0)
#define HOUDINIENGINEUNITY_JSONOBJECT_CLEAR_OFFSET UNITYSDK_OFFSET(0x8CD9010)
#define HOUDINIENGINEUNITY_JSONOBJECT_CONTAINSKEY_OFFSET UNITYSDK_OFFSET(0x8CD9080)
#define HOUDINIENGINEUNITY_JSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8CD8F90)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x8CD9890)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x8CD95E0)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x8CD8F50)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x8CD8F80)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8CD93B0)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8CD90E0)
#define HOUDINIENGINEUNITY_JSONOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x8CD8F70)
#define HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x8CD96D0)
#define HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x8CD9760)
#define HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x8CD9600)
#define HOUDINIENGINEUNITY_JSONOBJECT_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x8CD8F60)
#define HOUDINIENGINEUNITY_JSONOBJECT_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8CD9420)
#define HOUDINIENGINEUNITY_JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8CD91A0)
#define HOUDINIENGINEUNITY_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x8CD9910)
#define HOUDINIENGINEUNITY_JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x8CD2D40)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONObject_TypeDefinitionIndex = 43727;

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

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_SET_INLINE_OFFSET))(this, value);
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

		::System::Boolean ContainsKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_CONTAINSKEY_OFFSET))(this, key);
		}

		::HoudiniEngineUnity::JSONNode* get_Item(::System::String* aKey)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_ITEM_OFFSET))(this, aKey);
		}

		::System::Void set_Item(::System::String* aKey, ::HoudiniEngineUnity::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_SET_ITEM_OFFSET))(this, aKey, value);
		}

		::HoudiniEngineUnity::JSONNode* get_Item_1(::System::Int32 aIndex)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_ITEM_1_OFFSET))(this, aIndex);
		}

		::System::Void set_Item_1(::System::Int32 aIndex, ::HoudiniEngineUnity::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_SET_ITEM_1_OFFSET))(this, aIndex, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* aKey, ::HoudiniEngineUnity::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_ADD_OFFSET))(this, aKey, aItem);
		}

		::HoudiniEngineUnity::JSONNode* Remove(::System::String* aKey)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_OFFSET))(this, aKey);
		}

		::HoudiniEngineUnity::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_1_OFFSET))(this, aIndex);
		}

		::HoudiniEngineUnity::JSONNode* Remove_2(::HoudiniEngineUnity::JSONNode* aNode)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
