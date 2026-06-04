#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FightFestPhaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestScorePhaseExtraData; }
namespace RPG::GameCore { class FightFestPhaseRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTPHASE_GET_BOARDTEXTUREPATH_OFFSET UNITYSDK_OFFSET(0xBA1CCF0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_BOARDTITLE_OFFSET UNITYSDK_OFFSET(0xBA1CC00)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_ICONPATH1_OFFSET UNITYSDK_OFFSET(0xBA1CC90)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_ICONPATH2_OFFSET UNITYSDK_OFFSET(0xBA1CCD0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_ID_OFFSET UNITYSDK_OFFSET(0xBA1ACC0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_ISPHASEUNLOCK_OFFSET UNITYSDK_OFFSET(0xBA1CB50)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_LUKAANIMTRIGGER_OFFSET UNITYSDK_OFFSET(0xBA1CD10)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_MINIICONPATH1_OFFSET UNITYSDK_OFFSET(0xBA1CCB0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETITLE_OFFSET UNITYSDK_OFFSET(0xBA1CC30)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETUTORIALPARAMS_OFFSET UNITYSDK_OFFSET(0xBA1B290)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETYPE_OFFSET UNITYSDK_OFFSET(0xBA1B270)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_QUALIFYTIP_OFFSET UNITYSDK_OFFSET(0xBA1C8F0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xBA1C4B0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xBA1BB80)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARICON_OFFSET UNITYSDK_OFFSET(0xBA1C570)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARMINIICON_OFFSET UNITYSDK_OFFSET(0xBA1C680)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARNAME_OFFSET UNITYSDK_OFFSET(0xBA1C790)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETSCORE_OFFSET UNITYSDK_OFFSET(0xBA1C3F0)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETTIPS_OFFSET UNITYSDK_OFFSET(0xBA1CC60)
#define RPG_CLIENT_FIGHTFESTPHASE_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0xBA1B250)
#define RPG_CLIENT_FIGHTFESTPHASE__CTOR_OFFSET UNITYSDK_OFFSET(0xBA1CA50)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestPhase_TypeDefinitionIndex = 59975;

	class FightFestPhase : public ::System::Object
	{
	public:
		::RPG::GameCore::FightFestPhaseRow* _Row; // 0x10
		::RPG::Client::FightFestScorePhaseExtraData* ScorePhaseExtraData; // 0x18

		::System::Void _ctor(::RPG::GameCore::FightFestPhaseRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FightFestPhaseRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE__CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_TargetScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETSCORE_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_REWARDID_OFFSET))(this);
		}

		::System::String* get_TargetAvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARICON_OFFSET))(this);
		}

		::System::String* get_TargetAvatarMiniIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARMINIICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_TargetAvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETAVATARNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_QualifyTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_QUALIFYTIP_OFFSET))(this);
		}

		::System::Boolean get_IsPhaseUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_ISPHASEUNLOCK_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::FightFestPhaseType get_PhaseType()
		{
			return ((::RPG::GameCore::FightFestPhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETYPE_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_UnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_BoardTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_BOARDTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_PhaseTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TargetTips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_TARGETTIPS_OFFSET))(this);
		}

		::System::String* get_IconPath1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_ICONPATH1_OFFSET))(this);
		}

		::System::String* get_MiniIconPath1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_MINIICONPATH1_OFFSET))(this);
		}

		::System::String* get_IconPath2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_ICONPATH2_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_PhaseTutorialParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_PHASETUTORIALPARAMS_OFFSET))(this);
		}

		::System::String* get_BoardTexturePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_BOARDTEXTUREPATH_OFFSET))(this);
		}

		::System::String* get_LukaAnimTrigger()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTPHASE_GET_LUKAANIMTRIGGER_OFFSET))(this);
		}
	};
}
