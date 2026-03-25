#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameBlockConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_METHOD_3_38106468237C86F2_OFFSET UNITYSDK_OFFSET(0x1741C7F0)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_METHOD_3_B52BF8AE4ED6637D_OFFSET UNITYSDK_OFFSET(0x1741C7B0)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1741C7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameFlappyBirdBlockConfig_TypeDefinitionIndex = 17261;

	class MiniGameFlappyBirdBlockConfig : public ::RPG::GameCore::BaseScrollGameBlockConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B52BF8AE4ED6637D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_METHOD_3_B52BF8AE4ED6637D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38106468237C86F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_METHOD_3_38106468237C86F2_OFFSET))(a1, a2);
		}
	};
}
