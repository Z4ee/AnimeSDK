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

#define HOUDINIENGINEUNITY_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1B49ED90)
#define HOUDINIENGINEUNITY_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B49E870)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1B49EFE0)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B484170)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1B49E830)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x1B49E860)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B49EC30)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B484190)
#define HOUDINIENGINEUNITY_JSONARRAY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B49E850)
#define HOUDINIENGINEUNITY_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1B49EF80)
#define HOUDINIENGINEUNITY_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B49EEC0)
#define HOUDINIENGINEUNITY_JSONARRAY_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1B49E840)
#define HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B49EC60)
#define HOUDINIENGINEUNITY_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B49E910)
#define HOUDINIENGINEUNITY_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1B49F060)
#define HOUDINIENGINEUNITY_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B49F640)

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
