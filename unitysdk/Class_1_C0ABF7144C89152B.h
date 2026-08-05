#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C7AC4A09F839C0D1;

#define CLASS_1_C0ABF7144C89152B_COMPARE_OFFSET UNITYSDK_OFFSET(0xE9741B0)
#define CLASS_1_C0ABF7144C89152B__CTOR_OFFSET UNITYSDK_OFFSET(0xE974230)

inline static constexpr unsigned int Class_1_C0ABF7144C89152B_TypeDefinitionIndex = 63672;

class Class_1_C0ABF7144C89152B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0ABF7144C89152B__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_C7AC4A09F839C0D1* a1, ::Class_1_C7AC4A09F839C0D1* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_C7AC4A09F839C0D1*, ::Class_1_C7AC4A09F839C0D1*))((::PBYTE)hIl2Cpp + CLASS_1_C0ABF7144C89152B_COMPARE_OFFSET))(this, a1, a2);
	}
};
