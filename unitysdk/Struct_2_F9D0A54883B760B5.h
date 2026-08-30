#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F9D0A54883B760B5_GET_AGGRO_OFFSET UNITYSDK_OFFSET(0xF3CFA0)
#define STRUCT_2_F9D0A54883B760B5_GET_HPBASE_OFFSET UNITYSDK_OFFSET(0x161E0)
#define STRUCT_2_F9D0A54883B760B5_GET_HPINHERIT_OFFSET UNITYSDK_OFFSET(0x7846F0)
#define STRUCT_2_F9D0A54883B760B5_GET_HPSKILL_OFFSET UNITYSDK_OFFSET(0x7845E0)
#define STRUCT_2_F9D0A54883B760B5_GET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x82D660)
#define STRUCT_2_F9D0A54883B760B5_GET_SPEEDINHERIT_OFFSET UNITYSDK_OFFSET(0xF3AF80)
#define STRUCT_2_F9D0A54883B760B5_GET_SPEEDSKILL_OFFSET UNITYSDK_OFFSET(0xFD40)
#define STRUCT_2_F9D0A54883B760B5_SET_AGGRO_OFFSET UNITYSDK_OFFSET(0x3A13AA0)
#define STRUCT_2_F9D0A54883B760B5_SET_HPBASE_OFFSET UNITYSDK_OFFSET(0x16050)
#define STRUCT_2_F9D0A54883B760B5_SET_HPINHERIT_OFFSET UNITYSDK_OFFSET(0x869800)
#define STRUCT_2_F9D0A54883B760B5_SET_HPSKILL_OFFSET UNITYSDK_OFFSET(0x3A2C790)
#define STRUCT_2_F9D0A54883B760B5_SET_SPEEDBASE_OFFSET UNITYSDK_OFFSET(0x379FAF0)
#define STRUCT_2_F9D0A54883B760B5_SET_SPEEDINHERIT_OFFSET UNITYSDK_OFFSET(0x3A13A80)
#define STRUCT_2_F9D0A54883B760B5_SET_SPEEDSKILL_OFFSET UNITYSDK_OFFSET(0x3AE8360)

inline static constexpr unsigned int Struct_2_F9D0A54883B760B5_TypeDefinitionIndex = 52265;

struct alignas(8) Struct_2_F9D0A54883B760B5
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
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_HPBASE_OFFSET))(this);
	}

	::System::Void set_HPBase(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_HPBASE_OFFSET))(this, a1);
	}

	::System::String* get_HPInherit()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_HPINHERIT_OFFSET))(this);
	}

	::System::Void set_HPInherit(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_HPINHERIT_OFFSET))(this, a1);
	}

	::System::UInt32 get_HPSkill()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_HPSKILL_OFFSET))(this);
	}

	::System::Void set_HPSkill(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_HPSKILL_OFFSET))(this, a1);
	}

	::System::String* get_SpeedBase()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_SPEEDBASE_OFFSET))(this);
	}

	::System::Void set_SpeedBase(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_SPEEDBASE_OFFSET))(this, a1);
	}

	::System::String* get_SpeedInherit()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_SPEEDINHERIT_OFFSET))(this);
	}

	::System::Void set_SpeedInherit(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_SPEEDINHERIT_OFFSET))(this, a1);
	}

	::System::UInt32 get_SpeedSkill()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_SPEEDSKILL_OFFSET))(this);
	}

	::System::Void set_SpeedSkill(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_SPEEDSKILL_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint get_Aggro()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_GET_AGGRO_OFFSET))(this);
	}

	::System::Void set_Aggro(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_F9D0A54883B760B5_SET_AGGRO_OFFSET))(this, a1);
	}
};
