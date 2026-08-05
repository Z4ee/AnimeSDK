#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Gradient; }

#define MOLEMOLE_CONFIG_BUDDYCAMPOUTLINECONFIG_GET_SHOWOUTLINE_OFFSET UNITYSDK_OFFSET(0x134F1FC0)
#define MOLEMOLE_CONFIG_BUDDYCAMPOUTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x134F2020)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyCampOutlineConfig_TypeDefinitionIndex = 40891;

	class BuddyCampOutlineConfig : public ::System::Object
	{
	public:
		::System::Boolean EnableInnerFill; // 0x10
		::UnityEngine::Gradient* OutlineColorGradient; // 0x18
		::System::Single OutlineColorIntensity; // 0x20
		::System::Single OutlineAnimLifetime; // 0x24
		::System::Boolean OccludedByDepth; // 0x28
		::System::Boolean OccludedByCharacters; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYCAMPOUTLINECONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowOutline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUDDYCAMPOUTLINECONFIG_GET_SHOWOUTLINE_OFFSET))(this);
		}
	};
}
