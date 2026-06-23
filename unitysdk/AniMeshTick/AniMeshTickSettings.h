#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AniMeshTick/TickStage.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define ANIMESHTICK_ANIMESHTICKSETTINGS_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x10E3D2F0)
#define ANIMESHTICK_ANIMESHTICKSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x10E3D3A0)

namespace AniMeshTick
{
	inline static constexpr unsigned int AniMeshTickSettings_TypeDefinitionIndex = 78072;

	class AniMeshTickSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::AniMeshTick::TickStage tickStage; // 0x18
		::System::Int32 maxSplinesPerFrame; // 0x1C
		::System::Int32 maxControllersPerFrame; // 0x20
		::System::Int32 maxTweensPerFrame; // 0x24
		::System::Boolean enableTickLod; // 0x28
		::System::Boolean applyLodToSplines; // 0x29
		::System::Boolean applyLodToControllers; // 0x2A
		::System::Boolean applyLodToTweens; // 0x2B
		::System::Single nearDistance; // 0x2C
		::System::Single mediumDistance; // 0x30
		::System::Single farDistance; // 0x34
		::System::Single nearInterval; // 0x38
		::System::Single mediumInterval; // 0x3C
		::System::Single farInterval; // 0x40
		::System::Single veryFarInterval; // 0x44
		::System::Single fallbackInterval; // 0x48
		::System::Boolean useScreenSpaceLod; // 0x4C
		::System::Single targetScreenHeight; // 0x50
		::System::Single representativeSize; // 0x54
		::System::Single nearPixelThreshold; // 0x58
		::System::Single mediumPixelThreshold; // 0x5C
		::System::Single farPixelThreshold; // 0x60
		::System::Single maxLateralSpeed; // 0x64
		::System::Single maxAngularSpeed; // 0x68
		::System::Single nearJumpThreshold; // 0x6C
		::System::Single mediumJumpThreshold; // 0x70
		::System::Single farJumpThreshold; // 0x74
		::System::Single veryFarJumpThreshold; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANIMESHTICK_ANIMESHTICKSETTINGS_ONVALIDATE_OFFSET))(this);
		}
	};
}
