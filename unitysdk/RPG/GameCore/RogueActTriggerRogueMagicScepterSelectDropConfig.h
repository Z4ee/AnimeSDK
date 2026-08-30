#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_6_450007E35E9F3F04_OFFSET UNITYSDK_OFFSET(0x1EE89810)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_6_50B33A0853CF7F48_OFFSET UNITYSDK_OFFSET(0x1EE897C0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE89800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicScepterSelectDropConfig_TypeDefinitionIndex = 19465;

	class RogueActTriggerRogueMagicScepterSelectDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_50B33A0853CF7F48(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_6_50B33A0853CF7F48_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_450007E35E9F3F04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicScepterSelectDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICSCEPTERSELECTDROPCONFIG_METHOD_6_450007E35E9F3F04_OFFSET))(a1, a2);
		}
	};
}
