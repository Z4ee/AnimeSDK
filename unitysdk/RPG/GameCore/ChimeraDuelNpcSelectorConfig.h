#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelNpcType.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelTeamSelectorType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELNPCSELECTORCONFIG_METHOD_2_E17849708AA38263_OFFSET UNITYSDK_OFFSET(0x1C243F00)
#define RPG_GAMECORE_CHIMERADUELNPCSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C244550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelNpcSelectorConfig_TypeDefinitionIndex = 15342;

	class ChimeraDuelNpcSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelTeamSelectorType TeamSelectorType; // 0x10
		::RPG::GameCore::ChimeraDuelNpcType Npc; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E17849708AA38263(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelNpcSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelNpcSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNPCSELECTORCONFIG_METHOD_2_E17849708AA38263_OFFSET))(a1, a2);
		}
	};
}
