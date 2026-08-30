#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionSpawnAoeOnCurSectionRows; }

#define CLASS_2_16A8C3AD44402682_METHOD_2_0FB3B2F3B743AF5D_OFFSET UNITYSDK_OFFSET(0x196FDA90)
#define CLASS_2_16A8C3AD44402682__CTOR_OFFSET UNITYSDK_OFFSET(0x196FDA80)

inline static constexpr unsigned int Class_2_16A8C3AD44402682_TypeDefinitionIndex = 36708;

class Class_2_16A8C3AD44402682 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows* IGHAHBNLIJA; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionSpawnAoeOnCurSectionRows*))((::PBYTE)hIl2Cpp + CLASS_2_16A8C3AD44402682__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FB3B2F3B743AF5D(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_16A8C3AD44402682_METHOD_2_0FB3B2F3B743AF5D_OFFSET))(this, a1, a2, a3);
	}
};
