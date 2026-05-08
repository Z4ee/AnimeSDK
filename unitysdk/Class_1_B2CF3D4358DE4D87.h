#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_1361D861C639AF30_2;

#define CLASS_1_B2CF3D4358DE4D87_METHOD_1_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x16291110)
#define CLASS_1_B2CF3D4358DE4D87__CTOR_OFFSET UNITYSDK_OFFSET(0x16291100)

inline static constexpr unsigned int Class_1_B2CF3D4358DE4D87_TypeDefinitionIndex = 65447;

class Class_1_B2CF3D4358DE4D87 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2CF3D4358DE4D87__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4E22A18EF530BFA8(::Class_3_1361D861C639AF30_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1361D861C639AF30_2*))((::PBYTE)hIl2Cpp + CLASS_1_B2CF3D4358DE4D87_METHOD_1_4E22A18EF530BFA8_OFFSET))(this, a1);
	}
};
