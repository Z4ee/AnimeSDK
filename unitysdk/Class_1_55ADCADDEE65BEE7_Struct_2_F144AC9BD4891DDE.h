#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class AnimationZone; }

#define CLASS_1_55ADCADDEE65BEE7_STRUCT_2_F144AC9BD4891DDE_METHOD_2_FC5C2DBF9CC6D6D9_OFFSET UNITYSDK_OFFSET(0x3AE4320)
#define CLASS_1_55ADCADDEE65BEE7_STRUCT_2_F144AC9BD4891DDE__CTOR_OFFSET UNITYSDK_OFFSET(0x3A30520)

inline static constexpr unsigned int Class_1_55ADCADDEE65BEE7_Struct_2_F144AC9BD4891DDE_TypeDefinitionIndex = 56103;

struct alignas(4) Class_1_55ADCADDEE65BEE7_Struct_2_F144AC9BD4891DDE
{
	::System::Int32 EAJBNHGHPNM; // 0x10
	::System::Single LGJKMHKINMD; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_55ADCADDEE65BEE7_STRUCT_2_F144AC9BD4891DDE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_FC5C2DBF9CC6D6D9(::RPG::GameCore::AnimationZone* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnimationZone*))((::PBYTE)hIl2Cpp + CLASS_1_55ADCADDEE65BEE7_STRUCT_2_F144AC9BD4891DDE_METHOD_2_FC5C2DBF9CC6D6D9_OFFSET))(this, a1);
	}
};
