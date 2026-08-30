#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/SSGIApplyMode.h"
#include "unitysdk/UnityEngine/Rendering/SSGIDisocclusionFixMethod.h"
#include "unitysdk/UnityEngine/Rendering/SSGIRayMarchingMethod.h"
#include "unitysdk/UnityEngine/Rendering/SSGIRayMarchingQuality.h"
#include "unitysdk/UnityEngine/Rendering/SSGISettings.h"

namespace System { class String; }

#define RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_BOOLFIELD_OFFSET UNITYSDK_OFFSET(0x185B5D30)
#define RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_FLOATFIELD_OFFSET UNITYSDK_OFFSET(0x185B5AA0)
#define RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_INTFIELD_OFFSET UNITYSDK_OFFSET(0x185B5C00)
#define RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_ONGUI_OFFSET UNITYSDK_OFFSET(0x185B5D50)
#define RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_TOENGINE_OFFSET UNITYSDK_OFFSET(0x185B5A00)
#define RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x185B5990)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReflectionSetting_SSGISettingData_TypeDefinitionIndex = 37168;

	class ReflectionSetting_SSGISettingData : public ::System::Object
	{
	public:
		::System::Single RenderScale; // 0x10
		::System::Int32 RenderHeightClamp; // 0x14
		::System::Single ScreenFadeDist; // 0x18
		::System::Boolean Denoise; // 0x1C
		::System::Boolean DenoiseEnablePrePostTransform; // 0x1D
		::System::Int32 SpatialFilterIterCount; // 0x20
		::System::Boolean SpatialFilterJitter; // 0x24
		::UnityEngine::Rendering::SSGIDisocclusionFixMethod DisocclusionFixMethod; // 0x28
		::System::Int32 TemporalSampleCount; // 0x2C
		::System::Int32 TemporalSampleCountFast; // 0x30
		::UnityEngine::Rendering::SSGIRayMarchingMethod RayMarchingMethod; // 0x34
		::UnityEngine::Rendering::SSGIRayMarchingQuality RayMarchingQuality; // 0x38
		::System::Single BrightnessBoostFactor; // 0x3C
		::System::Single BrightnessBoostThreshold; // 0x40
		::System::Single ResultBrightnessLimit; // 0x44
		::System::Single EmissionIndirectBoost; // 0x48
		::System::Single MainLightIndirectBoost; // 0x4C
		::System::Single ObjectThickness; // 0x50
		::System::Boolean PostTAA; // 0x54
		::System::Single PostTAAWeight; // 0x58
		::System::Boolean Upscale; // 0x5C
		::System::Int32 UpscaleResolutionHeight; // 0x60
		::UnityEngine::Rendering::SSGIApplyMode ApplyMode; // 0x64
		::System::Single Intensity; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA__CTOR_OFFSET))(this);
		}

		::System::Void ToEngine(::UnityEngine::Rendering::SSGISettings& a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::SSGISettings&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_TOENGINE_OFFSET))(this, a1);
		}

		::System::Single FloatField(::System::Single a1, ::System::String* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_FLOATFIELD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 IntField(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_INTFIELD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean BoolField(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_BOOLFIELD_OFFSET))(this, a1, a2);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_REFLECTIONSETTING_SSGISETTINGDATA_ONGUI_OFFSET))(this);
		}
	};
}
