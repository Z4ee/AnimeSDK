#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyModule_ActivityRaidAlleyLogTargetInfo.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyModule_ActivityRaidAlleyLogExtraInfo_TypeDefinitionIndex = 59490;

	struct alignas(8) AlleyModule_ActivityRaidAlleyLogExtraInfo
	{
		::System::Boolean IsFinish; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::AlleyModule_ActivityRaidAlleyLogTargetInfo>* TargetInfoList; // 0x18
		::System::Int32 ReminderCount; // 0x20
		::System::UInt32 ActionCount; // 0x24
		::System::UInt32 BackCount; // 0x28
		::System::UInt32 ResetCount; // 0x2C
		::System::UInt32 BeginTimeStamp; // 0x30
		::System::UInt32 EndTimeStamp; // 0x34
	};
}
