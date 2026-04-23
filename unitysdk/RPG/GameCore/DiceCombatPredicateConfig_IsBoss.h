#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_B4D4A988F17CDD38_OFFSET UNITYSDK_OFFSET(0x188703B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_F43F3AD01C858EB2_OFFSET UNITYSDK_OFFSET(0x1886E6A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS__CTOR_OFFSET UNITYSDK_OFFSET(0x1886E650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_IsBoss_TypeDefinitionIndex = 15275;

	class DiceCombatPredicateConfig_IsBoss : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B4D4A988F17CDD38(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_B4D4A988F17CDD38_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F43F3AD01C858EB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_IsBoss*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ISBOSS_METHOD_4_F43F3AD01C858EB2_OFFSET))(a1, a2);
		}
	};
}
