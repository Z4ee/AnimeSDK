#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61_1.h"

#define CLASS_2_127DE01A95E3257C_1_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x16A410E0)
#define CLASS_2_127DE01A95E3257C_1_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x16A41070)
#define CLASS_2_127DE01A95E3257C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16A41060)

inline static constexpr unsigned int Class_2_127DE01A95E3257C_1_TypeDefinitionIndex = 32934;

class Class_2_127DE01A95E3257C_1 : public ::Class_1_5BE136E515AF9A61_1
{
public:
	::System::Single Field_2_0; // 0x18
	::System::Single Field_2_1; // 0x1C

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_127DE01A95E3257C_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_127DE01A95E3257C_1_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_127DE01A95E3257C_1_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
