#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG_METHOD_3_20927B31A9676558_OFFSET UNITYSDK_OFFSET(0x19B56160)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG_METHOD_3_CE1868B4876FF381_OFFSET UNITYSDK_OFFSET(0x19B5F9C0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B56110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomCardLevelOnSelectConfig_TypeDefinitionIndex = 16961;

	class RogueModifierModifyPersonaRoomCardLevelOnSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE1868B4876FF381(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardLevelOnSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardLevelOnSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG_METHOD_3_CE1868B4876FF381_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_20927B31A9676558(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardLevelOnSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardLevelOnSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDLEVELONSELECTCONFIG_METHOD_3_20927B31A9676558_OFFSET))(a1, a2);
		}
	};
}
