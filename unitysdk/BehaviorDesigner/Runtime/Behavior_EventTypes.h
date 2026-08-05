#pragma once
#include "unitysdk/unitysdk.h"

namespace BehaviorDesigner::Runtime
{
	inline static constexpr unsigned int Behavior_EventTypes_TypeDefinitionIndex = 33849;

	enum class Behavior_EventTypes : ::System::Int32
	{
		OnCollisionEnter = 0,
		OnCollisionExit = 1,
		OnTriggerEnter = 2,
		OnTriggerExit = 3,
		OnCollisionEnter2D = 4,
		OnCollisionExit2D = 5,
		OnTriggerEnter2D = 6,
		OnTriggerExit2D = 7,
		OnControllerColliderHit = 8,
		OnLateUpdate = 9,
		OnFixedUpdate = 10,
		OnAnimatorIK = 11,
		None = 12,
	};
}
