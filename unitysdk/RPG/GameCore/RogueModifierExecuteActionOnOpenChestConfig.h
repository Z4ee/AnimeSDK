#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_METHOD_3_0EE0CC31E89B219A_OFFSET UNITYSDK_OFFSET(0x18D3D8D0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_METHOD_3_F57AAAE97BB5EF53_OFFSET UNITYSDK_OFFSET(0x18D3D9A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3D950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnOpenChestConfig_TypeDefinitionIndex = 16802;

	class RogueModifierExecuteActionOnOpenChestConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0EE0CC31E89B219A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnOpenChestConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnOpenChestConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_METHOD_3_0EE0CC31E89B219A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F57AAAE97BB5EF53(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnOpenChestConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnOpenChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONOPENCHESTCONFIG_METHOD_3_F57AAAE97BB5EF53_OFFSET))(a1, a2);
		}
	};
}
