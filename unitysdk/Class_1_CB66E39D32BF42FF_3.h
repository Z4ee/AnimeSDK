#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB66E39D32BF42FF_3_GET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xB2CE510)
#define CLASS_1_CB66E39D32BF42FF_3_GET_DESC_OFFSET UNITYSDK_OFFSET(0xB2CE4F0)
#define CLASS_1_CB66E39D32BF42FF_3_SET_AMOUNT_OFFSET UNITYSDK_OFFSET(0xB2CE520)
#define CLASS_1_CB66E39D32BF42FF_3_SET_DESC_OFFSET UNITYSDK_OFFSET(0xB2CE500)
#define CLASS_1_CB66E39D32BF42FF_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB2CE530)

inline static constexpr unsigned int Class_1_CB66E39D32BF42FF_3_TypeDefinitionIndex = 79719;

class Class_1_CB66E39D32BF42FF_3 : public ::System::Object
{
public:
	::System::String* _Desc_k__BackingField; // 0x10
	::System::UInt32 _Amount_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3__CTOR_OFFSET))(this);
	}

	::System::String* get_Desc()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_GET_DESC_OFFSET))(this);
	}

	::System::Void set_Desc(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_SET_DESC_OFFSET))(this, a1);
	}

	::System::UInt32 get_Amount()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_GET_AMOUNT_OFFSET))(this);
	}

	::System::Void set_Amount(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_3_SET_AMOUNT_OFFSET))(this, a1);
	}
};
