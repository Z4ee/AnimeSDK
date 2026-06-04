#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseScrollGameBlockConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_METHOD_3_38106468237C86F2_OFFSET UNITYSDK_OFFSET(0x19940180)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_METHOD_3_E27B4FD285384774_OFFSET UNITYSDK_OFFSET(0x19940120)
#define RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19940170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiniGameFlappyBirdBlockConfig_TypeDefinitionIndex = 17898;

	class MiniGameFlappyBirdBlockConfig : public ::RPG::GameCore::BaseScrollGameBlockConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E27B4FD285384774(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_METHOD_3_E27B4FD285384774_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_38106468237C86F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiniGameFlappyBirdBlockConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MINIGAMEFLAPPYBIRDBLOCKCONFIG_METHOD_3_38106468237C86F2_OFFSET))(a1, a2);
		}
	};
}
