#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
namespace RPG::GameCore { class PetMarbleBuffText; }

#define CLASS_2_D014199D406C7B6F_METHOD_2_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x1C88EE70)
#define CLASS_2_D014199D406C7B6F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C88EE60)

inline static constexpr unsigned int Class_2_D014199D406C7B6F_TypeDefinitionIndex = 43105;

class Class_2_D014199D406C7B6F : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::RPG::GameCore::PetMarbleBuffText* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::RPG::GameCore::PetMarbleBuffText* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PetMarbleBuffText*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_D014199D406C7B6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D014199D406C7B6F_METHOD_2_37011B6DDBE4CF26_OFFSET))(this);
	}
};
