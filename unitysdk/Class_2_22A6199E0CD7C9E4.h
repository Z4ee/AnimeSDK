#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/PhysicsCollider2DConfig.h"
#include "unitysdk/RPG/MVector2.h"

#define CLASS_2_22A6199E0CD7C9E4__CTOR_OFFSET UNITYSDK_OFFSET(0x190E3470)

inline static constexpr unsigned int Class_2_22A6199E0CD7C9E4_TypeDefinitionIndex = 35021;

class Class_2_22A6199E0CD7C9E4 : public ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig
{
public:
	::RPG::MVector2 Field_2_0; // 0x28
	::RPG::MVector2 Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A6199E0CD7C9E4__CTOR_OFFSET))(this);
	}
};
