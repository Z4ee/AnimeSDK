#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RankChange; }
namespace RPG::Client { class SkillTreeChange; }
namespace RPG::GameCore { class AvatarEnhancedHintRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARENHANCEDHINT_CREATE_OFFSET UNITYSDK_OFFSET(0x911CA30)
#define RPG_CLIENT_AVATARENHANCEDHINT_ENTERTRIALSTAGE_OFFSET UNITYSDK_OFFSET(0x911F8C0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETDESCS_OFFSET UNITYSDK_OFFSET(0x911DFD0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETHINTSINBOX_OFFSET UNITYSDK_OFFSET(0x911CBD0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETRANKCHANGES_OFFSET UNITYSDK_OFFSET(0x911F460)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETSEASONHINTS_OFFSET UNITYSDK_OFFSET(0x911C6D0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETSKILLTREECHANGES_OFFSET UNITYSDK_OFFSET(0x911E0E0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_AFTERENHANCEDID_OFFSET UNITYSDK_OFFSET(0x911D170)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARGACHARESULTIMGPATH_OFFSET UNITYSDK_OFFSET(0x911D5F0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x911CFA0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_BEFOREENHANCEDID_OFFSET UNITYSDK_OFFSET(0x911D080)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_HASRANKCHANGE_OFFSET UNITYSDK_OFFSET(0x911DA50)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x911D360)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISPREVIEW_OFFSET UNITYSDK_OFFSET(0x911D8B0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0x911C910)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x911FA00)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISUP_OFFSET UNITYSDK_OFFSET(0x911D9A0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x911D260)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_PROFESSIONSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x911D6E0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0x911FBA0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0x911D410)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALREWARDID_OFFSET UNITYSDK_OFFSET(0x911D820)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALSTAGEID_OFFSET UNITYSDK_OFFSET(0x911D800)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0x911D500)
#define RPG_CLIENT_AVATARENHANCEDHINT_TAKESTAGEREWARD_OFFSET UNITYSDK_OFFSET(0x911FAF0)
#define RPG_CLIENT_AVATARENHANCEDHINT__CTOR_OFFSET UNITYSDK_OFFSET(0x911CBC0)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGERANKLIST_OFFSET UNITYSDK_OFFSET(0x911DAB0)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGESKILLTREELIST_OFFSET UNITYSDK_OFFSET(0x911DC90)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETSUBSKILLS_OFFSET UNITYSDK_OFFSET(0x911F190)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEnhancedHint_TypeDefinitionIndex = 50787;

	class AvatarEnhancedHint : public ::System::Object
	{
	public:
		::RPG::GameCore::IAvatarCommonRowWrap* _AfterRow; // 0x10
		::RPG::GameCore::IAvatarCommonRowWrap* _BeforeRow; // 0x18
		::RPG::GameCore::AvatarEnhancedHintRow* _HintRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::AvatarEnhancedHintRow* hintRow, ::RPG::GameCore::IAvatarCommonRowWrap* beforeRow, ::RPG::GameCore::IAvatarCommonRowWrap* afterRow)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnhancedHintRow*, ::RPG::GameCore::IAvatarCommonRowWrap*, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__CTOR_OFFSET))(this, hintRow, beforeRow, afterRow);
		}

		static ::RPG::Client::AvatarEnhancedHint* Create(::System::UInt32 avatarID, ::System::UInt32 enhancedID)
		{
			return ((::RPG::Client::AvatarEnhancedHint*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_CREATE_OFFSET))(avatarID, enhancedID);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>* GetSeasonHints(::System::UInt32 season)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETSEASONHINTS_OFFSET))(season);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>* GetHintsInBox(::System::UInt32 lastSeenSeason)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETHINTSINBOX_OFFSET))(lastSeenSeason);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_BeforeEnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_BEFOREENHANCEDID_OFFSET))(this);
		}

		::System::UInt32 get_AfterEnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_AFTERENHANCEDID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_RoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_WaitingAvatarHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_WAITINGAVATARHEADICONPATH_OFFSET))(this);
		}

		::System::String* get_AvatarGachaResultImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARGACHARESULTIMGPATH_OFFSET))(this);
		}

		::System::String* get_ProfessionSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_PROFESSIONSMALLICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_TrialStageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALSTAGEID_OFFSET))(this);
		}

		::System::UInt32 get_TrialRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALREWARDID_OFFSET))(this);
		}

		::System::Boolean get_IsPreview()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ISPREVIEW_OFFSET))(this);
		}

		::System::Boolean get_IsUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ISUP_OFFSET))(this);
		}

		::System::Boolean get_HasRankChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_HASRANKCHANGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetChangeSkillTreeList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGESKILLTREELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _GetChangeRankList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGERANKLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TextID>* GetDescs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETDESCS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::SkillTreeChange*>* GetSkillTreeChanges(::RPG::Client::IAvatarInfoProvider* avatar)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SkillTreeChange*>*(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETSKILLTREECHANGES_OFFSET))(this, avatar);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* _GetSubSkills(::RPG::GameCore::IAvatarCommonRowWrap* avatar, ::RPG::GameCore::AvatarSkillRow* mainSkill)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__GETSUBSKILLS_OFFSET))(this, avatar, mainSkill);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RankChange*>* GetRankChanges()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RankChange*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETRANKCHANGES_OFFSET))(this);
		}

		::System::Void EnterTrialStage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_ENTERTRIALSTAGE_OFFSET))(this);
		}

		::System::Boolean get_IsTrialRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDTAKEN_OFFSET))(this);
		}

		::System::Boolean get_IsTrialRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDCANTAKE_OFFSET))(this);
		}

		::System::Void TakeStageReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_TAKESTAGEREWARD_OFFSET))(this);
		}

		::RPG::Client::ItemDisplayData* get_RewardItem()
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GET_REWARDITEM_OFFSET))(this);
		}
	};
}
