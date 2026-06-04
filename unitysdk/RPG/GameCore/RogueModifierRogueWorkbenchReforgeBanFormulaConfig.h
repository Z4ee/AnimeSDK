#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_METHOD_3_2732D8BC9D583CB0_OFFSET UNITYSDK_OFFSET(0x19B9C080)
#define RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_METHOD_3_32D78297F5001C59_OFFSET UNITYSDK_OFFSET(0x19B9BFB0)
#define RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9C030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierRogueWorkbenchReforgeBanFormulaConfig_TypeDefinitionIndex = 16880;

	class RogueModifierRogueWorkbenchReforgeBanFormulaConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_32D78297F5001C59(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRogueWorkbenchReforgeBanFormulaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRogueWorkbenchReforgeBanFormulaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_METHOD_3_32D78297F5001C59_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2732D8BC9D583CB0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierRogueWorkbenchReforgeBanFormulaConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierRogueWorkbenchReforgeBanFormulaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERROGUEWORKBENCHREFORGEBANFORMULACONFIG_METHOD_3_2732D8BC9D583CB0_OFFSET))(a1, a2);
		}
	};
}
