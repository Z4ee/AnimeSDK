#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/JSONNode.h"
#include "unitysdk/MiHoYo/SDK/JSONNodeType.h"
#include "unitysdk/MiHoYo/SDK/JSONNode_Enumerator.h"
#include "unitysdk/MiHoYo/SDK/JSONTextMode.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_JSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1AEB15C0)
#define MIHOYO_SDK_JSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AEB58B0)
#define MIHOYO_SDK_JSONOBJECT_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AEB5E80)
#define MIHOYO_SDK_JSONOBJECT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1AEB5F30)
#define MIHOYO_SDK_JSONOBJECT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AEB5B40)
#define MIHOYO_SDK_JSONOBJECT_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x1AEB5870)
#define MIHOYO_SDK_JSONOBJECT_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x1AEB58A0)
#define MIHOYO_SDK_JSONOBJECT_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1AEB5920)
#define MIHOYO_SDK_JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AE9AD80)
#define MIHOYO_SDK_JSONOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1AEB5890)
#define MIHOYO_SDK_JSONOBJECT_HASKEY_OFFSET UNITYSDK_OFFSET(0x1AE9AD20)
#define MIHOYO_SDK_JSONOBJECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1AEB5CA0)
#define MIHOYO_SDK_JSONOBJECT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1AEB5D30)
#define MIHOYO_SDK_JSONOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1AEB5B60)
#define MIHOYO_SDK_JSONOBJECT_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x1AEB5880)
#define MIHOYO_SDK_JSONOBJECT_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1AEB5990)
#define MIHOYO_SDK_JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AE77C90)
#define MIHOYO_SDK_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1AEB6090)
#define MIHOYO_SDK_JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE77BB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONObject_TypeDefinitionIndex = 8091;

	class JSONObject : public ::MiHoYo::SDK::JSONNode
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MiHoYo::SDK::JSONNode*>* m_Dict; // 0x10
		::System::Boolean inline_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_Inline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_INLINE_OFFSET))(this);
		}

		::System::Void set_Inline(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_SET_INLINE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNodeType get_Tag()
		{
			return ((::MiHoYo::SDK::JSONNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_TAG_OFFSET))(this);
		}

		::System::Boolean get_IsObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_ISOBJECT_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode_Enumerator GetEnumerator()
		{
			return ((::MiHoYo::SDK::JSONNode_Enumerator(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GETENUMERATOR_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* get_Item(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void set_Item(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_SET_ITEM_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONNode* get_Item_1(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_ITEM_1_OFFSET))(this, a1);
		}

		::System::Void set_Item_1(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_SET_ITEM_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_ADD_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONNode* Remove(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_REMOVE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* Remove_1(::System::Int32 a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_REMOVE_1_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* Remove_2(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_REMOVE_2_OFFSET))(this, a1);
		}

		::System::Boolean HasKey(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_HASKEY_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* GetValueOrDefault(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GETVALUEORDEFAULT_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* a1, ::System::Int32 a2, ::System::Int32 a3, ::MiHoYo::SDK::JSONTextMode a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
