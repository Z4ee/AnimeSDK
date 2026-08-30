#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2Joint; }
namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2JointSim; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTPAIR__CTOR_OFFSET UNITYSDK_OFFSET(0x6B85C0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointPair_TypeDefinitionIndex = 36012;

	struct alignas(8) B2JointPair
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* joint; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* jointSim; // 0x18

		::System::Void _ctor(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint* a1, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Joint*, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTPAIR__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
