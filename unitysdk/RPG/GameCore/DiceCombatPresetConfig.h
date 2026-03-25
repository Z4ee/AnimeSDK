#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatPresetTurnConfig; }

#define RPG_GAMECORE_DICECOMBATPRESETCONFIG_METHOD_2_9FCA4AE9874C77AF_OFFSET UNITYSDK_OFFSET(0x17167650)
#define RPG_GAMECORE_DICECOMBATPRESETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17167750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetConfig_TypeDefinitionIndex = 14813;

	class DiceCombatPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatPresetTurnConfig*>* TurnConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_9FCA4AE9874C77AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPresetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPresetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETCONFIG_METHOD_2_9FCA4AE9874C77AF_OFFSET))(a1, a2);
		}
	};
}
