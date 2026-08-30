#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RVO/Vector2.h"
#include "unitysdk/System/Object.h"

#define RVO_OBSTACLE__CTOR_OFFSET UNITYSDK_OFFSET(0x196898C0)

namespace RVO
{
	inline static constexpr unsigned int Obstacle_TypeDefinitionIndex = 44893;

	class Obstacle : public ::System::Object
	{
	public:
		::RVO::Obstacle* next_; // 0x10
		::RVO::Obstacle* previous_; // 0x18
		::RVO::Vector2 direction_; // 0x20
		::System::Boolean convex_; // 0x28
		::RVO::Vector2 point_; // 0x2C
		::System::Int32 id_; // 0x34
		::System::Single height_; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RVO_OBSTACLE__CTOR_OFFSET))(this);
		}
	};
}
