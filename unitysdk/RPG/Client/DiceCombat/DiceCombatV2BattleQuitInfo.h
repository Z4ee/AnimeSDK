#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xA147CA0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_GET_ISPVE_OFFSET UNITYSDK_OFFSET(0xA147D40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA147D60)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_SET_ISPVE_OFFSET UNITYSDK_OFFSET(0xA147D50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xA147D70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA147D30)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleQuitInfo_TypeDefinitionIndex = 69909;

	class DiceCombatV2BattleQuitInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsPVE_k__BackingField; // 0x10
		::System::UInt32 _StageID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BattleQuitInfo* Create(::System::Boolean isPVE, ::System::UInt32 stageID)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleQuitInfo*(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_CREATE_OFFSET))(isPVE, stageID);
		}

		::System::Boolean get_IsPVE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_GET_ISPVE_OFFSET))(this);
		}

		::System::Void set_IsPVE(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_SET_ISPVE_OFFSET))(this, value);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_SET_STAGEID_OFFSET))(this, value);
		}
	};
}
