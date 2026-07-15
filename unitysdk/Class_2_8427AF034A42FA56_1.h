#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/PhysicsCollider2DConfig.h"
#include "unitysdk/RPG/MVector2.h"

#define CLASS_2_8427AF034A42FA56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18D58810)

inline static constexpr unsigned int Class_2_8427AF034A42FA56_1_TypeDefinitionIndex = 35020;

class Class_2_8427AF034A42FA56_1 : public ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig
{
public:
	::System::Single Field_2_0; // 0x28
	::System::Single Field_2_1; // 0x2C
	::System::Single Field_2_2; // 0x30
	::RPG::MVector2 Field_2_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8427AF034A42FA56_1__CTOR_OFFSET))(this);
	}
};
