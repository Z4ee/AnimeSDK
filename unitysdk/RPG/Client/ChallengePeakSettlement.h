#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/System/Object.h"

class Class_1_FFE5B8A52EC38E9C_1;
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengeSettleConfirmation; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_CREATE_OFFSET UNITYSDK_OFFSET(0xB56C260)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETREWARDITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xB572910)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETSETTLERANK_OFFSET UNITYSDK_OFFSET(0xB5729E0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0xB572300)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKNORMAL_OFFSET UNITYSDK_OFFSET(0xB5722E0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_COUNTOFREWARDS_OFFSET UNITYSDK_OFFSET(0xB572380)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_FINISHEDTARGETLIST_OFFSET UNITYSDK_OFFSET(0xB572490)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISBOSSTARGETBETTER_OFFSET UNITYSDK_OFFSET(0xB572470)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISCOLORMEDALTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0xB572450)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xB572410)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISHARDBOSS_OFFSET UNITYSDK_OFFSET(0xB572320)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISUNLOCKEASYBOSS_OFFSET UNITYSDK_OFFSET(0xB5723F0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWAITCONFIRM_OFFSET UNITYSDK_OFFSET(0xB572430)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB5723D0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_PEAKID_OFFSET UNITYSDK_OFFSET(0xB5722C0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_SETTLECONFIRMATION_OFFSET UNITYSDK_OFFSET(0xB5724A0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_TURNLEFT_OFFSET UNITYSDK_OFFSET(0xB572340)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_USEDTURN_OFFSET UNITYSDK_OFFSET(0xB572360)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORBOSS_OFFSET UNITYSDK_OFFSET(0xB565000)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORMONSTER_OFFSET UNITYSDK_OFFSET(0xB565060)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0xB572310)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKNORMAL_OFFSET UNITYSDK_OFFSET(0xB5722F0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISBOSSTARGETBETTER_OFFSET UNITYSDK_OFFSET(0xB572480)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISCOLORMEDALTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0xB572460)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0xB572420)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISHARDBOSS_OFFSET UNITYSDK_OFFSET(0xB572330)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISUNLOCKEASYBOSS_OFFSET UNITYSDK_OFFSET(0xB572400)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWAITCONFIRM_OFFSET UNITYSDK_OFFSET(0xB572440)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xB5723E0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_PEAKID_OFFSET UNITYSDK_OFFSET(0xB5722D0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_SETTLECONFIRMATION_OFFSET UNITYSDK_OFFSET(0xB5724B0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_TURNLEFT_OFFSET UNITYSDK_OFFSET(0xB572350)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_USEDTURN_OFFSET UNITYSDK_OFFSET(0xB572370)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0xB5724C0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__GENERATEREWARDLIST_OFFSET UNITYSDK_OFFSET(0xB572520)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakSettlement_TypeDefinitionIndex = 59133;

	class ChallengePeakSettlement : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemList; // 0x10
		::RPG::Client::ChallengePeakBoss* _ChallengePeakBoss_k__BackingField; // 0x18
		::RPG::Client::ChallengePeak* _ChallengePeakNormal_k__BackingField; // 0x20
		::RPG::Client::ChallengeSettleConfirmation* _SettleConfirmation_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedTargetList_k__BackingField; // 0x30
		::System::UInt32 _TurnLeft_k__BackingField; // 0x38
		::System::Boolean _IsBossTargetBetter_k__BackingField; // 0x3C
		::System::Boolean _IsUnlockEasyBoss_k__BackingField; // 0x3D
		::System::Boolean _IsColorMedalTargetHasFinished_k__BackingField; // 0x3E
		::System::Boolean _IsHardBoss_k__BackingField; // 0x3F
		::System::Boolean _IsWaitConfirm_k__BackingField; // 0x40
		::System::Boolean _IsWin_k__BackingField; // 0x41
		::System::Boolean _IsFirstPass_k__BackingField; // 0x42
		::System::UInt32 _UsedTurn_k__BackingField; // 0x44
		::System::UInt32 _PeakID_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PeakID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_PEAKID_OFFSET))(this);
		}

		::System::Void set_PeakID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_PEAKID_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeak* get_ChallengePeakNormal()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKNORMAL_OFFSET))(this);
		}

		::System::Void set_ChallengePeakNormal(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKNORMAL_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakBoss* get_ChallengePeakBoss()
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKBOSS_OFFSET))(this);
		}

		::System::Void set_ChallengePeakBoss(::RPG::Client::ChallengePeakBoss* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKBOSS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsHardBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISHARDBOSS_OFFSET))(this);
		}

		::System::Void set_IsHardBoss(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISHARDBOSS_OFFSET))(this, a1);
		}

		::System::UInt32 get_TurnLeft()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_TURNLEFT_OFFSET))(this);
		}

		::System::Void set_TurnLeft(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_TURNLEFT_OFFSET))(this, a1);
		}

		::System::UInt32 get_UsedTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_USEDTURN_OFFSET))(this);
		}

		::System::Void set_UsedTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_USEDTURN_OFFSET))(this, a1);
		}

		::System::Int32 get_CountOfRewards()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_COUNTOFREWARDS_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWIN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsUnlockEasyBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISUNLOCKEASYBOSS_OFFSET))(this);
		}

		::System::Void set_IsUnlockEasyBoss(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISUNLOCKEASYBOSS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISFIRSTPASS_OFFSET))(this);
		}

		::System::Void set_IsFirstPass(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISFIRSTPASS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitConfirm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWAITCONFIRM_OFFSET))(this);
		}

		::System::Void set_IsWaitConfirm(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWAITCONFIRM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsColorMedalTargetHasFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISCOLORMEDALTARGETHASFINISHED_OFFSET))(this);
		}

		::System::Void set_IsColorMedalTargetHasFinished(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISCOLORMEDALTARGETHASFINISHED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsBossTargetBetter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISBOSSTARGETBETTER_OFFSET))(this);
		}

		::System::Void set_IsBossTargetBetter(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISBOSSTARGETBETTER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedTargetList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_FINISHEDTARGETLIST_OFFSET))(this);
		}

		::RPG::Client::ChallengeSettleConfirmation* get_SettleConfirmation()
		{
			return ((::RPG::Client::ChallengeSettleConfirmation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_SETTLECONFIRMATION_OFFSET))(this);
		}

		::System::Void set_SettleConfirmation(::RPG::Client::ChallengeSettleConfirmation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeSettleConfirmation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_SETTLECONFIRMATION_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengePeakSettlement* Create(::Class_1_FFE5B8A52EC38E9C_1* a1)
		{
			return ((::RPG::Client::ChallengePeakSettlement*(*)(::Class_1_FFE5B8A52EC38E9C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_CREATE_OFFSET))(a1);
		}

		::System::Void InitForBoss(::RPG::Client::ChallengePeakBoss* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORBOSS_OFFSET))(this, a1);
		}

		::System::Void InitForMonster(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORMONSTER_OFFSET))(this, a1);
		}

		::RPG::Client::ItemDisplayData* GetRewardItemByIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETREWARDITEMBYINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakRank GetSettleRank()
		{
			return ((::RPG::Client::ChallengePeakRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETSETTLERANK_OFFSET))(this);
		}

		::System::Void _GenerateRewardList(::Class_1_FFE5B8A52EC38E9C_1* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__GENERATEREWARDLIST_OFFSET))(this, a1);
		}
	};
}
