#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_3A37121D43D7DA2B_1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x12A4EF90)
#define CLASS_3_3A37121D43D7DA2B_1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x12A4EFA0)
#define CLASS_3_3A37121D43D7DA2B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4F000)

inline static constexpr unsigned int Class_3_3A37121D43D7DA2B_1_TypeDefinitionIndex = 68120;

class Class_3_3A37121D43D7DA2B_1 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Single>
{
public:
	::System::Single Field_3_0; // 0x18

	::System::Void _ctor(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3A37121D43D7DA2B_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single get_value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A37121D43D7DA2B_1_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_3A37121D43D7DA2B_1_SET_VALUE_OFFSET))(this, a1);
	}
};
