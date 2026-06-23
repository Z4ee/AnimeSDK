#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B7BC4AD84E3C2C80.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8B26C645B375B0C7__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD2C8D0)

inline static constexpr unsigned int Class_1_8B26C645B375B0C7_TypeDefinitionIndex = 88260;

class Class_1_8B26C645B375B0C7 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x14
	::Enum_3_B7BC4AD84E3C2C80 Field_1_0; // 0x18

	::System::Void _ctor(::Enum_3_B7BC4AD84E3C2C80 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_B7BC4AD84E3C2C80, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8B26C645B375B0C7__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
