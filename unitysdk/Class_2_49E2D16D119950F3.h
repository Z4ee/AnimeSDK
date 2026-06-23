#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5DA2E7556103D5A3_400.h"
#include "unitysdk/Struct_2_53EC6FFE9325B737_23.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_49E2D16D119950F3_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x1A0B9410)
#define CLASS_2_49E2D16D119950F3_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1A0B9400)
#define CLASS_2_49E2D16D119950F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B93E0)

inline static constexpr unsigned int Class_2_49E2D16D119950F3_TypeDefinitionIndex = 76667;

class Class_2_49E2D16D119950F3 : public ::Class_1_5DA2E7556103D5A3_400
{
public:
	::System::Int32 Field_2_0; // 0xA8

	::System::Void _ctor(::Struct_2_53EC6FFE9325B737_23 a1, ::System::Int32 a2, ::Class_0_16E4307DCC419505_7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_53EC6FFE9325B737_23, ::System::Int32, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_49E2D16D119950F3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49E2D16D119950F3_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_49E2D16D119950F3_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
