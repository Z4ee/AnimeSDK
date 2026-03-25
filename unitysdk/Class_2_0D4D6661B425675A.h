#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6E873A741C966EEF.h"

class Class_1_DBCFFD8B921CBC69;
class Class_2_099B78418029B3B1_1;
class Class_4_25476C0ECCF1BB17;

#define CLASS_2_0D4D6661B425675A_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x166CE680)
#define CLASS_2_0D4D6661B425675A_METHOD_2_18B8B3C7AE5E95BB_OFFSET UNITYSDK_OFFSET(0x166CE530)
#define CLASS_2_0D4D6661B425675A__CTOR_OFFSET UNITYSDK_OFFSET(0x166CE510)

inline static constexpr unsigned int Class_2_0D4D6661B425675A_TypeDefinitionIndex = 28576;

class Class_2_0D4D6661B425675A : public ::Class_1_6E873A741C966EEF
{
public:
	::Class_4_25476C0ECCF1BB17* Field_2_0; // 0x28

	::System::Void _ctor(::Class_4_25476C0ECCF1BB17* a1, ::Class_2_099B78418029B3B1_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_25476C0ECCF1BB17*, ::Class_2_099B78418029B3B1_1*))((::PBYTE)hIl2Cpp + CLASS_2_0D4D6661B425675A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18B8B3C7AE5E95BB(::Class_1_DBCFFD8B921CBC69* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DBCFFD8B921CBC69*))((::PBYTE)hIl2Cpp + CLASS_2_0D4D6661B425675A_METHOD_2_18B8B3C7AE5E95BB_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0D4D6661B425675A_INITIALIZE_OFFSET))(this);
	}
};
