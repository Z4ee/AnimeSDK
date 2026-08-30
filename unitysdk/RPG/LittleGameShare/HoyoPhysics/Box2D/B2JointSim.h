#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_CLEAR_OFFSET UNITYSDK_OFFSET(0xC2DA9C0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0xC2DAB60)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM__CTOR_OFFSET UNITYSDK_OFFSET(0xC30C340)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointSim_TypeDefinitionIndex = 36013;

	class B2JointSim : public ::System::Object
	{
	public:
		::System::Single torqueThreshold; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameB; // 0x14
		::System::Single invIB; // 0x24
		::System::Int32 jointId; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameA; // 0x2C
		::System::Int32 bodyIdB; // 0x3C
		::System::Single constraintDampingRatio; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness constraintSoftness; // 0x44
		::System::Single invMassB; // 0x50
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType type; // 0x54
		::System::Single invIA; // 0x58
		::System::Int32 bodyIdA; // 0x5C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointUnion uj; // 0x60
		::System::Single invMassA; // 0xD8
		::System::Single forceThreshold; // 0xDC
		::System::Single constraintHertz; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_CLEAR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_COPYFROM_OFFSET))(this, a1);
		}
	};
}
