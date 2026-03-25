#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatInsertAbilityPriority.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatTaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG_METHOD_2_3CC43BCFE2E411EB_OFFSET UNITYSDK_OFFSET(0x17160B10)
#define RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17160CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatInsertAbilityConfig_TypeDefinitionIndex = 14801;

	class DiceCombatInsertAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DiceCombatInsertAbilityPriority Priority; // 0x18
		::Il2CppArray<::RPG::GameCore::DiceCombatTaskConfig*>* OnStart; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_3CC43BCFE2E411EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatInsertAbilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATINSERTABILITYCONFIG_METHOD_2_3CC43BCFE2E411EB_OFFSET))(a1, a2);
		}
	};
}
