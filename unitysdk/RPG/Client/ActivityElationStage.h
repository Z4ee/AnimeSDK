#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityElationAvatarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class ActivityElationStageRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYELATIONSTAGE_CHECKISNEW_OFFSET UNITYSDK_OFFSET(0x9AD2DD0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_CHECKISUNLOCKANIMHASSEEN_OFFSET UNITYSDK_OFFSET(0x9AD4790)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_CREATE_OFFSET UNITYSDK_OFFSET(0x9AD3C40)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GERSELECTABLEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9AD53B0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETMODIFIEDAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9AD4E90)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETNEWMODIFIEDAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9AD5090)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETNEWMODIFIEDAVATARID_OFFSET UNITYSDK_OFFSET(0x9AD4FF0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETSORTEDMONSTERS_OFFSET UNITYSDK_OFFSET(0x9AD4C10)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETTEAMSAVE_OFFSET UNITYSDK_OFFSET(0x9AD5650)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GETTRIALAVATARS_OFFSET UNITYSDK_OFFSET(0x9AD5190)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x9AD4320)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_FINISHEDROUNDS_OFFSET UNITYSDK_OFFSET(0x9AD43B0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_GIFTBOXLEVELLIST_OFFSET UNITYSDK_OFFSET(0x9AD43C0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_HASHISTORY_OFFSET UNITYSDK_OFFSET(0x9AD4380)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x9AD2520)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x9AD42C0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISFRESH_OFFSET UNITYSDK_OFFSET(0x9AD4730)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISPERFECTFINISHED_OFFSET UNITYSDK_OFFSET(0x9AD4390)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISSPECIALLEVEL_OFFSET UNITYSDK_OFFSET(0x9AD42E0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9AD45D0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCINDOWN_OFFSET UNITYSDK_OFFSET(0x9AD4290)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCINUP_OFFSET UNITYSDK_OFFSET(0x9AD4260)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCOUT_OFFSET UNITYSDK_OFFSET(0x9AD4230)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_MAXROUNDS_OFFSET UNITYSDK_OFFSET(0x9AD1FC0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_MONSTERLIST_OFFSET UNITYSDK_OFFSET(0x9AD4340)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9AD4200)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_NEWMODIFIEDAVATARID_OFFSET UNITYSDK_OFFSET(0x9AD4300)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_RANK_OFFSET UNITYSDK_OFFSET(0x9AD4460)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_REMAININGROUNDS_OFFSET UNITYSDK_OFFSET(0x9AD43A0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_TARGETLIST_OFFSET UNITYSDK_OFFSET(0x9AD1B30)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_TUTORIALGUIDEGROUPID_OFFSET UNITYSDK_OFFSET(0x9AD4360)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_ISTARGETCOMPLETE_OFFSET UNITYSDK_OFFSET(0x9AD4B90)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_MARKHASSEEN_OFFSET UNITYSDK_OFFSET(0x9AD48B0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_MARKUNLOCKANIMHASSEEN_OFFSET UNITYSDK_OFFSET(0x9AD4A20)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_SAVETEAM_OFFSET UNITYSDK_OFFSET(0x9AD5DB0)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE_SETLEVELRESULT_OFFSET UNITYSDK_OFFSET(0x9AD3D00)
#define RPG_CLIENT_ACTIVITYELATIONSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x9AD60F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityElationStage_TypeDefinitionIndex = 56728;

	class ActivityElationStage : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Boolean>* _TargetStatus; // 0x10
		::RPG::GameCore::ActivityElationStageRow* _Meta; // 0x18
		::System::Boolean _IsPerfectFinished; // 0x20
		::System::Boolean _ExistingHistory; // 0x21
		::System::UInt32 _RemainingRounds; // 0x24
		::System::UInt32 _FinishedRounds; // 0x28

		::System::Void _ctor(::RPG::GameCore::ActivityElationStageRow* meta)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityElationStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE__CTOR_OFFSET))(this, meta);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelDescOut()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCOUT_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelDescInUp()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCINUP_OFFSET))(this);
		}

		::RPG::Client::TextID get_LevelDescInDown()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_LEVELDESCINDOWN_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::Boolean get_IsSpecialLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISSPECIALLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_NewModifiedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_NEWMODIFIEDAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_EVENTID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_MONSTERLIST_OFFSET))(this);
		}

		::System::UInt32 get_MaxRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_MAXROUNDS_OFFSET))(this);
		}

		::System::UInt32 get_TutorialGuideGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_TUTORIALGUIDEGROUPID_OFFSET))(this);
		}

		::System::Boolean get_HasHistory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_HASHISTORY_OFFSET))(this);
		}

		::System::Boolean get_IsPerfectFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISPERFECTFINISHED_OFFSET))(this);
		}

		::System::UInt32 get_RemainingRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_REMAININGROUNDS_OFFSET))(this);
		}

		::System::UInt32 get_FinishedRounds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_FINISHEDROUNDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_GiftBoxLevelList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_GIFTBOXLEVELLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TargetList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_TARGETLIST_OFFSET))(this);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_RANK_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsFresh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GET_ISFRESH_OFFSET))(this);
		}

		::System::Boolean CheckIsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_CHECKISNEW_OFFSET))(this);
		}

		::System::Boolean CheckIsUnlockAnimHasSeen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_CHECKISUNLOCKANIMHASSEEN_OFFSET))(this);
		}

		::System::Void MarkHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_MARKHASSEEN_OFFSET))(this);
		}

		::System::Void MarkUnlockAnimHasSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_MARKUNLOCKANIMHASSEEN_OFFSET))(this);
		}

		::System::Void SetLevelResult(::System::UInt32 remainingRounds, ::System::UInt32 finishedRounds, ::System::UInt32 targetBitSet, ::System::Boolean isPerfectFinished)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_SETLEVELRESULT_OFFSET))(this, remainingRounds, finishedRounds, targetBitSet, isPerfectFinished);
		}

		::System::Boolean IsTargetComplete(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_ISTARGETCOMPLETE_OFFSET))(this, index);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetSortedMonsters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETSORTEDMONSTERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>* GetModifiedAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityElationAvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETMODIFIEDAVATARDATALIST_OFFSET))(this);
		}

		::System::UInt32 GetNewModifiedAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETNEWMODIFIEDAVATARID_OFFSET))(this);
		}

		::RPG::Client::IAvatarInfoProvider* GetNewModifiedAvatarData()
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETNEWMODIFIEDAVATARDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTrialAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETTRIALAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GerSelectableAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GERSELECTABLEAVATARDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetTeamSave()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_GETTEAMSAVE_OFFSET))(this);
		}

		::System::Void SaveTeam(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_SAVETEAM_OFFSET))(this, avatars);
		}

		static ::RPG::Client::ActivityElationStage* Create(::RPG::GameCore::ActivityElationStageRow* meta)
		{
			return ((::RPG::Client::ActivityElationStage*(*)(::RPG::GameCore::ActivityElationStageRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYELATIONSTAGE_CREATE_OFFSET))(meta);
		}
	};
}
