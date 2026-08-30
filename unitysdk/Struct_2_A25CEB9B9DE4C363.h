#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class ModifierBehaviorVisual; }

#define STRUCT_2_A25CEB9B9DE4C363_METHOD_2_06D28953BC3F3ADA_OFFSET UNITYSDK_OFFSET(0x8EC80)
#define STRUCT_2_A25CEB9B9DE4C363_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8EC30)
#define STRUCT_2_A25CEB9B9DE4C363_METHOD_2_D106F72D44DD6D80_OFFSET UNITYSDK_OFFSET(0x8EC20)

inline static constexpr unsigned int Struct_2_A25CEB9B9DE4C363_TypeDefinitionIndex = 57073;

struct alignas(4) Struct_2_A25CEB9B9DE4C363
{
	::System::Single PIDMDPCMHKE; // 0x10
	::System::Single MHHIPFFPKBP; // 0x14
	::System::Int32 CEFFDPAOGAA; // 0x18
	::System::Single NJEPANHBDNB; // 0x1C

	::System::Single Method_2_D106F72D44DD6D80(::System::Single a1, ::RPG::GameCore::ModifierBehaviorVisual* a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + STRUCT_2_A25CEB9B9DE4C363_METHOD_2_D106F72D44DD6D80_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_A25CEB9B9DE4C363_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_06D28953BC3F3ADA(::RPG::GameCore::ModifierBehaviorVisual* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*))((::PBYTE)hIl2Cpp + STRUCT_2_A25CEB9B9DE4C363_METHOD_2_06D28953BC3F3ADA_OFFSET))(this, a1);
	}
};
