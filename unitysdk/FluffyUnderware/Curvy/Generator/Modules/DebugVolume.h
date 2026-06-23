#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGModule.h"
#include "unitysdk/FluffyUnderware/DevTools/IntRegion.h"
#include "unitysdk/UnityEngine/Color.h"

namespace FluffyUnderware::Curvy::Generator { class CGModuleInputSlot; }

#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E5305C0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVOLUME_RESET_OFFSET UNITYSDK_OFFSET(0x1E5305F0)
#define FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1E530660)

namespace FluffyUnderware::Curvy::Generator::Modules
{
	inline static constexpr unsigned int DebugVolume_TypeDefinitionIndex = 38944;

	class DebugVolume : public ::FluffyUnderware::Curvy::Generator::CGModule
	{
	public:
		::FluffyUnderware::Curvy::Generator::CGModuleInputSlot* InData; // 0xB8
		::System::Boolean ShowPathSamples; // 0xC0
		::System::Boolean ShowCrossSamples; // 0xC1
		::FluffyUnderware::DevTools::IntRegion LimitCross; // 0xC4
		::System::Boolean ShowNormals; // 0xD0
		::System::Boolean ShowIndex; // 0xD1
		::System::Boolean ShowMap; // 0xD2
		::UnityEngine::Color PathColor; // 0xD4
		::UnityEngine::Color VolumeColor; // 0xE4
		::UnityEngine::Color NormalColor; // 0xF4
		::System::Boolean Interpolate; // 0x104
		::System::Single InterpolatePathF; // 0x108
		::System::Single InterpolateCrossF; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVOLUME__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_GENERATOR_MODULES_DEBUGVOLUME_RESET_OFFSET))(this);
		}
	};
}
