#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG_METHOD_6_75BAF604EE4211DE_OFFSET UNITYSDK_OFFSET(0x1D3BA6B0)
#define RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG_METHOD_6_D0574CF26355FF1A_OFFSET UNITYSDK_OFFSET(0x1D3BA700)
#define RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BA6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRandomGetRogueMagicUnitConfig_TypeDefinitionIndex = 19449;

	class RogueActRandomGetRogueMagicUnitConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_75BAF604EE4211DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRandomGetRogueMagicUnitConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRandomGetRogueMagicUnitConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG_METHOD_6_75BAF604EE4211DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D0574CF26355FF1A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRandomGetRogueMagicUnitConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRandomGetRogueMagicUnitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTRANDOMGETROGUEMAGICUNITCONFIG_METHOD_6_D0574CF26355FF1A_OFFSET))(a1, a2);
		}
	};
}
