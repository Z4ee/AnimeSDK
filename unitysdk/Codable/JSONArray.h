#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Codable/JSONNode.h"
#include "unitysdk/Codable/JSONNodeType.h"
#include "unitysdk/Codable/JSONNode_Enumerator.h"
#include "unitysdk/Codable/JSONTextMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define CODABLE_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x8B83880)
#define CODABLE_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x8B830E0)
#define CODABLE_JSONARRAY_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x8B83B70)
#define CODABLE_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x8B83860)
#define CODABLE_JSONARRAY_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x8B830A0)
#define CODABLE_JSONARRAY_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x8B830D0)
#define CODABLE_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8B83640)
#define CODABLE_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x8B831B0)
#define CODABLE_JSONARRAY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x8B830C0)
#define CODABLE_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x8B83B10)
#define CODABLE_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x8B83A50)
#define CODABLE_JSONARRAY_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x8B830B0)
#define CODABLE_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x8B83690)
#define CODABLE_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x8B83240)
#define CODABLE_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x8B83BF0)
#define CODABLE_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x8B83F60)

namespace Codable
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 42678;

	class JSONArray : public ::Codable::JSONNode
	{
	public:
		::System::Collections::Generic::List_1<::Codable::JSONNode*>* m_List; // 0x10
		::System::Boolean inline_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_SET_INLINE_OFFSET))(this, value);
		}

		::Codable::JSONNodeType get_Tag()
		{
			return ((::Codable::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_ISARRAY_OFFSET))(this);
		}

		::Codable::JSONNode_Enumerator GetEnumerator()
		{
			return ((::Codable::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::Codable::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::Codable::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::Codable::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::Codable::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* aKey, ::Codable::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_ADD_OFFSET))(this, aKey, aItem);
		}

		::Codable::JSONNode* Remove(::System::Int32 aIndex)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_REMOVE_OFFSET))(this, aIndex);
		}

		::Codable::JSONNode* Remove_1(::Codable::JSONNode* aNode)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_REMOVE_1_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::Codable::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
