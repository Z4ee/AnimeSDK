#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_181_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10B6CEC0)
#define CLASS_1_43BD383C98B4C0C5_181__CTOR_OFFSET UNITYSDK_OFFSET(0x10B6CF00)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_181_TypeDefinitionIndex = 64238;

class Class_1_43BD383C98B4C0C5_181 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_181__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_181_DISPOSE_OFFSET))(this);
	}
};
