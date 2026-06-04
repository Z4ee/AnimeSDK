#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"

#define RVO_OBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2509C0)

namespace RVO
{
	inline static constexpr unsigned int Obstacle_TypeDefinitionIndex = 41850;

	class Obstacle : public ::System::Object
	{
	public:
		::RVO::Obstacle* next_; // 0x10
		::RVO::Obstacle* previous_; // 0x18
		::RVO::Vector2 point_; // 0x20
		::System::Int32 id_; // 0x28
		::System::Boolean convex_; // 0x2C
		::System::Single height_; // 0x30
		::RVO::Vector2 direction_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_OBSTACLE__CTOR_OFFSET))(this);
		}
	};
}
