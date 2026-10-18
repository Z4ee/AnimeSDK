#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleDisableGhostFire; }

#define CLASS_2_8E8A790FD7D62C44_METHOD_2_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1CA13E20)
#define CLASS_2_8E8A790FD7D62C44__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA13E10)

inline static constexpr unsigned int Class_2_8E8A790FD7D62C44_TypeDefinitionIndex = 43119;

class Class_2_8E8A790FD7D62C44 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleDisableGhostFire* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleDisableGhostFire* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleDisableGhostFire*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_8E8A790FD7D62C44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E8A790FD7D62C44_METHOD_2_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
