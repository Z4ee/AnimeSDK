#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/NapLodProxy.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NapSceneEffectLodProxy_SceneEffectLodConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define NAPSCENEEFFECTLODPROXY_INITBIND_OFFSET UNITYSDK_OFFSET(0x1907EBA0)
#define NAPSCENEEFFECTLODPROXY_ISONETIMELODPROXY_OFFSET UNITYSDK_OFFSET(0x1907F1F0)
#define NAPSCENEEFFECTLODPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1907E840)
#define NAPSCENEEFFECTLODPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1907E640)
#define NAPSCENEEFFECTLODPROXY_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1907EA40)
#define NAPSCENEEFFECTLODPROXY_ONLIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0x1907EAF0)
#define NAPSCENEEFFECTLODPROXY_ONREALDISABLE_OFFSET UNITYSDK_OFFSET(0x1907E9C0)
#define NAPSCENEEFFECTLODPROXY_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1907E7C0)
#define NAPSCENEEFFECTLODPROXY_UPDATELODINFO_OFFSET UNITYSDK_OFFSET(0x1907F230)
#define NAPSCENEEFFECTLODPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1907F8F0)
#define NAPSCENEEFFECTLODPROXY___BASE_ISONETIMELODPROXY_OFFSET UNITYSDK_OFFSET(0x1907FA20)

inline static constexpr unsigned int NapSceneEffectLodProxy_TypeDefinitionIndex = 29544;

class NapSceneEffectLodProxy : public ::UnityEngine::Rendering::Universal::Internal::NapLodProxy
{
public:
	::System::Collections::Generic::List_1<::NapSceneEffectLodProxy_SceneEffectLodConfig*>* m_EffectLodConfigs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnLightweightDeactive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ONLIGHTWEIGHTDEACTIVE_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ONREALENABLE_OFFSET))(this);
	}

	::System::Void OnRealDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ONREALDISABLE_OFFSET))(this);
	}

	::System::Void InitBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_INITBIND_OFFSET))(this);
	}

	::System::Boolean IsOneTimeLodProxy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ISONETIMELODPROXY_OFFSET))(this);
	}

	::System::Void UpdateLodInfo(::UnityEngine::Vector3 triggerPos, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSetting)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_UPDATELODINFO_OFFSET))(this, triggerPos, globalSetting);
	}

	::System::Boolean __base_IsOneTimeLodProxy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY___BASE_ISONETIMELODPROXY_OFFSET))(this);
	}
};
