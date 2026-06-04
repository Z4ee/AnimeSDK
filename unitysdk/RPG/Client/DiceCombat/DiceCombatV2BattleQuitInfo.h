#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xB7C6A80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_GET_ISPVE_OFFSET UNITYSDK_OFFSET(0xB7C6B20)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB7C6B40)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_SET_ISPVE_OFFSET UNITYSDK_OFFSET(0xB7C6B30)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_SET_STAGEID_OFFSET UNITYSDK_OFFSET(0xB7C6B50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xB7C6B10)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2BattleQuitInfo_TypeDefinitionIndex = 70721;

	class DiceCombatV2BattleQuitInfo : public ::System::Object
	{
	public:
		::System::UInt32 _StageID_k__BackingField; // 0x10
		::System::Boolean _IsPVE_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::DiceCombat::DiceCombatV2BattleQuitInfo* Create(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2BattleQuitInfo*(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_CREATE_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsPVE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_GET_ISPVE_OFFSET))(this);
		}

		::System::Void set_IsPVE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_SET_ISPVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_GET_STAGEID_OFFSET))(this);
		}

		::System::Void set_StageID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLEQUITINFO_SET_STAGEID_OFFSET))(this, a1);
		}
	};
}
