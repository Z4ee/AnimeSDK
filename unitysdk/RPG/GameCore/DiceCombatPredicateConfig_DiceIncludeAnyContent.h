#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_METHOD_4_0FB8F5CC4F1D7161_OFFSET UNITYSDK_OFFSET(0x1D827410)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_METHOD_4_D6448B1AB4C36645_OFFSET UNITYSDK_OFFSET(0x1D829D60)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D827400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceIncludeAnyContent_TypeDefinitionIndex = 15929;

	class DiceCombatPredicateConfig_DiceIncludeAnyContent : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ValueList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D6448B1AB4C36645(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_METHOD_4_D6448B1AB4C36645_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0FB8F5CC4F1D7161(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_METHOD_4_0FB8F5CC4F1D7161_OFFSET))(a1, a2);
		}
	};
}
