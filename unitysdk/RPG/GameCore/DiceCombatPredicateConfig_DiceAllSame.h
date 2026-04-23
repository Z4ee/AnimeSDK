#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLSAME_METHOD_4_7449FD6F01B224C7_OFFSET UNITYSDK_OFFSET(0x1886C910)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLSAME_METHOD_4_8C9C89AF06B16838_OFFSET UNITYSDK_OFFSET(0x1886FC50)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLSAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1886C8C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceAllSame_TypeDefinitionIndex = 15268;

	class DiceCombatPredicateConfig_DiceAllSame : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Boolean AnyValue; // 0x24
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLSAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8C9C89AF06B16838(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLSAME_METHOD_4_8C9C89AF06B16838_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7449FD6F01B224C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllSame*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLSAME_METHOD_4_7449FD6F01B224C7_OFFSET))(a1, a2);
		}
	};
}
