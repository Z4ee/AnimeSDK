#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class WeatherConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering::Universal { class ExpHeightFogConfig; }

#define ENVVOLUMEFOGCONTROLLER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x114038F0)
#define ENVVOLUMEFOGCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11403A90)
#define ENVVOLUMEFOGCONTROLLER_RECOVERGLOBALFOGPARAMS_OFFSET UNITYSDK_OFFSET(0x11403890)
#define ENVVOLUMEFOGCONTROLLER_SETHEIGHTFOGCONFIG_OFFSET UNITYSDK_OFFSET(0x11403780)
#define ENVVOLUMEFOGCONTROLLER_SWITCHPARAMS_OFFSET UNITYSDK_OFFSET(0x114035F0)
#define ENVVOLUMEFOGCONTROLLER_TESTDARK_OFFSET UNITYSDK_OFFSET(0x114036E0)
#define ENVVOLUMEFOGCONTROLLER_TESTLIGHT_OFFSET UNITYSDK_OFFSET(0x114037F0)
#define ENVVOLUMEFOGCONTROLLER_TESTSWITCHPARAMS_OFFSET UNITYSDK_OFFSET(0x114035A0)
#define ENVVOLUMEFOGCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11403B10)

inline static constexpr unsigned int EnvVolumeFogController_TypeDefinitionIndex = 56738;

class EnvVolumeFogController : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ExpHeightFogConfig*>* expFogConfig; // 0x18
	::UnityEngine::Rendering::Universal::ExpHeightFogConfig* darkConfig; // 0x20
	::UnityEngine::Rendering::Universal::ExpHeightFogConfig* lightConfig; // 0x28
	::WeatherConfig* weatherConfig; // 0x30
	::UnityEngine::Rendering::Universal::ExpHeightFogConfig* originalFogConfig; // 0x38
	::System::Boolean initialized; // 0x40
	::System::Int32 testIndex; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVVOLUMEFOGCONTROLLER__CTOR_OFFSET))(this);
	}

	::System::Void TestSwitchParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVVOLUMEFOGCONTROLLER_TESTSWITCHPARAMS_OFFSET))(this);
	}

	::System::Void TestDark()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVVOLUMEFOGCONTROLLER_TESTDARK_OFFSET))(this);
	}

	::System::Void TestLight()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVVOLUMEFOGCONTROLLER_TESTLIGHT_OFFSET))(this);
	}

	::System::Void RecoverGlobalFogParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVVOLUMEFOGCONTROLLER_RECOVERGLOBALFOGPARAMS_OFFSET))(this);
	}

	::System::Void SwitchParams(::System::Int32 index)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ENVVOLUMEFOGCONTROLLER_SWITCHPARAMS_OFFSET))(this, index);
	}

	::System::Void SetHeightFogConfig(::UnityEngine::Rendering::Universal::ExpHeightFogConfig* newFogConfig)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ExpHeightFogConfig*))((::PBYTE)hIl2Cpp + ENVVOLUMEFOGCONTROLLER_SETHEIGHTFOGCONFIG_OFFSET))(this, newFogConfig);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVVOLUMEFOGCONTROLLER_INITIALIZE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVVOLUMEFOGCONTROLLER_ONDISABLE_OFFSET))(this);
	}
};
