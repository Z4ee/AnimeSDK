#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionEnableTargetLockCat; }

#define CLASS_2_233C25AA6829F8DF_METHOD_2_126643199A9CA1E8_OFFSET UNITYSDK_OFFSET(0x1C1CF970)
#define CLASS_2_233C25AA6829F8DF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CF960)

inline static constexpr unsigned int Class_2_233C25AA6829F8DF_TypeDefinitionIndex = 36685;

class Class_2_233C25AA6829F8DF : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionEnableTargetLockCat* IGHAHBNLIJA; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionEnableTargetLockCat* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableTargetLockCat*))((::PBYTE)hIl2Cpp + CLASS_2_233C25AA6829F8DF__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_126643199A9CA1E8(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_233C25AA6829F8DF_METHOD_2_126643199A9CA1E8_OFFSET))(this, a1, a2, a3);
	}
};
