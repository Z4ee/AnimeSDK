#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A;

#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9AC0B90)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_DATE_OFFSET UNITYSDK_OFFSET(0x9AC0C50)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9AC0C70)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x9AC0C90)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_DATE_OFFSET UNITYSDK_OFFSET(0x9AC0C60)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x9AC0C80)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x9AC0CA0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9AC0AD0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__INITPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9AC0B30)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitDailyPlayerData_TypeDefinitionIndex = 56615;

	class ActivityBenefitDailyPlayerData : public ::System::Object
	{
	public:
		::System::UInt32 _Date_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::UInt32 _Status_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_963E317C37FB5E9A* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__CTOR_OFFSET))(this, info);
		}

		static ::RPG::Client::ActivityBenefitDailyPlayerData* Create(::Class_1_963E317C37FB5E9A* info)
		{
			return ((::RPG::Client::ActivityBenefitDailyPlayerData*(*)(::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_CREATE_OFFSET))(info);
		}

		::System::Void _InitPlayerData(::Class_1_963E317C37FB5E9A* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__INITPLAYERDATA_OFFSET))(this, info);
		}

		::System::UInt32 get_Date()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_DATE_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_Status()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_STATUS_OFFSET))(this, value);
		}
	};
}
