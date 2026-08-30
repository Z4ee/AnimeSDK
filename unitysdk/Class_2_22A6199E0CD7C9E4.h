#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/PhysicsCollider2DConfig.h"
#include "unitysdk/RPG/MVector2.h"

#define CLASS_2_22A6199E0CD7C9E4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C190E10)

inline static constexpr unsigned int Class_2_22A6199E0CD7C9E4_TypeDefinitionIndex = 35882;

class Class_2_22A6199E0CD7C9E4 : public ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig
{
public:
	::RPG::MVector2 BOHPLLMNCHE; // 0x28
	::RPG::MVector2 FJIOOLKFJPL; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22A6199E0CD7C9E4__CTOR_OFFSET))(this);
	}
};
