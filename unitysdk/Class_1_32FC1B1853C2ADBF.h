#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_45D4014055B29FC2.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_32FC1B1853C2ADBF__CTOR_OFFSET UNITYSDK_OFFSET(0xD32AE60)

inline static constexpr unsigned int Class_1_32FC1B1853C2ADBF_TypeDefinitionIndex = 72557;

class Class_1_32FC1B1853C2ADBF : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::Enum_3_45D4014055B29FC2 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32FC1B1853C2ADBF__CTOR_OFFSET))(this);
	}
};
