#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PixAir/PixAirDamageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xBE3FF40)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_DAMAGEVALUE_OFFSET UNITYSDK_OFFSET(0xBE3FF70)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xBE3FF60)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_NEWHP_OFFSET UNITYSDK_OFFSET(0xBE3FF50)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBE3FF30)
#define RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xBE3FF80)

namespace RPG::Client::LittleGame::PixAir
{
	inline static constexpr unsigned int PixAirHPChangedNotifyData_TypeDefinitionIndex = 71831;

	class PixAirHPChangedNotifyData : public ::System::Object
	{
	public:
		::System::Int32 _DamageValue_k__BackingField; // 0x10
		::System::Int32 _NewHP_k__BackingField; // 0x14
		::RPG::Client::LittleGame::PixAir::PixAirDamageType _DamageType_k__BackingField; // 0x18
		::System::Int32 _RuntimeID_k__BackingField; // 0x1C
		::System::Int32 _MaxHP_k__BackingField; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::LittleGame::PixAir::PixAirDamageType a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::LittleGame::PixAir::PixAirDamageType, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_RuntimeID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_RUNTIMEID_OFFSET))(this);
		}

		::RPG::Client::LittleGame::PixAir::PixAirDamageType get_DamageType()
		{
			return ((::RPG::Client::LittleGame::PixAir::PixAirDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_DAMAGETYPE_OFFSET))(this);
		}

		::System::Int32 get_NewHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_NEWHP_OFFSET))(this);
		}

		::System::Int32 get_MaxHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_MAXHP_OFFSET))(this);
		}

		::System::Int32 get_DamageValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_PIXAIR_PIXAIRHPCHANGEDNOTIFYDATA_GET_DAMAGEVALUE_OFFSET))(this);
		}
	};
}
