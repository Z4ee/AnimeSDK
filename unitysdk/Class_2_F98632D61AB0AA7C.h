#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7686EC5B8E7BB729.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceBuffConfig; }

#define CLASS_2_F98632D61AB0AA7C_METHOD_2_19F9DBF060737E20_OFFSET UNITYSDK_OFFSET(0x1C1CD4D0)
#define CLASS_2_F98632D61AB0AA7C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1CD570)

inline static constexpr unsigned int Class_2_F98632D61AB0AA7C_TypeDefinitionIndex = 36717;

class Class_2_F98632D61AB0AA7C : public ::Class_1_7686EC5B8E7BB729
{
public:
	::System::Void _ctor(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceBuffConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_F98632D61AB0AA7C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_F98632D61AB0AA7C* Method_2_19F9DBF060737E20(::Class_2_21AD365C113DC484* a1, ::RPG::GameCore::CakeRaceBuffConfig* a2, ::Class_2_F3C45F1FC7349B6E* a3)
	{
		return ((::Class_2_F98632D61AB0AA7C*(*)(::Class_2_21AD365C113DC484*, ::RPG::GameCore::CakeRaceBuffConfig*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_F98632D61AB0AA7C_METHOD_2_19F9DBF060737E20_OFFSET))(a1, a2, a3);
	}
};
