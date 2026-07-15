#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F05791F6CE56A9B4.h"

#define CLASS_3_18AF1B0621DC22B7_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A8FB2A0)
#define CLASS_3_18AF1B0621DC22B7__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8FB300)

inline static constexpr unsigned int Class_3_18AF1B0621DC22B7_TypeDefinitionIndex = 40936;

class Class_3_18AF1B0621DC22B7 : public ::Class_2_F05791F6CE56A9B4
{
public:
	::System::Boolean Field_3_0; // 0x400
	::System::Boolean Field_3_1; // 0x401
	::System::Boolean Field_3_2; // 0x402
	::System::Int32 Field_3_3; // 0x404

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18AF1B0621DC22B7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18AF1B0621DC22B7_CLEAR_OFFSET))(this);
	}
};
