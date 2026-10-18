#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_41E07A9DDAB7FC78.h"

class Class_1_E591DF54310AABF5_1;

#define CLASS_2_CEDFCDED6B6C3AC9_UPDATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x164686F0)
#define CLASS_2_CEDFCDED6B6C3AC9__CTOR_OFFSET UNITYSDK_OFFSET(0x16468970)

inline static constexpr unsigned int Class_2_CEDFCDED6B6C3AC9_TypeDefinitionIndex = 65186;

class Class_2_CEDFCDED6B6C3AC9 : public ::Class_1_41E07A9DDAB7FC78
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CEDFCDED6B6C3AC9__CTOR_OFFSET))(this);
	}

	::System::Void UpdateModifier(::Class_1_E591DF54310AABF5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E591DF54310AABF5_1*))((::PBYTE)hIl2Cpp + CLASS_2_CEDFCDED6B6C3AC9_UPDATEMODIFIER_OFFSET))(this, a1);
	}
};
