#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Enum_3_3C4FECE406CE29EE.h"

#define CLASS_2_80421ACEF4B24249_3_METHOD_2_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1CDA7AB0)
#define CLASS_2_80421ACEF4B24249_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDA7AA0)

inline static constexpr unsigned int Class_2_80421ACEF4B24249_3_TypeDefinitionIndex = 89733;

class Class_2_80421ACEF4B24249_3 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::UInt32 Field_2_0; // 0x20
	::System::UInt32 Field_2_2; // 0x24
	::System::Int32 Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80421ACEF4B24249_3__CTOR_OFFSET))(this);
	}

	::Enum_3_3C4FECE406CE29EE Method_2_A96DCA30C6927810()
	{
		return ((::Enum_3_3C4FECE406CE29EE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_80421ACEF4B24249_3_METHOD_2_A96DCA30C6927810_OFFSET))(this);
	}
};
