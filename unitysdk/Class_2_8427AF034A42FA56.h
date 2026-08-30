#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/PhysicsCollider2DConfig.h"
#include "unitysdk/RPG/MVector2.h"

#define CLASS_2_8427AF034A42FA56__CTOR_OFFSET UNITYSDK_OFFSET(0x1C116DC0)

inline static constexpr unsigned int Class_2_8427AF034A42FA56_TypeDefinitionIndex = 35880;

class Class_2_8427AF034A42FA56 : public ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig
{
public:
	::System::Single IDKONBFPBLH; // 0x28
	::RPG::MVector2 BHCMCMADHBF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8427AF034A42FA56__CTOR_OFFSET))(this);
	}
};
