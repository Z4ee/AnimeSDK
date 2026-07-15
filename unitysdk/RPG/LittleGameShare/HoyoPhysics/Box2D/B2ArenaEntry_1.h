#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArraySegment_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ArenaEntry_1_TypeDefinitionIndex = 35029;

	template <typename T>
	struct B2ArenaEntry_1
	{
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<T> data; // 0x0
		::System::String* name; // 0x0
		::System::Int32 size; // 0x0
		::System::Boolean usedMalloc; // 0x0
	};
}
