#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_0007C788FCAA0AB9_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B250200)
#define CLASS_2_0007C788FCAA0AB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1B250280)

inline static constexpr unsigned int Class_2_0007C788FCAA0AB9_TypeDefinitionIndex = 40940;

class Class_2_0007C788FCAA0AB9 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x338
	::System::Single Field_2_1; // 0x344
	::UnityEngine::Vector3 Field_2_2; // 0x348
	::System::Boolean Field_2_3; // 0x354

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0007C788FCAA0AB9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0007C788FCAA0AB9_CLEAR_OFFSET))(this);
	}
};
