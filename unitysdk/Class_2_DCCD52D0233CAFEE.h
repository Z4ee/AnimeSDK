#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"

#define CLASS_2_DCCD52D0233CAFEE_METHOD_2_4867D67F27947ACE_OFFSET UNITYSDK_OFFSET(0x18057990)
#define CLASS_2_DCCD52D0233CAFEE_METHOD_2_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0x18057B20)
#define CLASS_2_DCCD52D0233CAFEE__CTOR_OFFSET UNITYSDK_OFFSET(0x18057980)

inline static constexpr unsigned int Class_2_DCCD52D0233CAFEE_TypeDefinitionIndex = 38468;

class Class_2_DCCD52D0233CAFEE : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Single Field_2_1; // 0x18
	::System::Single Field_2_0; // 0x1C

	::System::Void _ctor(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DCCD52D0233CAFEE__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_4867D67F27947ACE(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DCCD52D0233CAFEE_METHOD_2_4867D67F27947ACE_OFFSET))(this, a1);
	}

	::System::Void Method_2_793FFA9A76FE6840(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_DCCD52D0233CAFEE_METHOD_2_793FFA9A76FE6840_OFFSET))(this, P0);
	}
};
