#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1E5A9250)
#define CODABLE_JSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E5A8B80)
#define CODABLE_JSONOBJECT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1E5A9810)
#define CODABLE_JSONOBJECT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E5A9230)
#define CODABLE_JSONOBJECT_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1E5A8B40)
#define CODABLE_JSONOBJECT_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x1E5A8B70)
#define CODABLE_JSONOBJECT_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1E5A8F90)
#define CODABLE_JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E5A8C20)
#define CODABLE_JSONOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1E5A8B60)
#define CODABLE_JSONOBJECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1E5A9660)
#define CODABLE_JSONOBJECT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1E5A96F0)
#define CODABLE_JSONOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1E5A9590)
#define CODABLE_JSONOBJECT_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1E5A8B50)
#define CODABLE_JSONOBJECT_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1E5A9000)
#define CODABLE_JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1E5A8CE0)
#define CODABLE_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1E5A9870)
#define CODABLE_JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A9DD0)

namespace Codable
{
	inline static constexpr unsigned int JSONObject_TypeDefinitionIndex = 37121;

	class JSONObject : public ::Codable::JSONNode
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Codable::JSONNode*>* m_Dict; // 0x10
		::System::Boolean inline_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_SET_INLINE_OFFSET))(this, value);
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_ISOBJECT_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GETENUMERATOR_OFFSET))(this);
		}

		::Codable::JSONNode* get_Item(::System::String* aKey)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_ITEM_OFFSET))(this, aKey);
		}

		::System::Void set_Item(::System::String* aKey, ::Codable::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_SET_ITEM_OFFSET))(this, aKey, value);
		}

		::Codable::JSONNode* get_Item_1(::System::Int32 aIndex)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_ITEM_1_OFFSET))(this, aIndex);
		}

		::System::Void set_Item_1(::System::Int32 aIndex, ::Codable::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_SET_ITEM_1_OFFSET))(this, aIndex, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* aKey, ::Codable::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_ADD_OFFSET))(this, aKey, aItem);
		}

		::Codable::JSONNode* Remove(::System::String* aKey)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_REMOVE_OFFSET))(this, aKey);
		}

		::Codable::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_REMOVE_1_OFFSET))(this, aIndex);
		}

		::Codable::JSONNode* Remove_2(::Codable::JSONNode* aNode)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::Codable::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
