#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByCheckSealId; }

#define CLASS_3_DB6CE86E87AB98E5_METHOD_3_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x1CB620B0)
#define CLASS_3_DB6CE86E87AB98E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB62090)

inline static constexpr unsigned int Class_3_DB6CE86E87AB98E5_TypeDefinitionIndex = 43151;

class Class_3_DB6CE86E87AB98E5 : public ::Class_2_A047D65884258648
{
public:
	::RPG::GameCore::MarbleByCheckSealId* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::MarbleByCheckSealId* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByCheckSealId*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_DB6CE86E87AB98E5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DB6CE86E87AB98E5_METHOD_3_4DA6D4A624E42CAB_OFFSET))(this);
	}
};
