#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleSwallow; }

#define CLASS_2_D5B46C5909D3FB52_METHOD_2_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x1C915F20)
#define CLASS_2_D5B46C5909D3FB52__CTOR_OFFSET UNITYSDK_OFFSET(0x1C901AF0)

inline static constexpr unsigned int Class_2_D5B46C5909D3FB52_TypeDefinitionIndex = 43121;

class Class_2_D5B46C5909D3FB52 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleSwallow* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleSwallow* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSwallow*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_D5B46C5909D3FB52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0B1EB5C9B94BAB66()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D5B46C5909D3FB52_METHOD_2_0B1EB5C9B94BAB66_OFFSET))(this);
	}
};
