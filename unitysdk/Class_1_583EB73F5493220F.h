#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E87F7C93CB0CC57E;

#define CLASS_1_583EB73F5493220F_COMPARE_OFFSET UNITYSDK_OFFSET(0x188442B0)
#define CLASS_1_583EB73F5493220F__CTOR_OFFSET UNITYSDK_OFFSET(0x18844380)

inline static constexpr unsigned int Class_1_583EB73F5493220F_TypeDefinitionIndex = 60150;

class Class_1_583EB73F5493220F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_583EB73F5493220F__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_E87F7C93CB0CC57E* a1, ::Class_1_E87F7C93CB0CC57E* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_E87F7C93CB0CC57E*, ::Class_1_E87F7C93CB0CC57E*))((::PBYTE)hIl2Cpp + CLASS_1_583EB73F5493220F_COMPARE_OFFSET))(this, a1, a2);
	}
};
