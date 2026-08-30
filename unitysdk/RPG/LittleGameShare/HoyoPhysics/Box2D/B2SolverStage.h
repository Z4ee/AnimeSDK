#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArraySegment_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicInt.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2SolverStageType.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D { class B2SolverBlock; }

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C77FE50)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SolverStage_TypeDefinitionIndex = 36093;

	class B2SolverStage : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverBlock*> blocks; // 0x10
		::System::Int32 blockCount; // 0x20
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt completionCount; // 0x24
		::System::Int32 colorIndex; // 0x28
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2SolverStageType type; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERSTAGE__CTOR_OFFSET))(this);
		}
	};
}
