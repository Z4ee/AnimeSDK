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

#define MIHOYO_SDK_JSONOBJECT_ADD_OFFSET UNITYSDK_OFFSET(0x1993A2D0)
#define MIHOYO_SDK_JSONOBJECT_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19939FD0)
#define MIHOYO_SDK_JSONOBJECT_GETVALUEORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1993A8A0)
#define MIHOYO_SDK_JSONOBJECT_GET_CHILDREN_OFFSET UNITYSDK_OFFSET(0x1993A960)
#define MIHOYO_SDK_JSONOBJECT_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1993A2B0)
#define MIHOYO_SDK_JSONOBJECT_GET_INLINE_OFFSET UNITYSDK_OFFSET(0x19939F90)
#define MIHOYO_SDK_JSONOBJECT_GET_ISOBJECT_OFFSET UNITYSDK_OFFSET(0x19939FC0)
#define MIHOYO_SDK_JSONOBJECT_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1993A070)
#define MIHOYO_SDK_JSONOBJECT_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1991F7C0)
#define MIHOYO_SDK_JSONOBJECT_GET_TAG_OFFSET UNITYSDK_OFFSET(0x19939FB0)
#define MIHOYO_SDK_JSONOBJECT_HASKEY_OFFSET UNITYSDK_OFFSET(0x1993A820)
#define MIHOYO_SDK_JSONOBJECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1993A670)
#define MIHOYO_SDK_JSONOBJECT_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x1993A700)
#define MIHOYO_SDK_JSONOBJECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1993A5A0)
#define MIHOYO_SDK_JSONOBJECT_SET_INLINE_OFFSET UNITYSDK_OFFSET(0x19939FA0)
#define MIHOYO_SDK_JSONOBJECT_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1993A0E0)
#define MIHOYO_SDK_JSONOBJECT_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19923060)
#define MIHOYO_SDK_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1993A9C0)
#define MIHOYO_SDK_JSONOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x19922FB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int JSONObject_TypeDefinitionIndex = 18999;

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

		::System::Void set_Inline(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_SET_INLINE_OFFSET))(this, value);
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

		::MiHoYo::SDK::JSONNode* get_Item(::System::String* aKey)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_ITEM_OFFSET))(this, aKey);
		}

		::System::Void set_Item(::System::String* aKey, ::MiHoYo::SDK::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_SET_ITEM_OFFSET))(this, aKey, value);
		}

		::MiHoYo::SDK::JSONNode* get_Item_1(::System::Int32 aIndex)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_ITEM_1_OFFSET))(this, aIndex);
		}

		::System::Void set_Item_1(::System::Int32 aIndex, ::MiHoYo::SDK::JSONNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_SET_ITEM_1_OFFSET))(this, aIndex, value);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_COUNT_OFFSET))(this);
		}

		::System::Void Add(::System::String* aKey, ::MiHoYo::SDK::JSONNode* aItem)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_ADD_OFFSET))(this, aKey, aItem);
		}

		::MiHoYo::SDK::JSONNode* Remove(::System::String* aKey)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_REMOVE_OFFSET))(this, aKey);
		}

		::MiHoYo::SDK::JSONNode* Remove_1(::System::Int32 aIndex)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_REMOVE_1_OFFSET))(this, aIndex);
		}

		::MiHoYo::SDK::JSONNode* Remove_2(::MiHoYo::SDK::JSONNode* aNode)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_REMOVE_2_OFFSET))(this, aNode);
		}

		::System::Boolean HasKey(::System::String* aKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_HASKEY_OFFSET))(this, aKey);
		}

		::MiHoYo::SDK::JSONNode* GetValueOrDefault(::System::String* aKey, ::MiHoYo::SDK::JSONNode* aDefault)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GETVALUEORDEFAULT_OFFSET))(this, aKey, aDefault);
		}

		::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>* get_Children()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::MiHoYo::SDK::JSONNode*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_GET_CHILDREN_OFFSET))(this);
		}

		::System::Void WriteToStringBuilder(::System::Text::StringBuilder* aSB, ::System::Int32 aIndent, ::System::Int32 aIndentInc, ::MiHoYo::SDK::JSONTextMode aMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::MiHoYo::SDK::JSONTextMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_JSONOBJECT_WRITETOSTRINGBUILDER_OFFSET))(this, aSB, aIndent, aIndentInc, aMode);
		}
	};
}
