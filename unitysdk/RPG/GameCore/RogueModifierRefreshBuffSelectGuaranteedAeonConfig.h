#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_METHOD_3_6B87E95E17621B96_OFFSET UNITYSDK_OFFSET(0x19B9A8A0)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_METHOD_3_85C7463ED3870ACF_OFFSET UNITYSDK_OFFSET(0x19B9A970)
#define RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9A920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRefreshBuffSelectGuaranteedAeonConfig_TypeDefinitionIndex = 17064;

	class RogueModifierRefreshBuffSelectGuaranteedAeonConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6B87E95E17621B96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_METHOD_3_6B87E95E17621B96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_85C7463ED3870ACF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRefreshBuffSelectGuaranteedAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERREFRESHBUFFSELECTGUARANTEEDAEONCONFIG_METHOD_3_85C7463ED3870ACF_OFFSET))(a1, a2);
		}
	};
}
