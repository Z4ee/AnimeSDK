#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_A14C715D0891E021_OFFSET UNITYSDK_OFFSET(0x1C115B00)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_E6A5F99857A4A4DF_OFFSET UNITYSDK_OFFSET(0x1C116980)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C115AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_Or_TypeDefinitionIndex = 15475;

	class DiceCombatPredicateConfig_Or : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig* Left; // 0x20
		::RPG::GameCore::DiceCombatPredicateConfig* Right; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E6A5F99857A4A4DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_Or*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_Or*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_E6A5F99857A4A4DF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A14C715D0891E021(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_Or* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_Or*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_OR_METHOD_4_A14C715D0891E021_OFFSET))(a1, a2);
		}
	};
}
