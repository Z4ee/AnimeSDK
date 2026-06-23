#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_14.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_252.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_84CEDCEF739506C1_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1AFCA5C0)
#define CLASS_2_84CEDCEF739506C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFCA5B0)

inline static constexpr unsigned int Class_2_84CEDCEF739506C1_TypeDefinitionIndex = 9581;

class Class_2_84CEDCEF739506C1 : public ::Class_1_D9FAA3DCCFE14DB8_14
{
public:
	::System::String* Field_2_0; // 0x68

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_252 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_252, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
