#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_METHOD_3_3264F6101C958E75_OFFSET UNITYSDK_OFFSET(0x19B5FA40)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_METHOD_3_45F7AF0215A593AC_OFFSET UNITYSDK_OFFSET(0x19B56240)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B561F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig_TypeDefinitionIndex = 16962;

	class RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3264F6101C958E75(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_METHOD_3_3264F6101C958E75_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_45F7AF0215A593AC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyPersonaRoomCardMinLevelOnSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYPERSONAROOMCARDMINLEVELONSELECTCONFIG_METHOD_3_45F7AF0215A593AC_OFFSET))(a1, a2);
		}
	};
}
