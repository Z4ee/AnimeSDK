#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_5A47224D9FA9E33E_GET_AGGRO_OFFSET UNITYSDK_OFFSET(0x24F80)
#define STRUCT_2_5A47224D9FA9E33E_GET_HPBASE_OFFSET UNITYSDK_OFFSET(0x5580)
#define STRUCT_2_5A47224D9FA9E33E_GET_HPINHERIT_OFFSET UNITYSDK_OFFSET(0x5AF0)
#define STRUCT_2_5A47224D9FA9E33E_GET_HPSKILL_OFFSET UNITYSDK_OFFSET(0x68F0)
#define STRUCT_2_5A47224D9FA9E33E_GET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x296E0)
#define STRUCT_2_5A47224D9FA9E33E_GET_SPEEDINHERIT_OFFSET UNITYSDK_OFFSET(0x104A0)
#define STRUCT_2_5A47224D9FA9E33E_GET_SPEEDSKILL_OFFSET UNITYSDK_OFFSET(0x104B0)
#define STRUCT_2_5A47224D9FA9E33E_SET_AGGRO_OFFSET UNITYSDK_OFFSET(0x29900)
#define STRUCT_2_5A47224D9FA9E33E_SET_HPBASE_OFFSET UNITYSDK_OFFSET(0xBDC0)
#define STRUCT_2_5A47224D9FA9E33E_SET_HPINHERIT_OFFSET UNITYSDK_OFFSET(0x8D10)
#define STRUCT_2_5A47224D9FA9E33E_SET_HPSKILL_OFFSET UNITYSDK_OFFSET(0x26F0)
#define STRUCT_2_5A47224D9FA9E33E_SET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x296F0)
#define STRUCT_2_5A47224D9FA9E33E_SET_SPEEDINHERIT_OFFSET UNITYSDK_OFFSET(0xB390)
#define STRUCT_2_5A47224D9FA9E33E_SET_SPEEDSKILL_OFFSET UNITYSDK_OFFSET(0xBA10)

inline static constexpr unsigned int Struct_2_5A47224D9FA9E33E_TypeDefinitionIndex = 47976;

struct alignas(8) Struct_2_5A47224D9FA9E33E
{
	::System::String* _HPBase_k__BackingField; // 0x10
	::System::String* _HPInherit_k__BackingField; // 0x18
	::System::UInt32 _HPSkill_k__BackingField; // 0x20
	::System::String* _SpeedBase_k__BackingField; // 0x28
	::System::String* _SpeedInherit_k__BackingField; // 0x30
	::System::UInt32 _SpeedSkill_k__BackingField; // 0x38
	::RPG::GameCore::FixPoint _Aggro_k__BackingField; // 0x40

	::System::String* get_HPBase()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_GET_HPBASE_OFFSET))(this);
	}

	::System::Void set_HPBase(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_SET_HPBASE_OFFSET))(this, value);
	}

	::System::String* get_HPInherit()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_GET_HPINHERIT_OFFSET))(this);
	}

	::System::Void set_HPInherit(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_SET_HPINHERIT_OFFSET))(this, value);
	}

	::System::UInt32 get_HPSkill()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_GET_HPSKILL_OFFSET))(this);
	}

	::System::Void set_HPSkill(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_SET_HPSKILL_OFFSET))(this, value);
	}

	::System::String* get_SpeedBase()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_GET_SPEEDBASE_OFFSET))(this);
	}

	::System::Void set_SpeedBase(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_SET_SPEEDBASE_OFFSET))(this, value);
	}

	::System::String* get_SpeedInherit()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_GET_SPEEDINHERIT_OFFSET))(this);
	}

	::System::Void set_SpeedInherit(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_SET_SPEEDINHERIT_OFFSET))(this, value);
	}

	::System::UInt32 get_SpeedSkill()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_GET_SPEEDSKILL_OFFSET))(this);
	}

	::System::Void set_SpeedSkill(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_SET_SPEEDSKILL_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_Aggro()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_GET_AGGRO_OFFSET))(this);
	}

	::System::Void set_Aggro(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_5A47224D9FA9E33E_SET_AGGRO_OFFSET))(this, value);
	}
};
