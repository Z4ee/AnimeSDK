#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_26684305CEECE64E.h"

class Class_2_3ABA989E5AECB261;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceActionTransportToFrontRandomCat; }

#define CLASS_2_3E476FC43BB28251_METHOD_2_00F33AB9FCC0BDF0_OFFSET UNITYSDK_OFFSET(0x165B40C0)
#define CLASS_2_3E476FC43BB28251_METHOD_2_48F50E22E4D65488_OFFSET UNITYSDK_OFFSET(0x165B4500)
#define CLASS_2_3E476FC43BB28251__CTOR_OFFSET UNITYSDK_OFFSET(0x165AD120)

inline static constexpr unsigned int Class_2_3E476FC43BB28251_TypeDefinitionIndex = 29051;

class Class_2_3E476FC43BB28251 : public ::Class_1_26684305CEECE64E
{
public:
	::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E476FC43BB28251__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_2_00F33AB9FCC0BDF0(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2)
	{
		return ((::System::Boolean(*)(::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_2_3E476FC43BB28251_METHOD_2_00F33AB9FCC0BDF0_OFFSET))(a1, a2);
	}

	::System::Void Method_2_48F50E22E4D65488(::Class_2_3ABA989E5AECB261* a1, ::Class_2_F3C45F1FC7349B6E* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3ABA989E5AECB261*, ::Class_2_F3C45F1FC7349B6E*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3E476FC43BB28251_METHOD_2_48F50E22E4D65488_OFFSET))(this, a1, a2, a3);
	}
};
