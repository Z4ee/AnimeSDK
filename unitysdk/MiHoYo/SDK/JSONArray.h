#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x15F16AF0)
#define MIHOYO_SDK_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x15F02450)
#define MIHOYO_SDK_JSONARRAY_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x15F16D50)
#define MIHOYO_SDK_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x15F16AD0)
#define MIHOYO_SDK_JSONARRAY_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x15F16590)
#define MIHOYO_SDK_JSONARRAY_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x15F165C0)
#define MIHOYO_SDK_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x15F16910)
#define MIHOYO_SDK_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x15F16600)
#define MIHOYO_SDK_JSONARRAY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x15F165B0)
#define MIHOYO_SDK_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x15F16CF0)
#define MIHOYO_SDK_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x15F16C60)
#define MIHOYO_SDK_JSONARRAY_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x15F165A0)
#define MIHOYO_SDK_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x15F16960)
#define MIHOYO_SDK_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x15F166C0)
#define MIHOYO_SDK_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x15F16EF0)
#define MIHOYO_SDK_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x15F020E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 7128;

	class JSONArray : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::JSONNode*>* m_List; // 0x10
		::System::Boolean inline_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_SET_INLINE_OFFSET))(this, value);
		}

		::MiHoYo::SDK::JSONNodeType get_Tag()
		{
			return ((::MiHoYo::SDK::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsArray()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_ISARRAY_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GETENUMERATOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* get_Item(::System::Int32 aIndex)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_ITEM_OFFSET))(this, aIndex);
		}

		::System::Void set_Item(::System::Int32 aIndex, ::MiHoYo::SDK::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_SET_ITEM_OFFSET))(this, aIndex, value);
		}

		::MiHoYo::SDK::JSONNode* get_Item_1(::System::String* aKey)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_ITEM_1_OFFSET))(this, aKey);
		}

		::System::Void set_Item_1(::System::String* aKey, ::MiHoYo::SDK::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_SET_ITEM_1_OFFSET))(this, aKey, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* aKey, ::MiHoYo::SDK::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_ADD_OFFSET))(this, aKey, aItem);
		}

		::MiHoYo::SDK::JSONNode* Remove(::System::Int32 aIndex)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_REMOVE_OFFSET))(this, aIndex);
		}

		::MiHoYo::SDK::JSONNode* Remove_1(::MiHoYo::SDK::JSONNode* aNode)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_REMOVE_1_OFFSET))(this, aNode);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYo::SDK::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
