#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_FB0633E85BD6CF8E_8;
namespace RPG::Client { class PlanetFesAvatarStatsData; }
namespace RPG::Client { class PlanetFesSummaryPlayerNominate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESSUMMARYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC481990)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0xC483400)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMEAVATAR_OFFSET UNITYSDK_OFFSET(0xC482600)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMESPEEDAVATAR_OFFSET UNITYSDK_OFFSET(0xC482750)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTPAMEVENTAVATAR_OFFSET UNITYSDK_OFFSET(0xC482D80)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTTALKCOUNTAVATAR_OFFSET UNITYSDK_OFFSET(0xC482ED0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTWORKTIMEAVATAR_OFFSET UNITYSDK_OFFSET(0xC482C30)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_ACTIVATECARDNUMS_OFFSET UNITYSDK_OFFSET(0xC483580)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0xC483540)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARSTATSDATAS_OFFSET UNITYSDK_OFFSET(0xC483620)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CARDGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0xC483560)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CURINCOMESPEED_OFFSET UNITYSDK_OFFSET(0xC483500)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_EVENTCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xC483600)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_FINISHEDBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xC4835A0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_LARGEBONUSTOTALINCOME_OFFSET UNITYSDK_OFFSET(0xC483520)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_PLAYERNOMINATE_OFFSET UNITYSDK_OFFSET(0xC483640)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_SENDCARDCOUNT_OFFSET UNITYSDK_OFFSET(0xC4835E0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0xC4834E0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_USESKILLPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0xC4835C0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_REFRESHPLAYERNOMINATE_OFFSET UNITYSDK_OFFSET(0xC482450)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_ACTIVATECARDNUMS_OFFSET UNITYSDK_OFFSET(0xC483590)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0xC483550)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARSTATSDATAS_OFFSET UNITYSDK_OFFSET(0xC483630)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CARDGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0xC483570)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CURINCOMESPEED_OFFSET UNITYSDK_OFFSET(0xC483510)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_EVENTCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0xC483610)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_FINISHEDBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0xC4835B0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_LARGEBONUSTOTALINCOME_OFFSET UNITYSDK_OFFSET(0xC483530)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_PLAYERNOMINATE_OFFSET UNITYSDK_OFFSET(0xC483650)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_SENDCARDCOUNT_OFFSET UNITYSDK_OFFSET(0xC4835F0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0xC4834F0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_USESKILLPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0xC4835D0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC482390)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSummaryData_TypeDefinitionIndex = 62322;

	class PlanetFesSummaryData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesSummaryPlayerNominate* _PlayerNominate_k__BackingField; // 0x10
		::System::Numerics::BigInteger _LargeBonusTotalIncome_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>* _AvatarStatsDatas_k__BackingField; // 0x28
		::System::Numerics::BigInteger _CurIncomeSpeed_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>* _EventCountType_k__BackingField; // 0x40
		::System::Numerics::BigInteger _TotalIncome_k__BackingField; // 0x48
		::System::UInt32 _UseSkillPointCount_k__BackingField; // 0x58
		::System::UInt32 _CardGachaTotalCnt_k__BackingField; // 0x5C
		::System::UInt32 _AvatarGachaTotalCnt_k__BackingField; // 0x60
		::System::UInt32 _ActivateCardNums_k__BackingField; // 0x64
		::System::UInt32 _FinishedBusinessDay_k__BackingField; // 0x68
		::System::UInt32 _SendCardCount_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSummaryData* Create(::Class_1_FB0633E85BD6CF8E_8* a1)
		{
			return ((::RPG::Client::PlanetFesSummaryData*(*)(::Class_1_FB0633E85BD6CF8E_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_CREATE_OFFSET))(a1);
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

		::System::UInt32 GetEventCount(::RPG::GameCore::PlanetFesEventType a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETEVENTCOUNT_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_TotalIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_TOTALINCOME_OFFSET))(this);
		}

		::System::Void set_TotalIncome(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_TOTALINCOME_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_CurIncomeSpeed()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CURINCOMESPEED_OFFSET))(this);
		}

		::System::Void set_CurIncomeSpeed(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CURINCOMESPEED_OFFSET))(this, a1);
		}

		::System::Numerics::BigInteger get_LargeBonusTotalIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_LARGEBONUSTOTALINCOME_OFFSET))(this);
		}

		::System::Void set_LargeBonusTotalIncome(::System::Numerics::BigInteger a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_LARGEBONUSTOTALINCOME_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarGachaTotalCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARGACHATOTALCNT_OFFSET))(this);
		}

		::System::Void set_AvatarGachaTotalCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARGACHATOTALCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_CardGachaTotalCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CARDGACHATOTALCNT_OFFSET))(this);
		}

		::System::Void set_CardGachaTotalCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CARDGACHATOTALCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActivateCardNums()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_ACTIVATECARDNUMS_OFFSET))(this);
		}

		::System::Void set_ActivateCardNums(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_ACTIVATECARDNUMS_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinishedBusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_FINISHEDBUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_FinishedBusinessDay(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_FINISHEDBUSINESSDAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_UseSkillPointCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_USESKILLPOINTCOUNT_OFFSET))(this);
		}

		::System::Void set_UseSkillPointCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_USESKILLPOINTCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_SendCardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_SENDCARDCOUNT_OFFSET))(this);
		}

		::System::Void set_SendCardCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_SENDCARDCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>* get_EventCountType()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_EVENTCOUNTTYPE_OFFSET))(this);
		}

		::System::Void set_EventCountType(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_EVENTCOUNTTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>* get_AvatarStatsDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARSTATSDATAS_OFFSET))(this);
		}

		::System::Void set_AvatarStatsDatas(::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARSTATSDATAS_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesSummaryPlayerNominate* get_PlayerNominate()
		{
			return ((::RPG::Client::PlanetFesSummaryPlayerNominate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_PLAYERNOMINATE_OFFSET))(this);
		}

		::System::Void set_PlayerNominate(::RPG::Client::PlanetFesSummaryPlayerNominate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSummaryPlayerNominate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_PLAYERNOMINATE_OFFSET))(this, a1);
		}
	};
}
