#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AstraFXRenderer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }

#define ASTRAFX_DEMOCOMPONENT_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x15972180)
#define ASTRAFX_DEMOCOMPONENT_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x15972240)
#define ASTRAFX_DEMOCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x15971E80)
#define ASTRAFX_DEMOCOMPONENT_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x159721E0)
#define ASTRAFX_DEMOCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x15971F80)
#define ASTRAFX_DEMOCOMPONENT_REFRESHASTRAFXRENDERER_OFFSET UNITYSDK_OFFSET(0x159722F0)
#define ASTRAFX_DEMOCOMPONENT_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x15971FF0)
#define ASTRAFX_DEMOCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15972340)

inline static constexpr unsigned int AstraFX_DemoComponent_TypeDefinitionIndex = 48055;

class AstraFX_DemoComponent : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x18
	::System::Int32 m_Resolution; // 0x20
	::UnityEngine::MaterialPropertyBlock* MNJGPDNOJML; // 0x28
	::UnityEngine::AstraFXRenderer* HGBJGOIFMJD; // 0x30
	::System::Int32 HLKMMONCLJI; // 0x38
	::System::Int32 HILEPOABOOP; // 0x3C
	::UnityEngine::RenderTexture* LFGFMGDLEEE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_DEMOCOMPONENT__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_DEMOCOMPONENT_AWAKE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_DEMOCOMPONENT_ONENABLE_OFFSET))(this);
	}

	::System::Void ResetSimulationState()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_DEMOCOMPONENT_RESETSIMULATIONSTATE_OFFSET))(this);
	}

	::System::Void AfterCreateResources()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_DEMOCOMPONENT_AFTERCREATERESOURCES_OFFSET))(this);
	}

	::System::Void BeforeExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_DEMOCOMPONENT_BEFOREEXECUTEPASSES_OFFSET))(this);
	}

	::System::Void AfterExecutePasses()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_DEMOCOMPONENT_AFTEREXECUTEPASSES_OFFSET))(this);
	}

	::System::Void RefreshAstraFXRenderer()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ASTRAFX_DEMOCOMPONENT_REFRESHASTRAFXRENDERER_OFFSET))(this);
	}
};
