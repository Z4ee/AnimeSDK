#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_71502020D7C6C022_OFFSET UNITYSDK_OFFSET(0x1D0313E0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_D7B4C12A46668EDC_OFFSET UNITYSDK_OFFSET(0x1D0332A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D031380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDiceSequence_TypeDefinitionIndex = 15925;

	class DiceCombatPredicateConfig_HasDiceSequence : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DynamicFloat* MinLength; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D7B4C12A46668EDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_D7B4C12A46668EDC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_71502020D7C6C022(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_71502020D7C6C022_OFFSET))(a1, a2);
		}
	};
}
