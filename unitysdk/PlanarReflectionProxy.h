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

#define PLANARREFLECTIONPROXY_GET_DEBUGVIEWDATA_OFFSET UNITYSDK_OFFSET(0x19F230A0)
#define PLANARREFLECTIONPROXY_ISPRNEEDDISABLEDFORSCENE_OFFSET UNITYSDK_OFFSET(0x19F22230)
#define PLANARREFLECTIONPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19F22900)
#define PLANARREFLECTIONPROXY_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x19F229A0)
#define PLANARREFLECTIONPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19F21F40)
#define PLANARREFLECTIONPROXY_PREPAREDEBUGVIEWDATA_OFFSET UNITYSDK_OFFSET(0x19F22D70)
#define PLANARREFLECTIONPROXY_SET_DEBUGVIEWDATA_OFFSET UNITYSDK_OFFSET(0x19F230B0)
#define PLANARREFLECTIONPROXY_UPDATESSPRFORCEDISABLESCENE_OFFSET UNITYSDK_OFFSET(0x19F22610)
#define PLANARREFLECTIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x19F230C0)

inline static constexpr unsigned int PlanarReflectionProxy_TypeDefinitionIndex = 29481;

class PlanarReflectionProxy : public ::UnityEngine::NAPRenderPipeline0::PlanarReflectionProxy_NativeSRP
{
public:
	::System::Boolean _ignoreSmallStepDown; // 0x50
	::System::Boolean smoothFollowCharacter; // 0x51
	::UnityEngine::LayerMask disabledLayer; // 0x54
	::UnityEngine::NAPRenderPipeline0::ECameraRenderPassMask m_RenderPassMask; // 0x58
	::System::Boolean isPerformanceSensitiveSceneOnCurrentDevice; // 0x5C
	::System::Boolean drawProxyCameraPosition; // 0x5D
	::System::Boolean drawReflectionPlane; // 0x5E
	::Il2CppArray<::UnityEngine::Color>* frustumPlanes; // 0x60
	::PlanarReflectionProxy_ReflectionCameraDebugViewData* _DebugViewData_k__BackingField; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANARREFLECTIONPROXY_ONDISABLE_OFFSET))(this);
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
