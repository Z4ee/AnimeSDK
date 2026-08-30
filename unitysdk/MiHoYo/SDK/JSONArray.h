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

#define MIHOYO_SDK_JSONARRAY_ADD_OFFSET UNITYSDK_OFFSET(0x1B980D30)
#define MIHOYO_SDK_JSONARRAY_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1B96C640)
#define MIHOYO_SDK_JSONARRAY_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1B980FB0)
#define MIHOYO_SDK_JSONARRAY_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B9466A0)
#define MIHOYO_SDK_JSONARRAY_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1B9808A0)
#define MIHOYO_SDK_JSONARRAY_GET_ISARRAY_OFFSET UNITYSDK_OFFSET(0x1B9808D0)
#define MIHOYO_SDK_JSONARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B980B80)
#define MIHOYO_SDK_JSONARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B946550)
#define MIHOYO_SDK_JSONARRAY_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1B9808C0)
#define MIHOYO_SDK_JSONARRAY_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1B980F50)
#define MIHOYO_SDK_JSONARRAY_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B980E90)
#define MIHOYO_SDK_JSONARRAY_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1B9808B0)
#define MIHOYO_SDK_JSONARRAY_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B980BD0)
#define MIHOYO_SDK_JSONARRAY_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B980950)
#define MIHOYO_SDK_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1B981140)
#define MIHOYO_SDK_JSONARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B96B660)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONArray_TypeDefinitionIndex = 8089;

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

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_SET_INLINE_OFFSET))(this, a1);
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

		::MiHoYo::SDK::JSONNode* get_Item(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONNode* get_Item_1(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_ADD_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONNode* Remove(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_REMOVE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* Remove_1(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYo::SDK::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONARRAY_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
