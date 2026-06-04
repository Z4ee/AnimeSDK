#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RankChange; }
namespace RPG::Client { class SkillTreeChange; }
namespace RPG::GameCore { class AvatarEnhancedHintRow; }
namespace RPG::GameCore { class AvatarSkillRow; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_AVATARENHANCEDHINT_CREATE_OFFSET UNITYSDK_OFFSET(0xB362CA0)
#define RPG_CLIENT_AVATARENHANCEDHINT_ENTERTRIALSTAGE_OFFSET UNITYSDK_OFFSET(0xB3663F0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETDESCS_OFFSET UNITYSDK_OFFSET(0xB364340)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETHINTSINBOX_OFFSET UNITYSDK_OFFSET(0xB362E50)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETRANKCHANGES_OFFSET UNITYSDK_OFFSET(0xB365FA0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETSEASONHINTS_OFFSET UNITYSDK_OFFSET(0xB362890)
#define RPG_CLIENT_AVATARENHANCEDHINT_GETSKILLTREECHANGES_OFFSET UNITYSDK_OFFSET(0xB364500)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_AFTERENHANCEDID_OFFSET UNITYSDK_OFFSET(0xB3632E0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARGACHARESULTIMGPATH_OFFSET UNITYSDK_OFFSET(0xB363720)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xB363150)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_BEFOREENHANCEDID_OFFSET UNITYSDK_OFFSET(0xB363230)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_HASRANKCHANGE_OFFSET UNITYSDK_OFFSET(0xB363B80)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0xB363490)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISPREVIEW_OFFSET UNITYSDK_OFFSET(0xB3639E0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xB362B90)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISTRIALREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xB366530)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ISUP_OFFSET UNITYSDK_OFFSET(0xB363AD0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB363390)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_PROFESSIONSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xB363810)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_REWARDITEM_OFFSET UNITYSDK_OFFSET(0xB3666D0)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_ROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xB363540)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALREWARDID_OFFSET UNITYSDK_OFFSET(0xB363950)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_TRIALSTAGEID_OFFSET UNITYSDK_OFFSET(0xB363930)
#define RPG_CLIENT_AVATARENHANCEDHINT_GET_WAITINGAVATARHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xB363630)
#define RPG_CLIENT_AVATARENHANCEDHINT_TAKESTAGEREWARD_OFFSET UNITYSDK_OFFSET(0xB366620)
#define RPG_CLIENT_AVATARENHANCEDHINT__CTOR_OFFSET UNITYSDK_OFFSET(0xB362E40)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGERANKLIST_OFFSET UNITYSDK_OFFSET(0xB363BE0)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETCHANGESKILLTREELIST_OFFSET UNITYSDK_OFFSET(0xB363E20)
#define RPG_CLIENT_AVATARENHANCEDHINT__GETSUBSKILLS_OFFSET UNITYSDK_OFFSET(0xB365C80)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarEnhancedHint_TypeDefinitionIndex = 58457;

	class AvatarEnhancedHint : public ::System::Object
	{
	public:
		::RPG::GameCore::AvatarEnhancedHintRow* _HintRow; // 0x10
		::RPG::GameCore::IAvatarCommonRowWrap* _AfterRow; // 0x18
		::RPG::GameCore::IAvatarCommonRowWrap* _BeforeRow; // 0x20

		::System::Void _ctor(::RPG::GameCore::AvatarEnhancedHintRow* a1, ::RPG::GameCore::IAvatarCommonRowWrap* a2, ::RPG::GameCore::IAvatarCommonRowWrap* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnhancedHintRow*, ::RPG::GameCore::IAvatarCommonRowWrap*, ::RPG::GameCore::IAvatarCommonRowWrap*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::AvatarEnhancedHint* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::AvatarEnhancedHint*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>* GetSeasonHints(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETSEASONHINTS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>* GetHintsInBox(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarEnhancedHint*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETHINTSINBOX_OFFSET))(a1);
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

		::System::Collections::Generic::List_1<::RPG::Client::SkillTreeChange*>* GetSkillTreeChanges(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::SkillTreeChange*>*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT_GETSKILLTREECHANGES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>* _GetSubSkills(::RPG::GameCore::IAvatarCommonRowWrap* a1, ::RPG::GameCore::AvatarSkillRow* a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AvatarSkillRow*>*(*)(::PVOID, ::RPG::GameCore::IAvatarCommonRowWrap*, ::RPG::GameCore::AvatarSkillRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARENHANCEDHINT__GETSUBSKILLS_OFFSET))(this, a1, a2);
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
