#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_SCHEDULEMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0xC8A6660)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleMission_TypeDefinitionIndex = 61888;

	class ScheduleMission : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::RPG::Client::DateTimePro EndTimeDate; // 0x18
		::System::UInt64 EndTimeStamp; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULEMISSION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
