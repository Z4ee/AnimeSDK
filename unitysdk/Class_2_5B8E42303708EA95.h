#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionApplyMoveStateInGridMoveDirection; }

#define CLASS_2_5B8E42303708EA95_METHOD_2_F74BC6092622B2EE_OFFSET UNITYSDK_OFFSET(0x13ED87C0)
#define CLASS_2_5B8E42303708EA95__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED87B0)

inline static constexpr unsigned int Class_2_5B8E42303708EA95_TypeDefinitionIndex = 35829;

class Class_2_5B8E42303708EA95 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionApplyMoveStateInGridMoveDirection*))((::PBYTE)hIl2Cpp + CLASS_2_5B8E42303708EA95__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_F74BC6092622B2EE(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5B8E42303708EA95_METHOD_2_F74BC6092622B2EE_OFFSET))(this, a1, a2, a3);
	}
};
