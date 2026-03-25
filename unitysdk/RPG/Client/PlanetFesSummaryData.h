#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_E278C7F99D837054_1;
namespace RPG::Client { class PlanetFesAvatarStatsData; }
namespace RPG::Client { class PlanetFesSummaryPlayerNominate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESSUMMARYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9FBAA50)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCCC50)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMEAVATAR_OFFSET UNITYSDK_OFFSET(0x9FCBE80)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMESPEEDAVATAR_OFFSET UNITYSDK_OFFSET(0x9FCBFB0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTPAMEVENTAVATAR_OFFSET UNITYSDK_OFFSET(0x9FCC5E0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTTALKCOUNTAVATAR_OFFSET UNITYSDK_OFFSET(0x9FCC710)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTWORKTIMEAVATAR_OFFSET UNITYSDK_OFFSET(0x9FCC4B0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_ACTIVATECARDNUMS_OFFSET UNITYSDK_OFFSET(0x9FCCDD0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0x9FCCD90)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARSTATSDATAS_OFFSET UNITYSDK_OFFSET(0x9FCCE70)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CARDGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0x9FCCDB0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CURINCOMESPEED_OFFSET UNITYSDK_OFFSET(0x9FCCD50)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_EVENTCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x9FCCE50)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_FINISHEDBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x9FCCDF0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_LARGEBONUSTOTALINCOME_OFFSET UNITYSDK_OFFSET(0x9FCCD70)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_PLAYERNOMINATE_OFFSET UNITYSDK_OFFSET(0x9FCCE90)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_SENDCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCCE30)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0x9FCCD30)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_USESKILLPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCCE10)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_REFRESHPLAYERNOMINATE_OFFSET UNITYSDK_OFFSET(0x9FCBD10)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_ACTIVATECARDNUMS_OFFSET UNITYSDK_OFFSET(0x9FCCDE0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0x9FCCDA0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARSTATSDATAS_OFFSET UNITYSDK_OFFSET(0x9FCCE80)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CARDGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0x9FCCDC0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CURINCOMESPEED_OFFSET UNITYSDK_OFFSET(0x9FCCD60)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_EVENTCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x9FCCE60)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_FINISHEDBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x9FCCE00)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_LARGEBONUSTOTALINCOME_OFFSET UNITYSDK_OFFSET(0x9FCCD80)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_PLAYERNOMINATE_OFFSET UNITYSDK_OFFSET(0x9FCCEA0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_SENDCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCCE40)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0x9FCCD40)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_USESKILLPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x9FCCE20)
#define RPG_CLIENT_PLANETFESSUMMARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCBC50)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSummaryData_TypeDefinitionIndex = 54235;

	class PlanetFesSummaryData : public ::System::Object
	{
	public:
		::System::Numerics::BigInteger _LargeBonusTotalIncome_k__BackingField; // 0x10
		::System::Numerics::BigInteger _TotalIncome_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>* _EventCountType_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>* _AvatarStatsDatas_k__BackingField; // 0x38
		::RPG::Client::PlanetFesSummaryPlayerNominate* _PlayerNominate_k__BackingField; // 0x40
		::System::Numerics::BigInteger _CurIncomeSpeed_k__BackingField; // 0x48
		::System::UInt32 _UseSkillPointCount_k__BackingField; // 0x58
		::System::UInt32 _CardGachaTotalCnt_k__BackingField; // 0x5C
		::System::UInt32 _ActivateCardNums_k__BackingField; // 0x60
		::System::UInt32 _FinishedBusinessDay_k__BackingField; // 0x64
		::System::UInt32 _SendCardCount_k__BackingField; // 0x68
		::System::UInt32 _AvatarGachaTotalCnt_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSummaryData* Create(::Class_1_E278C7F99D837054_1* serverData)
		{
			return ((::RPG::Client::PlanetFesSummaryData*(*)(::Class_1_E278C7F99D837054_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_CREATE_OFFSET))(serverData);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostIncomeAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMEAVATAR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostIncomeSpeedAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMESPEEDAVATAR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostWorkTimeAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTWORKTIMEAVATAR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostPamEventAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTPAMEVENTAVATAR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostTalkCountAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTTALKCOUNTAVATAR_OFFSET))(this);
		}

		::System::Void RefreshPlayerNominate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_REFRESHPLAYERNOMINATE_OFFSET))(this);
		}

		::System::UInt32 GetEventCount(::RPG::GameCore::PlanetFesEventType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETEVENTCOUNT_OFFSET))(this, type);
		}

		::System::Numerics::BigInteger get_TotalIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_TOTALINCOME_OFFSET))(this);
		}

		::System::Void set_TotalIncome(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_TOTALINCOME_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_CurIncomeSpeed()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CURINCOMESPEED_OFFSET))(this);
		}

		::System::Void set_CurIncomeSpeed(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CURINCOMESPEED_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_LargeBonusTotalIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_LARGEBONUSTOTALINCOME_OFFSET))(this);
		}

		::System::Void set_LargeBonusTotalIncome(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_LARGEBONUSTOTALINCOME_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarGachaTotalCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARGACHATOTALCNT_OFFSET))(this);
		}

		::System::Void set_AvatarGachaTotalCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARGACHATOTALCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_CardGachaTotalCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CARDGACHATOTALCNT_OFFSET))(this);
		}

		::System::Void set_CardGachaTotalCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CARDGACHATOTALCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivateCardNums()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_ACTIVATECARDNUMS_OFFSET))(this);
		}

		::System::Void set_ActivateCardNums(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_ACTIVATECARDNUMS_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishedBusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_FINISHEDBUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_FinishedBusinessDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_FINISHEDBUSINESSDAY_OFFSET))(this, value);
		}

		::System::UInt32 get_UseSkillPointCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_USESKILLPOINTCOUNT_OFFSET))(this);
		}

		::System::Void set_UseSkillPointCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_USESKILLPOINTCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_SendCardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_SENDCARDCOUNT_OFFSET))(this);
		}

		::System::Void set_SendCardCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_SENDCARDCOUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>* get_EventCountType()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_EVENTCOUNTTYPE_OFFSET))(this);
		}

		::System::Void set_EventCountType(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_EVENTCOUNTTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>* get_AvatarStatsDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARSTATSDATAS_OFFSET))(this);
		}

		::System::Void set_AvatarStatsDatas(::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARSTATSDATAS_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesSummaryPlayerNominate* get_PlayerNominate()
		{
			return ((::RPG::Client::PlanetFesSummaryPlayerNominate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_PLAYERNOMINATE_OFFSET))(this);
		}

		::System::Void set_PlayerNominate(::RPG::Client::PlanetFesSummaryPlayerNominate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSummaryPlayerNominate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_PLAYERNOMINATE_OFFSET))(this, value);
		}
	};
}
