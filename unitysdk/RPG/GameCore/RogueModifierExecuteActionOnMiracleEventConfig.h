#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_METHOD_3_D6A94533DCA74590_OFFSET UNITYSDK_OFFSET(0x19B5D2A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_METHOD_3_F6A0223F73AAFEE9_OFFSET UNITYSDK_OFFSET(0x19B52180)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B52130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnMiracleEventConfig_TypeDefinitionIndex = 16809;

	class RogueModifierExecuteActionOnMiracleEventConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D6A94533DCA74590(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_METHOD_3_D6A94533DCA74590_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F6A0223F73AAFEE9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnMiracleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONMIRACLEEVENTCONFIG_METHOD_3_F6A0223F73AAFEE9_OFFSET))(a1, a2);
		}
	};
}
