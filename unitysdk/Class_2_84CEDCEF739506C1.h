#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_1.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_6.h"

class Class_0_16E4307DCC419505_7;
namespace System { class String; }

#define CLASS_2_84CEDCEF739506C1_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1C358270)
#define CLASS_2_84CEDCEF739506C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C358260)

inline static constexpr unsigned int Class_2_84CEDCEF739506C1_TypeDefinitionIndex = 18166;

class Class_2_84CEDCEF739506C1 : public ::Class_1_D9FAA3DCCFE14DB8_1
{
public:
	::System::String* Field_2_0; // 0x60

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_6 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_6, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84CEDCEF739506C1_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
