#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/PhysicsCollider2DConfig.h"
#include "unitysdk/RPG/MVector2.h"

#define CLASS_2_8427AF034A42FA56_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5976D0)

inline static constexpr unsigned int Class_2_8427AF034A42FA56_1_TypeDefinitionIndex = 35881;

class Class_2_8427AF034A42FA56_1 : public ::RPG::LittleGameShare::HoyoPhysics::PhysicsCollider2DConfig
{
public:
	::RPG::MVector2 BHCMCMADHBF; // 0x28
	::System::Single NKPKPNKBBAP; // 0x30
	::System::Single HBAMPJPOOLM; // 0x34
	::System::Single CONJAMJKHBI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8427AF034A42FA56_1__CTOR_OFFSET))(this);
	}
};
