#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_0007C788FCAA0AB9_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BF84900)
#define CLASS_2_0007C788FCAA0AB9__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF84980)

inline static constexpr unsigned int Class_2_0007C788FCAA0AB9_TypeDefinitionIndex = 41899;

class Class_2_0007C788FCAA0AB9 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::UnityEngine::Vector3 KEJAHHOADEC; // 0x338
	::System::Single KIPAGNCANAJ; // 0x344
	::System::Boolean AOEBHLBJIOP; // 0x348
	::UnityEngine::Vector3 EBDGPICAGAC; // 0x34C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0007C788FCAA0AB9__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0007C788FCAA0AB9_CLEAR_OFFSET))(this);
	}
};
