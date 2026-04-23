#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_123_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AAF710)
#define CLASS_1_43BD383C98B4C0C5_123__CTOR_OFFSET UNITYSDK_OFFSET(0x11AAF700)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_123_TypeDefinitionIndex = 56550;

class Class_1_43BD383C98B4C0C5_123 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_123__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_123_DISPOSE_OFFSET))(this);
	}
};
