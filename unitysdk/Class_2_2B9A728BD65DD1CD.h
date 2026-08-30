#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionEnableNaughtyTargetLockCat; }

#define CLASS_2_2B9A728BD65DD1CD_METHOD_2_3C4847F04CFBA051_OFFSET UNITYSDK_OFFSET(0x1C0D8800)
#define CLASS_2_2B9A728BD65DD1CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D87E0)

inline static constexpr unsigned int Class_2_2B9A728BD65DD1CD_TypeDefinitionIndex = 36687;

class Class_2_2B9A728BD65DD1CD : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* IGHAHBNLIJA; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + CLASS_2_2B9A728BD65DD1CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C4847F04CFBA051(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B9A728BD65DD1CD_METHOD_2_3C4847F04CFBA051_OFFSET))(this, a1, a2, a3);
	}
};
