#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2AtomicInt.h"
#include "unitysdk/System/Object.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C77C320)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2SolverBlock_TypeDefinitionIndex = 36089;

	class B2SolverBlock : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2AtomicInt syncIndex; // 0x10
		::System::Int16 count; // 0x14
		::System::Int16 blockType; // 0x16
		::System::Int32 startIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2SOLVERBLOCK__CTOR_OFFSET))(this);
		}
	};
}
