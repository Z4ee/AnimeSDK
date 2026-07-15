#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2JointId.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2JointEvent_TypeDefinitionIndex = 35148;

	struct alignas(8) B2JointEvent
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2JointId jointId; // 0x10
		::System::Object* userData; // 0x28
	};
}
