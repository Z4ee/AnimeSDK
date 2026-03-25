#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x183495C0)
#define RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18349630)
#define RPG_CLIENT_TIMEUTILS_GET_NETRTTMSTIME_OFFSET UNITYSDK_OFFSET(0x183496C0)
#define RPG_CLIENT_TIMEUTILS_GET_NETSIGNALSTRENGTH_OFFSET UNITYSDK_OFFSET(0x18349740)
#define RPG_CLIENT_TIMEUTILS_GET_SERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0x18349830)
#define RPG_CLIENT_TIMEUTILS_SET_NETRTTMSTIME_OFFSET UNITYSDK_OFFSET(0x18349700)
#define RPG_CLIENT_TIMEUTILS_SET_SERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0x18349870)
#define RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_1_OFFSET UNITYSDK_OFFSET(0x183497D0)
#define RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_2_OFFSET UNITYSDK_OFFSET(0x18349800)
#define RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_OFFSET UNITYSDK_OFFSET(0x183497A0)
#define RPG_CLIENT_TIMEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x183498B0)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeUtils_TypeDefinitionIndex = 9558;

	class TimeUtils : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__NetRttMsTime_k__BackingField()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimeUtils_TypeDefinitionIndex)->GetStaticField(0xC920);
		}
		static ::System::Boolean* StaticGet__ServerTimeZoneSynced()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeUtils_TypeDefinitionIndex)->GetStaticField(0xC924);
		}
		static ::System::Single* StaticGet__ServerTimeZone()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimeUtils_TypeDefinitionIndex)->GetStaticField(0xC928);
		}
		static ::System::DateTime* StaticGet_StartConstTime()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(TimeUtils_TypeDefinitionIndex)->GetStaticField(0xC930);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS__CCTOR_OFFSET))();
		}

		static ::System::UInt64 get_ClientNowMsTimeStamp()
		{
			return ((::System::UInt64(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWMSTIMESTAMP_OFFSET))();
		}

		static ::System::UInt32 get_ClientNowTimeStamp()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWTIMESTAMP_OFFSET))();
		}

		static ::System::Single get_NetRttMsTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_NETRTTMSTIME_OFFSET))();
		}

		static ::System::Void set_NetRttMsTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_SET_NETRTTMSTIME_OFFSET))(value);
		}

		static ::System::Single get_NetSignalStrength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_NETSIGNALSTRENGTH_OFFSET))();
		}

		static ::RPG::Client::DateTimePro TimeStampInSecondsToDateTime(::System::UInt32 time)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_OFFSET))(time);
		}

		static ::RPG::Client::DateTimePro TimeStampInSecondsToDateTime_1(::System::Int64 time)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_1_OFFSET))(time);
		}

		static ::RPG::Client::DateTimePro TimeStampInSecondsToDateTime_2(::System::UInt64 time)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_2_OFFSET))(time);
		}

		static ::System::Single get_ServerTimeZone()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_SERVERTIMEZONE_OFFSET))();
		}

		static ::System::Void set_ServerTimeZone(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_SET_SERVERTIMEZONE_OFFSET))(value);
		}
	};
}
