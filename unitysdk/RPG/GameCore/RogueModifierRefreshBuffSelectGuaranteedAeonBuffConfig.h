#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_METHOD_3_85724F3B3D2572E2_OFFSET UNITYSDK_OFFSET(0x18D448B0)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_METHOD_3_D483F6616322D8EB_OFFSET UNITYSDK_OFFSET(0x18D447E0)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D44860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig_TypeDefinitionIndex = 17035;

	class RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D483F6616322D8EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_METHOD_3_D483F6616322D8EB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85724F3B3D2572E2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONBUFFCONFIG_METHOD_3_85724F3B3D2572E2_OFFSET))(a1, a2);
		}
	};
}
