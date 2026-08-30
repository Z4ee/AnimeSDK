#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0xD4B84F0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_MAXDAMAGE_OFFSET UNITYSDK_OFFSET(0xD4B8510)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xD4B84D0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0xD4B8500)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_MAXDAMAGE_OFFSET UNITYSDK_OFFSET(0xD4B8520)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0xD4B84E0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xD4B8190)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRTDamageData_TypeDefinitionIndex = 77359;

	class ChenLingRTDamageData : public ::System::Object
	{
	public:
		::System::Single _MaxDamage_k__BackingField; // 0x10
		::System::UInt32 _SoldierID_k__BackingField; // 0x14
		::System::Single _Damage_k__BackingField; // 0x18

		::System::Void _ctor(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_SoldierID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_SOLDIERID_OFFSET))(this);
		}

		::System::Void set_SoldierID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_SOLDIERID_OFFSET))(this, a1);
		}

		::System::Single get_Damage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_DAMAGE_OFFSET))(this);
		}

		::System::Void set_Damage(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_DAMAGE_OFFSET))(this, a1);
		}

		::System::Single get_MaxDamage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_MAXDAMAGE_OFFSET))(this);
		}

		::System::Void set_MaxDamage(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_MAXDAMAGE_OFFSET))(this, a1);
		}
	};
}
