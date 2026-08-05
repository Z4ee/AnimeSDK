#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B1D2CC2F7CEF243;

#define CLASS_1_C0ABF7144C89152B_2_COMPARE_OFFSET UNITYSDK_OFFSET(0x150BFBE0)
#define CLASS_1_C0ABF7144C89152B_2__CTOR_OFFSET UNITYSDK_OFFSET(0x150BFC60)

inline static constexpr unsigned int Class_1_C0ABF7144C89152B_2_TypeDefinitionIndex = 59786;

class Class_1_C0ABF7144C89152B_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0ABF7144C89152B_2__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::Class_1_7B1D2CC2F7CEF243* a1, ::Class_1_7B1D2CC2F7CEF243* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_7B1D2CC2F7CEF243*, ::Class_1_7B1D2CC2F7CEF243*))((::PBYTE)hIl2Cpp + CLASS_1_C0ABF7144C89152B_2_COMPARE_OFFSET))(this, a1, a2);
	}
};
