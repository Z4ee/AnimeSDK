#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C2BBEC0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1C2BC060)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2ED770)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointSim_TypeDefinitionIndex = 36013;

	class B2JointSim : public ::System::Object
	{
	public:
		::System::Single invMassB; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameA; // 0x14
		::System::Single constraintDampingRatio; // 0x24
		::System::Int32 bodyIdA; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointUnion uj; // 0x2C
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness constraintSoftness; // 0xA4
		::System::Single forceThreshold; // 0xB0
		::System::Single constraintHertz; // 0xB4
		::System::Single invIB; // 0xB8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameB; // 0xBC
		::System::Int32 bodyIdB; // 0xCC
		::System::Single invIA; // 0xD0
		::System::Int32 jointId; // 0xD4
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType type; // 0xD8
		::System::Single torqueThreshold; // 0xDC
		::System::Single invMassA; // 0xE0

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
