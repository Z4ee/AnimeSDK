#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_120_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10386F70)
#define CLASS_1_43BD383C98B4C0C5_120__CTOR_OFFSET UNITYSDK_OFFSET(0x10386F60)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_120_TypeDefinitionIndex = 49728;

class Class_1_43BD383C98B4C0C5_120 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_120__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_120_DISPOSE_OFFSET))(this);
	}
};
