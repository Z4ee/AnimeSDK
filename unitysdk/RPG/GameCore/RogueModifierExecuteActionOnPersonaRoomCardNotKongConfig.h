#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG_METHOD_3_1CAED824747221AE_OFFSET UNITYSDK_OFFSET(0x176312C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG_METHOD_3_E2C34E9EACA28B27_OFFSET UNITYSDK_OFFSET(0x17631390)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17631340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig_TypeDefinitionIndex = 16405;

	class RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1CAED824747221AE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG_METHOD_3_1CAED824747221AE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2C34E9EACA28B27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG_METHOD_3_E2C34E9EACA28B27_OFFSET))(a1, a2);
		}
	};
}
