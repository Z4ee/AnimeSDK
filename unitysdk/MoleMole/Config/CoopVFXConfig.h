#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EffectLODType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_COOPVFXCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x124306C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CoopVFXConfig_TypeDefinitionIndex = 80597;

	class CoopVFXConfig : public ::System::Object
	{
	public:
		::System::Boolean AvatarSubdivide; // 0x10
		::System::Boolean AvatarGhost; // 0x11
		::System::Boolean EnableVFX; // 0x12
		::MoleMole::Config::EffectLODType VFXLOD; // 0x14
		::System::Boolean VFXSceneMark; // 0x18
		::System::Boolean EnableAtkHitEffect; // 0x19
		::System::Boolean EnableEffectLight; // 0x1A
		::System::Boolean EnableEffectStartTimeOffset; // 0x1B
		::System::Boolean EnableAvatarPropSpecialUI; // 0x1C
		::System::Boolean EnableAuthorityHitEffStartTimeOffset; // 0x1D
		::System::Boolean EnableAuthoritySceneMark; // 0x1E
		::MoleMole::Config::EffectLODType MonsterVFXLOD; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPVFXCONFIG__CTOR_OFFSET))(this);
		}
	};
}
