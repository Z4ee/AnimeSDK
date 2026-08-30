#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPLightType.h"
#include "unitysdk/RPG/CustomRP/CustomAdditionalLightData_AreaLightDelegateShapeType.h"
#include "unitysdk/RPG/CustomRP/CustomAdditionalLightData_CustomLightFlag.h"
#include "unitysdk/RPG/CustomRP/CustomAdditionalLightData_LocalLightParam.h"
#include "unitysdk/RPG/CustomRP/CustomAdditionalLightData_LocalLightParamExt.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/RPG/CustomRP/POSMType.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/CRPRectShadowSerialize.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RuntimeAreaLightShapeType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ScenenLightManager { class EngineLight_ExportData_StencilDelegateExportData; }
namespace ScenenLightManager { class EngineVolumetricLight_ExportData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define SCENENLIGHTMANAGER_ENGINELIGHT_EXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF43820)

namespace ScenenLightManager
{
	inline static constexpr unsigned int EngineLight_ExportData_TypeDefinitionIndex = 49525;

	class EngineLight_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::System::Single shadowNearPlane; // 0x10
		::System::Boolean enabled; // 0x14
		::UnityEngine::LightType type; // 0x18
		::UnityEngine::Color color; // 0x1C
		::System::Single intensity; // 0x2C
		::System::Single range; // 0x30
		::System::Single spotAngle; // 0x34
		::System::Single innerSpotAngle; // 0x38
		::System::Single cookieSize; // 0x3C
		::UnityEngine::LightShadows shadows; // 0x40
		::System::Single shadowStrength; // 0x44
		::System::Single shadowBias; // 0x48
		::System::Single shadowNormalBias; // 0x4C
		::System::Boolean bakedShadowMapEnabled; // 0x50
		::System::Boolean bakedShadowMapHighQuality; // 0x51
		::System::String* bakedShadowMap; // 0x58
		::System::Boolean bakedHybirdDynamicShadow; // 0x60
		::System::Int32 bakedDesiredShadowmapResolution; // 0x64
		::System::String* cookie; // 0x68
		::System::Int32 cullingMask; // 0x70
		::System::Int32 renderingLayerMask; // 0x74
		::System::String* spotIESTex; // 0x78
		::UnityEngine::RuntimeAreaLightShapeType runtimeAreaLightShape; // 0x80
		::System::String* areaLightTex; // 0x88
		::System::Boolean enableAreaLightFalloff; // 0x90
		::System::Single lineRadius; // 0x94
		::System::Int32 numLinePoints; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* LinePoints; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* LineDirections; // 0xA8
		::System::Single CharIntensity; // 0xB0
		::UnityEngine::Color CharColor; // 0xB4
		::System::Boolean useBoundsRender; // 0xC4
		::RPG::CustomRP::POSMType posmType; // 0xC8
		::UnityEngine::Bounds _Bounds; // 0xCC
		::UnityEngine::Quaternion _BoundsRotation; // 0xE4
		::System::Boolean _OverrideBounds; // 0xF4
		::UnityEngine::Vector3 LocalLightVolumeOffset; // 0xF8
		::UnityEngine::Quaternion LocalLightVolume_Rot; // 0x104
		::RPG::CustomRP::CRPLightType InternalLightType; // 0x114
		::System::Boolean legecyFalloff; // 0x118
		::System::Single falloffExp; // 0x11C
		::System::Boolean useDirectionalAttenuation; // 0x120
		::UnityEngine::Vector2 DirectionalBS; // 0x124
		::UnityEngine::Vector2 CharacterLightFix; // 0x12C
		::UnityEngine::Vector2 SceneLightFix; // 0x134
		::System::Single RoughnessAdjMin; // 0x13C
		::System::Single RoughnessAdjMax; // 0x140
		::System::Single CharacterAffectRatio; // 0x144
		::System::Boolean CastVolumetricShadow; // 0x148
		::System::Boolean EnableVolumetricScattering; // 0x149
		::System::Single FogScatteringIntensity; // 0x14C
		::System::Single LimitRotRange; // 0x150
		::RPG::CustomRP::CustomAdditionalLightData_LocalLightParam OverlayColor; // 0x154
		::RPG::CustomRP::CustomAdditionalLightData_LocalLightParam AddColor; // 0x174
		::RPG::CustomRP::CustomAdditionalLightData_LocalLightParamExt DarkColor; // 0x194
		::System::Single BlendRange; // 0x1C4
		::UnityEngine::AnimationCurve* distanceFadeCurve; // 0x1C8
		::System::Int32 clipPlaneType; // 0x1D0
		::System::Int32 numLightClipPlane; // 0x1D4
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* clipPlaneLocalPos; // 0x1D8
		::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* clipPlaneLocalRot; // 0x1E0
		::System::Collections::Generic::List_1<::UnityEngine::CRPRectShadowSerialize>* geometryShadows; // 0x1E8
		::UnityEngine::Bounds geometryShadowAABB; // 0x1F0
		::System::Collections::Generic::List_1<::System::Single>* clipPlaneFadeDistances; // 0x208
		::System::Single sourceRadius; // 0x210
		::System::Single softSourceRadius; // 0x214
		::RPG::CustomRP::CustomAdditionalLightData_CustomLightFlag customLightFlag; // 0x218
		::RPG::CustomRP::CustomLightQualityFilter customLightQualityFilter; // 0x21C
		::System::Single RangeCut; // 0x220
		::System::Boolean ColorCookie; // 0x224
		::System::Single SpotLightScale; // 0x228
		::System::Single CookieAtten; // 0x22C
		::System::Single CookieHeight; // 0x230
		::UnityEngine::Vector2 areaSize; // 0x234
		::System::Collections::Generic::List_1<::ScenenLightManager::EngineLight_ExportData_StencilDelegateExportData*>* stencilDelegates; // 0x240
		::RPG::CustomRP::CustomAdditionalLightData_AreaLightDelegateShapeType AreaLightDelegateShape; // 0x248
		::UnityEngine::Vector3 BoxDelegateSize; // 0x24C
		::UnityEngine::Vector3 BoxDelegateOffset; // 0x258
		::System::Single shadowLightingFactor; // 0x264
		::System::UInt32 _Flag; // 0x268
		::System::Boolean UsePipelineSettings; // 0x26C
		::System::Boolean EnableVLight; // 0x26D
		::ScenenLightManager::EngineVolumetricLight_ExportData* vlightData; // 0x270

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_ENGINELIGHT_EXPORTDATA__CTOR_OFFSET))(this);
		}
	};
}
