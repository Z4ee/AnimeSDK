#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_METHOD_4_2022525DA845CC8E_OFFSET UNITYSDK_OFFSET(0x1886DCB0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_METHOD_4_BE4C76E8785E9965_OFFSET UNITYSDK_OFFSET(0x18870170)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1886DC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDiceTriple_TypeDefinitionIndex = 15264;

	class DiceCombatPredicateConfig_HasDiceTriple : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Boolean AnyValue; // 0x24
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BE4C76E8785E9965(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_METHOD_4_BE4C76E8785E9965_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2022525DA845CC8E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_METHOD_4_2022525DA845CC8E_OFFSET))(a1, a2);
		}
	};
}
