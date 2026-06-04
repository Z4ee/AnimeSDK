#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG_METHOD_3_961BC5E72E813A44_OFFSET UNITYSDK_OFFSET(0x19B526C0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG_METHOD_3_96F42696FC7206CD_OFFSET UNITYSDK_OFFSET(0x19B5D5A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B52670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaRoomCardAddConfig_TypeDefinitionIndex = 16913;

	class RogueModifierExecuteActionOnPersonaRoomCardAddConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96F42696FC7206CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardAddConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardAddConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG_METHOD_3_96F42696FC7206CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_961BC5E72E813A44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardAddConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG_METHOD_3_961BC5E72E813A44_OFFSET))(a1, a2);
		}
	};
}
