#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CustomValueCompare; }

#define CLASS_3_832C7698B237EBE4_METHOD_3_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x16733880)
#define CLASS_3_832C7698B237EBE4__CTOR_OFFSET UNITYSDK_OFFSET(0x16733860)

inline static constexpr unsigned int Class_3_832C7698B237EBE4_TypeDefinitionIndex = 28468;

class Class_3_832C7698B237EBE4 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompare*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_3_832C7698B237EBE4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_832C7698B237EBE4_METHOD_3_F1BB718E73080948_OFFSET))(this);
	}
};
