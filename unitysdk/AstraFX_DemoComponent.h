#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AstraFXRenderer; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class RenderTexture; }

#define ASTRAFX_DEMOCOMPONENT_AFTERCREATERESOURCES_OFFSET UNITYSDK_OFFSET(0x158D5230)
#define ASTRAFX_DEMOCOMPONENT_AFTEREXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x158D52F0)
#define ASTRAFX_DEMOCOMPONENT_AWAKE_OFFSET UNITYSDK_OFFSET(0x158D4F30)
#define ASTRAFX_DEMOCOMPONENT_BEFOREEXECUTEPASSES_OFFSET UNITYSDK_OFFSET(0x158D5290)
#define ASTRAFX_DEMOCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x158D5030)
#define ASTRAFX_DEMOCOMPONENT_REFRESHASTRAFXRENDERER_OFFSET UNITYSDK_OFFSET(0x158D53A0)
#define ASTRAFX_DEMOCOMPONENT_RESETSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x158D50A0)
#define ASTRAFX_DEMOCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x158D53F0)

inline static constexpr unsigned int AstraFX_DemoComponent_TypeDefinitionIndex = 45803;

class AstraFX_DemoComponent : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::MeshRenderer* m_MeshRenderer; // 0x18
	::System::Int32 m_Resolution; // 0x20
	::UnityEngine::MaterialPropertyBlock* Field_5_2; // 0x28
	::UnityEngine::AstraFXRenderer* Field_5_3; // 0x30
	::System::Int32 Field_5_4; // 0x38
	::System::Int32 Field_5_5; // 0x3C
	::UnityEngine::RenderTexture* Field_5_6; // 0x40

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
