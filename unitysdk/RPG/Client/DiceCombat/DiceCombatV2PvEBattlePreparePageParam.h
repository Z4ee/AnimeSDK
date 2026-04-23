#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2BattleVsPlayerDisplayData; }
namespace RPG::Client::DiceCombat { class DiceCombatV2OpponentData; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_CREATE_OFFSET UNITYSDK_OFFSET(0xA156180)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_LOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA1560C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_OPPONENTAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA156140)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xA156120)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA156160)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA1560A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_TEAMMATEPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA156100)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_TEAMMATEPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA1560E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_LOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA1560D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_OPPONENTAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA156150)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xA156130)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xA156170)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA1560B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_TEAMMATEPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA156110)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_TEAMMATEPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA1560F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xA156090)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2PvEBattlePreparePageParam_TypeDefinitionIndex = 69960;

	class DiceCombatV2PvEBattlePreparePageParam : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* _TeamMatePlayerData_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* _LocalPlayerData_k__BackingField; // 0x18
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _TeamMatePlayerAvatarInfo_k__BackingField; // 0x20
		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* _OpponentData_k__BackingField; // 0x28
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _OpponentAvatarInfo_k__BackingField; // 0x30
		::System::Boolean _ShowImmediately_k__BackingField; // 0x38
		::System::UInt32 _StageID_k__BackingField; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_STAGEID_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* get_LocalPlayerData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_LOCALPLAYERDATA_OFFSET))(this);
		}

		::System::Void set_LocalPlayerData(::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_LOCALPLAYERDATA_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* get_TeamMatePlayerData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_TEAMMATEPLAYERDATA_OFFSET))(this);
		}

		::System::Void set_TeamMatePlayerData(::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_TEAMMATEPLAYERDATA_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_TeamMatePlayerAvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_TEAMMATEPLAYERAVATARINFO_OFFSET))(this);
		}

		::System::Void set_TeamMatePlayerAvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_TEAMMATEPLAYERAVATARINFO_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* get_OpponentData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2OpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_OPPONENTDATA_OFFSET))(this);
		}

		::System::Void set_OpponentData(::RPG::Client::DiceCombat::DiceCombatV2OpponentData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2OpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_OPPONENTDATA_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_OpponentAvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_OPPONENTAVATARINFO_OFFSET))(this);
		}

		::System::Void set_OpponentAvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_OPPONENTAVATARINFO_OFFSET))(this, value);
		}

		::System::Boolean get_ShowImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_GET_SHOWIMMEDIATELY_OFFSET))(this);
		}

		::System::Void set_ShowImmediately(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_SET_SHOWIMMEDIATELY_OFFSET))(this, value);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam* Create(::System::UInt32 pveStageID, ::System::Boolean showImmediately)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2PvEBattlePreparePageParam*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2PVEBATTLEPREPAREPAGEPARAM_CREATE_OFFSET))(pveStageID, showImmediately);
		}
	};
}
