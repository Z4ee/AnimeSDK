#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A48B3771FE1DF659;

#define CLASS_1_C0ABF7144C89152B_1_COMPARE_OFFSET UNITYSDK_OFFSET(0x112F9480)
#define CLASS_1_C0ABF7144C89152B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x112F9510)

inline static constexpr unsigned int Class_1_C0ABF7144C89152B_1_TypeDefinitionIndex = 78874;

class Class_1_C0ABF7144C89152B_1 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0ABF7144C89152B_1__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_A48B3771FE1DF659* a1, ::Class_1_A48B3771FE1DF659* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_A48B3771FE1DF659*, ::Class_1_A48B3771FE1DF659*))((::PBYTE)hIl2Cpp + CLASS_1_C0ABF7144C89152B_1_COMPARE_OFFSET))(this, a1, a2);
	}
};
