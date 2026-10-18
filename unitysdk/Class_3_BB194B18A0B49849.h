#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByHadKillThisAction; }

#define CLASS_3_BB194B18A0B49849_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1C92A9E0)
#define CLASS_3_BB194B18A0B49849__CTOR_OFFSET UNITYSDK_OFFSET(0x1C92A9D0)

inline static constexpr unsigned int Class_3_BB194B18A0B49849_TypeDefinitionIndex = 43144;

class Class_3_BB194B18A0B49849 : public ::Class_2_A047D65884258648
{
public:
	::System::Void _ctor(::RPG::GameCore::MarbleByHadKillThisAction* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByHadKillThisAction*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_BB194B18A0B49849__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB194B18A0B49849_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}
};
