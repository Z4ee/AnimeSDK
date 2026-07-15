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

#define CODABLE_JSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1BD9A8A0)
#define CODABLE_JSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1BD9FA10)
#define CODABLE_JSONOBJECT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1BDA0360)
#define CODABLE_JSONOBJECT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BDA0020)
#define CODABLE_JSONOBJECT_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1BD9F9D0)
#define CODABLE_JSONOBJECT_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x1BD9FA00)
#define CODABLE_JSONOBJECT_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1BD9FE00)
#define CODABLE_JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BD9FAB0)
#define CODABLE_JSONOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1BD9F9F0)
#define CODABLE_JSONOBJECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1BDA0180)
#define CODABLE_JSONOBJECT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1BDA0210)
#define CODABLE_JSONOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BDA0040)
#define CODABLE_JSONOBJECT_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1BD9F9E0)
#define CODABLE_JSONOBJECT_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1BD9FE70)
#define CODABLE_JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1BD9FBE0)
#define CODABLE_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1BDA03E0)
#define CODABLE_JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD9A810)

namespace Codable
{
	inline static constexpr unsigned int JSONObject_TypeDefinitionIndex = 44344;

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

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_SET_INLINE_OFFSET))(this, a1);
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

		::Codable::JSONNode* get_Item(::System::String* a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::Codable::JSONNode* get_Item_1(::System::Int32 a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Int32 a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::Codable::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_ADD_OFFSET))(this, a1, a2);
		}

		::Codable::JSONNode* Remove(::System::String* a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_REMOVE_OFFSET))(this, a1);
		}

		::Codable::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_REMOVE_1_OFFSET))(this, a1);
		}

		::Codable::JSONNode* Remove_2(::Codable::JSONNode* a1)
		{
			return ((::Codable::JSONNode*(*)(::PVOID, ::Codable::JSONNode*))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_REMOVE_2_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::Codable::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::Codable::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::Codable::JSONTextMode))((::PBYTE)hIl2Cpp + CODABLE_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
