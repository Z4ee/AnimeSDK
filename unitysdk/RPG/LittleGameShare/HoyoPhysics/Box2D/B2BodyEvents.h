#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2BodyMoveEvent.h"
#include "unitysdk/System/ValueType.h"

#define RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYEVENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x6E35A0)

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2BodyEvents_TypeDefinitionIndex = 35045;

	struct alignas(8) B2BodyEvents
	{
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyMoveEvent>* moveEvents; // 0x10
		::System::Int32 moveCount; // 0x18

		::System::Void _ctor(::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyMoveEvent>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2BodyMoveEvent>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_LITTLEGAMESHARE_HOYOPHYSICS_BOX2D_B2BODYEVENTS__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
