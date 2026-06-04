#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionRemoveBuff; }

#define CLASS_2_8473B07624DA65C4_METHOD_2_99C60268198B41B0_OFFSET UNITYSDK_OFFSET(0x18B665F0)
#define CLASS_2_8473B07624DA65C4__CTOR_OFFSET UNITYSDK_OFFSET(0x18B665E0)

inline static constexpr unsigned int Class_2_8473B07624DA65C4_TypeDefinitionIndex = 35062;

class Class_2_8473B07624DA65C4 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionRemoveBuff* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionRemoveBuff* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionRemoveBuff*))((::PBYTE)hIl2Cpp + CLASS_2_8473B07624DA65C4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_99C60268198B41B0(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8473B07624DA65C4_METHOD_2_99C60268198B41B0_OFFSET))(this, a1, a2, a3);
	}
};
