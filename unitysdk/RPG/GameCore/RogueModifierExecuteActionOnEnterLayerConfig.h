#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERLAYERCONFIG_METHOD_3_0A128726977BB05F_OFFSET UNITYSDK_OFFSET(0x17630050)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERLAYERCONFIG_METHOD_3_7DB880A8D0EE2BE6_OFFSET UNITYSDK_OFFSET(0x1762FF80)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17630000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterLayerConfig_TypeDefinitionIndex = 16238;

	class RogueModifierExecuteActionOnEnterLayerConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERLAYERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7DB880A8D0EE2BE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterLayerConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterLayerConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERLAYERCONFIG_METHOD_3_7DB880A8D0EE2BE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0A128726977BB05F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterLayerConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterLayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERLAYERCONFIG_METHOD_3_0A128726977BB05F_OFFSET))(a1, a2);
		}
	};
}
