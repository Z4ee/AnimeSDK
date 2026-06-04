#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CharacterPhaseUIConfig; }
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class MonsterConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERPHASEOVERRIDECONFIG_METHOD_2_FDD0CA0ECFBE05A6_OFFSET UNITYSDK_OFFSET(0x19612EE0)
#define RPG_GAMECORE_CHARACTERPHASEOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19613110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPhaseOverrideConfig_TypeDefinitionIndex = 15682;

	class CharacterPhaseOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HitBoxConfig* PhaseHitBox; // 0x10
		::RPG::GameCore::ResilienceEnum Resilience; // 0x18
		::System::Single VisualRadius; // 0x1C
		::RPG::GameCore::CharacterPhaseUIConfig* PhaseUIConfig; // 0x20
		::RPG::GameCore::LocationConfig* PhaseLocation; // 0x28
		::System::String* OverrideColliderCameraByName; // 0x30
		::System::String* OverrideColliderCameraByNameOnLeave; // 0x38
		::RPG::GameCore::MonsterConfig* MonsterConfig; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FDD0CA0ECFBE05A6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPhaseOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPhaseOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEOVERRIDECONFIG_METHOD_2_FDD0CA0ECFBE05A6_OFFSET))(a1, a2);
		}
	};
}
