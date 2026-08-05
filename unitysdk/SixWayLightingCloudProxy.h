#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define SIXWAYLIGHTINGCLOUDPROXY_APPLYBILLBOARDROTATION_OFFSET UNITYSDK_OFFSET(0x1E2417C0)
#define SIXWAYLIGHTINGCLOUDPROXY_APPLYPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1E241B70)
#define SIXWAYLIGHTINGCLOUDPROXY_ENSURECOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1E2415C0)
#define SIXWAYLIGHTINGCLOUDPROXY_GETBILLBOARDTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0x1E2424F0)
#define SIXWAYLIGHTINGCLOUDPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1E242310)
#define SIXWAYLIGHTINGCLOUDPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E241560)
#define SIXWAYLIGHTINGCLOUDPROXY_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E242250)
#define SIXWAYLIGHTINGCLOUDPROXY_RESET_OFFSET UNITYSDK_OFFSET(0x1E2422B0)
#define SIXWAYLIGHTINGCLOUDPROXY_SETTEXTUREIFVALID_OFFSET UNITYSDK_OFFSET(0x1E242360)
#define SIXWAYLIGHTINGCLOUDPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E242750)
#define SIXWAYLIGHTINGCLOUDPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E242680)

inline static constexpr unsigned int SixWayLightingCloudProxy_TypeDefinitionIndex = 27185;

class SixWayLightingCloudProxy : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_CustomSkyLightColorId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6340);
	}
	static ::System::Int32* StaticGet_UseCustomSunDirId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6344);
	}
	static ::System::Int32* StaticGet_EmissionColorId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6348);
	}
	static ::System::Int32* StaticGet_UseMaskTexId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x634C);
	}
	static ::System::Int32* StaticGet_CloudLightingRtbId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6350);
	}
	static ::System::Int32* StaticGet_UseCustomSkyLightColorId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6354);
	}
	static ::System::Int32* StaticGet_SoftParticlesFarFadeDistanceId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6358);
	}
	static ::System::Int32* StaticGet_SoftParticlesNearFadeDistanceId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x635C);
	}
	static ::System::Int32* StaticGet_MaskTexTilingId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6360);
	}
	static ::System::Int32* StaticGet_DistortionTexId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6364);
	}
	static ::System::Int32* StaticGet_MaskTexId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6368);
	}
	static ::System::Int32* StaticGet_UseCustomSunLightColorId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x636C);
	}
	static ::System::Int32* StaticGet_AlphaPowerId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6370);
	}
	static ::System::Int32* StaticGet_LightmapFlowId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6374);
	}
	static ::System::Int32* StaticGet_SaturationId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6378);
	}
	static ::System::Int32* StaticGet_CloudLightingLdfId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x637C);
	}
	static ::System::Int32* StaticGet_SunEulerAngleId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6380);
	}
	static ::System::Int32* StaticGet_FogIntensityId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6384);
	}
	static ::System::Int32* StaticGet_CustomSunLightColorId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6388);
	}
	static ::System::Int32* StaticGet_MainColorId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x638C);
	}
	static ::System::Int32* StaticGet_CameraFadeDistanceId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6390);
	}
	static ::System::Int32* StaticGet_MaskTexFlowId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6394);
	}
	static ::System::Int32* StaticGet_DistortionPowerId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x6398);
	}
	static ::System::Int32* StaticGet_SoftParticlesId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x639C);
	}
	static ::System::Int32* StaticGet_DistortionTexSpeedId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SixWayLightingCloudProxy_TypeDefinitionIndex)->GetStaticField(0x63A0);
	}
	::UnityEngine::Texture2D* cloudLightingRTB; // 0x18
	::UnityEngine::Texture2D* cloudLightingLDF; // 0x20
	::UnityEngine::Vector2 lightmapFlow; // 0x28
	::UnityEngine::Texture2D* distortionTex; // 0x30
	::UnityEngine::Vector2 distortionTexSpeed; // 0x38
	::System::Single distortionPower; // 0x40
	::System::Boolean useMaskTex; // 0x44
	::UnityEngine::Texture2D* maskTex; // 0x48
	::UnityEngine::Vector2 maskTexTiling; // 0x50
	::UnityEngine::Vector2 maskTexFlow; // 0x58
	::UnityEngine::Color mainColor; // 0x60
	::System::Single alphaPower; // 0x70
	::System::Single cameraFadeDistance; // 0x74
	::System::Boolean isBillboard; // 0x78
	::UnityEngine::Camera* billboardCamera; // 0x80
	::System::Single billboardYawOffset; // 0x88
	::System::Boolean useCustomSunDir; // 0x8C
	::UnityEngine::Vector3 sunEulerAngle; // 0x90
	::System::Boolean useCustomSunLightColor; // 0x9C
	::UnityEngine::Color customSunLightColor; // 0xA0
	::System::Boolean useCustomSkyLightColor; // 0xB0
	::UnityEngine::Color customSkyLightColor; // 0xB4
	::System::Boolean softParticles; // 0xC4
	::System::Single softParticlesNearFadeDistance; // 0xC8
	::System::Single softParticlesFarFadeDistance; // 0xCC
	::System::Single fogIntensity; // 0xD0
	::UnityEngine::Renderer* cachedRenderer; // 0xD8
	::UnityEngine::MaterialPropertyBlock* mpb; // 0xE0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY_RESET_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY_LATEUPDATE_OFFSET))(this);
	}

	::System::Void ApplyPropertyBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY_APPLYPROPERTYBLOCK_OFFSET))(this);
	}

	::System::Void SetTextureIfValid(::System::Int32 propertyId, ::UnityEngine::Texture* texture)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY_SETTEXTUREIFVALID_OFFSET))(this, propertyId, texture);
	}

	::System::Void EnsureComponents()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY_ENSURECOMPONENTS_OFFSET))(this);
	}

	::System::Void ApplyBillboardRotation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY_APPLYBILLBOARDROTATION_OFFSET))(this);
	}

	::UnityEngine::Camera* GetBillboardTargetCamera()
	{
		return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIXWAYLIGHTINGCLOUDPROXY_GETBILLBOARDTARGETCAMERA_OFFSET))(this);
	}
};
