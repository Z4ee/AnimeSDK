#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C4E7E2BF73A43E03_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x164142A0)
#define CLASS_1_C4E7E2BF73A43E03_GET_REASON_OFFSET UNITYSDK_OFFSET(0x16414280)
#define CLASS_1_C4E7E2BF73A43E03_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x164142B0)
#define CLASS_1_C4E7E2BF73A43E03_SET_REASON_OFFSET UNITYSDK_OFFSET(0x16414290)
#define CLASS_1_C4E7E2BF73A43E03__CTOR_OFFSET UNITYSDK_OFFSET(0x164142C0)

inline static constexpr unsigned int Class_1_C4E7E2BF73A43E03_TypeDefinitionIndex = 73891;

class Class_1_C4E7E2BF73A43E03 : public ::System::Object
{
public:
	::System::String* _Reason_k__BackingField; // 0x10
	::System::Int64 _Count_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E7E2BF73A43E03__CTOR_OFFSET))(this);
	}

	::System::String* get_Reason()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E7E2BF73A43E03_GET_REASON_OFFSET))(this);
	}

	::System::Void set_Reason(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4E7E2BF73A43E03_SET_REASON_OFFSET))(this, a1);
	}

	::System::Int64 get_Count()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E7E2BF73A43E03_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_C4E7E2BF73A43E03_SET_COUNT_OFFSET))(this, a1);
	}
};
