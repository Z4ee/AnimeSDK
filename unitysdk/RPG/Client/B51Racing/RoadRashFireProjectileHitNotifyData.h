#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_B51RACING_ROADRASHFIREPROJECTILEHITNOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFF850)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int RoadRashFireProjectileHitNotifyData_TypeDefinitionIndex = 80348;

	class RoadRashFireProjectileHitNotifyData : public ::System::Object
	{
	public:
		::System::Int32 ProjectileEntityId; // 0x10
		::System::Int32 OwnerEntityId; // 0x14
		::System::Int32 TargetEntityId; // 0x18
		::System::Int32 HitEntityId; // 0x1C
		::UnityEngine::Vector3 HitPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_ROADRASHFIREPROJECTILEHITNOTIFYDATA__CTOR_OFFSET))(this);
		}
	};
}
