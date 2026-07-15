#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_139_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16071610)
#define CLASS_1_43BD383C98B4C0C5_139__CTOR_OFFSET UNITYSDK_OFFSET(0x16071600)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_139_TypeDefinitionIndex = 58587;

class Class_1_43BD383C98B4C0C5_139 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_139_DISPOSE_OFFSET))(this);
	}
};
