#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_1_CE48F09631493940;
class Class_2_465A9E6CC2B0EF21;
class Class_4_2E0A1A668714B3CC;

#define CLASS_4_2E0A1A668714B3CC___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C053540)
#define CLASS_4_2E0A1A668714B3CC___C__DISPLAYCLASS18_0__TRYSPAWNBRICKONSERVER_B__0_OFFSET UNITYSDK_OFFSET(0x1C065E40)

inline static constexpr unsigned int Class_4_2E0A1A668714B3CC___c__DisplayClass18_0_TypeDefinitionIndex = 36474;

class Class_4_2E0A1A668714B3CC___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_4_2E0A1A668714B3CC* __4__this; // 0x10
	::Class_1_CE48F09631493940* brickSpawner; // 0x18
	::Class_2_465A9E6CC2B0EF21* playerEntity; // 0x20
	::RPG::MVector2 spawnPosition; // 0x28
	::System::UInt32 spawnBrickTypeID; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void _TrySpawnBrickOnServer_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_2E0A1A668714B3CC___C__DISPLAYCLASS18_0__TRYSPAWNBRICKONSERVER_B__0_OFFSET))(this);
	}
};
