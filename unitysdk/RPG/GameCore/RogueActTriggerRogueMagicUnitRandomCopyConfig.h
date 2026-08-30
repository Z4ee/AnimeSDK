#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_6_0B196D6C47B380CD_OFFSET UNITYSDK_OFFSET(0x1D3BB9D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_6_7BAB9AF7274E3DB1_OFFSET UNITYSDK_OFFSET(0x1D3BBA20)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BBA10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitRandomCopyConfig_TypeDefinitionIndex = 19456;

	class RogueActTriggerRogueMagicUnitRandomCopyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0B196D6C47B380CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_6_0B196D6C47B380CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_7BAB9AF7274E3DB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomCopyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMCOPYCONFIG_METHOD_6_7BAB9AF7274E3DB1_OFFSET))(a1, a2);
		}
	};
}
