#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class MarbleRegisterGhostFire; }

#define CLASS_2_C421B8873C0F1B5D_METHOD_2_5605FB9C073CE2FB_OFFSET UNITYSDK_OFFSET(0x1C8DF110)
#define CLASS_2_C421B8873C0F1B5D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DF100)

inline static constexpr unsigned int Class_2_C421B8873C0F1B5D_TypeDefinitionIndex = 43118;

class Class_2_C421B8873C0F1B5D : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::MarbleRegisterGhostFire* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::MarbleRegisterGhostFire* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleRegisterGhostFire*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_C421B8873C0F1B5D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5605FB9C073CE2FB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C421B8873C0F1B5D_METHOD_2_5605FB9C073CE2FB_OFFSET))(this);
	}
};
