#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2Stage.h"
#include "unitysdk/RPG/Client/DiceCombat/DiceCombatV2StageState.h"
#include "unitysdk/RPG/Client/TextID.h"

namespace RPG::Client::DiceCombat { class DiceCombatConfigAvatarInfo; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTAIGROUPID_OFFSET UNITYSDK_OFFSET(0xA156430)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTAVATARID_OFFSET UNITYSDK_OFFSET(0xA1563F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0xA156410)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTICONPATH_OFFSET UNITYSDK_OFFSET(0xA156390)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTNAME_OFFSET UNITYSDK_OFFSET(0xA1563D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0xA1563B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xA156490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_PRESETID_OFFSET UNITYSDK_OFFSET(0xA156470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_PRESETPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA156770)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0xA156450)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_SHOWINSTAGESELECTPAGE_OFFSET UNITYSDK_OFFSET(0xA156750)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_STATE_OFFSET UNITYSDK_OFFSET(0xA156540)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTAIGROUPID_OFFSET UNITYSDK_OFFSET(0xA156440)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTAVATARID_OFFSET UNITYSDK_OFFSET(0xA156400)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0xA156420)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTICONPATH_OFFSET UNITYSDK_OFFSET(0xA1563A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTNAME_OFFSET UNITYSDK_OFFSET(0xA1563E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTPORTRAITPATH_OFFSET UNITYSDK_OFFSET(0xA1563C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_PRESETID_OFFSET UNITYSDK_OFFSET(0xA156480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_PRESETPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA156780)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0xA156460)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_SHOWINSTAGESELECTPAGE_OFFSET UNITYSDK_OFFSET(0xA156760)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0xA156790)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvEStage_TypeDefinitionIndex = 69935;

	class DiceCombatV2PvEStage : public ::RPG::Client::DiceCombat::DiceCombatV2Stage
	{
	public:
		::System::String* _BotIconPath_k__BackingField; // 0x70
		::System::String* _BotPortraitPath_k__BackingField; // 0x78
		::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo* _PresetPlayerAvatarInfo_k__BackingField; // 0x80
		::System::Boolean _ShowInStageSelectPage_k__BackingField; // 0x88
		::System::UInt32 _BotAIGroupID_k__BackingField; // 0x8C
		::System::UInt32 _BotAvatarLevel_k__BackingField; // 0x90
		::System::UInt32 _BotAvatarID_k__BackingField; // 0x94
		::RPG::Client::TextID _BotName_k__BackingField; // 0x98
		::System::UInt32 _RewardID_k__BackingField; // 0xA8
		::System::UInt32 _PresetID_k__BackingField; // 0xAC

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE__CTOR_OFFSET))(this, id);
		}

		::System::String* get_BotIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTICONPATH_OFFSET))(this);
		}

		::System::Void set_BotIconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTICONPATH_OFFSET))(this, value);
		}

		::System::String* get_BotPortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTPORTRAITPATH_OFFSET))(this);
		}

		::System::Void set_BotPortraitPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTPORTRAITPATH_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_BotName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTNAME_OFFSET))(this);
		}

		::System::Void set_BotName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_BotAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTAVATARID_OFFSET))(this);
		}

		::System::Void set_BotAvatarID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTAVATARID_OFFSET))(this, value);
		}

		::System::UInt32 get_BotAvatarLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTAVATARLEVEL_OFFSET))(this);
		}

		::System::Void set_BotAvatarLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTAVATARLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_BotAIGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_BOTAIGROUPID_OFFSET))(this);
		}

		::System::Void set_BotAIGroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_BOTAIGROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_REWARDID_OFFSET))(this, value);
		}

		::System::UInt32 get_PresetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_PRESETID_OFFSET))(this);
		}

		::System::Void set_PresetID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_PRESETID_OFFSET))(this, value);
		}

		::System::Boolean get_IsRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_ISREWARDTAKEN_OFFSET))(this);
		}

		::RPG::Client::DiceCombat::DiceCombatV2StageState get_State()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2StageState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_ShowInStageSelectPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_SHOWINSTAGESELECTPAGE_OFFSET))(this);
		}

		::System::Void set_ShowInStageSelectPage(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_SHOWINSTAGESELECTPAGE_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo* get_PresetPlayerAvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_GET_PRESETPLAYERAVATARINFO_OFFSET))(this);
		}

		::System::Void set_PresetPlayerAvatarInfo(::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatConfigAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVESTAGE_SET_PRESETPLAYERAVATARINFO_OFFSET))(this, value);
		}
	};
}
