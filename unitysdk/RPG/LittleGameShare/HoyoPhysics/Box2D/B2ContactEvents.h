#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactBeginTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactEndTouchEvent.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ContactHitEvent.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ContactEvents_TypeDefinitionIndex = 35077;

	struct alignas(8) B2ContactEvents
	{
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactBeginTouchEvent>* beginEvents; // 0x10
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactEndTouchEvent>* endEvents; // 0x18
		::Il2CppArray<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ContactHitEvent>* hitEvents; // 0x20
		::System::Int32 beginCount; // 0x28
		::System::Int32 endCount; // 0x2C
		::System::Int32 hitCount; // 0x30
	};
}
