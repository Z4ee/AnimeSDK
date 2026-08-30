#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E559374AC4E5AD13.h"

class Class_2_21AD365C113DC484;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionTransportToFrontRandomCat; }

#define CLASS_2_3E476FC43BB28251_METHOD_2_48F50E22E4D65488_OFFSET UNITYSDK_OFFSET(0x1C24BF10)
#define CLASS_2_3E476FC43BB28251_METHOD_2_F165A5496F665F62_OFFSET UNITYSDK_OFFSET(0x1C24B950)
#define CLASS_2_3E476FC43BB28251__CTOR_OFFSET UNITYSDK_OFFSET(0x1C24B940)

inline static constexpr unsigned int Class_2_3E476FC43BB28251_TypeDefinitionIndex = 36711;

class Class_2_3E476FC43BB28251 : public ::Class_1_E559374AC4E5AD13
{
public:
	::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat* IKGOJNHMOKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E476FC43BB28251__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_2_F165A5496F665F62(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Boolean(*)(::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_3E476FC43BB28251_METHOD_2_F165A5496F665F62_OFFSET))(a1, a2);
	}

	::System::Void Method_2_48F50E22E4D65488(::Class_2_21AD365C113DC484* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_21AD365C113DC484*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3E476FC43BB28251_METHOD_2_48F50E22E4D65488_OFFSET))(this, a1, a2, a3);
	}
};
