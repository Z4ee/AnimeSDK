#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_6_6D656FA1F00ACAB0_OFFSET UNITYSDK_OFFSET(0x1EE88D40)
#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_6_FC77173B9CE8F0AC_OFFSET UNITYSDK_OFFSET(0x1EE88D90)
#define RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE88D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReviveAvatarConfig_TypeDefinitionIndex = 19400;

	class RogueActReviveAvatarConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6D656FA1F00ACAB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReviveAvatarConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReviveAvatarConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_6_6D656FA1F00ACAB0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_FC77173B9CE8F0AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReviveAvatarConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReviveAvatarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREVIVEAVATARCONFIG_METHOD_6_FC77173B9CE8F0AC_OFFSET))(a1, a2);
		}
	};
}
