#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_METHOD_3_73C8842C588EAC16_OFFSET UNITYSDK_OFFSET(0x18D34FE0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_METHOD_3_EDE96BF414EB44FF_OFFSET UNITYSDK_OFFSET(0x18D3CB70)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D34F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnAttributeAppendConfig_TypeDefinitionIndex = 16950;

	class RogueModifierExecuteActionOnAttributeAppendConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_EDE96BF414EB44FF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnAttributeAppendConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnAttributeAppendConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_METHOD_3_EDE96BF414EB44FF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_73C8842C588EAC16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnAttributeAppendConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnAttributeAppendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONATTRIBUTEAPPENDCONFIG_METHOD_3_73C8842C588EAC16_OFFSET))(a1, a2);
		}
	};
}
