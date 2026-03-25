#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }

#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG_METHOD_2_D8D6AA9B6B1AD953_OFFSET UNITYSDK_OFFSET(0x17167760)
#define RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171678C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPresetTurnActorConfig_TypeDefinitionIndex = 14811;

	class DiceCombatPresetTurnActorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*>* RollConfig; // 0x10
		::Il2CppArray<::System::Int32>* ConfirmResult; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D8D6AA9B6B1AD953(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPresetTurnActorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPresetTurnActorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPRESETTURNACTORCONFIG_METHOD_2_D8D6AA9B6B1AD953_OFFSET))(a1, a2);
		}
	};
}
