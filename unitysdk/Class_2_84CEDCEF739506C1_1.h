#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_40.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_162.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_84CEDCEF739506C1_1_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x19E6B210)
#define CLASS_2_84CEDCEF739506C1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19E6B200)

inline static constexpr unsigned int Class_2_84CEDCEF739506C1_1_TypeDefinitionIndex = 15797;

class Class_2_84CEDCEF739506C1_1 : public ::Class_1_5DA2E7556103D5A3_40
{
public:
	::System::String* Field_2_0; // 0x70

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_162 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_162, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_1_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
