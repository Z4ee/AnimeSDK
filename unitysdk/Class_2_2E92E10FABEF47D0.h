#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleAbsorbTeammates; }

#define CLASS_2_2E92E10FABEF47D0_METHOD_2_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x1CBA7830)
#define CLASS_2_2E92E10FABEF47D0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA7820)

inline static constexpr unsigned int Class_2_2E92E10FABEF47D0_TypeDefinitionIndex = 43113;

class Class_2_2E92E10FABEF47D0 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleAbsorbTeammates* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleAbsorbTeammates* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleAbsorbTeammates*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_2E92E10FABEF47D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2E92E10FABEF47D0_METHOD_2_DFF98536D8B4074F_OFFSET))(this);
	}
};
