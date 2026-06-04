#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_081A8DE03790FA94_OFFSET UNITYSDK_OFFSET(0x196AF460)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_A14C715D0891E021_OFFSET UNITYSDK_OFFSET(0x196ADEA0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR__CTOR_OFFSET UNITYSDK_OFFSET(0x196ADE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_Or_TypeDefinitionIndex = 15311;

	class DiceCombatPredicateConfig_Or : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig* Left; // 0x20
		::RPG::GameCore::DiceCombatPredicateConfig* Right; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_081A8DE03790FA94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_Or*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_Or*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_081A8DE03790FA94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A14C715D0891E021(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_Or* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_Or*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_A14C715D0891E021_OFFSET))(a1, a2);
		}
	};
}
