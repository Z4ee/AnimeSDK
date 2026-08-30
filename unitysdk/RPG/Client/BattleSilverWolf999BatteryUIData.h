#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_BATTLESILVERWOLF999BATTERYUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC939880)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSilverWolf999BatteryUIData_TypeDefinitionIndex = 71425;

	class BattleSilverWolf999BatteryUIData : public ::System::Object
	{
	public:
		::System::UInt32 MaxCount; // 0x10
		::System::UInt32 CurCount; // 0x14
		::System::Boolean IsShow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLESILVERWOLF999BATTERYUIDATA__CTOR_OFFSET))(this);
		}
	};
}
