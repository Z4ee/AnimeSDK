#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/SummerWeaponConfig_CrossHairRayShape.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTWEAPONSKILLPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x173A9160)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventWeaponSkillParamBase_TypeDefinitionIndex = 81526;

	class SummerEventWeaponSkillParamBase : public ::System::Object
	{
	public:
		::System::String* SkillInterruptedEventName; // 0x10
		::Foundation::AssetPath SkillOverrideCrosshairPath; // 0x18
		::MoleMole::Config::ConfigSoundActionGeneral* skillEndSoundAction; // 0x28
		::MoleMole::Config::ConfigSoundActionGeneral* skillStartSoundAction; // 0x30
		::UnityEngine::Vector2 crossHairBoxRayParam; // 0x38
		::System::Boolean changeWeaponSkill; // 0x40
		::System::Single duration; // 0x44
		::MoleMole::SummerWeaponConfig_CrossHairRayShape crossHairRayShape; // 0x48
		::System::Single OverrideSkillCrosshairRaycastRadius; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTWEAPONSKILLPARAMBASE__CTOR_OFFSET))(this);
		}
	};
}
