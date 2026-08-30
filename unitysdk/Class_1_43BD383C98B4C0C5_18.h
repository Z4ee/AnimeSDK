#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_18_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1AAF9310)
#define CLASS_1_43BD383C98B4C0C5_18__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF9350)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_18_TypeDefinitionIndex = 35783;

class Class_1_43BD383C98B4C0C5_18 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_18__CTOR_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_18_INITIALIZE_OFFSET))(this);
	}
};
