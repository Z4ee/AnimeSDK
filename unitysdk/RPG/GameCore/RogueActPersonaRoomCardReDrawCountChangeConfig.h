#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_METHOD_6_8DD552E5669D5445_OFFSET UNITYSDK_OFFSET(0x1EE87760)
#define RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_METHOD_6_CC9043EAFD8E9CC9_OFFSET UNITYSDK_OFFSET(0x1EE877B0)
#define RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE877A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaRoomCardReDrawCountChangeConfig_TypeDefinitionIndex = 19541;

	class RogueActPersonaRoomCardReDrawCountChangeConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_8DD552E5669D5445(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_METHOD_6_8DD552E5669D5445_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_CC9043EAFD8E9CC9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActPersonaRoomCardReDrawCountChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONAROOMCARDREDRAWCOUNTCHANGECONFIG_METHOD_6_CC9043EAFD8E9CC9_OFFSET))(a1, a2);
		}
	};
}
