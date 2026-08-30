#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B0665B42245E17DA.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"

#define CLASS_2_F0E8DC1CBDB0E004_METHOD_2_3B83A1BA89DA66FD_OFFSET UNITYSDK_OFFSET(0x1690AC90)
#define CLASS_2_F0E8DC1CBDB0E004__CTOR_OFFSET UNITYSDK_OFFSET(0x1690B490)

inline static constexpr unsigned int Class_2_F0E8DC1CBDB0E004_TypeDefinitionIndex = 64989;

class Class_2_F0E8DC1CBDB0E004 : public ::Class_1_B0665B42245E17DA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0E8DC1CBDB0E004__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_3B83A1BA89DA66FD(::System::UInt32 a1, ::Struct_2_0814C3CA012BD292 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_2_F0E8DC1CBDB0E004_METHOD_2_3B83A1BA89DA66FD_OFFSET))(this, a1, a2);
	}
};
