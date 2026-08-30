#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode.h"
#include "unitysdk/HoudiniEngineUnity/JSONNodeType.h"
#include "unitysdk/HoudiniEngineUnity/JSONNode_Enumerator.h"
#include "unitysdk/HoudiniEngineUnity/JSONTextMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define HOUDINIENGINEUNITY_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1B16BED0)
#define HOUDINIENGINEUNITY_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B16B9B0)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1B16C120)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B1512E0)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1B16B970)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x1B16B9A0)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B16BD70)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B151300)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B16B990)
#define HOUDINIENGINEUNITY_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1B16C0C0)
#define HOUDINIENGINEUNITY_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B16C000)
#define HOUDINIENGINEUNITY_JSONARRAY_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1B16B980)
#define HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B16BDA0)
#define HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B16BA50)
#define HOUDINIENGINEUNITY_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1B16C1A0)
#define HOUDINIENGINEUNITY_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B16C780)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 39379;

	class JSONArray : public ::HoudiniEngineUnity::JSONNode
	{
	public:
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::JSONNode*>* m_List; // 0x10
		::System::Boolean inline_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_SET_INLINE_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNodeType get_Tag()
		{
			return ((::HoudiniEngineUnity::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_ISARRAY_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode_Enumerator GetEnumerator()
		{
			return ((::HoudiniEngineUnity::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::HoudiniEngineUnity::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::HoudiniEngineUnity::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_ADD_OFFSET))(this, a1, a2);
		}

		::HoudiniEngineUnity::JSONNode* Remove(::System::Int32 a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_REMOVE_OFFSET))(this, a1);
		}

		::HoudiniEngineUnity::JSONNode* Remove_1(::HoudiniEngineUnity::JSONNode* a1)
		{
			return ((::HoudiniEngineUnity::JSONNode*(*)(::PVOID, ::HoudiniEngineUnity::JSONNode*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::HoudiniEngineUnity::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::HoudiniEngineUnity::JSONTextMode))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
