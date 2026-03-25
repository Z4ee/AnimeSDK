#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_B1A7D8EBAB39D13D;
namespace RPG::GameCore { class DiceCombatPredicateConfig_Or; }

#define CLASS_3_6682940981DEB8BA_METHOD_3_F1BB718E73080948_OFFSET UNITYSDK_OFFSET(0x166CE1B0)
#define CLASS_3_6682940981DEB8BA__CTOR_OFFSET UNITYSDK_OFFSET(0x166CE190)

inline static constexpr unsigned int Class_3_6682940981DEB8BA_TypeDefinitionIndex = 28472;

class Class_3_6682940981DEB8BA : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_Or* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_Or* a1, ::Class_1_B1A7D8EBAB39D13D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_Or*, ::Class_1_B1A7D8EBAB39D13D*))((::PBYTE)hIl2Cpp + CLASS_3_6682940981DEB8BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_F1BB718E73080948()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6682940981DEB8BA_METHOD_3_F1BB718E73080948_OFFSET))(this);
	}
};
