#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C_1.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigTargetValue; }

#define STRUCT_2_500C8EEF6923C429_METHOD_2_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x32E550)
#define STRUCT_2_500C8EEF6923C429_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x453110)
#define STRUCT_2_500C8EEF6923C429_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x872340)
#define STRUCT_2_500C8EEF6923C429_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x8722F0)

inline static constexpr unsigned int Struct_2_500C8EEF6923C429_TypeDefinitionIndex = 51315;

struct alignas(8) Struct_2_500C8EEF6923C429
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_7; // 0x14
	::System::Single Field_2_6; // 0x18
	::System::Double Field_2_5; // 0x20
	::System::Single Field_2_4; // 0x28
	::System::Boolean Field_2_11; // 0x2C
	::MoleMole::Config::ConfigTargetValue* Field_2_10; // 0x30
	::Struct_2_276321B6B122C69C_1 Field_2_9; // 0x38

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_500C8EEF6923C429_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_276321B6B122C69C_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C_1))((::PBYTE)hIl2Cpp + STRUCT_2_500C8EEF6923C429_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_500C8EEF6923C429_METHOD_2_02A3D10A9D535169_1_OFFSET))(this);
	}

	::Struct_2_276321B6B122C69C_1 Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_276321B6B122C69C_1(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_500C8EEF6923C429_METHOD_2_71E25A039EF7FB83_OFFSET))(this);
	}
};
