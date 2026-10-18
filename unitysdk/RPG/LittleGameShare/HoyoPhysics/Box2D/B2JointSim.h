#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointType.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointUnion.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Softness.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Transform.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C80C030)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1C80C1E0)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTSIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C83D990)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointSim_TypeDefinitionIndex = 36700;

	class B2JointSim : public ::System::Object
	{
	public:
		::System::Single invMassA; // 0x10
		::System::Single invMassB; // 0x14
		::System::Int32 bodyIdB; // 0x18
		::System::Int32 jointId; // 0x1C
		::System::Single constraintDampingRatio; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameA; // 0x24
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Transform localFrameB; // 0x34
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointUnion uj; // 0x44
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointType type; // 0xBC
		::System::Single invIA; // 0xC0
		::System::Int32 bodyIdA; // 0xC4
		::System::Single forceThreshold; // 0xC8
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Softness constraintSoftness; // 0xCC
		::System::Single constraintHertz; // 0xD8
		::System::Single torqueThreshold; // 0xDC
		::System::Single invIB; // 0xE0

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
