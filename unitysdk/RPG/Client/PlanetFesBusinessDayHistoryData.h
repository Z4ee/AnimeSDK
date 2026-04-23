#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_FB0633E85BD6CF8E_14;
namespace RPG::Client { class PlanetFesAvatarStatsData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_CREATEFAKECURDAYHISTORYDATA_OFFSET UNITYSDK_OFFSET(0xACB4B70)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xACB3580)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_AVATARSTATISTICS_OFFSET UNITYSDK_OFFSET(0xACB5320)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xACB5280)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_FINALFESLEVEL_OFFSET UNITYSDK_OFFSET(0xACB52E0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_FINALPROFITRATE_OFFSET UNITYSDK_OFFSET(0xACB52C0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0xACB5300)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0xACB52A0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_AVATARSTATISTICS_OFFSET UNITYSDK_OFFSET(0xACB5330)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xACB5290)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_FINALFESLEVEL_OFFSET UNITYSDK_OFFSET(0xACB52F0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_FINALPROFITRATE_OFFSET UNITYSDK_OFFSET(0xACB52D0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0xACB5310)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0xACB52B0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xACB4730)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xACB4690)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBusinessDayHistoryData_TypeDefinitionIndex = 61321;

	class PlanetFesBusinessDayHistoryData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _TotalCoin_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>* _AvatarStatistics_k__BackingField; // 0x20
		::System::Numerics::BigInteger _FinalProfitRate_k__BackingField; // 0x28
		::System::UInt32 _FinalFesLevel_k__BackingField; // 0x38
		::System::Boolean _IsInfinite_k__BackingField; // 0x3C
		::System::UInt32 _BusinessDay_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 businessDay)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA__CTOR_OFFSET))(this, businessDay);
		}

		static ::RPG::Client::PlanetFesBusinessDayHistoryData* Create(::Class_1_FB0633E85BD6CF8E_14* history)
		{
			return ((::RPG::Client::PlanetFesBusinessDayHistoryData*(*)(::Class_1_FB0633E85BD6CF8E_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_CREATE_OFFSET))(history);
		}

		static ::RPG::Client::PlanetFesBusinessDayHistoryData* CreateFakeCurDayHistoryData()
		{
			return ((::RPG::Client::PlanetFesBusinessDayHistoryData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_CREATEFAKECURDAYHISTORYDATA_OFFSET))();
		}

		::System::Void Sync(::Class_1_FB0633E85BD6CF8E_14* history)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_14*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SYNC_OFFSET))(this, history);
		}

		::System::UInt32 get_BusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_BUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_BusinessDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_BUSINESSDAY_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_TotalCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_TOTALCOIN_OFFSET))(this);
		}

		::System::Void set_TotalCoin(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_TOTALCOIN_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_FinalProfitRate()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_FINALPROFITRATE_OFFSET))(this);
		}

		::System::Void set_FinalProfitRate(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_FINALPROFITRATE_OFFSET))(this, value);
		}

		::System::UInt32 get_FinalFesLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_FINALFESLEVEL_OFFSET))(this);
		}

		::System::Void set_FinalFesLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_FINALFESLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_ISINFINITE_OFFSET))(this);
		}

		::System::Void set_IsInfinite(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_ISINFINITE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>* get_AvatarStatistics()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_AVATARSTATISTICS_OFFSET))(this);
		}

		::System::Void set_AvatarStatistics(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_AVATARSTATISTICS_OFFSET))(this, value);
		}
	};
}
