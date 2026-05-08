#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_276321B6B122C69C.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigTargetValue; }

#define STRUCT_2_500C8EEF6923C429_METHOD_2_02A3D10A9D535169_1_OFFSET UNITYSDK_OFFSET(0x3ABCC0)
#define STRUCT_2_500C8EEF6923C429_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x2EF960)
#define STRUCT_2_500C8EEF6923C429_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x75A830)
#define STRUCT_2_500C8EEF6923C429_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x75A7E0)

inline static constexpr unsigned int Struct_2_500C8EEF6923C429_TypeDefinitionIndex = 79601;

struct alignas(8) Struct_2_500C8EEF6923C429
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Double Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x28
	::System::Boolean Field_2_5; // 0x2C
	::MoleMole::Config::ConfigTargetValue* Field_2_6; // 0x30
	::Struct_2_276321B6B122C69C Field_2_7; // 0x38

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_276321B6B122C69C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_276321B6B122C69C))((::PBYTE)hIl2Cpp + STRUCT_2_500C8EEF6923C429_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::Struct_2_276321B6B122C69C Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_276321B6B122C69C(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_500C8EEF6923C429_METHOD_2_71E25A039EF7FB83_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_500C8EEF6923C429_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}

	::System::UInt32 Method_2_02A3D10A9D535169_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_500C8EEF6923C429_METHOD_2_02A3D10A9D535169_1_OFFSET))(this);
	}
};
