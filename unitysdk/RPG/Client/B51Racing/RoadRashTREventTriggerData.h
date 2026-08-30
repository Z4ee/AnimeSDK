#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_ROADRASHTREVENTTRIGGERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC8B2FB0)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int RoadRashTREventTriggerData_TypeDefinitionIndex = 80354;

	class RoadRashTREventTriggerData : public ::System::Object
	{
	public:
		::System::UInt32 EnemyID; // 0x10
		::System::UInt32 TrID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_ROADRASHTREVENTTRIGGERDATA__CTOR_OFFSET))(this);
		}
	};
}
