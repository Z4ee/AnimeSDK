#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_METHOD_3_18E4586E4D65A107_OFFSET UNITYSDK_OFFSET(0x1EE8AFA0)
#define RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_METHOD_3_63211C8A0D7944AB_OFFSET UNITYSDK_OFFSET(0x1EE8AFF0)
#define RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE8AFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureCaptureMonsterConfig_TypeDefinitionIndex = 17681;

	class RogueAdventureCaptureMonsterConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18E4586E4D65A107(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureCaptureMonsterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureCaptureMonsterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_METHOD_3_18E4586E4D65A107_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_63211C8A0D7944AB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureCaptureMonsterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureCaptureMonsterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTURECAPTUREMONSTERCONFIG_METHOD_3_63211C8A0D7944AB_OFFSET))(a1, a2);
		}
	};
}
