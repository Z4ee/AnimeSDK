#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class AniamtorParamsSetting; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGBOSSAIRCOMBATPARRYATTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B547760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBossAirCombatParryAttack_TypeDefinitionIndex = 72339;

	class ConfigBossAirCombatParryAttack : public ::System::Object
	{
	public:
		::System::Single startMoveDuration; // 0x10
		::System::Single endMoveDuration; // 0x14
		::UnityEngine::Vector3 offsetByAvatar; // 0x18
		::System::Single parryRootmotionScaleZ; // 0x24
		::System::String* moveAnimationCurve; // 0x28
		::MoleMole::AniamtorParamsSetting* bossArriveParryAttackAnimParams; // 0x30
		::System::Single startReturnDuration; // 0x38
		::System::Single endReturnDuration; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBOSSAIRCOMBATPARRYATTACK__CTOR_OFFSET))(this);
		}
	};
}
