#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_701;
class Class_0_16E4307DCC419505_705;
class Class_1_0F0193835D66FC2B;
class Class_1_E39756DED83F5D0A;

#define CLASS_1_908DC43761600F33_METHOD_1_C964735A19AEFFFF_OFFSET UNITYSDK_OFFSET(0x105A80B0)
#define CLASS_1_908DC43761600F33__CTOR_OFFSET UNITYSDK_OFFSET(0x105A7FE0)

inline static constexpr unsigned int Class_1_908DC43761600F33_TypeDefinitionIndex = 54645;

class Class_1_908DC43761600F33 : public ::System::Object
{
public:
	::Class_1_E39756DED83F5D0A* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_701* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_701*))((::PBYTE)hIl2Cpp + CLASS_1_908DC43761600F33__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_705* Method_1_C964735A19AEFFFF(::Class_1_0F0193835D66FC2B* a1)
	{
		return ((::Class_0_16E4307DCC419505_705*(*)(::PVOID, ::Class_1_0F0193835D66FC2B*))((::PBYTE)hIl2Cpp + CLASS_1_908DC43761600F33_METHOD_1_C964735A19AEFFFF_OFFSET))(this, a1);
	}
};
