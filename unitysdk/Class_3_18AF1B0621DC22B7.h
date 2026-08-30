#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F05791F6CE56A9B4.h"

#define CLASS_3_18AF1B0621DC22B7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4B2190)
#define CLASS_3_18AF1B0621DC22B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B21F0)

inline static constexpr unsigned int Class_3_18AF1B0621DC22B7_TypeDefinitionIndex = 41895;

class Class_3_18AF1B0621DC22B7 : public ::Class_2_F05791F6CE56A9B4
{
public:
	::System::Int32 IGPBHPKILBB; // 0x400
	::System::Boolean PBLNMNPELHN; // 0x404
	::System::Boolean HAJKKJJKOFK; // 0x405
	::System::Boolean CODFDLLKPNJ; // 0x406

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18AF1B0621DC22B7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18AF1B0621DC22B7_CLEAR_OFFSET))(this);
	}
};
