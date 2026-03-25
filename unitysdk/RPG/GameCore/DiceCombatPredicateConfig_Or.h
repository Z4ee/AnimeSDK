#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_B91CF11E5D1D5F37_OFFSET UNITYSDK_OFFSET(0x17166290)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_C4537C809C14C0D2_OFFSET UNITYSDK_OFFSET(0x17167530)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR__CTOR_OFFSET UNITYSDK_OFFSET(0x17166240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_Or_TypeDefinitionIndex = 14770;

	class DiceCombatPredicateConfig_Or : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig* Left; // 0x20
		::RPG::GameCore::DiceCombatPredicateConfig* Right; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C4537C809C14C0D2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_Or*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_Or*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_C4537C809C14C0D2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_B91CF11E5D1D5F37(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_Or* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_Or*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_B91CF11E5D1D5F37_OFFSET))(a1, a2);
		}
	};
}
