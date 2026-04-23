#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0xA684240)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_MAXDAMAGE_OFFSET UNITYSDK_OFFSET(0xA684260)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xA684220)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0xA684250)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_MAXDAMAGE_OFFSET UNITYSDK_OFFSET(0xA684270)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xA684230)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA683F00)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRTDamageData_TypeDefinitionIndex = 71327;

	class ChenLingRTDamageData : public ::System::Object
	{
	public:
		::System::Single _MaxDamage_k__BackingField; // 0x10
		::System::Single _Damage_k__BackingField; // 0x14
		::System::UInt32 _SoldierID_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 soldierID, ::System::Single damage, ::System::Single maxDamage)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA__CTOR_OFFSET))(this, soldierID, damage, maxDamage);
		}

		::System::UInt32 get_SoldierID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_SOLDIERID_OFFSET))(this);
		}

		::System::Void set_SoldierID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_SOLDIERID_OFFSET))(this, value);
		}

		::System::Single get_Damage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_DAMAGE_OFFSET))(this);
		}

		::System::Void set_Damage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_DAMAGE_OFFSET))(this, value);
		}

		::System::Single get_MaxDamage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_MAXDAMAGE_OFFSET))(this);
		}

		::System::Void set_MaxDamage(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_MAXDAMAGE_OFFSET))(this, value);
		}
	};
}
