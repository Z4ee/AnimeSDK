#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A047D65884258648.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleByIsKiller; }

#define CLASS_3_D5D096A53BE7C210_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1CBA3040)
#define CLASS_3_D5D096A53BE7C210__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA3030)

inline static constexpr unsigned int Class_3_D5D096A53BE7C210_TypeDefinitionIndex = 43139;

class Class_3_D5D096A53BE7C210 : public ::Class_2_A047D65884258648
{
public:
	::System::Void _ctor(::RPG::GameCore::MarbleByIsKiller* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByIsKiller*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_3_D5D096A53BE7C210__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D5D096A53BE7C210_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}
};
