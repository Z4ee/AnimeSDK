#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E1F310662A79BD4B.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_32FC1B1853C2ADBF__CTOR_OFFSET UNITYSDK_OFFSET(0x114AA5E0)

inline static constexpr unsigned int Class_1_32FC1B1853C2ADBF_TypeDefinitionIndex = 63259;

class Class_1_32FC1B1853C2ADBF : public ::System::Object
{
public:
	::Enum_3_E1F310662A79BD4B Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_32FC1B1853C2ADBF__CTOR_OFFSET))(this);
	}
};
