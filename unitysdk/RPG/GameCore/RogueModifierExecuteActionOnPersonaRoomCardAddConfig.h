#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG_METHOD_3_58257694D52C6688_OFFSET UNITYSDK_OFFSET(0x1D3F8740)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG_METHOD_3_961BC5E72E813A44_OFFSET UNITYSDK_OFFSET(0x1D3F8790)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F8780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaRoomCardAddConfig_TypeDefinitionIndex = 17580;

	class RogueModifierExecuteActionOnPersonaRoomCardAddConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_58257694D52C6688(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardAddConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardAddConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG_METHOD_3_58257694D52C6688_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_961BC5E72E813A44(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardAddConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDADDCONFIG_METHOD_3_961BC5E72E813A44_OFFSET))(a1, a2);
		}
	};
}
