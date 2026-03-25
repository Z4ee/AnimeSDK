#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class AnimationZone; }

#define CLASS_1_9B196C765A4A7B45_STRUCT_2_F144AC9BD4891DDE_METHOD_2_FC5C2DBF9CC6D6D9_OFFSET UNITYSDK_OFFSET(0x1490BD0)
#define CLASS_1_9B196C765A4A7B45_STRUCT_2_F144AC9BD4891DDE__CTOR_OFFSET UNITYSDK_OFFSET(0x7F5F0)

inline static constexpr unsigned int Class_1_9B196C765A4A7B45_Struct_2_F144AC9BD4891DDE_TypeDefinitionIndex = 44821;

struct alignas(4) Class_1_9B196C765A4A7B45_Struct_2_F144AC9BD4891DDE
{
	::System::Int32 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9B196C765A4A7B45_STRUCT_2_F144AC9BD4891DDE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_FC5C2DBF9CC6D6D9(::RPG::GameCore::AnimationZone* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AnimationZone*))((::PBYTE)hIl2Cpp + CLASS_1_9B196C765A4A7B45_STRUCT_2_F144AC9BD4891DDE_METHOD_2_FC5C2DBF9CC6D6D9_OFFSET))(this, a1);
	}
};
