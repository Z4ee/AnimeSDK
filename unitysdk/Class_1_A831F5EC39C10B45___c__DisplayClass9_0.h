#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A831F5EC39C10B45;
class Class_2_0C58AD91B0F4D809;
namespace RPG::GameCore { class FourRotateVoxelPortalConfig; }

#define CLASS_1_A831F5EC39C10B45___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8BB52B0)
#define CLASS_1_A831F5EC39C10B45___C__DISPLAYCLASS9_0__INITIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x8BB7000)

inline static constexpr unsigned int Class_1_A831F5EC39C10B45___c__DisplayClass9_0_TypeDefinitionIndex = 62486;

class Class_1_A831F5EC39C10B45___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_A831F5EC39C10B45* __4__this; // 0x10
	::RPG::GameCore::FourRotateVoxelPortalConfig* config; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _Initialize_b__0(::Class_2_0C58AD91B0F4D809* entity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_1_A831F5EC39C10B45___C__DISPLAYCLASS9_0__INITIALIZE_B__0_OFFSET))(this, entity);
	}
};
