#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDSIM_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1C2ECE40)
#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDSIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2ECE60)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2IslandSim_TypeDefinitionIndex = 36004;

	class B2IslandSim : public ::System::Object
	{
	public:
		::System::Int32 islandId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDSIM__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IslandSim* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::HoyoPhysics::Box2D::B2IslandSim*))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2ISLANDSIM_COPYFROM_OFFSET))(this, a1);
		}
	};
}
