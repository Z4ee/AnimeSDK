#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_98A798C0C96648F9.h"

class Class_1_EA5232D6CAD71030;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasCustomValue; }

#define CLASS_3_96DBE14E6123E2A9_METHOD_3_A043B5CB7B5C886D_OFFSET UNITYSDK_OFFSET(0x17D73370)
#define CLASS_3_96DBE14E6123E2A9__CTOR_OFFSET UNITYSDK_OFFSET(0x17D73340)

inline static constexpr unsigned int Class_3_96DBE14E6123E2A9_TypeDefinitionIndex = 34150;

class Class_3_96DBE14E6123E2A9 : public ::Class_2_98A798C0C96648F9
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* Field_3_0; // 0x30

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* a1, ::Class_1_EA5232D6CAD71030* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*, ::Class_1_EA5232D6CAD71030*))((::PBYTE)hIl2Cpp + CLASS_3_96DBE14E6123E2A9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_A043B5CB7B5C886D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_96DBE14E6123E2A9_METHOD_3_A043B5CB7B5C886D_OFFSET))(this);
	}
};
