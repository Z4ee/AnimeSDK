#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_32.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_139.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_35EE3F274435ACD1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18521960)
#define CLASS_2_35EE3F274435ACD1__CTOR_OFFSET UNITYSDK_OFFSET(0x185218F0)

inline static constexpr unsigned int Class_2_35EE3F274435ACD1_TypeDefinitionIndex = 9245;

class Class_2_35EE3F274435ACD1 : public ::Class_1_5DA2E7556103D5A3_32
{
public:
	::System::Int32 Field_2_0; // 0xB8

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_139 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_139, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_35EE3F274435ACD1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_35EE3F274435ACD1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
