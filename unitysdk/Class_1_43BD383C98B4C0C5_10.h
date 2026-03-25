#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_10_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x16614550)
#define CLASS_1_43BD383C98B4C0C5_10__CTOR_OFFSET UNITYSDK_OFFSET(0x16613620)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_10_TypeDefinitionIndex = 28564;

class Class_1_43BD383C98B4C0C5_10 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_10__CTOR_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_10_INITIALIZE_OFFSET))(this);
	}
};
