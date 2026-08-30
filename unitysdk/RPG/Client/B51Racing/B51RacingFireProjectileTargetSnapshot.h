#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Transform; }

#define RPG_CLIENT_B51RACING_B51RACINGFIREPROJECTILETARGETSNAPSHOT_GET_ISFIRSTSTAGETARGET_OFFSET UNITYSDK_OFFSET(0x149CD0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingFireProjectileTargetSnapshot_TypeDefinitionIndex = 80347;

	struct alignas(8) B51RacingFireProjectileTargetSnapshot
	{
		::System::Int32 TargetEntityId; // 0x10
		::System::Int32 TargetIndex; // 0x14
		::UnityEngine::Transform* TargetTransform; // 0x18

		::System::Boolean get_IsFirstStageTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGFIREPROJECTILETARGETSNAPSHOT_GET_ISFIRSTSTAGETARGET_OFFSET))(this);
		}
	};
}
