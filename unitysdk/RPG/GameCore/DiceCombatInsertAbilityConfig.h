#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatInsertAbilityPriority.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG_METHOD_2_7A3A55492E55FA17_OFFSET UNITYSDK_OFFSET(0x1D823F90)
#define RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8241E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatInsertAbilityConfig_TypeDefinitionIndex = 15948;

	class DiceCombatInsertAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DiceCombatTarget AbilityTarget; // 0x18
		::RPG::GameCore::DiceCombatInsertAbilityPriority Priority; // 0x1C
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x20
		::System::Boolean ExecuteWhenOwnerAlive; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_7A3A55492E55FA17(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatInsertAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG_METHOD_2_7A3A55492E55FA17_OFFSET))(a1, a2);
		}
	};
}
