#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class FightFestPlayerInfo; }
namespace RPG::GameCore { class FightFestScorePhaseRow; }
namespace System { class String; }

#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_CREATE_OFFSET UNITYSDK_OFFSET(0x96C1730)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x96C2440)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_QUALIFYTIP_OFFSET UNITYSDK_OFFSET(0x96C16B0)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x96C1200)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARICON_OFFSET UNITYSDK_OFFSET(0x96C1300)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARMINIICON_OFFSET UNITYSDK_OFFSET(0x96C1410)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARNAME_OFFSET UNITYSDK_OFFSET(0x96C1550)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETSCORE_OFFSET UNITYSDK_OFFSET(0x96C1140)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_SET_PLAYERINFO_OFFSET UNITYSDK_OFFSET(0x96C2450)
#define RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x96C2430)

namespace RPG::Client
{
	inline static constexpr unsigned int FightFestScorePhaseExtraData_TypeDefinitionIndex = 52094;

	class FightFestScorePhaseExtraData : public ::System::Object
	{
	public:
		::RPG::Client::FightFestPlayerInfo* _PlayerInfo_k__BackingField; // 0x10
		::RPG::GameCore::FightFestScorePhaseRow* _ScoreRow; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::FightFestScorePhaseExtraData* Create(::System::UInt32 phaseID)
		{
			return ((::RPG::Client::FightFestScorePhaseExtraData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_CREATE_OFFSET))(phaseID);
		}

		::RPG::Client::FightFestPlayerInfo* get_PlayerInfo()
		{
			return ((::RPG::Client::FightFestPlayerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_PLAYERINFO_OFFSET))(this);
		}

		::System::Void set_PlayerInfo(::RPG::Client::FightFestPlayerInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FightFestPlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_SET_PLAYERINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETSCORE_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_REWARDID_OFFSET))(this);
		}

		::System::String* get_TargetAvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARICON_OFFSET))(this);
		}

		::System::String* get_TargetAvatarMiniIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARMINIICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_TargetAvatarName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_TARGETAVATARNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_QualifyTip()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIGHTFESTSCOREPHASEEXTRADATA_GET_QUALIFYTIP_OFFSET))(this);
		}
	};
}
