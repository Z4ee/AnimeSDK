#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A200C09FD729958A.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define CLASS_3_247304E2CCD08001_METHOD_3_0D7638DBC93E5002_OFFSET UNITYSDK_OFFSET(0x16C76350)
#define CLASS_3_247304E2CCD08001_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x16C762F0)
#define CLASS_3_247304E2CCD08001__CTOR_OFFSET UNITYSDK_OFFSET(0x16C76650)

inline static constexpr unsigned int Class_3_247304E2CCD08001_TypeDefinitionIndex = 46625;

class Class_3_247304E2CCD08001 : public ::Class_2_A200C09FD729958A
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_247304E2CCD08001__CTOR_OFFSET))(this);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CLASS_3_247304E2CCD08001_ONGRAPHSTOP_OFFSET))(this, a1);
	}

	::System::Void Method_3_0D7638DBC93E5002()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_247304E2CCD08001_METHOD_3_0D7638DBC93E5002_OFFSET))(this);
	}
};
