#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCHESSROGUECELLCONFIG_METHOD_3_3E138A4A3B65E982_OFFSET UNITYSDK_OFFSET(0x1D3F7F50)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCHESSROGUECELLCONFIG_METHOD_3_BC14D83C1222EE66_OFFSET UNITYSDK_OFFSET(0x1D3F7F00)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCHESSROGUECELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F7F40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterChessRogueCellConfig_TypeDefinitionIndex = 17728;

	class RogueModifierExecuteActionOnEnterChessRogueCellConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCHESSROGUECELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BC14D83C1222EE66(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterChessRogueCellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterChessRogueCellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCHESSROGUECELLCONFIG_METHOD_3_BC14D83C1222EE66_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E138A4A3B65E982(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterChessRogueCellConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterChessRogueCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERCHESSROGUECELLCONFIG_METHOD_3_3E138A4A3B65E982_OFFSET))(a1, a2);
		}
	};
}
