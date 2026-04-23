#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_2_843468DEB2C89684;
namespace RPG::GameCore { class DiceCombatPredicateConfig_ModifierAdditivePropertyCompare; }

#define CLASS_3_47339E08CB19B8F6_METHOD_3_B556EADFE34BD60F_OFFSET UNITYSDK_OFFSET(0x17C3B8D0)
#define CLASS_3_47339E08CB19B8F6__CTOR_OFFSET UNITYSDK_OFFSET(0x17C3B8B0)

inline static constexpr unsigned int Class_3_47339E08CB19B8F6_TypeDefinitionIndex = 34111;

class Class_3_47339E08CB19B8F6 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare* Field_3_0; // 0x30
	::Class_2_843468DEB2C89684* Field_3_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare* a1, ::Class_2_843468DEB2C89684* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*, ::Class_2_843468DEB2C89684*))((::PBYTE)hIl2Cpp + CLASS_3_47339E08CB19B8F6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_B556EADFE34BD60F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_47339E08CB19B8F6_METHOD_3_B556EADFE34BD60F_OFFSET))(this);
	}
};
