#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_CE8D04EDC9CEC94B.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_212;
class Class_0_16E4307DCC419505_375;
namespace System { class Action; }

#define STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x3C9D90)
#define STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x32EEE0)
#define STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C980E3C11729549B_OFFSET UNITYSDK_OFFSET(0x875B20)
#define STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_E6A35D4A4480F7CF_OFFSET UNITYSDK_OFFSET(0x875B80)
#define STRUCT_2_F0FCAFD40DAC2A75__CTOR_OFFSET UNITYSDK_OFFSET(0x875B10)

inline static constexpr unsigned int Struct_2_F0FCAFD40DAC2A75_TypeDefinitionIndex = 47010;

struct alignas(8) Struct_2_F0FCAFD40DAC2A75
{
	// static const ::System::Int32 Field_2_2 = 0x1; // 0x0
	::Struct_2_CE8D04EDC9CEC94B Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C980E3C11729549B(::Class_0_16E4307DCC419505_212* a1, ::Class_0_16E4307DCC419505_375*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_212*, ::Class_0_16E4307DCC419505_375*&))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C980E3C11729549B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean Method_2_E6A35D4A4480F7CF(::Class_0_16E4307DCC419505_375* a1, ::System::Action* a2, ::System::Action* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_375*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + STRUCT_2_F0FCAFD40DAC2A75_METHOD_2_E6A35D4A4480F7CF_OFFSET))(this, a1, a2, a3);
	}
};
