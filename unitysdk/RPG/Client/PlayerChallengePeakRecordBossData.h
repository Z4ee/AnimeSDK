#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_8;
class Class_1_EA3716A61EF929AB;
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_BUILDLOCALDATA_OFFSET UNITYSDK_OFFSET(0xAD59940)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GETRANK_OFFSET UNITYSDK_OFFSET(0xAD59E70)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xAD5A080)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0xAD5A110)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_DISPLAYSTARNUM_OFFSET UNITYSDK_OFFSET(0xAD59FA0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_EASYBOSSFINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0xAD5A020)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_EASYBOSSMAXSTARS_OFFSET UNITYSDK_OFFSET(0xAD59F10)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xAD5A040)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISCOLORMEDALGOT_OFFSET UNITYSDK_OFFSET(0xAD5A060)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISHARDPASS_OFFSET UNITYSDK_OFFSET(0xAD59F80)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MAXLEFTTURN_OFFSET UNITYSDK_OFFSET(0xAD5A0C0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xAD5A100)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0xAD5A0E0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_PEAKID_OFFSET UNITYSDK_OFFSET(0xAD59F60)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_TEAMMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xAD5A0A0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xAD5A090)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0xAD5A120)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_EASYBOSSFINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0xAD5A030)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xAD5A050)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISCOLORMEDALGOT_OFFSET UNITYSDK_OFFSET(0xAD5A070)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISHARDPASS_OFFSET UNITYSDK_OFFSET(0xAD59F90)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_MAXLEFTTURN_OFFSET UNITYSDK_OFFSET(0xAD5A0D0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0xAD5A0F0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_PEAKID_OFFSET UNITYSDK_OFFSET(0xAD59F70)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_TEAMMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0xAD5A0B0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xAD599B0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAD5A130)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA__SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0xAD59B40)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordBossData_TypeDefinitionIndex = 59131;

	class PlayerChallengePeakRecordBossData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MaxStarCount = 0x3; // 0x0
		::RPG::Client::ChallengePeakBoss* _ChallengePeakBoss_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _EasyBossFinishedTargetIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _ChallengeAvatarDataList_k__BackingField; // 0x20
		::System::UInt32 _MaxLeftTurn_k__BackingField; // 0x28
		::System::UInt32 _TeamMazeBuffID_k__BackingField; // 0x2C
		::System::Boolean _IsClear_k__BackingField; // 0x30
		::System::Boolean _IsColorMedalGot_k__BackingField; // 0x31
		::System::Boolean _IsHardPass_k__BackingField; // 0x32
		::System::UInt32 _MinUseTurn_k__BackingField; // 0x34
		::System::UInt32 _PeakID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA__CTOR_OFFSET))(this);
		}

		::System::Void BuildLocalData(::RPG::Client::ChallengePeakBoss* peak)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_BUILDLOCALDATA_OFFSET))(this, peak);
		}

		::System::Void Sync(::Class_1_EA3716A61EF929AB* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EA3716A61EF929AB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::ChallengePeakRank GetRank()
		{
			return ((::RPG::Client::ChallengePeakRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GETRANK_OFFSET))(this);
		}

		::System::UInt32 get_PeakID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_PEAKID_OFFSET))(this);
		}

		::System::Void set_PeakID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_PEAKID_OFFSET))(this, value);
		}

		::System::Boolean get_IsHardPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISHARDPASS_OFFSET))(this);
		}

		::System::Void set_IsHardPass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISHARDPASS_OFFSET))(this, value);
		}

		::System::UInt32 get_EasyBossMaxStars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_EASYBOSSMAXSTARS_OFFSET))(this);
		}

		::System::UInt32 get_DisplayStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_DISPLAYSTARNUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EasyBossFinishedTargetIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_EASYBOSSFINISHEDTARGETIDLIST_OFFSET))(this);
		}

		::System::Void set_EasyBossFinishedTargetIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_EASYBOSSFINISHEDTARGETIDLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Void set_IsClear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISCLEAR_OFFSET))(this, value);
		}

		::System::Boolean get_IsColorMedalGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISCOLORMEDALGOT_OFFSET))(this);
		}

		::System::Void set_IsColorMedalGot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISCOLORMEDALGOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_ChallengeAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_CHALLENGEAVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_ChallengeAvatarDataList(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_CHALLENGEAVATARDATALIST_OFFSET))(this, value);
		}

		::System::UInt32 get_TeamMazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_TEAMMAZEBUFFID_OFFSET))(this);
		}

		::System::Void set_TeamMazeBuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_TEAMMAZEBUFFID_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLeftTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MAXLEFTTURN_OFFSET))(this);
		}

		::System::Void set_MaxLeftTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_MAXLEFTTURN_OFFSET))(this, value);
		}

		::System::UInt32 get_MinUseTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MINUSETURN_OFFSET))(this);
		}

		::System::Void set_MinUseTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_MINUSETURN_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MAXSTARCOUNT_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakBoss* get_ChallengePeakBoss()
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_CHALLENGEPEAKBOSS_OFFSET))(this);
		}

		::System::Void set_ChallengePeakBoss(::RPG::Client::ChallengePeakBoss* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_CHALLENGEPEAKBOSS_OFFSET))(this, value);
		}

		::System::Void _SyncLineup(::Class_1_D40936EF3BF54118_8* lineup)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA__SYNCLINEUP_OFFSET))(this, lineup);
		}
	};
}
