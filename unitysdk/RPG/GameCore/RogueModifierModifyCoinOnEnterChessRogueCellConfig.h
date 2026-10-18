#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_METHOD_3_A8777B62CCE1207A_OFFSET UNITYSDK_OFFSET(0x1DA17AA0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_METHOD_3_F2587085E6D3E8D6_OFFSET UNITYSDK_OFFSET(0x1DA17AF0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA17AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyCoinOnEnterChessRogueCellConfig_TypeDefinitionIndex = 17987;

	class RogueModifierModifyCoinOnEnterChessRogueCellConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A8777B62CCE1207A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterChessRogueCellConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterChessRogueCellConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_METHOD_3_A8777B62CCE1207A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F2587085E6D3E8D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyCoinOnEnterChessRogueCellConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyCoinOnEnterChessRogueCellConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONENTERCHESSROGUECELLCONFIG_METHOD_3_F2587085E6D3E8D6_OFFSET))(a1, a2);
		}
	};
}
