#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_17_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18AAFCB0)
#define CLASS_1_43BD383C98B4C0C5_17__CTOR_OFFSET UNITYSDK_OFFSET(0x18AAFCF0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_17_TypeDefinitionIndex = 34540;

class Class_1_43BD383C98B4C0C5_17 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_17__CTOR_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_17_INITIALIZE_OFFSET))(this);
	}
};
