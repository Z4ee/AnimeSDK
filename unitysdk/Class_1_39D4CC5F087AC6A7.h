#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_945ACFB1FEBC7A2C_38;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_39D4CC5F087AC6A7_GET_TEXTNODELIST_OFFSET UNITYSDK_OFFSET(0x160789D0)
#define CLASS_1_39D4CC5F087AC6A7_GET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x160789B0)
#define CLASS_1_39D4CC5F087AC6A7_SET_TEXTNODELIST_OFFSET UNITYSDK_OFFSET(0x160789E0)
#define CLASS_1_39D4CC5F087AC6A7_SET_TRIGGERNAME_OFFSET UNITYSDK_OFFSET(0x160789C0)
#define CLASS_1_39D4CC5F087AC6A7__CTOR_OFFSET UNITYSDK_OFFSET(0x160789F0)

inline static constexpr unsigned int Class_1_39D4CC5F087AC6A7_TypeDefinitionIndex = 79688;

class Class_1_39D4CC5F087AC6A7 : public ::System::Object
{
public:
	::System::String* _TriggerName_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_38*>* _TextNodeList_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39D4CC5F087AC6A7__CTOR_OFFSET))(this);
	}

	::System::String* get_TriggerName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39D4CC5F087AC6A7_GET_TRIGGERNAME_OFFSET))(this);
	}

	::System::Void set_TriggerName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_39D4CC5F087AC6A7_SET_TRIGGERNAME_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_38*>* get_TextNodeList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_38*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_39D4CC5F087AC6A7_GET_TEXTNODELIST_OFFSET))(this);
	}

	::System::Void set_TextNodeList(::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_38*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_38*>*))((::PBYTE)hIl2Cpp + CLASS_1_39D4CC5F087AC6A7_SET_TEXTNODELIST_OFFSET))(this, a1);
	}
};
