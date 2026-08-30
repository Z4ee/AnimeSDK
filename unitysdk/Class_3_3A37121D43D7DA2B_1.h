#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/VolumeParameter_1.h"

#define CLASS_3_3A37121D43D7DA2B_1_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xBA93640)
#define CLASS_3_3A37121D43D7DA2B_1_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xBA93650)
#define CLASS_3_3A37121D43D7DA2B_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBA936B0)

inline static constexpr unsigned int Class_3_3A37121D43D7DA2B_1_TypeDefinitionIndex = 73912;

class Class_3_3A37121D43D7DA2B_1 : public ::RPG::Client::OpenWorld::VolumeParameter_1<::System::Single>
{
public:
	::System::Single ENMIPOPKOOL; // 0x18

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
