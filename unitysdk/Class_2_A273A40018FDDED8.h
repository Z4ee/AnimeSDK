#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B0665B42245E17DA.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"

#define CLASS_2_A273A40018FDDED8_METHOD_2_FB3B3BCA5BA8E52A_OFFSET UNITYSDK_OFFSET(0x17F90780)
#define CLASS_2_A273A40018FDDED8__CTOR_OFFSET UNITYSDK_OFFSET(0x17F908E0)

inline static constexpr unsigned int Class_2_A273A40018FDDED8_TypeDefinitionIndex = 64990;

class Class_2_A273A40018FDDED8 : public ::Class_1_B0665B42245E17DA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A273A40018FDDED8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_FB3B3BCA5BA8E52A(::System::UInt32 a1, ::Struct_2_0814C3CA012BD292 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_2_A273A40018FDDED8_METHOD_2_FB3B3BCA5BA8E52A_OFFSET))(this, a1, a2);
	}
};
