#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityFilter.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIG_CONFIGENTITYWALLBLOCKFILTER_TAGSCHECK_OFFSET UNITYSDK_OFFSET(0x16A8CBC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYWALLBLOCKFILTER_VALUEPASS_OFFSET UNITYSDK_OFFSET(0x16A8C460)
#define MOLEMOLE_CONFIG_CONFIGENTITYWALLBLOCKFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8CD50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityWallBlockFilter_TypeDefinitionIndex = 39910;

	class ConfigEntityWallBlockFilter : public ::MoleMole::Config::ConfigEntityFilter
	{
	public:
		::UnityEngine::LayerMask FilterLayerMask; // 0x18
		::Il2CppArray<::System::String*>* tags; // 0x20
		::System::Single raycastOffset; // 0x28
		::System::Boolean useLockBoneAsTarget; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYWALLBLOCKFILTER__CTOR_OFFSET))(this);
		}

		::System::Boolean ValuePass(::MoleMole::Battle::Entity* owner, ::MoleMole::Battle::Entity* target, ::MoleMole::Battle::Entity* abilityTargettingSelf, ::MoleMole::Battle::Entity* abilityTargettingTarget, ::MoleMole::Battle::Entity* abilityTargettingCaster, ::MoleMole::Battle::Entity* abilityTargettingOther)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYWALLBLOCKFILTER_VALUEPASS_OFFSET))(this, owner, target, abilityTargettingSelf, abilityTargettingTarget, abilityTargettingCaster, abilityTargettingOther);
		}

		::System::Boolean TagsCheck(::UnityEngine::GameObject* colliderGo)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYWALLBLOCKFILTER_TAGSCHECK_OFFSET))(this, colliderGo);
		}
	};
}
