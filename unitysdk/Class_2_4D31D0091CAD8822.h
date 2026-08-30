#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B0665B42245E17DA.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"

#define CLASS_2_4D31D0091CAD8822_METHOD_2_18657127E098859B_OFFSET UNITYSDK_OFFSET(0xC004250)
#define CLASS_2_4D31D0091CAD8822__CTOR_OFFSET UNITYSDK_OFFSET(0xC0042B0)

inline static constexpr unsigned int Class_2_4D31D0091CAD8822_TypeDefinitionIndex = 64987;

class Class_2_4D31D0091CAD8822 : public ::Class_1_B0665B42245E17DA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D31D0091CAD8822__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_18657127E098859B(::System::UInt32 a1, ::Struct_2_0814C3CA012BD292 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_2_4D31D0091CAD8822_METHOD_2_18657127E098859B_OFFSET))(this, a1, a2);
	}
};
