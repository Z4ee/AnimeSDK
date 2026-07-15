#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionGenCurSectionWubbaboo; }

#define CLASS_2_097F27DCDF83678B_METHOD_2_B8262374A0257BB3_OFFSET UNITYSDK_OFFSET(0x18D41D80)
#define CLASS_2_097F27DCDF83678B__CTOR_OFFSET UNITYSDK_OFFSET(0x18D41D70)

inline static constexpr unsigned int Class_2_097F27DCDF83678B_TypeDefinitionIndex = 35818;

class Class_2_097F27DCDF83678B : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionGenCurSectionWubbaboo*))((::PBYTE)hIl2Cpp + CLASS_2_097F27DCDF83678B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_B8262374A0257BB3(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_097F27DCDF83678B_METHOD_2_B8262374A0257BB3_OFFSET))(this, a1, a2, a3);
	}
};
