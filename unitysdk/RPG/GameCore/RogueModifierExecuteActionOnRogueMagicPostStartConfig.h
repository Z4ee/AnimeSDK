#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_METHOD_3_1DF6C3EC0C499EE3_OFFSET UNITYSDK_OFFSET(0x19B52F80)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_METHOD_3_F3F415A8B00D832A_OFFSET UNITYSDK_OFFSET(0x19B5DAA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B52F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnRogueMagicPostStartConfig_TypeDefinitionIndex = 16856;

	class RogueModifierExecuteActionOnRogueMagicPostStartConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F3F415A8B00D832A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueMagicPostStartConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueMagicPostStartConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_METHOD_3_F3F415A8B00D832A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1DF6C3EC0C499EE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnRogueMagicPostStartConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnRogueMagicPostStartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONROGUEMAGICPOSTSTARTCONFIG_METHOD_3_1DF6C3EC0C499EE3_OFFSET))(a1, a2);
		}
	};
}
