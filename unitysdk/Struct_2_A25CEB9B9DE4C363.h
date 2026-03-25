#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class ModifierBehaviorVisual; }

#define STRUCT_2_A25CEB9B9DE4C363_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x148F640)
#define STRUCT_2_A25CEB9B9DE4C363_METHOD_2_D106F72D44DD6D80_OFFSET UNITYSDK_OFFSET(0x148F630)
#define STRUCT_2_A25CEB9B9DE4C363_METHOD_2_E939AFF9C25C8841_OFFSET UNITYSDK_OFFSET(0x148F690)

inline static constexpr unsigned int Struct_2_A25CEB9B9DE4C363_TypeDefinitionIndex = 45783;

struct alignas(4) Struct_2_A25CEB9B9DE4C363
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C

	::System::Single Method_2_D106F72D44DD6D80(::System::Single a1, ::RPG::GameCore::ModifierBehaviorVisual* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + STRUCT_2_A25CEB9B9DE4C363_METHOD_2_D106F72D44DD6D80_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A25CEB9B9DE4C363_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_E939AFF9C25C8841(::RPG::GameCore::ModifierBehaviorVisual* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + STRUCT_2_A25CEB9B9DE4C363_METHOD_2_E939AFF9C25C8841_OFFSET))(this, a1);
	}
};
