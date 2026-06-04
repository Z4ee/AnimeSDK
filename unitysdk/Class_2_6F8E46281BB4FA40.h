#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionPropertyModifier; }

#define CLASS_2_6F8E46281BB4FA40_METHOD_2_7ADD505151E3364C_OFFSET UNITYSDK_OFFSET(0x18A1E500)
#define CLASS_2_6F8E46281BB4FA40__CTOR_OFFSET UNITYSDK_OFFSET(0x18A1E4F0)

inline static constexpr unsigned int Class_2_6F8E46281BB4FA40_TypeDefinitionIndex = 35061;

class Class_2_6F8E46281BB4FA40 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionPropertyModifier* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionPropertyModifier* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionPropertyModifier*))((::PBYTE)hIl2Cpp + CLASS_2_6F8E46281BB4FA40__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_7ADD505151E3364C(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_6F8E46281BB4FA40_METHOD_2_7ADD505151E3364C_OFFSET))(this, a1, a2, a3);
	}
};
