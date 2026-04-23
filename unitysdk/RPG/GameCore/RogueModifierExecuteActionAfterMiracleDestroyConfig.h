#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_METHOD_3_7A63E4B5BE0D111C_OFFSET UNITYSDK_OFFSET(0x18D34560)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_METHOD_3_95EE446CFB31EE25_OFFSET UNITYSDK_OFFSET(0x18D3C570)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D34510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionAfterMiracleDestroyConfig_TypeDefinitionIndex = 17078;

	class RogueModifierExecuteActionAfterMiracleDestroyConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_95EE446CFB31EE25(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterMiracleDestroyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterMiracleDestroyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_METHOD_3_95EE446CFB31EE25_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7A63E4B5BE0D111C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionAfterMiracleDestroyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionAfterMiracleDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONAFTERMIRACLEDESTROYCONFIG_METHOD_3_7A63E4B5BE0D111C_OFFSET))(a1, a2);
		}
	};
}
