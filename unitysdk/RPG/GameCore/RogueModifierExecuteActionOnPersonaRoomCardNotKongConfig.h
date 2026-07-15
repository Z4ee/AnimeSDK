#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG_METHOD_3_BD826A02472B94A3_OFFSET UNITYSDK_OFFSET(0x1CFC0AA0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG_METHOD_3_E2C34E9EACA28B27_OFFSET UNITYSDK_OFFSET(0x1CFC0AF0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC0AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig_TypeDefinitionIndex = 17136;

	class RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BD826A02472B94A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG_METHOD_3_BD826A02472B94A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E2C34E9EACA28B27(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardNotKongConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDNOTKONGCONFIG_METHOD_3_E2C34E9EACA28B27_OFFSET))(a1, a2);
		}
	};
}
