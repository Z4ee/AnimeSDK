#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA60E9866DBA97E8;

#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8EEF380)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_DATE_OFFSET UNITYSDK_OFFSET(0x8EEF440)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x8EEF460)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x8EEF480)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_DATE_OFFSET UNITYSDK_OFFSET(0x8EEF450)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x8EEF470)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x8EEF490)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8EEF2C0)
#define RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__INITPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x8EEF320)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityBenefitDailyPlayerData_TypeDefinitionIndex = 49793;

	class ActivityBenefitDailyPlayerData : public ::System::Object
	{
	public:
		::System::UInt32 _Date_k__BackingField; // 0x10
		::System::UInt32 _Level_k__BackingField; // 0x14
		::System::UInt32 _Status_k__BackingField; // 0x18

		::System::Void _ctor(::Class_1_FA60E9866DBA97E8* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__CTOR_OFFSET))(this, info);
		}

		static ::RPG::Client::ActivityBenefitDailyPlayerData* Create(::Class_1_FA60E9866DBA97E8* info)
		{
			return ((::RPG::Client::ActivityBenefitDailyPlayerData*(*)(::Class_1_FA60E9866DBA97E8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA_CREATE_OFFSET))(info);
		}

		::System::Void _InitPlayerData(::Class_1_FA60E9866DBA97E8* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA60E9866DBA97E8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYBENEFITDAILYPLAYERDATA__INITPLAYERDATA_OFFSET))(this, info);
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
