#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D9FAA3DCCFE14DB8_70.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_105.h"
#include "unitysdk/System/DateTime.h"

class Class_0_16E4307DCC419505_7;

#define CLASS_2_B19769B3B0092EA9_1_METHOD_2_F3FE4B1C21DCE6C1_OFFSET UNITYSDK_OFFSET(0x1AAF91D0)
#define CLASS_2_B19769B3B0092EA9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF91C0)

inline static constexpr unsigned int Class_2_B19769B3B0092EA9_1_TypeDefinitionIndex = 13179;

class Class_2_B19769B3B0092EA9_1 : public ::Class_1_D9FAA3DCCFE14DB8_70
{
public:
	::System::DateTime Field_2_0; // 0x50
	::System::DateTime Field_2_1; // 0x58

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_105 a1, ::Class_0_16E4307DCC419505_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_105, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_B19769B3B0092EA9_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F3FE4B1C21DCE6C1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B19769B3B0092EA9_1_METHOD_2_F3FE4B1C21DCE6C1_OFFSET))(this);
	}
};
