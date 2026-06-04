#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_963E317C37FB5E9A;

#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xB0A1B70)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_DATE_OFFSET UNITYSDK_OFFSET(0xB0A1C30)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB0A1C50)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xB0A1C70)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_DATE_OFFSET UNITYSDK_OFFSET(0xB0A1C40)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xB0A1C60)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xB0A1C80)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xB0A1A90)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__INITPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xB0A1B00)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitDailyPlayerData_TypeDefinitionIndex = 57392;

	class ActivityBenefitDailyPlayerData : public ::System::Object
	{
	public:
		::System::UInt32 _Status_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::UInt32 _Date_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_963E317C37FB5E9A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::ActivityBenefitDailyPlayerData* Create(::Class_1_963E317C37FB5E9A* a1)
		{
			return ((::RPG::Client::ActivityBenefitDailyPlayerData*(*)(::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _InitPlayerData(::Class_1_963E317C37FB5E9A* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_963E317C37FB5E9A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__INITPLAYERDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_Date()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_DATE_OFFSET))(this);
		}

		::System::Void set_Date(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_DATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_Status()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_STATUS_OFFSET))(this, a1);
		}
	};
}
