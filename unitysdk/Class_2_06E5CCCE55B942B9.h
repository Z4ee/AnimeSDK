#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_241.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_807.h"

class Class_0_16E4307DCC419505_10;
class Class_0_16E4307DCC419505_7;

#define CLASS_2_06E5CCCE55B942B9_METHOD_2_E7608912D660D01B_OFFSET UNITYSDK_OFFSET(0x1A498F30)
#define CLASS_2_06E5CCCE55B942B9__CTOR_OFFSET UNITYSDK_OFFSET(0x1A498F20)

inline static constexpr unsigned int Class_2_06E5CCCE55B942B9_TypeDefinitionIndex = 15888;

class Class_2_06E5CCCE55B942B9 : public ::Class_1_5DA2E7556103D5A3_241
{
public:
	::Class_0_16E4307DCC419505_10* Field_2_1; // 0x90
	::System::Boolean Field_2_0; // 0x98

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_807 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_807, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_06E5CCCE55B942B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E7608912D660D01B(::Class_0_16E4307DCC419505_10*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_10*&))((::PBYTE)hIl2Cpp + CLASS_2_06E5CCCE55B942B9_METHOD_2_E7608912D660D01B_OFFSET))(this, a1);
	}
};
