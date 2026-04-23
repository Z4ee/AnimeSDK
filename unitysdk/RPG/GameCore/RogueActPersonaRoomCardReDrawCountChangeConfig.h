#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_METHOD_6_6647A73075FC4294_OFFSET UNITYSDK_OFFSET(0x18CCC9E0)
#define RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_METHOD_6_CC9043EAFD8E9CC9_OFFSET UNITYSDK_OFFSET(0x18CCCC00)
#define RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCCB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRoomCardReDrawCountChangeConfig_TypeDefinitionIndex = 18767;

	class RogueActPersonaRoomCardReDrawCountChangeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6647A73075FC4294(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_METHOD_6_6647A73075FC4294_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_CC9043EAFD8E9CC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_METHOD_6_CC9043EAFD8E9CC9_OFFSET))(a1, a2);
		}
	};
}
