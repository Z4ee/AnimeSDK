#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_Or; }

#define CLASS_3_6682940981DEB8BA_METHOD_3_4487776BEE04D471_OFFSET UNITYSDK_OFFSET(0x18ABD3D0)
#define CLASS_3_6682940981DEB8BA__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABD3B0)

inline static constexpr unsigned int Class_3_6682940981DEB8BA_TypeDefinitionIndex = 34434;

class Class_3_6682940981DEB8BA : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_Or* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_Or* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_Or*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_6682940981DEB8BA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_4487776BEE04D471()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_6682940981DEB8BA_METHOD_3_4487776BEE04D471_OFFSET))(this);
	}
};
