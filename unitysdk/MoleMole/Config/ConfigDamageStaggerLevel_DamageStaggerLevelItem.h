#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGDAMAGESTAGGERLEVEL_DAMAGESTAGGERLEVELITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18F30540)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDamageStaggerLevel_DamageStaggerLevelItem_TypeDefinitionIndex = 78367;

	class ConfigDamageStaggerLevel_DamageStaggerLevelItem : public ::System::Object
	{
	public:
		::System::Int32 damageStaggerLevel; // 0x10
		::MoleMole::Config::AnimatorGroundHitType attackFrameGroundHitType; // 0x14
		::MoleMole::Config::AnimatorHitEffect attackFrameHitEffect; // 0x18
		::MoleMole::Config::AnimatorAirHitType attackFrameAirHitType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDAMAGESTAGGERLEVEL_DAMAGESTAGGERLEVELITEM__CTOR_OFFSET))(this);
		}
	};
}
