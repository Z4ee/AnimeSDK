#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_5_1B16DDD60321B4E4_OFFSET UNITYSDK_OFFSET(0x19A359E0)
#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_5_CCD0614B8A57A560_OFFSET UNITYSDK_OFFSET(0x19A34690)
#define RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19A345D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondInRogueTournModeConfig_TypeDefinitionIndex = 18536;

	class PlayerCondInRogueTournModeConfig : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_1B16DDD60321B4E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_5_1B16DDD60321B4E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CCD0614B8A57A560(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlayerCondInRogueTournModeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerCondInRogueTournModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDINROGUETOURNMODECONFIG_METHOD_5_CCD0614B8A57A560_OFFSET))(a1, a2);
		}
	};
}
