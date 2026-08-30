#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG_METHOD_6_3B3A890AC8B0A929_OFFSET UNITYSDK_OFFSET(0x1EE898D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG_METHOD_6_6326229E02A102A5_OFFSET UNITYSDK_OFFSET(0x1EE89880)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE898C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitRandomDropConfig_TypeDefinitionIndex = 19451;

	class RogueActTriggerRogueMagicUnitRandomDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6326229E02A102A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG_METHOD_6_6326229E02A102A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_3B3A890AC8B0A929(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMDROPCONFIG_METHOD_6_3B3A890AC8B0A929_OFFSET))(a1, a2);
		}
	};
}
