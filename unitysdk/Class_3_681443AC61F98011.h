#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E04EA714F2B36785.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"

namespace RPG::GameCore { class GameEntity; }

#define CLASS_3_681443AC61F98011_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x14276290)
#define CLASS_3_681443AC61F98011__CTOR_OFFSET UNITYSDK_OFFSET(0x14276240)

inline static constexpr unsigned int Class_3_681443AC61F98011_TypeDefinitionIndex = 54488;

class Class_3_681443AC61F98011 : public ::Class_2_E04EA714F2B36785
{
public:
	::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x90

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_681443AC61F98011__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
	{
		return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_681443AC61F98011_GET_FLAG_OFFSET))(this);
	}
};
