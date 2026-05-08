#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/SummerWeaponConfig_CrossHairRayShape.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace System { class String; }

#define MOLEMOLE_SUMMEREVENTWEAPONSKILLPARAMBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x125F3760)

namespace MoleMole
{
	inline static constexpr unsigned int SummerEventWeaponSkillParamBase_TypeDefinitionIndex = 61783;

	class SummerEventWeaponSkillParamBase : public ::System::Object
	{
	public:
		::System::String* SkillInterruptedEventName; // 0x10
		::MoleMole::Config::ConfigSoundActionGeneral* skillEndSoundAction; // 0x18
		::Foundation::AssetPath SkillOverrideCrosshairPath; // 0x20
		::MoleMole::Config::ConfigSoundActionGeneral* skillStartSoundAction; // 0x30
		::System::Boolean changeWeaponSkill; // 0x38
		::MoleMole::SummerWeaponConfig_CrossHairRayShape crossHairRayShape; // 0x3C
		::System::Single OverrideSkillCrosshairRaycastRadius; // 0x40
		::System::Single duration; // 0x44
		::UnityEngine::Vector2 crossHairBoxRayParam; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUMMEREVENTWEAPONSKILLPARAMBASE__CTOR_OFFSET))(this);
		}
	};
}
