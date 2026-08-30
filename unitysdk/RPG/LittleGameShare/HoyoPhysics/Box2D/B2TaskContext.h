#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BitSet.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SensorHit.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C789580)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TaskContext_TypeDefinitionIndex = 36104;

	class B2TaskContext : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet contactStateBitSet; // 0x10
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet awakeIslandBitSet; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet enlargedSimBitSet; // 0x30
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SensorHit> sensorHits; // 0x40
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BitSet jointStateBitSet; // 0x50
		::System::Single splitSleepTime; // 0x60
		::System::Int32 splitIslandId; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2TASKCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
