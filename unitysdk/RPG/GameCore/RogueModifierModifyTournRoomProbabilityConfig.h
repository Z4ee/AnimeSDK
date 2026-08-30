#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_METHOD_3_1F6E2181942F65F2_OFFSET UNITYSDK_OFFSET(0x1EEFBA10)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_METHOD_3_BEC118AD9709AF0E_OFFSET UNITYSDK_OFFSET(0x1EEFBA60)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFBA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyTournRoomProbabilityConfig_TypeDefinitionIndex = 17560;

	class RogueModifierModifyTournRoomProbabilityConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1F6E2181942F65F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_METHOD_3_1F6E2181942F65F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEC118AD9709AF0E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierModifyTournRoomProbabilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYTOURNROOMPROBABILITYCONFIG_METHOD_3_BEC118AD9709AF0E_OFFSET))(a1, a2);
		}
	};
}
