#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CustomMazeBattleTransitionConfig; }

#define RPG_GAMECORE_AVATARTRANSITIONCONFIG_METHOD_2_CA8B843C8FAB49E5_OFFSET UNITYSDK_OFFSET(0x186E1390)
#define RPG_GAMECORE_AVATARTRANSITIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x186E1490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarTransitionConfig_TypeDefinitionIndex = 16715;

	class AvatarTransitionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::CustomMazeBattleTransitionConfig*>* MazeBattleTransitions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARTRANSITIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_CA8B843C8FAB49E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarTransitionConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarTransitionConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARTRANSITIONCONFIG_METHOD_2_CA8B843C8FAB49E5_OFFSET))(a1, a2);
		}
	};
}
