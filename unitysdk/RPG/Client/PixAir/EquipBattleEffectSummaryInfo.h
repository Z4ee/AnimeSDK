#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_108;
namespace RPG::Client::LittleGame::PixAir { class PixAirEquipStatistics; }
namespace RPG::Client::PixAir { class PixAirEquipDisplayData; }
namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xDAE52E0)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xDAE5600)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_BURN_OFFSET UNITYSDK_OFFSET(0xDAE5680)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xDAE55C0)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_DAMAGE_OFFSET UNITYSDK_OFFSET(0xDAE5640)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_EQUIPDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xDAE5480)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_EQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0xDAE54A0)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xDAE55E0)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_SHIELD_OFFSET UNITYSDK_OFFSET(0xDAE5660)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_SLOTTYPE_OFFSET UNITYSDK_OFFSET(0xDAE54C0)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xDAE5620)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_BURNPOWER_OFFSET UNITYSDK_OFFSET(0xDAE5610)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_BURN_OFFSET UNITYSDK_OFFSET(0xDAE5690)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_DAMAGEPOWER_OFFSET UNITYSDK_OFFSET(0xDAE55D0)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_DAMAGE_OFFSET UNITYSDK_OFFSET(0xDAE5650)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_EQUIPDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xDAE5490)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_EQUIPINSTANCE_OFFSET UNITYSDK_OFFSET(0xDAE54B0)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_SHIELDPOWER_OFFSET UNITYSDK_OFFSET(0xDAE55F0)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_SHIELD_OFFSET UNITYSDK_OFFSET(0xDAE5670)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_USECOUNT_OFFSET UNITYSDK_OFFSET(0xDAE5630)
#define RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE53D0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int EquipBattleEffectSummaryInfo_TypeDefinitionIndex = 78839;

	class EquipBattleEffectSummaryInfo : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirEquipDisplayData* _EquipDisplayData_k__BackingField; // 0x10
		::RPG::Client::PixAir::PixAirEquipInstance* _EquipInstance_k__BackingField; // 0x18
		::System::UInt32 _DamagePower_k__BackingField; // 0x20
		::System::UInt32 _Shield_k__BackingField; // 0x24
		::System::UInt32 _ShieldPower_k__BackingField; // 0x28
		::System::UInt32 _BurnPower_k__BackingField; // 0x2C
		::System::UInt32 _Burn_k__BackingField; // 0x30
		::System::UInt32 _Damage_k__BackingField; // 0x34
		::System::Int32 _UseCount_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::EquipBattleEffectSummaryInfo* Create(::Class_1_43BD383C98B4C0C5_108* a1, ::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics* a2)
		{
			return ((::RPG::Client::PixAir::EquipBattleEffectSummaryInfo*(*)(::Class_1_43BD383C98B4C0C5_108*, ::RPG::Client::LittleGame::PixAir::PixAirEquipStatistics*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_CREATE_OFFSET))(a1, a2);
		}

		::RPG::Client::PixAir::PixAirEquipDisplayData* get_EquipDisplayData()
		{
			return ((::RPG::Client::PixAir::PixAirEquipDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_EQUIPDISPLAYDATA_OFFSET))(this);
		}

		::System::Void set_EquipDisplayData(::RPG::Client::PixAir::PixAirEquipDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_EQUIPDISPLAYDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PixAir::PixAirEquipInstance* get_EquipInstance()
		{
			return ((::RPG::Client::PixAir::PixAirEquipInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_EQUIPINSTANCE_OFFSET))(this);
		}

		::System::Void set_EquipInstance(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_EQUIPINSTANCE_OFFSET))(this, a1);
		}

		::RPG::GameCore::PixAirSlotType get_SlotType()
		{
			return ((::RPG::GameCore::PixAirSlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_SLOTTYPE_OFFSET))(this);
		}

		::System::UInt32 get_DamagePower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_DAMAGEPOWER_OFFSET))(this);
		}

		::System::Void set_DamagePower(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_DAMAGEPOWER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ShieldPower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_SHIELDPOWER_OFFSET))(this);
		}

		::System::Void set_ShieldPower(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_SHIELDPOWER_OFFSET))(this, a1);
		}

		::System::UInt32 get_BurnPower()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_BURNPOWER_OFFSET))(this);
		}

		::System::Void set_BurnPower(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_BURNPOWER_OFFSET))(this, a1);
		}

		::System::Int32 get_UseCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_USECOUNT_OFFSET))(this);
		}

		::System::Void set_UseCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_USECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_Damage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_DAMAGE_OFFSET))(this);
		}

		::System::Void set_Damage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_DAMAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Shield()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_SHIELD_OFFSET))(this);
		}

		::System::Void set_Shield(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_SHIELD_OFFSET))(this, a1);
		}

		::System::UInt32 get_Burn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_GET_BURN_OFFSET))(this);
		}

		::System::Void set_Burn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_EQUIPBATTLEEFFECTSUMMARYINFO_SET_BURN_OFFSET))(this, a1);
		}
	};
}
