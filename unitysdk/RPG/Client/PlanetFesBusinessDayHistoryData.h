#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_FB0633E85BD6CF8E_9;
namespace RPG::Client { class PlanetFesAvatarStatsData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_CREATEFAKECURDAYHISTORYDATA_OFFSET UNITYSDK_OFFSET(0xC409450)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC407EB0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_AVATARSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC409C50)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xC409BB0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_FINALFESLEVEL_OFFSET UNITYSDK_OFFSET(0xC409C10)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_FINALPROFITRATE_OFFSET UNITYSDK_OFFSET(0xC409BF0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0xC409C30)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0xC409BD0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_AVATARSTATISTICS_OFFSET UNITYSDK_OFFSET(0xC409C60)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_BUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xC409BC0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_FINALFESLEVEL_OFFSET UNITYSDK_OFFSET(0xC409C20)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_FINALPROFITRATE_OFFSET UNITYSDK_OFFSET(0xC409C00)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_ISINFINITE_OFFSET UNITYSDK_OFFSET(0xC409C40)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_TOTALCOIN_OFFSET UNITYSDK_OFFSET(0xC409BE0)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xC409010)
#define RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC408F70)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesBusinessDayHistoryData_TypeDefinitionIndex = 62245;

	class PlanetFesBusinessDayHistoryData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _FinalProfitRate_k__BackingField; // 0x10
		::System::Numerics::BigInteger _TotalCoin_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>* _AvatarStatistics_k__BackingField; // 0x30
		::System::UInt32 _FinalFesLevel_k__BackingField; // 0x38
		::System::Boolean _IsInfinite_k__BackingField; // 0x3C
		::System::UInt32 _BusinessDay_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::PlanetFesBusinessDayHistoryData* Create(::Class_1_FB0633E85BD6CF8E_9* a1)
		{
			return ((::RPG::Client::PlanetFesBusinessDayHistoryData*(*)(::Class_1_FB0633E85BD6CF8E_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::PlanetFesBusinessDayHistoryData* CreateFakeCurDayHistoryData()
		{
			return ((::RPG::Client::PlanetFesBusinessDayHistoryData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_CREATEFAKECURDAYHISTORYDATA_OFFSET))();
		}

		::System::Void Sync(::Class_1_FB0633E85BD6CF8E_9* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_BusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_BUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_BusinessDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_BUSINESSDAY_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_TotalCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_TOTALCOIN_OFFSET))(this);
		}

		::System::Void set_TotalCoin(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_TOTALCOIN_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_FinalProfitRate()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_FINALPROFITRATE_OFFSET))(this);
		}

		::System::Void set_FinalProfitRate(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_FINALPROFITRATE_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinalFesLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_FINALFESLEVEL_OFFSET))(this);
		}

		::System::Void set_FinalFesLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_FINALFESLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInfinite()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_ISINFINITE_OFFSET))(this);
		}

		::System::Void set_IsInfinite(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_ISINFINITE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>* get_AvatarStatistics()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_GET_AVATARSTATISTICS_OFFSET))(this);
		}

		::System::Void set_AvatarStatistics(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlanetFesAvatarStatsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESBUSINESSDAYHISTORYDATA_SET_AVATARSTATISTICS_OFFSET))(this, a1);
		}
	};
}
