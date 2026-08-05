#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_77FA25EA049FAA4E;

#define CLASS_1_2A7ADB371EC0A4D0_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x145CA1B0)
#define CLASS_1_2A7ADB371EC0A4D0_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x145CA1A0)
#define CLASS_1_2A7ADB371EC0A4D0__CTOR_OFFSET UNITYSDK_OFFSET(0x145CA190)

inline static constexpr unsigned int Class_1_2A7ADB371EC0A4D0_TypeDefinitionIndex = 56113;

class Class_1_2A7ADB371EC0A4D0 : public ::System::Object
{
public:
	::Class_2_77FA25EA049FAA4E* Field_1_0; // 0x10
	::System::Int32 Field_1_7; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::Class_2_77FA25EA049FAA4E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_77FA25EA049FAA4E*))((::PBYTE)hIl2Cpp + CLASS_1_2A7ADB371EC0A4D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A7ADB371EC0A4D0_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2A7ADB371EC0A4D0_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}
};
