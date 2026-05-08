#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B1D2CC2F7CEF243;

#define CLASS_1_C0ABF7144C89152B_COMPARE_OFFSET UNITYSDK_OFFSET(0x10936C40)
#define CLASS_1_C0ABF7144C89152B__CTOR_OFFSET UNITYSDK_OFFSET(0x10936CC0)

inline static constexpr unsigned int Class_1_C0ABF7144C89152B_TypeDefinitionIndex = 68280;

class Class_1_C0ABF7144C89152B : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0ABF7144C89152B__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_7B1D2CC2F7CEF243* a1, ::Class_1_7B1D2CC2F7CEF243* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_7B1D2CC2F7CEF243*, ::Class_1_7B1D2CC2F7CEF243*))((::PBYTE)hIl2Cpp + CLASS_1_C0ABF7144C89152B_COMPARE_OFFSET))(this, a1, a2);
	}
};
