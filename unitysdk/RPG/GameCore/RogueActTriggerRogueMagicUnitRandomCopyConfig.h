#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_6_7BAB9AF7274E3DB1_OFFSET UNITYSDK_OFFSET(0x18CD7CA0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_6_D6812AC96E9830FC_OFFSET UNITYSDK_OFFSET(0x18CD7A80)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD7BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitRandomCopyConfig_TypeDefinitionIndex = 18686;

	class RogueActTriggerRogueMagicUnitRandomCopyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_D6812AC96E9830FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_6_D6812AC96E9830FC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7BAB9AF7274E3DB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_6_7BAB9AF7274E3DB1_OFFSET))(a1, a2);
		}
	};
}
