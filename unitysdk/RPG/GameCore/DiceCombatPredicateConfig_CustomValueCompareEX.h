#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPAREEX_METHOD_4_663805308EE5B9D4_OFFSET UNITYSDK_OFFSET(0x1886BF70)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPAREEX_METHOD_4_9A230F3F8AA85640_OFFSET UNITYSDK_OFFSET(0x1886FA10)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPAREEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1886BF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_CustomValueCompareEX_TypeDefinitionIndex = 15249;

	class DiceCombatPredicateConfig_CustomValueCompareEX : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Left; // 0x20
		::RPG::GameCore::DiceCombatTarget LeftReadTarget; // 0x28
		::RPG::GameCore::DiceCombatValueCompare Op; // 0x2C
		::RPG::GameCore::DynamicFloat* Right; // 0x30
		::RPG::GameCore::DiceCombatTarget RightReadTarget; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPAREEX__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9A230F3F8AA85640(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPAREEX_METHOD_4_9A230F3F8AA85640_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_663805308EE5B9D4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CustomValueCompareEX*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CUSTOMVALUECOMPAREEX_METHOD_4_663805308EE5B9D4_OFFSET))(a1, a2);
		}
	};
}
