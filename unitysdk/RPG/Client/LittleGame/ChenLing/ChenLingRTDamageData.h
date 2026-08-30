#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x1AC1CFF0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_MAXDAMAGE_OFFSET UNITYSDK_OFFSET(0x1AC1D010)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_GET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x1AC1CFD0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0x1AC1D000)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_MAXDAMAGE_OFFSET UNITYSDK_OFFSET(0x1AC1D020)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA_SET_SOLDIERID_OFFSET UNITYSDK_OFFSET(0x1AC1CFE0)
#define RPG_CLIENT_LITTLEGAME_CHENLING_CHENLINGRTDAMAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC1CC90)

namespace RPG::Client::LittleGame::ChenLing
{
	inline static constexpr unsigned int ChenLingRTDamageData_TypeDefinitionIndex = 77358;

	class ChenLingRTDamageData : public ::System::Object
	{
	public:
		::System::Single _Damage_k__BackingField; // 0x10
		::System::Single _MaxDamage_k__BackingField; // 0x14
		::System::UInt32 _SoldierID_k__BackingField; // 0x18

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
