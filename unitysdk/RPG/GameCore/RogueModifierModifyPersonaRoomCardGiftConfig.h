#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_METHOD_3_15FC0FF613089ABC_OFFSET UNITYSDK_OFFSET(0x19B5F940)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_METHOD_3_99022543ABFA9D95_OFFSET UNITYSDK_OFFSET(0x19B56080)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B56030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomCardGiftConfig_TypeDefinitionIndex = 16981;

	class RogueModifierModifyPersonaRoomCardGiftConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_15FC0FF613089ABC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardGiftConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardGiftConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_METHOD_3_15FC0FF613089ABC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_99022543ABFA9D95(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardGiftConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDGIFTCONFIG_METHOD_3_99022543ABFA9D95_OFFSET))(a1, a2);
		}
	};
}
