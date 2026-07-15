#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArenaEntry_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2ArraySegment_1.h"
#include "unitysdk/RPG/LittleGameShare/HoyoPhysics/Box2D/B2Array_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2ArenaAllocatorTyped_1_TypeDefinitionIndex = 35027;

	template <typename T>
	class B2ArenaAllocatorTyped_1 : public ::System::Object
	{
	public:
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArraySegment_1<T> data; // 0x0
		::System::Int32 _capacity_k__BackingField; // 0x0
		::System::Int32 _index_k__BackingField; // 0x0
		::System::Int32 _allocation_k__BackingField; // 0x0
		::System::Int32 _maxAllocation_k__BackingField; // 0x0
		::RPG::LittleGameShare::HoyoPhysics::Box2D::B2Array_1<::RPG::LittleGameShare::HoyoPhysics::Box2D::B2ArenaEntry_1<T>> entries; // 0x0
	};
}
