#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define MAP3DTRACKMATERIALCONFIG_APPLYMATERIALPROPERTIES_OFFSET UNITYSDK_OFFSET(0x12AF31F0)
#define MAP3DTRACKMATERIALCONFIG_ENSURERENDERERANDBLOCK_OFFSET UNITYSDK_OFFSET(0x12AF2DB0)
#define MAP3DTRACKMATERIALCONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12AF2D60)
#define MAP3DTRACKMATERIALCONFIG_SETFADEDISTANCECONFIG_OFFSET UNITYSDK_OFFSET(0x12AF30B0)
#define MAP3DTRACKMATERIALCONFIG_SETTRACKFADEPOINTS_OFFSET UNITYSDK_OFFSET(0x12AF2FA0)
#define MAP3DTRACKMATERIALCONFIG_UPDATE_OFFSET UNITYSDK_OFFSET(0x12AF35A0)
#define MAP3DTRACKMATERIALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12AF35F0)

inline static constexpr unsigned int Map3DTrackMaterialConfig_TypeDefinitionIndex = 60459;

class Map3DTrackMaterialConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector3 startPosition; // 0x18
	::UnityEngine::Vector3 middlePosition; // 0x24
	::UnityEngine::Vector3 endPosition; // 0x30
	::System::Boolean useStartFade; // 0x3C
	::System::Boolean useMiddleFade; // 0x3D
	::System::Boolean useEndFade; // 0x3E
	::System::Single slideFadeDistance; // 0x40
	::System::Boolean overrideStartFadeDistance; // 0x44
	::System::Single startFadeDistance; // 0x48
	::System::Boolean overrideMiddleFadeDistance; // 0x4C
	::System::Single middleFadeDistance; // 0x50
	::System::Boolean overrideEndFadeDistance; // 0x54
	::System::Single endFadeDistance; // 0x58
	::UnityEngine::MeshRenderer* meshRenderer; // 0x60
	::UnityEngine::MaterialPropertyBlock* mpb; // 0x68
	::System::Int32 _TrackStartPosition; // 0x70
	::System::Int32 _TrackMiddlePosition; // 0x74
	::System::Int32 _TrackEndPosition; // 0x78
	::System::Int32 _TrackFadeEnable; // 0x7C
	::System::Int32 _TrackFadeOverride; // 0x80
	::System::Int32 _TrackFadeDistance; // 0x84
	::System::Int32 _SlideFadeDistance; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DTRACKMATERIALCONFIG__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DTRACKMATERIALCONFIG_ONENABLE_OFFSET))(this);
	}

	::System::Void SetTrackFadePoints(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 middle, ::UnityEngine::Vector3 end, ::System::Boolean enableStart, ::System::Boolean enableMiddle, ::System::Boolean enableEnd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MAP3DTRACKMATERIALCONFIG_SETTRACKFADEPOINTS_OFFSET))(this, start, middle, end, enableStart, enableMiddle, enableEnd);
	}

	::System::Void SetFadeDistanceConfig(::System::Single globalDistance, ::System::Boolean startOverride, ::System::Single startDistance, ::System::Boolean middleOverride, ::System::Single middleDistance, ::System::Boolean endOverride, ::System::Single endDistance)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MAP3DTRACKMATERIALCONFIG_SETFADEDISTANCECONFIG_OFFSET))(this, globalDistance, startOverride, startDistance, middleOverride, middleDistance, endOverride, endDistance);
	}

	::System::Void EnsureRendererAndBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DTRACKMATERIALCONFIG_ENSURERENDERERANDBLOCK_OFFSET))(this);
	}

	::System::Void ApplyMaterialProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DTRACKMATERIALCONFIG_APPLYMATERIALPROPERTIES_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAP3DTRACKMATERIALCONFIG_UPDATE_OFFSET))(this);
	}
};
