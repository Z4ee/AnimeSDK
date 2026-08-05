#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ECameraRenderPassMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PlanarReflectionProxy_NativeSRP.h"
#include "unitysdk/UnityEngine/Vector4.h"

class PlanarReflectionProxy_ReflectionCameraDebugViewData;
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define PLANARREFLECTIONPROXY_GET_DEBUGVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1D2FA5D0)
#define PLANARREFLECTIONPROXY_ISPRNEEDDISABLEDFORSCENE_OFFSET UNITYSDK_OFFSET(0x1D2F9720)
#define PLANARREFLECTIONPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1D2F9DF0)
#define PLANARREFLECTIONPROXY_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x1D2F9E90)
#define PLANARREFLECTIONPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1D2F92E0)
#define PLANARREFLECTIONPROXY_PREPAREDEBUGVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1D2FA290)
#define PLANARREFLECTIONPROXY_SET_DEBUGVIEWDATA_OFFSET UNITYSDK_OFFSET(0x1D2FA5E0)
#define PLANARREFLECTIONPROXY_SYNCCULLINGPARAMS_OFFSET UNITYSDK_OFFSET(0x1D2F9670)
#define PLANARREFLECTIONPROXY_UPDATESSPRFORCEDISABLESCENE_OFFSET UNITYSDK_OFFSET(0x1D2F9B00)
#define PLANARREFLECTIONPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2FA7C0)
#define PLANARREFLECTIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2FA5F0)

inline static constexpr unsigned int PlanarReflectionProxy_TypeDefinitionIndex = 27377;

class PlanarReflectionProxy : public ::UnityEngine::NAPRenderPipeline0::PlanarReflectionProxy_NativeSRP
{
public:
	static ::System::Int32* StaticGet_s_MaxVisibleLightCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PlanarReflectionProxy_TypeDefinitionIndex)->GetStaticField(0x73B0);
	}
	static ::UnityEngine::LayerMask* StaticGet_s_ScreenCullingRadiosForMiddleLayer()
	{
		return (::UnityEngine::LayerMask*)Il2CppClass::FromTypeDefinitionIndex(PlanarReflectionProxy_TypeDefinitionIndex)->GetStaticField(0x73B4);
	}
	static ::System::Single* StaticGet_s_ScreenCullingRadiosForMiddle()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PlanarReflectionProxy_TypeDefinitionIndex)->GetStaticField(0x73B8);
	}
	static ::System::Single* StaticGet_s_ScreenCullingRadiosForSmall()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PlanarReflectionProxy_TypeDefinitionIndex)->GetStaticField(0x73BC);
	}
	static ::UnityEngine::LayerMask* StaticGet_s_ScreenCullingRadiosForSmallLayer()
	{
		return (::UnityEngine::LayerMask*)Il2CppClass::FromTypeDefinitionIndex(PlanarReflectionProxy_TypeDefinitionIndex)->GetStaticField(0x73C0);
	}
	::System::Boolean _ignoreSmallStepDown; // 0x50
	::System::Boolean smoothFollowCharacter; // 0x51
	::UnityEngine::LayerMask disabledLayer; // 0x54
	::UnityEngine::NAPRenderPipeline0::ECameraRenderPassMask m_RenderPassMask; // 0x58
	::UnityEngine::LayerMask screenCullingRadiosForSmallLayer; // 0x5C
	::System::Single screenCullingRadiosForSmall; // 0x60
	::UnityEngine::LayerMask screenCullingRadiosForMiddleLayer; // 0x64
	::System::Single screenCullingRadiosForMiddle; // 0x68
	::System::Int32 maxVisibleLightCount; // 0x6C
	::System::Boolean isPerformanceSensitiveSceneOnCurrentDevice; // 0x70
	::System::Boolean drawProxyCameraPosition; // 0x71
	::System::Boolean drawReflectionPlane; // 0x72
	::Il2CppArray<::UnityEngine::Color>* frustumPlanes; // 0x78
	::PlanarReflectionProxy_ReflectionCameraDebugViewData* _DebugViewData_k__BackingField; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_ONDISABLE_OFFSET))(this);
	}

	::System::Void SyncCullingParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_SYNCCULLINGPARAMS_OFFSET))(this);
	}

	::System::Boolean IsPRNeedDisabledForScene(::System::String* sceneName, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* urpSetting)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_ISPRNEEDDISABLEDFORSCENE_OFFSET))(this, sceneName, urpSetting);
	}

	::System::Void UpdateSSPRForceDisableScene(::System::String* sceneName, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* urpAsset)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_UPDATESSPRFORCEDISABLESCENE_OFFSET))(this, sceneName, urpAsset);
	}

	::System::Void OnDrawGizmosSelected()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_ONDRAWGIZMOSSELECTED_OFFSET))(this);
	}

	::System::Void PrepareDebugViewData(::UnityEngine::Camera* mirrorCamera, ::UnityEngine::Vector4 clipPlaneCS, ::UnityEngine::Vector4 clipPlaneWS)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_PREPAREDEBUGVIEWDATA_OFFSET))(this, mirrorCamera, clipPlaneCS, clipPlaneWS);
	}

	::PlanarReflectionProxy_ReflectionCameraDebugViewData* get_DebugViewData()
	{
		return ((::PlanarReflectionProxy_ReflectionCameraDebugViewData*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_GET_DEBUGVIEWDATA_OFFSET))(this);
	}

	::System::Void set_DebugViewData(::PlanarReflectionProxy_ReflectionCameraDebugViewData* value)
	{
		return ((::System::Void(*)(::PVOID, ::PlanarReflectionProxy_ReflectionCameraDebugViewData*))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_SET_DEBUGVIEWDATA_OFFSET))(this, value);
	}
};
