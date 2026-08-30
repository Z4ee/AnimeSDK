#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MAZESKILLGAMEMODEDROPCONFIG_METHOD_2_FDB970B964D42072_OFFSET UNITYSDK_OFFSET(0x1D284760)
#define RPG_GAMECORE_MAZESKILLGAMEMODEDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2847A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeSkillGameModeDropConfig_TypeDefinitionIndex = 21508;

	class MazeSkillGameModeDropConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLGAMEMODEDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FDB970B964D42072(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MazeSkillGameModeDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MazeSkillGameModeDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAZESKILLGAMEMODEDROPCONFIG_METHOD_2_FDB970B964D42072_OFFSET))(a1, a2);
		}
	};
}
