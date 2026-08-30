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

#define CODABLE_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0xB105860)
#define CODABLE_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB1050E0)
#define CODABLE_JSONARRAY_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0xB105B10)
#define CODABLE_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xB105840)
#define CODABLE_JSONARRAY_GET_INLINE_OFFSET UNITYSDK_OFFSET(0xB1050A0)
#define CODABLE_JSONARRAY_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0xB1050D0)
#define CODABLE_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xB105660)
#define CODABLE_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xB105190)
#define CODABLE_JSONARRAY_GET_TAG_OFFSET UNITYSDK_OFFSET(0xB1050C0)
#define CODABLE_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0xB105AB0)
#define CODABLE_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0xB1059F0)
#define CODABLE_JSONARRAY_SET_INLINE_OFFSET UNITYSDK_OFFSET(0xB1050B0)
#define CODABLE_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0xB1056B0)
#define CODABLE_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xB105230)
#define CODABLE_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0xB105B90)
#define CODABLE_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0xB106170)

namespace Codable
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 46524;

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

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_SET_INLINE_OFFSET))(this, a1);
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

		::Codable::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::Codable::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_ADD_OFFSET))(this, a1, a2);
		}

		::Codable::JSONNode* Remove(::System::Int32 a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_REMOVE_OFFSET))(this, a1);
		}

		::Codable::JSONNode* Remove_1(::Codable::JSONNode* a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::Codable::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
