#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_METHOD_3_2D1F20BE7A1309D7_OFFSET UNITYSDK_OFFSET(0x1762F950)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_METHOD_3_C88C6CEC2729C4DE_OFFSET UNITYSDK_OFFSET(0x1762F880)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1762F900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig_TypeDefinitionIndex = 16488;

	class RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C88C6CEC2729C4DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_METHOD_3_C88C6CEC2729C4DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2D1F20BE7A1309D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnCellDiceSurfaceRepeatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONCELLDICESURFACEREPEATCONFIG_METHOD_3_2D1F20BE7A1309D7_OFFSET))(a1, a2);
		}
	};
}
