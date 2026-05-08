#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F4299CC27263318B.h"

#define CLASS_2_6729AC3ED949BE6A_1_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x15AE7550)
#define CLASS_2_6729AC3ED949BE6A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE7590)

inline static constexpr unsigned int Class_2_6729AC3ED949BE6A_1_TypeDefinitionIndex = 79847;

class Class_2_6729AC3ED949BE6A_1 : public ::Class_1_F4299CC27263318B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6729AC3ED949BE6A_1__CTOR_OFFSET))(this);
	}

	::System::Void OnCreateProperty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6729AC3ED949BE6A_1_ONCREATEPROPERTY_OFFSET))(this);
	}
};
