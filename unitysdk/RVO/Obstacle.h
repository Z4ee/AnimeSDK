#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"

#define RVO_OBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B640460)

namespace RVO
{
	inline static constexpr unsigned int Obstacle_TypeDefinitionIndex = 36459;

	class Obstacle : public ::System::Object
	{
	public:
		::RVO::Obstacle* next_; // 0x10
		::RVO::Obstacle* previous_; // 0x18
		::System::Int32 id_; // 0x20
		::RVO::Vector2 point_; // 0x24
		::RVO::Vector2 direction_; // 0x2C
		::System::Boolean convex_; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_OBSTACLE__CTOR_OFFSET))(this);
		}
	};
}
