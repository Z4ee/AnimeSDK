#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatBattlePlayerInfo; }
namespace RPG::Client::DiceCombat { class DiceCombatV2PvEStage; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_CREATEPVELOCALPLAYER_OFFSET UNITYSDK_OFFSET(0xA148370)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_CREATEPVETEAMMATEPLAYER_1_OFFSET UNITYSDK_OFFSET(0xA148620)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_CREATEPVETEAMMATEPLAYER_OFFSET UNITYSDK_OFFSET(0xA148530)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_GET_NAMESTRING_OFFSET UNITYSDK_OFFSET(0xA148320)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_GET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0xA148340)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_SET_NAMESTRING_OFFSET UNITYSDK_OFFSET(0xA148330)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_SET_PORTRAITPATH_OFFSET UNITYSDK_OFFSET(0xA148350)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA148360)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleVsPlayerDisplayData_TypeDefinitionIndex = 69910;

	class DiceCombatV2BattleVsPlayerDisplayData : public ::System::Object
	{
	public:
		::System::String* _NameString_k__BackingField; // 0x10
		::System::String* _PortraitPath_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA__CTOR_OFFSET))(this);
		}

		::System::String* get_NameString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_GET_NAMESTRING_OFFSET))(this);
		}

		::System::Void set_NameString(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_SET_NAMESTRING_OFFSET))(this, value);
		}

		::System::String* get_PortraitPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_GET_PORTRAITPATH_OFFSET))(this);
		}

		::System::Void set_PortraitPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_SET_PORTRAITPATH_OFFSET))(this, value);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* CreatePveLocalPlayer()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_CREATEPVELOCALPLAYER_OFFSET))();
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* CreatePveTeamMatePlayer(::RPG::Client::DiceCombat::DiceCombatV2PvEStage* pveStage)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*(*)(::RPG::Client::DiceCombat::DiceCombatV2PvEStage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_CREATEPVETEAMMATEPLAYER_OFFSET))(pveStage);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* CreatePveTeamMatePlayer_1(::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* teamMateInfo)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*(*)(::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEVSPLAYERDISPLAYDATA_CREATEPVETEAMMATEPLAYER_1_OFFSET))(teamMateInfo);
		}
	};
}
