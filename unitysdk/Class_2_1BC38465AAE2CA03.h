#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionPropertyModifier; }

#define CLASS_2_1BC38465AAE2CA03_METHOD_2_B597DF5A9D2C1747_OFFSET UNITYSDK_OFFSET(0x1C0FBAB0)
#define CLASS_2_1BC38465AAE2CA03__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0FBAA0)

inline static constexpr unsigned int Class_2_1BC38465AAE2CA03_TypeDefinitionIndex = 36704;

class Class_2_1BC38465AAE2CA03 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionPropertyModifier* JKMCCMKALOM; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionPropertyModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionPropertyModifier*))((::PBYTE)hIl2Cpp + CLASS_2_1BC38465AAE2CA03__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B597DF5A9D2C1747(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_1BC38465AAE2CA03_METHOD_2_B597DF5A9D2C1747_OFFSET))(this, a1, a2, a3);
	}
};
