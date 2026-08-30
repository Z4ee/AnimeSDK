#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointEvent.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x8EB60)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointEvents_TypeDefinitionIndex = 36010;

	struct alignas(8) B2JointEvents
	{
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEvent>* jointEvents; // 0x10
		::System::Int32 count; // 0x18

		::System::Void _ctor(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEvent>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointEvent>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2JOINTEVENTS__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
