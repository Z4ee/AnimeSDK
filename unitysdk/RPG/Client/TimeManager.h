#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CLIENT_TIMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2DBCF0)
#define RPG_CLIENT_TIMEMANAGER_GETNEXTDAILYUPDATETIME_OFFSET UNITYSDK_OFFSET(0xB2DB410)
#define RPG_CLIENT_TIMEMANAGER_GETNEXTMONDAYDAILYUPDATETIME_OFFSET UNITYSDK_OFFSET(0xB2DB7C0)
#define RPG_CLIENT_TIMEMANAGER_GET_DAYTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0xB2DB950)
#define RPG_CLIENT_TIMEMANAGER_GET_GAMELAUNCHTIME_OFFSET UNITYSDK_OFFSET(0xB2DB960)
#define RPG_CLIENT_TIMEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xB2DBD30)
#define RPG_CLIENT_TIMEMANAGER_GET_NEXTDAILYUPDATETIME_OFFSET UNITYSDK_OFFSET(0xB2DB370)
#define RPG_CLIENT_TIMEMANAGER_GET_NOWDATETIME_OFFSET UNITYSDK_OFFSET(0xB2DAE60)
#define RPG_CLIENT_TIMEMANAGER_GET_NOWMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB2DB230)
#define RPG_CLIENT_TIMEMANAGER_GET_NOWTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB2DB310)
#define RPG_CLIENT_TIMEMANAGER_GET_SERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0xB2DB940)
#define RPG_CLIENT_TIMEMANAGER_HASTIMESTAMPREACHED_OFFSET UNITYSDK_OFFSET(0xB2DB1D0)
#define RPG_CLIENT_TIMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xB2DBA70)
#define RPG_CLIENT_TIMEMANAGER_ISINSAMEDAILYUPDATEPERIOD_OFFSET UNITYSDK_OFFSET(0xB2DAED0)
#define RPG_CLIENT_TIMEMANAGER_SETDAYTIMEOFFSET_OFFSET UNITYSDK_OFFSET(0xB2DAAD0)
#define RPG_CLIENT_TIMEMANAGER_SETRTT_OFFSET UNITYSDK_OFFSET(0xB2DA8B0)
#define RPG_CLIENT_TIMEMANAGER_SETSERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0xB2DAA20)
#define RPG_CLIENT_TIMEMANAGER_SETSERVERTIME_OFFSET UNITYSDK_OFFSET(0xB2DA840)
#define RPG_CLIENT_TIMEMANAGER_SET_GAMELAUNCHTIME_OFFSET UNITYSDK_OFFSET(0xB2DB990)
#define RPG_CLIENT_TIMEMANAGER_TIMESTAMPCROSSDAILYUPDATE_OFFSET UNITYSDK_OFFSET(0xB2DAB20)
#define RPG_CLIENT_TIMEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xB2DBD70)
#define RPG_CLIENT_TIMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB2DBD60)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeManager_TypeDefinitionIndex = 62981;

	class TimeManager : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__GameLaunchTime()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TimeManager_TypeDefinitionIndex)->GetStaticField(0x315C0);
		}
		::System::Int32 _DayTimeOffset; // 0x10
		::System::Single _ServerTimeZone; // 0x14
		::System::UInt64 _ServerTimeStampMs; // 0x18
		::System::Double _ReceiveTimeMillseconds; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER__CCTOR_OFFSET))();
		}

		::System::Void SetServerTime(::System::UInt64 serverTimestampMs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SETSERVERTIME_OFFSET))(this, serverTimestampMs);
		}

		::System::Void SetRTT(::System::Single rtt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SETRTT_OFFSET))(this, rtt);
		}

		::System::Void SetServerTimeZone(::System::Int32 serverTimeZone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SETSERVERTIMEZONE_OFFSET))(this, serverTimeZone);
		}

		::System::Void SetDayTimeOffset(::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SETDAYTIMEOFFSET_OFFSET))(this, seconds);
		}

		::System::Boolean TimeStampCrossDailyUpdate(::System::UInt32 timeStamp)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_TIMESTAMPCROSSDAILYUPDATE_OFFSET))(this, timeStamp);
		}

		::System::Boolean IsInSameDailyUpdatePeriod(::System::UInt32 timeStamp1, ::System::UInt32 timeStamp2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_ISINSAMEDAILYUPDATEPERIOD_OFFSET))(this, timeStamp1, timeStamp2);
		}

		::System::Boolean HasTimeStampReached(::System::UInt32 timeStamp)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_HASTIMESTAMPREACHED_OFFSET))(this, timeStamp);
		}

		::RPG::Client::DateTimePro get_NowDateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_NOWDATETIME_OFFSET))(this);
		}

		::System::UInt32 get_NowTimeStamp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_NOWTIMESTAMP_OFFSET))(this);
		}

		::System::UInt64 get_NowMsTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_NOWMSTIMESTAMP_OFFSET))(this);
		}

		::RPG::Client::DateTimePro get_NextDailyUpdateTime()
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_NEXTDAILYUPDATETIME_OFFSET))(this);
		}

		::RPG::Client::DateTimePro GetNextDailyUpdateTime(::RPG::Client::DateTimePro dateTime)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GETNEXTDAILYUPDATETIME_OFFSET))(this, dateTime);
		}

		::RPG::Client::DateTimePro GetNextMondayDailyUpdateTime(::RPG::Client::DateTimePro dateTime)
		{
			return ((::RPG::Client::DateTimePro(*)(::PVOID, ::RPG::Client::DateTimePro))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GETNEXTMONDAYDAILYUPDATETIME_OFFSET))(this, dateTime);
		}

		::System::Single get_ServerTimeZone()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_SERVERTIMEZONE_OFFSET))(this);
		}

		::System::Int32 get_DayTimeOffset()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_DAYTIMEOFFSET_OFFSET))(this);
		}

		::System::String* get_GameLaunchTime()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_GAMELAUNCHTIME_OFFSET))(this);
		}

		::System::Void set_GameLaunchTime(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_SET_GAMELAUNCHTIME_OFFSET))(this, value);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_DISPOSE_OFFSET))(this);
		}

		static ::RPG::Client::TimeManager* get_Instance()
		{
			return ((::RPG::Client::TimeManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}
