#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D4DDF404C3CCC18.h"

class Class_1_EBD9A77671154634;

#define CLASS_2_D89003D298E682EC_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA2E3EB0)
#define CLASS_2_D89003D298E682EC__CTOR_OFFSET UNITYSDK_OFFSET(0xA2E4100)
#define CLASS_2_D89003D298E682EC___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA2E4110)

inline static constexpr unsigned int Class_2_D89003D298E682EC_TypeDefinitionIndex = 60013;

class Class_2_D89003D298E682EC : public ::Class_1_6D4DDF404C3CCC18
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D89003D298E682EC__CTOR_OFFSET))(this);
	}

	::System::Void UpdateModifier(::Class_1_EBD9A77671154634* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_D89003D298E682EC_UPDATEMODIFIER_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_UpdateModifier(::Class_1_EBD9A77671154634* P0)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + CLASS_2_D89003D298E682EC___IFIXBASEPROXY_UPDATEMODIFIER_OFFSET))(this, P0);
	}
};
