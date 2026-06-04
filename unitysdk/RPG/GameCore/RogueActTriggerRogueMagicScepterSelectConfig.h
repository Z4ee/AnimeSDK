#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_METHOD_6_84362F6806B9AAED_OFFSET UNITYSDK_OFFSET(0x19AFBDC0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_METHOD_6_8499AB776AB4E1D0_OFFSET UNITYSDK_OFFSET(0x19AFBBA0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFBCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicScepterSelectConfig_TypeDefinitionIndex = 18654;

	class RogueActTriggerRogueMagicScepterSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_8499AB776AB4E1D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_METHOD_6_8499AB776AB4E1D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_84362F6806B9AAED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTCONFIG_METHOD_6_84362F6806B9AAED_OFFSET))(a1, a2);
		}
	};
}
