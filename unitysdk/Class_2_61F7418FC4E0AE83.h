#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionChangeCurSectionNormalCell; }

#define CLASS_2_61F7418FC4E0AE83_METHOD_2_03B70CCB3BA1FD4A_OFFSET UNITYSDK_OFFSET(0x189907F0)
#define CLASS_2_61F7418FC4E0AE83__CTOR_OFFSET UNITYSDK_OFFSET(0x189907E0)

inline static constexpr unsigned int Class_2_61F7418FC4E0AE83_TypeDefinitionIndex = 35049;

class Class_2_61F7418FC4E0AE83 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell*))((::PBYTE)hIl2Cpp + CLASS_2_61F7418FC4E0AE83__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_03B70CCB3BA1FD4A(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_61F7418FC4E0AE83_METHOD_2_03B70CCB3BA1FD4A_OFFSET))(this, a1, a2, a3);
	}
};
