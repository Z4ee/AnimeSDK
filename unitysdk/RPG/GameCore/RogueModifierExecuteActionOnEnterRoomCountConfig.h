#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROOMCOUNTCONFIG_METHOD_3_0BF4040BC83554D8_OFFSET UNITYSDK_OFFSET(0x1EEF8DA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROOMCOUNTCONFIG_METHOD_3_FFC7A61721CD059C_OFFSET UNITYSDK_OFFSET(0x1EEF8D50)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROOMCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF8D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnEnterRoomCountConfig_TypeDefinitionIndex = 17571;

	class RogueModifierExecuteActionOnEnterRoomCountConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROOMCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FFC7A61721CD059C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRoomCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRoomCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROOMCOUNTCONFIG_METHOD_3_FFC7A61721CD059C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0BF4040BC83554D8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRoomCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnEnterRoomCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONENTERROOMCOUNTCONFIG_METHOD_3_0BF4040BC83554D8_OFFSET))(a1, a2);
		}
	};
}
