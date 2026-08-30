#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDKONGCONFIG_METHOD_3_71271131FEDE3372_OFFSET UNITYSDK_OFFSET(0x1D3F8850)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDKONGCONFIG_METHOD_3_8BA99A886ECDBD96_OFFSET UNITYSDK_OFFSET(0x1D3F8800)
#define RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDKONGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F8840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecuteActionOnPersonaRoomCardKongConfig_TypeDefinitionIndex = 17611;

	class RogueModifierExecuteActionOnPersonaRoomCardKongConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDKONGCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8BA99A886ECDBD96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardKongConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardKongConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDKONGCONFIG_METHOD_3_8BA99A886ECDBD96_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_71271131FEDE3372(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardKongConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierExecuteActionOnPersonaRoomCardKongConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECUTEACTIONONPERSONAROOMCARDKONGCONFIG_METHOD_3_71271131FEDE3372_OFFSET))(a1, a2);
		}
	};
}
