#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleForceLaunchToTarget; }

#define CLASS_2_6E3DB2B23D343368_METHOD_2_A9F6594EA869CA9D_OFFSET UNITYSDK_OFFSET(0x1CA50410)
#define CLASS_2_6E3DB2B23D343368__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA50400)

inline static constexpr unsigned int Class_2_6E3DB2B23D343368_TypeDefinitionIndex = 43101;

class Class_2_6E3DB2B23D343368 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleForceLaunchToTarget* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleForceLaunchToTarget* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleForceLaunchToTarget*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_6E3DB2B23D343368__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A9F6594EA869CA9D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6E3DB2B23D343368_METHOD_2_A9F6594EA869CA9D_OFFSET))(this);
	}
};
