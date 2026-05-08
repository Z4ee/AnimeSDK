#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8354DFE8C19D5EAC.h"
#include "unitysdk/Class_2_32520919786CA466_Enum_3_F3E7F4420242B5D2.h"

class Class_1_CA393D2401CE0314;

#define CLASS_2_32520919786CA466_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1479B940)
#define CLASS_2_32520919786CA466_METHOD_2_F620574455A6433B_OFFSET UNITYSDK_OFFSET(0x1479B8F0)
#define CLASS_2_32520919786CA466__CTOR_OFFSET UNITYSDK_OFFSET(0x1479B9A0)

inline static constexpr unsigned int Class_2_32520919786CA466_TypeDefinitionIndex = 61771;

class Class_2_32520919786CA466 : public ::Class_1_8354DFE8C19D5EAC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_32520919786CA466__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_F620574455A6433B(::Class_1_CA393D2401CE0314* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CA393D2401CE0314*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_32520919786CA466_METHOD_2_F620574455A6433B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_32520919786CA466_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
