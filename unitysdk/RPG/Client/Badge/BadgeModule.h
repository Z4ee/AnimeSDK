#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/RPG/GameCore/BadgeLevel.h"
#include "unitysdk/RPG/GameCore/BadgePlayType.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/Struct_2_1C87DCAB6DDF0A72.h"

class Class_0_16E4307DCC419505_1364;
class Class_0_16E4307DCC419505_503;
class Class_1_590E456C5F748D1A;
class Class_1_C9E417278351157F_4;
namespace RPG::Client::Badge { class BadgeData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BADGE_BADGEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC7E0040)
#define RPG_CLIENT_BADGE_BADGEMODULE_GETBADGEBYACTIVITY_OFFSET UNITYSDK_OFFSET(0xC7E14C0)
#define RPG_CLIENT_BADGE_BADGEMODULE_GETBADGEBYCHALLENGEPEAK_OFFSET UNITYSDK_OFFSET(0xC7E0FE0)
#define RPG_CLIENT_BADGE_BADGEMODULE_GETBADGEBYCHALLENGE_OFFSET UNITYSDK_OFFSET(0xC7E13C0)
#define RPG_CLIENT_BADGE_BADGEMODULE_GETBADGEROWDATA_OFFSET UNITYSDK_OFFSET(0xC7E0F80)
#define RPG_CLIENT_BADGE_BADGEMODULE_GETOWNEDBADGES_OFFSET UNITYSDK_OFFSET(0xC7E0F40)
#define RPG_CLIENT_BADGE_BADGEMODULE_HASNEWBADGES_OFFSET UNITYSDK_OFFSET(0xC7E1590)
#define RPG_CLIENT_BADGE_BADGEMODULE_ISBADGEEXPIRED_OFFSET UNITYSDK_OFFSET(0xC7E1770)
#define RPG_CLIENT_BADGE_BADGEMODULE_ISNEWRECEIVEDBADGE_OFFSET UNITYSDK_OFFSET(0xC7E1530)
#define RPG_CLIENT_BADGE_BADGEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC7E0430)
#define RPG_CLIENT_BADGE_BADGEMODULE_REMOVEEXPIREDBADGEREDDOTIDS_OFFSET UNITYSDK_OFFSET(0xC7E1870)
#define RPG_CLIENT_BADGE_BADGEMODULE_SENDGETBADGEINFOREQ_OFFSET UNITYSDK_OFFSET(0xC7E0480)
#define RPG_CLIENT_BADGE_BADGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC7E02A0)
#define RPG_CLIENT_BADGE_BADGEMODULE__CANCELALLBADGEEXPIRETIMERS_OFFSET UNITYSDK_OFFSET(0xC7E0090)
#define RPG_CLIENT_BADGE_BADGEMODULE__CANCELBADGEEXPIRETIMER_OFFSET UNITYSDK_OFFSET(0xC7E2900)
#define RPG_CLIENT_BADGE_BADGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC7E2B10)
#define RPG_CLIENT_BADGE_BADGEMODULE__ENSUREALLBADGESCREATED_OFFSET UNITYSDK_OFFSET(0xC7E20F0)
#define RPG_CLIENT_BADGE_BADGEMODULE__GETBADGEBYIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xC7E10E0)
#define RPG_CLIENT_BADGE_BADGEMODULE__GETBADGELEVELBYCHALLENGEPEAKRANK_OFFSET UNITYSDK_OFFSET(0xC7E1090)
#define RPG_CLIENT_BADGE_BADGEMODULE__GETBADGEPLAYTYPEBYCHALLENGEGROUPTYPE_OFFSET UNITYSDK_OFFSET(0xC7E1470)
#define RPG_CLIENT_BADGE_BADGEMODULE__ISBADGEEXPIRED_OFFSET UNITYSDK_OFFSET(0xC7E17C0)
#define RPG_CLIENT_BADGE_BADGEMODULE__ISPERMANENT_OFFSET UNITYSDK_OFFSET(0xC7E2A00)
#define RPG_CLIENT_BADGE_BADGEMODULE__ONBADGEEXPIRED_OFFSET UNITYSDK_OFFSET(0xC7E2AC0)
#define RPG_CLIENT_BADGE_BADGEMODULE__ONBADGEINFOSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC7E0EB0)
#define RPG_CLIENT_BADGE_BADGEMODULE__ONGETBADGEINFOSCRSP_OFFSET UNITYSDK_OFFSET(0xC7E0510)
#define RPG_CLIENT_BADGE_BADGEMODULE__STARTBADGEEXPIRETIMER_OFFSET UNITYSDK_OFFSET(0xC7E2770)
#define RPG_CLIENT_BADGE_BADGEMODULE__SYNCOWNEDBADGES_OFFSET UNITYSDK_OFFSET(0xC7E05A0)

namespace RPG::Client::Badge
{
	inline static constexpr unsigned int BadgeModule_TypeDefinitionIndex = 74991;

	class BadgeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Badge::BadgeData*>* _OwnedBadgeList; // 0x10
		::Class_1_590E456C5F748D1A* _BadgeRowDataFactory; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Badge::BadgeData*>* _AllBadgeMap; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _NewReceivedBadgeIDList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _BadgeExpireTimerMap; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void SendGetBadgeInfoReq()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_SENDGETBADGEINFOREQ_OFFSET))(this);
		}

		::System::Void _OnGetBadgeInfoScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__ONGETBADGEINFOSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnBadgeInfoScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__ONBADGEINFOSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_503*>* GetOwnedBadges()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_503*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_GETOWNEDBADGES_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_1364* GetBadgeRowData(::System::UInt32 a1)
		{
			return ((::Class_0_16E4307DCC419505_1364*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_GETBADGEROWDATA_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_503* GetBadgeByChallengePeak(::System::UInt32 a1, ::RPG::Client::ChallengePeakRank a2)
		{
			return ((::Class_0_16E4307DCC419505_503*(*)(::PVOID, ::System::UInt32, ::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_GETBADGEBYCHALLENGEPEAK_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_503* GetBadgeByChallenge(::RPG::GameCore::ChallengeGroupType a1, ::System::UInt32 a2)
		{
			return ((::Class_0_16E4307DCC419505_503*(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_GETBADGEBYCHALLENGE_OFFSET))(this, a1, a2);
		}

		::Class_0_16E4307DCC419505_503* GetBadgeByActivity(::System::UInt32 a1)
		{
			return ((::Class_0_16E4307DCC419505_503*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_GETBADGEBYACTIVITY_OFFSET))(this, a1);
		}

		::System::Boolean IsNewReceivedBadge(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_ISNEWRECEIVEDBADGE_OFFSET))(this, a1);
		}

		::System::Boolean HasNewBadges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_HASNEWBADGES_OFFSET))(this);
		}

		::System::Boolean IsBadgeExpired(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_ISBADGEEXPIRED_OFFSET))(this, a1);
		}

		::System::Void RemoveExpiredBadgeRedDotIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE_REMOVEEXPIREDBADGEREDDOTIDS_OFFSET))(this);
		}

		::System::Void _SyncOwnedBadges(::System::Collections::Generic::IEnumerable_1<::Class_1_C9E417278351157F_4*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_C9E417278351157F_4*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__SYNCOWNEDBADGES_OFFSET))(this, a1);
		}

		::System::Void _EnsureAllBadgesCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__ENSUREALLBADGESCREATED_OFFSET))(this);
		}

		static ::RPG::GameCore::BadgePlayType _GetBadgePlayTypeByChallengeGroupType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::RPG::GameCore::BadgePlayType(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__GETBADGEPLAYTYPEBYCHALLENGEGROUPTYPE_OFFSET))(a1);
		}

		static ::RPG::GameCore::BadgeLevel _GetBadgeLevelByChallengePeakRank(::RPG::Client::ChallengePeakRank a1)
		{
			return ((::RPG::GameCore::BadgeLevel(*)(::RPG::Client::ChallengePeakRank))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__GETBADGELEVELBYCHALLENGEPEAKRANK_OFFSET))(a1);
		}

		::Class_0_16E4307DCC419505_503* _GetBadgeByIdentifier(::Struct_2_1C87DCAB6DDF0A72 a1)
		{
			return ((::Class_0_16E4307DCC419505_503*(*)(::PVOID, ::Struct_2_1C87DCAB6DDF0A72))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__GETBADGEBYIDENTIFIER_OFFSET))(this, a1);
		}

		::System::Void _StartBadgeExpireTimer(::RPG::Client::Badge::BadgeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Badge::BadgeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__STARTBADGEEXPIRETIMER_OFFSET))(this, a1);
		}

		::System::Void _CancelBadgeExpireTimer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__CANCELBADGEEXPIRETIMER_OFFSET))(this, a1);
		}

		::System::Void _CancelAllBadgeExpireTimers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__CANCELALLBADGEEXPIRETIMERS_OFFSET))(this);
		}

		::System::Void _OnBadgeExpired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__ONBADGEEXPIRED_OFFSET))(this);
		}

		::System::Boolean _IsBadgeExpired(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__ISBADGEEXPIRED_OFFSET))(this, a1);
		}

		::System::Boolean _IsPermanent(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_BADGE_BADGEMODULE__ISPERMANENT_OFFSET))(this, a1);
		}
	};
}
