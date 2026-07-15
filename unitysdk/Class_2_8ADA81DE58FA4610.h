#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionChangeCurWaitTime; }

#define CLASS_2_8ADA81DE58FA4610_METHOD_2_EE5CEECBC5DF3B6C_OFFSET UNITYSDK_OFFSET(0x18D54A00)
#define CLASS_2_8ADA81DE58FA4610__CTOR_OFFSET UNITYSDK_OFFSET(0x18D549F0)

inline static constexpr unsigned int Class_2_8ADA81DE58FA4610_TypeDefinitionIndex = 35832;

class Class_2_8ADA81DE58FA4610 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionChangeCurWaitTime* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeCurWaitTime* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime*))((::PBYTE)hIl2Cpp + CLASS_2_8ADA81DE58FA4610__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE5CEECBC5DF3B6C(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8ADA81DE58FA4610_METHOD_2_EE5CEECBC5DF3B6C_OFFSET))(this, a1, a2, a3);
	}
};
