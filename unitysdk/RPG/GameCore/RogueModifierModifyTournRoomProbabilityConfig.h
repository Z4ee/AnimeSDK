#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_METHOD_3_457E43B162D38037_OFFSET UNITYSDK_OFFSET(0x176365D0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_METHOD_3_BEC118AD9709AF0E_OFFSET UNITYSDK_OFFSET(0x176366A0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17636650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomProbabilityConfig_TypeDefinitionIndex = 16324;

	class RogueModifierModifyTournRoomProbabilityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_457E43B162D38037(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_METHOD_3_457E43B162D38037_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEC118AD9709AF0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_METHOD_3_BEC118AD9709AF0E_OFFSET))(a1, a2);
		}
	};
}
