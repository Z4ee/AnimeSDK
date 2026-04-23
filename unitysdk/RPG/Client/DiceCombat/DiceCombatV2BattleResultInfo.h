#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatV2BattleVsPlayerDisplayData; }
namespace RPG::Client::DiceCombat { class DiceCombatV2OpponentData; }
namespace RPG::Client::DiceCombat { class IDiceCombatAvatarInfo; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_ISPVE_OFFSET UNITYSDK_OFFSET(0xA147DA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA147D80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_LOCALPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA147E00)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_LOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA147DE0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_OPPONENTAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA147E80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xA147E60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA147DC0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_TEAMMATEPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA147E40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_TEAMMATEPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA147E20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_ISPVE_OFFSET UNITYSDK_OFFSET(0xA147DB0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0xA147D90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_LOCALPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA147E10)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_LOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA147DF0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_OPPONENTAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA147E90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0xA147E70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA147DD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_TEAMMATEPLAYERAVATARINFO_OFFSET UNITYSDK_OFFSET(0xA147E50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_TEAMMATEPLAYERDATA_OFFSET UNITYSDK_OFFSET(0xA147E30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA147EA0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleResultInfo_TypeDefinitionIndex = 69905;

	class DiceCombatV2BattleResultInfo : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _OpponentAvatarInfo_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* _OpponentData_k__BackingField; // 0x18
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _LocalPlayerAvatarInfo_k__BackingField; // 0x20
		::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* _TeamMatePlayerData_k__BackingField; // 0x28
		::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* _LocalPlayerData_k__BackingField; // 0x30
		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* _TeamMatePlayerAvatarInfo_k__BackingField; // 0x38
		::System::UInt32 _StageID_k__BackingField; // 0x40
		::System::Boolean _IsPve_k__BackingField; // 0x44
		::System::Boolean _IsWin_k__BackingField; // 0x45

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_ISWIN_OFFSET))(this, value);
		}

		::System::Boolean get_IsPve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_ISPVE_OFFSET))(this);
		}

		::System::Void set_IsPve(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_ISPVE_OFFSET))(this, value);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_STAGEID_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* get_LocalPlayerData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_LOCALPLAYERDATA_OFFSET))(this);
		}

		::System::Void set_LocalPlayerData(::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_LOCALPLAYERDATA_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_LocalPlayerAvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_LOCALPLAYERAVATARINFO_OFFSET))(this);
		}

		::System::Void set_LocalPlayerAvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_LOCALPLAYERAVATARINFO_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* get_TeamMatePlayerData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_TEAMMATEPLAYERDATA_OFFSET))(this);
		}

		::System::Void set_TeamMatePlayerData(::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2BattleVsPlayerDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_TEAMMATEPLAYERDATA_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_TeamMatePlayerAvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_TEAMMATEPLAYERAVATARINFO_OFFSET))(this);
		}

		::System::Void set_TeamMatePlayerAvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_TEAMMATEPLAYERAVATARINFO_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* get_OpponentData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2OpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_OPPONENTDATA_OFFSET))(this);
		}

		::System::Void set_OpponentData(::RPG::Client::DiceCombat::DiceCombatV2OpponentData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2OpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_OPPONENTDATA_OFFSET))(this, value);
		}

		::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* get_OpponentAvatarInfo()
		{
			return ((::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_GET_OPPONENTAVATARINFO_OFFSET))(this);
		}

		::System::Void set_OpponentAvatarInfo(::RPG::Client::DiceCombat::IDiceCombatAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::IDiceCombatAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLERESULTINFO_SET_OPPONENTAVATARINFO_OFFSET))(this, value);
		}
	};
}
