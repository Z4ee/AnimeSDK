#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_5.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_16.h"

class Class_0_16E4307DCC419505_13;
class Class_0_16E4307DCC419505_14;

#define CLASS_2_06E5CCCE55B942B9_METHOD_2_E7608912D660D01B_OFFSET UNITYSDK_OFFSET(0x18A65290)
#define CLASS_2_06E5CCCE55B942B9__CTOR_OFFSET UNITYSDK_OFFSET(0x18A65280)

inline static constexpr unsigned int Class_2_06E5CCCE55B942B9_TypeDefinitionIndex = 9728;

class Class_2_06E5CCCE55B942B9 : public ::Class_1_5DA2E7556103D5A3_5
{
public:
	::Class_0_16E4307DCC419505_14* Field_2_1; // 0x90
	::System::Boolean Field_2_0; // 0x98

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_16 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_16, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_06E5CCCE55B942B9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E7608912D660D01B(::Class_0_16E4307DCC419505_14*& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_14*&))((::PBYTE)hIl2Cpp + CLASS_2_06E5CCCE55B942B9_METHOD_2_E7608912D660D01B_OFFSET))(this, a1);
	}
};
