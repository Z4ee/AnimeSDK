#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HPFull; }

#define CLASS_3_1530AE21C5172C19_METHOD_3_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0x1C06E7C0)
#define CLASS_3_1530AE21C5172C19__CTOR_OFFSET UNITYSDK_OFFSET(0x1C06E7A0)

inline static constexpr unsigned int Class_3_1530AE21C5172C19_TypeDefinitionIndex = 35660;

class Class_3_1530AE21C5172C19 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HPFull* BIFIHFKJMMI; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HPFull* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_1530AE21C5172C19__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1530AE21C5172C19_METHOD_3_2A887DFC7A5BB2CB_OFFSET))(this);
	}
};
