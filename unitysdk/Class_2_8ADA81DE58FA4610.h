#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionChangeCurWaitTime; }

#define CLASS_2_8ADA81DE58FA4610_METHOD_2_EE5CEECBC5DF3B6C_OFFSET UNITYSDK_OFFSET(0x17D75A10)
#define CLASS_2_8ADA81DE58FA4610__CTOR_OFFSET UNITYSDK_OFFSET(0x17D759F0)

inline static constexpr unsigned int Class_2_8ADA81DE58FA4610_TypeDefinitionIndex = 34767;

class Class_2_8ADA81DE58FA4610 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionChangeCurWaitTime* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeCurWaitTime* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeCurWaitTime*))((::PBYTE)hIl2Cpp + CLASS_2_8ADA81DE58FA4610__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_EE5CEECBC5DF3B6C(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8ADA81DE58FA4610_METHOD_2_EE5CEECBC5DF3B6C_OFFSET))(this, a1, a2, a3);
	}
};
