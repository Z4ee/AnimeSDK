#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/LightingBehaviour_Struct_2_52AD02145F5FCE36_33.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OtherLightShadowResolution.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SimulatingPlatform.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Lighting; }

#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x141ACDA0)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x141B1C70)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x141B1C60)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x141ADC20)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_9A5C744E6CF1666D_OFFSET UNITYSDK_OFFSET(0x141AD4B0)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x141B1C80)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x141B1C50)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x141AD8A0)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x141B0C00)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x141B1090)
#define MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x141B1B30)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int LightingBehaviour_TypeDefinitionIndex = 76282;

	class LightingBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::LightingBehaviour_Struct_2_52AD02145F5FCE36_33 _methodParm; // 0x18
		::System::Boolean enabled; // 0xD0
		::System::Boolean active_cascade0ToNextBlendIntensity; // 0xD1
		::System::Boolean use_cascade0ToNextBlendIntensity; // 0xD2
		::System::Single cascade0ToNextBlendIntensity; // 0xD4
		::System::Boolean active_cascade1ToNextBlendIntensity; // 0xD8
		::System::Boolean use_cascade1ToNextBlendIntensity; // 0xD9
		::System::Single cascade1ToNextBlendIntensity; // 0xDC
		::System::Boolean active_cascade2ToNextBlendIntensity; // 0xE0
		::System::Boolean use_cascade2ToNextBlendIntensity; // 0xE1
		::System::Single cascade2ToNextBlendIntensity; // 0xE4
		::System::Boolean active_cascade3ToNextBlendIntensity; // 0xE8
		::System::Boolean use_cascade3ToNextBlendIntensity; // 0xE9
		::System::Single cascade3ToNextBlendIntensity; // 0xEC
		::System::Boolean active_maxShadowDistance; // 0xF0
		::System::Boolean use_maxShadowDistance; // 0xF1
		::System::Single maxShadowDistance; // 0xF4
		::System::Boolean active_cascadeShadowSplitCount; // 0xF8
		::System::Boolean use_cascadeShadowSplitCount; // 0xF9
		::System::Int32 cascadeShadowSplitCount; // 0xFC
		::System::Boolean active_cascadeShadowSplit0; // 0x100
		::System::Boolean use_cascadeShadowSplit0; // 0x101
		::System::Single cascadeShadowSplit0; // 0x104
		::System::Boolean active_cascadeShadowSplit1; // 0x108
		::System::Boolean use_cascadeShadowSplit1; // 0x109
		::System::Single cascadeShadowSplit1; // 0x10C
		::System::Boolean active_cascadeShadowSplit2; // 0x110
		::System::Boolean use_cascadeShadowSplit2; // 0x111
		::System::Single cascadeShadowSplit2; // 0x114
		::System::Boolean active_otherLightShadowResolution; // 0x118
		::System::Boolean use_otherLightShadowResolution; // 0x119
		::UnityEngine::NAPRenderPipeline0::OtherLightShadowResolution otherLightShadowResolution; // 0x11C
		::System::Boolean active_shadowBlurRadius; // 0x120
		::System::Boolean use_shadowBlurRadius; // 0x121
		::System::Single shadowBlurRadius; // 0x124
		::System::Boolean active_isContactShadowOn; // 0x128
		::System::Boolean use_isContactShadowOn; // 0x129
		::System::Boolean isContactShadowOn; // 0x12A
		::System::Boolean active_overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x12B
		::System::Boolean use_overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x12C
		::System::Boolean overrideAdditionalLightsDiffuseOnlyDistThreshold; // 0x12D
		::System::Boolean active_additionalLightsDiffuseOnlyDistThreshold; // 0x12E
		::System::Boolean use_additionalLightsDiffuseOnlyDistThreshold; // 0x12F
		::System::Single additionalLightsDiffuseOnlyDistThreshold; // 0x130
		::System::Boolean active_punctualLightShadowStrength; // 0x134
		::System::Boolean use_punctualLightShadowStrength; // 0x135
		::System::Single punctualLightShadowStrength; // 0x138
		::System::Boolean active_lockMaxShadowDistance; // 0x13C
		::System::Boolean use_lockMaxShadowDistance; // 0x13D
		::System::Boolean lockMaxShadowDistance; // 0x13E
		::System::Boolean active_lockSplitByMetric; // 0x13F
		::System::Boolean use_lockSplitByMetric; // 0x140
		::System::Boolean lockSplitByMetric; // 0x141
		::System::Boolean active_overridePunctualLightShadowResolutionConfig; // 0x142
		::System::Boolean use_overridePunctualLightShadowResolutionConfig; // 0x143
		::System::Boolean overridePunctualLightShadowResolutionConfig; // 0x144
		::System::Boolean active_localLightLodBiasMultiply; // 0x145
		::System::Boolean use_localLightLodBiasMultiply; // 0x146
		::System::Single localLightLodBiasMultiply; // 0x148
		::System::Boolean active_microShadowIntensity; // 0x14C
		::System::Boolean use_microShadowIntensity; // 0x14D
		::System::Single microShadowIntensity; // 0x150
		::System::Boolean active_disableShadowMapCache; // 0x154
		::System::Boolean use_disableShadowMapCache; // 0x155
		::System::Boolean disableShadowMapCache; // 0x156
		::System::Boolean active_enableCustomMaxLightCount; // 0x157
		::System::Boolean use_enableCustomMaxLightCount; // 0x158
		::System::Boolean enableCustomMaxLightCount; // 0x159
		::System::Boolean active_maxLocalLightCount; // 0x15A
		::System::Boolean use_maxLocalLightCount; // 0x15B
		::System::Int32 maxLocalLightCount; // 0x15C
		::System::Boolean active_disableLocalLightShadowMapCached; // 0x160
		::System::Boolean use_disableLocalLightShadowMapCached; // 0x161
		::System::Boolean disableLocalLightShadowMapCached; // 0x162
		::System::Boolean active_disableLocalLightShadowOnPlatform; // 0x163
		::System::Boolean use_disableLocalLightShadowOnPlatform; // 0x164
		::UnityEngine::Rendering::Universal::SimulatingPlatform disableLocalLightShadowOnPlatform; // 0x168
		::System::Boolean active_useConstantLodBiasValue; // 0x16C
		::System::Boolean use_useConstantLodBiasValue; // 0x16D
		::System::Boolean useConstantLodBiasValue; // 0x16E
		::System::Boolean active_disableMainLightShadow; // 0x16F
		::System::Boolean use_disableMainLightShadow; // 0x170
		::System::Boolean disableMainLightShadow; // 0x171
		::System::Boolean active_outOfRangeLightStrength; // 0x172
		::System::Boolean use_outOfRangeLightStrength; // 0x173
		::System::Single outOfRangeLightStrength; // 0x174
		::System::Boolean active_disableShadowCasterHiz; // 0x178
		::System::Boolean use_disableShadowCasterHiz; // 0x179
		::System::Boolean disableShadowCasterHiz; // 0x17A
		::System::Boolean active_enableLocalLightGroundDiscard; // 0x17B
		::System::Boolean use_enableLocalLightGroundDiscard; // 0x17C
		::System::Boolean enableLocalLightGroundDiscard; // 0x17D
		::System::Boolean active_localLightDiscardGround1Position; // 0x17E
		::System::Boolean use_localLightDiscardGround1Position; // 0x17F
		::System::Single localLightDiscardGround1Position; // 0x180
		::UnityEngine::Rendering::Universal::Lighting* _Lighting; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::Lighting* Method_4_9A5C744E6CF1666D(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::Lighting*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_9A5C744E6CF1666D_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_LIGHTINGBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
