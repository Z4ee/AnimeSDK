#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_0007C788FCAA0AB9_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB72F90)
#define CLASS_2_0007C788FCAA0AB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB73010)

inline static constexpr unsigned int Class_2_0007C788FCAA0AB9_TypeDefinitionIndex = 43541;

class Class_2_0007C788FCAA0AB9 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::System::Single KIPAGNCANAJ; // 0x338
	::UnityEngine::Vector3 EBDGPICAGAC; // 0x33C
	::System::Boolean AOEBHLBJIOP; // 0x348
	::UnityEngine::Vector3 KEJAHHOADEC; // 0x34C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0007C788FCAA0AB9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0007C788FCAA0AB9_CLEAR_OFFSET))(this);
	}
};
