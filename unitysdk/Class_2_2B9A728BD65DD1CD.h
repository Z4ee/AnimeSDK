#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionEnableNaughtyTargetLockCat; }

#define CLASS_2_2B9A728BD65DD1CD_METHOD_2_3C4847F04CFBA051_OFFSET UNITYSDK_OFFSET(0x17C82770)
#define CLASS_2_2B9A728BD65DD1CD__CTOR_OFFSET UNITYSDK_OFFSET(0x17C82760)

inline static constexpr unsigned int Class_2_2B9A728BD65DD1CD_TypeDefinitionIndex = 34761;

class Class_2_2B9A728BD65DD1CD : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* Field_2_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionEnableNaughtyTargetLockCat*))((::PBYTE)hIl2Cpp + CLASS_2_2B9A728BD65DD1CD__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C4847F04CFBA051(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2B9A728BD65DD1CD_METHOD_2_3C4847F04CFBA051_OFFSET))(this, a1, a2, a3);
	}
};
