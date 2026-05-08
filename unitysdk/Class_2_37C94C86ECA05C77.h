#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_364.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_577.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_2_37C94C86ECA05C77_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17FCB4C0)
#define CLASS_2_37C94C86ECA05C77_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x17FCB4E0)
#define CLASS_2_37C94C86ECA05C77_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17FCB4D0)
#define CLASS_2_37C94C86ECA05C77__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCB4B0)

inline static constexpr unsigned int Class_2_37C94C86ECA05C77_TypeDefinitionIndex = 17403;

class Class_2_37C94C86ECA05C77 : public ::Class_1_5DA2E7556103D5A3_364
{
public:
	::System::String* Field_2_0; // 0xE0
	::System::Int32 Field_2_2; // 0xE8
	::System::Int32 Field_2_1; // 0xEC

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_577 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_577, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_37C94C86ECA05C77__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37C94C86ECA05C77_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37C94C86ECA05C77_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_37C94C86ECA05C77_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}
};
