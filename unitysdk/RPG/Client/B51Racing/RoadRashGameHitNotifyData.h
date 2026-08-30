#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/RoadRashGameHitSource.h"
#include "unitysdk/RPG/Client/B51Racing/RoadRashGameHitTargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_B51RACING_ROADRASHGAMEHITNOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19EFF870)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int RoadRashGameHitNotifyData_TypeDefinitionIndex = 80352;

	class RoadRashGameHitNotifyData : public ::System::Object
	{
	public:
		::System::Int32 SourceEntityId; // 0x10
		::System::Int32 TargetEntityId; // 0x14
		::RPG::Client::B51Racing::RoadRashGameHitSource HitSource; // 0x18
		::RPG::Client::B51Racing::RoadRashGameHitTargetType TargetType; // 0x1C
		::UnityEngine::Vector3 HitPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_ROADRASHGAMEHITNOTIFYDATA__CTOR_OFFSET))(this);
		}
	};
}
