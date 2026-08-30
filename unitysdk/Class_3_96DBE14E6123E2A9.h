#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_D8BECDCE48063EC7;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasCustomValue; }

#define CLASS_3_96DBE14E6123E2A9_METHOD_3_1651764D7D829451_OFFSET UNITYSDK_OFFSET(0x1C0F65F0)
#define CLASS_3_96DBE14E6123E2A9__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F65D0)

inline static constexpr unsigned int Class_3_96DBE14E6123E2A9_TypeDefinitionIndex = 35675;

class Class_3_96DBE14E6123E2A9 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* IGHAHBNLIJA; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* a1, ::Class_1_D8BECDCE48063EC7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*, ::Class_1_D8BECDCE48063EC7*))((::PBYTE)hIl2Cpp + CLASS_3_96DBE14E6123E2A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1651764D7D829451()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96DBE14E6123E2A9_METHOD_3_1651764D7D829451_OFFSET))(this);
	}
};
