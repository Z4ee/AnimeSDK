#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_METHOD_3_A653AA7A7393799C_OFFSET UNITYSDK_OFFSET(0x1E535550)
#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_METHOD_3_B280086F19FBC8D8_OFFSET UNITYSDK_OFFSET(0x1E5355A0)
#define RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E535590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSuppressStyleExpModifierConfig_TypeDefinitionIndex = 17593;

	class RogueModifierSuppressStyleExpModifierConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A653AA7A7393799C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSuppressStyleExpModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSuppressStyleExpModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_METHOD_3_A653AA7A7393799C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_B280086F19FBC8D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierSuppressStyleExpModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierSuppressStyleExpModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSUPPRESSSTYLEEXPMODIFIERCONFIG_METHOD_3_B280086F19FBC8D8_OFFSET))(a1, a2);
		}
	};
}
