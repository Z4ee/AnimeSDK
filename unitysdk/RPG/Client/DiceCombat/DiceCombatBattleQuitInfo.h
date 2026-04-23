#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xA1226D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_GET_ISPVE_OFFSET UNITYSDK_OFFSET(0xA122770)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA122790)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_SET_ISPVE_OFFSET UNITYSDK_OFFSET(0xA122780)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA1227A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA122760)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattleQuitInfo_TypeDefinitionIndex = 69810;

	class DiceCombatBattleQuitInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsPVE_k__BackingField; // 0x10
		::System::UInt32 _StageID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo* Create(::System::Boolean isPVE, ::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatBattleQuitInfo*(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_CREATE_OFFSET))(isPVE, stageID);
		}

		::System::Boolean get_IsPVE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_GET_ISPVE_OFFSET))(this);
		}

		::System::Void set_IsPVE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_SET_ISPVE_OFFSET))(this, value);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEQUITINFO_SET_STAGEID_OFFSET))(this, value);
		}
	};
}
