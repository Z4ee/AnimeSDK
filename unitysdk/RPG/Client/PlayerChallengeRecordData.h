#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_0F76144571501212;
class Class_1_1CBA230307F9C289;
class Class_1_D40936EF3BF54118_3;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PlayerChallengeTierceRecord; }
namespace RPG::GameCore { class ChallengeGroupConfigRow; }
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_BATTLECOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01E80)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEBUFFID1_OFFSET UNITYSDK_OFFSET(0x1AE01FE0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEBUFFID2_OFFSET UNITYSDK_OFFSET(0x1AE02000)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1C2E3400)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEMEMBERS1_OFFSET UNITYSDK_OFFSET(0x1AE02030)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEMEMBERS2_OFFSET UNITYSDK_OFFSET(0x1AE02050)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGENAME_OFFSET UNITYSDK_OFFSET(0x1AE01CD0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01E00)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEROW_OFFSET UNITYSDK_OFFSET(0x1AE01BB0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGESCORE_OFFSET UNITYSDK_OFFSET(0x1AE01F80)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGESTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01FC0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGETURN_OFFSET UNITYSDK_OFFSET(0x1AE01FA0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CURRENTPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01E20)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01E40)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x1AE02160)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C2E33E0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x1AE01C10)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPROW_OFFSET UNITYSDK_OFFSET(0x1AE01B50)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C2E3420)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x1C2E3380)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_ISNEWUPDATE_OFFSET UNITYSDK_OFFSET(0x1AE02070)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_ISSHOWTIERCERECORD_OFFSET UNITYSDK_OFFSET(0x1AE02230)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_NORMALCHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0x1AE01E60)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TIERCERECORD_OFFSET UNITYSDK_OFFSET(0x1AE02020)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TOTALPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01D90)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TOTALSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01DB0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEBUFFID1_OFFSET UNITYSDK_OFFSET(0x1AE01FF0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEBUFFID2_OFFSET UNITYSDK_OFFSET(0x1AE02010)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x1C2E3410)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEMEMBERS1_OFFSET UNITYSDK_OFFSET(0x1AE02040)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEMEMBERS2_OFFSET UNITYSDK_OFFSET(0x1AE02060)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01E10)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGESCORE_OFFSET UNITYSDK_OFFSET(0x1AE01F90)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGESTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01FD0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGETURN_OFFSET UNITYSDK_OFFSET(0x1AE01FB0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CURRENTPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01E30)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01E50)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1C2E33F0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x1C2E3430)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_NORMALCHALLENGETIMES_OFFSET UNITYSDK_OFFSET(0x1AE01E70)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_TOTALPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x1AE01DA0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1C2DEC80)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE02300)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA__GETAVATAR_OFFSET UNITYSDK_OFFSET(0x1C2E3300)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA__GETCURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x1C2E31E0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA__SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0x1C2DE2E0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA__SYNCTIERCE_OFFSET UNITYSDK_OFFSET(0x1C2E2EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeRecordData_TypeDefinitionIndex = 64336;

	class PlayerChallengeRecordData : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_CHALLENGE_STAR = 0x3; // 0x0
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _ChallengeMembers1_k__BackingField; // 0x10
		::RPG::Client::PlayerChallengeTierceRecord* _TierceRecord_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _ChallengeMembers2_k__BackingField; // 0x20
		::System::UInt32 _ChallengeScore_k__BackingField; // 0x28
		::System::UInt32 _GroupID_k__BackingField; // 0x2C
		::System::Int32 _ChallengeProgressCount_k__BackingField; // 0x30
		::System::UInt32 _ChallengeStarCount_k__BackingField; // 0x34
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x38
		::System::Int32 _TotalProgressCount_k__BackingField; // 0x3C
		::System::UInt32 _ChallengeBuffID1_k__BackingField; // 0x40
		::System::UInt32 _NormalChallengeTimes_k__BackingField; // 0x44
		::System::UInt32 _ChallengeTurn_k__BackingField; // 0x48
		::System::UInt32 _ChallengeBuffID2_k__BackingField; // 0x4C
		::System::Int32 _CurrentProgressCount_k__BackingField; // 0x50
		::System::Int32 _CurrentStarCount_k__BackingField; // 0x54
		::System::UInt32 _ChallengeID_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_0F76144571501212* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Int32 _GetCurrentStarCount(::Class_1_0F76144571501212* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA__GETCURRENTSTARCOUNT_OFFSET))(this, a1);
		}

		::System::Void _SyncLineup(::System::Collections::Generic::IList_1<::Class_1_D40936EF3BF54118_3*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D40936EF3BF54118_3*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA__SYNCLINEUP_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* _GetAvatar(::Class_1_1CBA230307F9C289* a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Class_1_1CBA230307F9C289*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA__GETAVATAR_OFFSET))(this, a1);
		}

		::System::Void _SyncTierce(::Class_1_0F76144571501212* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0F76144571501212*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA__SYNCTIERCE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEID_OFFSET))(this);
		}

		::System::Void set_ChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Void set_GroupType(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_GROUPTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChallengeGroupConfigRow* get_GroupRow()
		{
			return ((::RPG::GameCore::ChallengeGroupConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPROW_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeMazeConfigRow* get_ChallengeRow()
		{
			return ((::RPG::GameCore::ChallengeMazeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGENAME_OFFSET))(this);
		}

		::System::Int32 get_TotalProgressCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TOTALPROGRESSCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalProgressCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_TOTALPROGRESSCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalStarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TOTALSTARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_ChallengeProgressCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEPROGRESSCOUNT_OFFSET))(this);
		}

		::System::Void set_ChallengeProgressCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEPROGRESSCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentProgressCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CURRENTPROGRESSCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentProgressCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CURRENTPROGRESSCOUNT_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentStarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CURRENTSTARCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentStarCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CURRENTSTARCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_NormalChallengeTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_NORMALCHALLENGETIMES_OFFSET))(this);
		}

		::System::Void set_NormalChallengeTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_NORMALCHALLENGETIMES_OFFSET))(this, a1);
		}

		::System::UInt32 get_BattleCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_BATTLECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGESCORE_OFFSET))(this);
		}

		::System::Void set_ChallengeScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGESCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGETURN_OFFSET))(this);
		}

		::System::Void set_ChallengeTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGETURN_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGESTARCOUNT_OFFSET))(this);
		}

		::System::Void set_ChallengeStarCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGESTARCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeBuffID1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEBUFFID1_OFFSET))(this);
		}

		::System::Void set_ChallengeBuffID1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEBUFFID1_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeBuffID2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEBUFFID2_OFFSET))(this);
		}

		::System::Void set_ChallengeBuffID2(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEBUFFID2_OFFSET))(this, a1);
		}

		::RPG::Client::PlayerChallengeTierceRecord* get_TierceRecord()
		{
			return ((::RPG::Client::PlayerChallengeTierceRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TIERCERECORD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_ChallengeMembers1()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEMEMBERS1_OFFSET))(this);
		}

		::System::Void set_ChallengeMembers1(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEMEMBERS1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_ChallengeMembers2()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEMEMBERS2_OFFSET))(this);
		}

		::System::Void set_ChallengeMembers2(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEMEMBERS2_OFFSET))(this, a1);
		}

		::System::Boolean get_IsNewUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_ISNEWUPDATE_OFFSET))(this);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsShowTierceRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_ISSHOWTIERCERECORD_OFFSET))(this);
		}
	};
}
