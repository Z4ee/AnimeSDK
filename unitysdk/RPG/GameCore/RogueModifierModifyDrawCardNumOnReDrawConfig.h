#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYDRAWCARDNUMONREDRAWCONFIG_METHOD_3_58CCD75484C8E1BC_OFFSET UNITYSDK_OFFSET(0x17634020)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYDRAWCARDNUMONREDRAWCONFIG_METHOD_3_C8B3DC677FE8A8C5_OFFSET UNITYSDK_OFFSET(0x17633F50)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYDRAWCARDNUMONREDRAWCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17633FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyDrawCardNumOnReDrawConfig_TypeDefinitionIndex = 16390;

	class RogueModifierModifyDrawCardNumOnReDrawConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYDRAWCARDNUMONREDRAWCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C8B3DC677FE8A8C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyDrawCardNumOnReDrawConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyDrawCardNumOnReDrawConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYDRAWCARDNUMONREDRAWCONFIG_METHOD_3_C8B3DC677FE8A8C5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_58CCD75484C8E1BC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyDrawCardNumOnReDrawConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyDrawCardNumOnReDrawConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYDRAWCARDNUMONREDRAWCONFIG_METHOD_3_58CCD75484C8E1BC_OFFSET))(a1, a2);
		}
	};
}
