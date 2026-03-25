#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_8276302FFC710853_GET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define STRUCT_2_8276302FFC710853_GET_ATTACKBASE_OFFSET UNITYSDK_OFFSET(0x5580)
#define STRUCT_2_8276302FFC710853_GET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x14EB700)
#define STRUCT_2_8276302FFC710853_GET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x14EB660)
#define STRUCT_2_8276302FFC710853_GET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x14EB680)
#define STRUCT_2_8276302FFC710853_GET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0x28E30)
#define STRUCT_2_8276302FFC710853_GET_DEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x13C40)
#define STRUCT_2_8276302FFC710853_GET_HPADD_OFFSET UNITYSDK_OFFSET(0x24F80)
#define STRUCT_2_8276302FFC710853_GET_HPBASE_OFFSET UNITYSDK_OFFSET(0x104B0)
#define STRUCT_2_8276302FFC710853_GET_MAXSP_OFFSET UNITYSDK_OFFSET(0x14EB720)
#define STRUCT_2_8276302FFC710853_GET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x14EB6E0)
#define STRUCT_2_8276302FFC710853_GET_RANKATTACKADD_OFFSET UNITYSDK_OFFSET(0x14EB5F0)
#define STRUCT_2_8276302FFC710853_GET_RANKATTACKBASE_OFFSET UNITYSDK_OFFSET(0x14EAFE0)
#define STRUCT_2_8276302FFC710853_GET_RANKCRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x14EB6A0)
#define STRUCT_2_8276302FFC710853_GET_RANKCRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x14EB6C0)
#define STRUCT_2_8276302FFC710853_GET_RANKDEFENCEADD_OFFSET UNITYSDK_OFFSET(0x14EB610)
#define STRUCT_2_8276302FFC710853_GET_RANKDEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x37640)
#define STRUCT_2_8276302FFC710853_GET_RANKHPADD_OFFSET UNITYSDK_OFFSET(0x38270)
#define STRUCT_2_8276302FFC710853_GET_RANKHPBASE_OFFSET UNITYSDK_OFFSET(0x14EB620)
#define STRUCT_2_8276302FFC710853_GET_RANKSPEEDADD_OFFSET UNITYSDK_OFFSET(0x14EB640)
#define STRUCT_2_8276302FFC710853_GET_RANKSPEEDBASE_OFFSET UNITYSDK_OFFSET(0x38290)
#define STRUCT_2_8276302FFC710853_GET_SPECIALMAXSP_OFFSET UNITYSDK_OFFSET(0x14EB740)
#define STRUCT_2_8276302FFC710853_GET_SPEEDADD_OFFSET UNITYSDK_OFFSET(0x24FA0)
#define STRUCT_2_8276302FFC710853_GET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x24F90)
#define STRUCT_2_8276302FFC710853_SET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0x8D10)
#define STRUCT_2_8276302FFC710853_SET_ATTACKBASE_OFFSET UNITYSDK_OFFSET(0xBDD0)
#define STRUCT_2_8276302FFC710853_SET_BASEAGGRO_OFFSET UNITYSDK_OFFSET(0x14EB710)
#define STRUCT_2_8276302FFC710853_SET_CRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x14EB670)
#define STRUCT_2_8276302FFC710853_SET_CRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x14EB690)
#define STRUCT_2_8276302FFC710853_SET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0x28E40)
#define STRUCT_2_8276302FFC710853_SET_DEFENCEBASE_OFFSET UNITYSDK_OFFSET(0xAF80)
#define STRUCT_2_8276302FFC710853_SET_HPADD_OFFSET UNITYSDK_OFFSET(0x3C320)
#define STRUCT_2_8276302FFC710853_SET_HPBASE_OFFSET UNITYSDK_OFFSET(0xB390)
#define STRUCT_2_8276302FFC710853_SET_MAXSP_OFFSET UNITYSDK_OFFSET(0x14EB730)
#define STRUCT_2_8276302FFC710853_SET_MINIMUMFATIGUERATIO_OFFSET UNITYSDK_OFFSET(0x14EB6F0)
#define STRUCT_2_8276302FFC710853_SET_RANKATTACKADD_OFFSET UNITYSDK_OFFSET(0x14EB600)
#define STRUCT_2_8276302FFC710853_SET_RANKATTACKBASE_OFFSET UNITYSDK_OFFSET(0x14EB5E0)
#define STRUCT_2_8276302FFC710853_SET_RANKCRITICALCHANCE_OFFSET UNITYSDK_OFFSET(0x14EB6B0)
#define STRUCT_2_8276302FFC710853_SET_RANKCRITICALDAMAGE_OFFSET UNITYSDK_OFFSET(0x14EB6D0)
#define STRUCT_2_8276302FFC710853_SET_RANKDEFENCEADD_OFFSET UNITYSDK_OFFSET(0x5AFC0)
#define STRUCT_2_8276302FFC710853_SET_RANKDEFENCEBASE_OFFSET UNITYSDK_OFFSET(0x37650)
#define STRUCT_2_8276302FFC710853_SET_RANKHPADD_OFFSET UNITYSDK_OFFSET(0x38280)
#define STRUCT_2_8276302FFC710853_SET_RANKHPBASE_OFFSET UNITYSDK_OFFSET(0x14EB630)
#define STRUCT_2_8276302FFC710853_SET_RANKSPEEDADD_OFFSET UNITYSDK_OFFSET(0x14EB650)
#define STRUCT_2_8276302FFC710853_SET_RANKSPEEDBASE_OFFSET UNITYSDK_OFFSET(0x382A0)
#define STRUCT_2_8276302FFC710853_SET_SPECIALMAXSP_OFFSET UNITYSDK_OFFSET(0x14EB750)
#define STRUCT_2_8276302FFC710853_SET_SPEEDADD_OFFSET UNITYSDK_OFFSET(0x5A8B0)
#define STRUCT_2_8276302FFC710853_SET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x29050)

inline static constexpr unsigned int Struct_2_8276302FFC710853_TypeDefinitionIndex = 41985;

struct alignas(8) Struct_2_8276302FFC710853
{
	::RPG::GameCore::FixPoint _AttackBase_k__BackingField; // 0x10
	::RPG::GameCore::FixPoint _AttackAdd_k__BackingField; // 0x18
	::RPG::GameCore::FixPoint _DefenceBase_k__BackingField; // 0x20
	::RPG::GameCore::FixPoint _DefenceAdd_k__BackingField; // 0x28
	::RPG::GameCore::FixPoint _HPBase_k__BackingField; // 0x30
	::RPG::GameCore::FixPoint _HPAdd_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _SpeedBase_k__BackingField; // 0x40
	::RPG::GameCore::FixPoint _SpeedAdd_k__BackingField; // 0x48
	::RPG::GameCore::FixPoint _RankAttackBase_k__BackingField; // 0x50
	::RPG::GameCore::FixPoint _RankAttackAdd_k__BackingField; // 0x58
	::RPG::GameCore::FixPoint _RankDefenceBase_k__BackingField; // 0x60
	::RPG::GameCore::FixPoint _RankDefenceAdd_k__BackingField; // 0x68
	::RPG::GameCore::FixPoint _RankHPBase_k__BackingField; // 0x70
	::RPG::GameCore::FixPoint _RankHPAdd_k__BackingField; // 0x78
	::RPG::GameCore::FixPoint _RankSpeedBase_k__BackingField; // 0x80
	::RPG::GameCore::FixPoint _RankSpeedAdd_k__BackingField; // 0x88
	::RPG::GameCore::FixPoint _CriticalChance_k__BackingField; // 0x90
	::RPG::GameCore::FixPoint _CriticalDamage_k__BackingField; // 0x98
	::RPG::GameCore::FixPoint _RankCriticalChance_k__BackingField; // 0xA0
	::RPG::GameCore::FixPoint _RankCriticalDamage_k__BackingField; // 0xA8
	::RPG::GameCore::FixPoint _MinimumFatigueRatio_k__BackingField; // 0xB0
	::RPG::GameCore::FixPoint _BaseAggro_k__BackingField; // 0xB8
	::RPG::GameCore::FixPoint _MaxSP_k__BackingField; // 0xC0
	::RPG::GameCore::FixPoint _SpecialMaxSP_k__BackingField; // 0xC8

	::RPG::GameCore::FixPoint get_AttackBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_ATTACKBASE_OFFSET))(this);
	}

	::System::Void set_AttackBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_ATTACKBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_AttackAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_ATTACKADD_OFFSET))(this);
	}

	::System::Void set_AttackAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_ATTACKADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_DefenceBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_DEFENCEBASE_OFFSET))(this);
	}

	::System::Void set_DefenceBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_DEFENCEBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_DefenceAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_DEFENCEADD_OFFSET))(this);
	}

	::System::Void set_DefenceAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_DEFENCEADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_HPBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_HPBASE_OFFSET))(this);
	}

	::System::Void set_HPBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_HPBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_HPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_HPADD_OFFSET))(this);
	}

	::System::Void set_HPAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_HPADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SpeedBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_SPEEDBASE_OFFSET))(this);
	}

	::System::Void set_SpeedBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_SPEEDBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SpeedAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_SPEEDADD_OFFSET))(this);
	}

	::System::Void set_SpeedAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_SPEEDADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankAttackBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKATTACKBASE_OFFSET))(this);
	}

	::System::Void set_RankAttackBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKATTACKBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankAttackAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKATTACKADD_OFFSET))(this);
	}

	::System::Void set_RankAttackAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKATTACKADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankDefenceBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKDEFENCEBASE_OFFSET))(this);
	}

	::System::Void set_RankDefenceBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKDEFENCEBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankDefenceAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKDEFENCEADD_OFFSET))(this);
	}

	::System::Void set_RankDefenceAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKDEFENCEADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankHPBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKHPBASE_OFFSET))(this);
	}

	::System::Void set_RankHPBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKHPBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankHPAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKHPADD_OFFSET))(this);
	}

	::System::Void set_RankHPAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKHPADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankSpeedBase()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKSPEEDBASE_OFFSET))(this);
	}

	::System::Void set_RankSpeedBase(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKSPEEDBASE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankSpeedAdd()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKSPEEDADD_OFFSET))(this);
	}

	::System::Void set_RankSpeedAdd(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKSPEEDADD_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_CriticalChance()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_CRITICALCHANCE_OFFSET))(this);
	}

	::System::Void set_CriticalChance(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_CRITICALCHANCE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_CriticalDamage()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_CRITICALDAMAGE_OFFSET))(this);
	}

	::System::Void set_CriticalDamage(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_CRITICALDAMAGE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankCriticalChance()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKCRITICALCHANCE_OFFSET))(this);
	}

	::System::Void set_RankCriticalChance(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKCRITICALCHANCE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_RankCriticalDamage()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_RANKCRITICALDAMAGE_OFFSET))(this);
	}

	::System::Void set_RankCriticalDamage(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_RANKCRITICALDAMAGE_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MinimumFatigueRatio()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_MINIMUMFATIGUERATIO_OFFSET))(this);
	}

	::System::Void set_MinimumFatigueRatio(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_MINIMUMFATIGUERATIO_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_BaseAggro()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_BASEAGGRO_OFFSET))(this);
	}

	::System::Void set_BaseAggro(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_BASEAGGRO_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_MaxSP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_MAXSP_OFFSET))(this);
	}

	::System::Void set_MaxSP(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_MAXSP_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_SpecialMaxSP()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_GET_SPECIALMAXSP_OFFSET))(this);
	}

	::System::Void set_SpecialMaxSP(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_8276302FFC710853_SET_SPECIALMAXSP_OFFSET))(this, value);
	}
};
