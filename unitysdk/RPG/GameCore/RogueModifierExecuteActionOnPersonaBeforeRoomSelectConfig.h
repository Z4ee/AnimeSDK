#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_METHOD_3_55EDBB3118C9C522_OFFSET UNITYSDK_OFFSET(0x1EEF9290)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_METHOD_3_D936EC014A0DFC3E_OFFSET UNITYSDK_OFFSET(0x1EEF92E0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF92D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig_TypeDefinitionIndex = 17659;

	class RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_55EDBB3118C9C522(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_METHOD_3_55EDBB3118C9C522_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D936EC014A0DFC3E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaBeforeRoomSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONABEFOREROOMSELECTCONFIG_METHOD_3_D936EC014A0DFC3E_OFFSET))(a1, a2);
		}
	};
}
