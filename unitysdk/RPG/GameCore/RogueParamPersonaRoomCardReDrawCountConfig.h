#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_METHOD_6_46AB8E9CB2ACE03C_OFFSET UNITYSDK_OFFSET(0x1E545930)
#define RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_METHOD_6_C5B81F0AF572BD78_OFFSET UNITYSDK_OFFSET(0x1E545980)
#define RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E545970)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamPersonaRoomCardReDrawCountConfig_TypeDefinitionIndex = 19634;

	class RogueParamPersonaRoomCardReDrawCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_46AB8E9CB2ACE03C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamPersonaRoomCardReDrawCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamPersonaRoomCardReDrawCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_METHOD_6_46AB8E9CB2ACE03C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_C5B81F0AF572BD78(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamPersonaRoomCardReDrawCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamPersonaRoomCardReDrawCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONAROOMCARDREDRAWCOUNTCONFIG_METHOD_6_C5B81F0AF572BD78_OFFSET))(a1, a2);
		}
	};
}
