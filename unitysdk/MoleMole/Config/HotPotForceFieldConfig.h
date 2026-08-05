#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_HOTPOTFORCEFIELDCONFIG_GET_HASADDITIONALFORCEFIELD_OFFSET UNITYSDK_OFFSET(0x1B921FE0)
#define MOLEMOLE_CONFIG_HOTPOTFORCEFIELDCONFIG_GET_HASNOISEFORCEFIELD_OFFSET UNITYSDK_OFFSET(0x1B922050)
#define MOLEMOLE_CONFIG_HOTPOTFORCEFIELDCONFIG_GET_ISRING_OFFSET UNITYSDK_OFFSET(0x1B921FD0)
#define MOLEMOLE_CONFIG_HOTPOTFORCEFIELDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9220C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HotPotForceFieldConfig_TypeDefinitionIndex = 71490;

	class HotPotForceFieldConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single innerRadius; // 0x18
		::UnityEngine::AnimationCurve* forceCurve; // 0x20
		::System::Single radialScale; // 0x28
		::System::String* additionalForceFieldXPath; // 0x30
		::System::String* additionalForceFieldYPath; // 0x38
		::System::Single additionalScale; // 0x40
		::System::String* noiseForceFieldXPath; // 0x48
		::System::String* noiseForceFieldYPath; // 0x50
		::System::Single noiseScale; // 0x58
		::UnityEngine::Vector2 noiseScrollSpeed; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFORCEFIELDCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFORCEFIELDCONFIG_GET_ISRING_OFFSET))(this);
		}

		::System::Boolean get_HasAdditionalForceField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFORCEFIELDCONFIG_GET_HASADDITIONALFORCEFIELD_OFFSET))(this);
		}

		::System::Boolean get_HasNoiseForceField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOTPOTFORCEFIELDCONFIG_GET_HASNOISEFORCEFIELD_OFFSET))(this);
		}
	};
}
