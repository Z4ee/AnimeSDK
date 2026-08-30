#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DateTimePro.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1EFCB050)
#define RPG_CLIENT_TIMEUTILS_GET_CLIENTNOWTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1EFCB0C0)
#define RPG_CLIENT_TIMEUTILS_GET_NETRTTMSTIME_OFFSET UNITYSDK_OFFSET(0x1EFCB150)
#define RPG_CLIENT_TIMEUTILS_GET_NETSIGNALSTRENGTH_OFFSET UNITYSDK_OFFSET(0x1EFCB1D0)
#define RPG_CLIENT_TIMEUTILS_GET_SERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1EFCB2C0)
#define RPG_CLIENT_TIMEUTILS_SET_NETRTTMSTIME_OFFSET UNITYSDK_OFFSET(0x1EFCB190)
#define RPG_CLIENT_TIMEUTILS_SET_SERVERTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1EFCB300)
#define RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_1_OFFSET UNITYSDK_OFFSET(0x1EFCB260)
#define RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_2_OFFSET UNITYSDK_OFFSET(0x1EFCB290)
#define RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_OFFSET UNITYSDK_OFFSET(0x1EFCB230)
#define RPG_CLIENT_TIMEUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFCB340)

namespace RPG::Client
{
	inline static constexpr unsigned int TimeUtils_TypeDefinitionIndex = 34663;

	class TimeUtils : public ::System::Object
	{
	public:
		static ::System::DateTime* StaticGet_StartConstTime()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(TimeUtils_TypeDefinitionIndex)->GetStaticField(0x6A0);
		}
		static ::System::Single* StaticGet__NetRttMsTime_k__BackingField()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimeUtils_TypeDefinitionIndex)->GetStaticField(0x6A8);
		}
		static ::System::Boolean* StaticGet__ServerTimeZoneSynced()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeUtils_TypeDefinitionIndex)->GetStaticField(0x6AC);
		}
		static ::System::Single* StaticGet__ServerTimeZone()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TimeUtils_TypeDefinitionIndex)->GetStaticField(0x6B0);
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

		static ::System::Void set_NetRttMsTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_SET_NETRTTMSTIME_OFFSET))(a1);
		}

		static ::System::Single get_NetSignalStrength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_NETSIGNALSTRENGTH_OFFSET))();
		}

		static ::RPG::Client::DateTimePro TimeStampInSecondsToDateTime(::System::UInt32 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_OFFSET))(a1);
		}

		static ::RPG::Client::DateTimePro TimeStampInSecondsToDateTime_1(::System::Int64 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_1_OFFSET))(a1);
		}

		static ::RPG::Client::DateTimePro TimeStampInSecondsToDateTime_2(::System::UInt64 a1)
		{
			return ((::RPG::Client::DateTimePro(*)(::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_TIMESTAMPINSECONDSTODATETIME_2_OFFSET))(a1);
		}

		static ::System::Single get_ServerTimeZone()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_GET_SERVERTIMEZONE_OFFSET))();
		}

		static ::System::Void set_ServerTimeZone(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_TIMEUTILS_SET_SERVERTIMEZONE_OFFSET))(a1);
		}
	};
}
