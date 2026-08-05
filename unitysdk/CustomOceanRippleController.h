#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CUSTOMOCEANRIPPLECONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A89ACF0)
#define CUSTOMOCEANRIPPLECONTROLLER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A89B1F0)
#define CUSTOMOCEANRIPPLECONTROLLER_PUSHRIPPLEPARAMS_OFFSET UNITYSDK_OFFSET(0x1A89AF20)
#define CUSTOMOCEANRIPPLECONTROLLER_SANITIZERIPPLEPARAMS_OFFSET UNITYSDK_OFFSET(0x1A89AE30)
#define CUSTOMOCEANRIPPLECONTROLLER_SETRIPPLEDATA_OFFSET UNITYSDK_OFFSET(0x1A89B5A0)
#define CUSTOMOCEANRIPPLECONTROLLER_SETRIPPLEENABLED_OFFSET UNITYSDK_OFFSET(0x1A89B750)
#define CUSTOMOCEANRIPPLECONTROLLER_TRIGGERRIPPLE_OFFSET UNITYSDK_OFFSET(0x1A89B460)
#define CUSTOMOCEANRIPPLECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A89B300)
#define CUSTOMOCEANRIPPLECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A89B830)
#define CUSTOMOCEANRIPPLECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A89B7D0)

inline static constexpr unsigned int CustomOceanRippleController_TypeDefinitionIndex = 77308;

class CustomOceanRippleController : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_CustomSingleRippleParams0ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CustomOceanRippleController_TypeDefinitionIndex)->GetStaticField(0x10F00);
	}
	static ::System::Int32* StaticGet_CustomSingleRippleParams2ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CustomOceanRippleController_TypeDefinitionIndex)->GetStaticField(0x10F04);
	}
	static ::System::Int32* StaticGet_CustomSingleRippleParams1ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CustomOceanRippleController_TypeDefinitionIndex)->GetStaticField(0x10F08);
	}
	// static const ::System::Single MinRippleRange; // 0x0
	// static const ::System::Single MaxRippleRange; // 0x0
	// static const ::System::Single MinRippleFrequency; // 0x0
	// static const ::System::Single MaxRippleFrequency; // 0x0
	// static const ::System::Single MinRippleIntensity; // 0x0
	// static const ::System::Single MaxRippleIntensity; // 0x0
	// static const ::System::Single MinFadeDuration; // 0x0
	// static const ::System::Single MaxFadeDuration; // 0x0
	::UnityEngine::Vector2 rippleCenterXZ; // 0x18
	::System::Single rippleRange; // 0x20
	::System::Single rippleFrequency; // 0x24
	::System::Single rippleIntensity; // 0x28
	::System::Single fadeDuration; // 0x2C
	::System::Boolean rippleEnabled; // 0x30
	::System::Single triggerTime; // 0x34
	::System::Single stopTime; // 0x38
	::System::Boolean wasRippleEnabled; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER_ONVALIDATE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER_UPDATE_OFFSET))(this);
	}

	::System::Void TriggerRipple(::UnityEngine::Vector3 center, ::System::Single range, ::System::Single frequency, ::System::Single fade)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER_TRIGGERRIPPLE_OFFSET))(this, center, range, frequency, fade);
	}

	::System::Void SetRippleData(::UnityEngine::Vector3 center, ::System::Single range, ::System::Single frequency, ::System::Single fade, ::System::Boolean enabled)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER_SETRIPPLEDATA_OFFSET))(this, center, range, frequency, fade, enabled);
	}

	::System::Void SetRippleEnabled(::System::Boolean enabled)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER_SETRIPPLEENABLED_OFFSET))(this, enabled);
	}

	::System::Void PushRippleParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER_PUSHRIPPLEPARAMS_OFFSET))(this);
	}

	::System::Void SanitizeRippleParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMOCEANRIPPLECONTROLLER_SANITIZERIPPLEPARAMS_OFFSET))(this);
	}
};
