#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/RTXVolumeBehaviour_Struct_2_52AD02145F5FCE3A_22.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class RTXVolume; }

#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A5EAE60)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET UNITYSDK_OFFSET(0x1A5EC700)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_21687F330C2D11B4_OFFSET UNITYSDK_OFFSET(0x1A5EBDC0)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1A5F1A50)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1A5F1A70)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1A5F1A80)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1A5F1A60)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A5EC1B0)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A5F0450)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A5F0AB0)
#define MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5F1930)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RTXVolumeBehaviour_TypeDefinitionIndex = 63583;

	class RTXVolumeBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::RTXVolumeBehaviour_Struct_2_52AD02145F5FCE3A_22 _methodParm; // 0x18
		::System::Boolean behaviorEnabled; // 0x190
		::System::Boolean active_enableRTXSubConfigs1; // 0x191
		::System::Boolean use_enableRTXSubConfigs1; // 0x192
		::System::Boolean enableRTXSubConfigs1; // 0x193
		::System::Boolean active_areaLightEnabled; // 0x194
		::System::Boolean use_areaLightEnabled; // 0x195
		::System::Boolean areaLightEnabled; // 0x196
		::System::Boolean active_pvSubstepNum; // 0x197
		::System::Boolean use_pvSubstepNum; // 0x198
		::System::Int32 pvSubstepNum; // 0x19C
		::System::Boolean active_qualityPreset; // 0x1A0
		::System::Boolean use_qualityPreset; // 0x1A1
		::System::Int32 qualityPreset; // 0x1A4
		::System::Boolean active_rayBudget; // 0x1A8
		::System::Boolean use_rayBudget; // 0x1A9
		::System::Single rayBudget; // 0x1AC
		::System::Boolean active_resolutionScale; // 0x1B0
		::System::Boolean use_resolutionScale; // 0x1B1
		::System::Single resolutionScale; // 0x1B4
		::System::Boolean active_responseSpeed; // 0x1B8
		::System::Boolean use_responseSpeed; // 0x1B9
		::System::Single responseSpeed; // 0x1BC
		::System::Boolean active_enabled; // 0x1C0
		::System::Boolean use_enabled; // 0x1C1
		::System::Boolean enabled; // 0x1C2
		::System::Boolean active_boost; // 0x1C3
		::System::Boolean use_boost; // 0x1C4
		::System::Single boost; // 0x1C8
		::System::Boolean active_specularBoost; // 0x1CC
		::System::Boolean use_specularBoost; // 0x1CD
		::System::Single specularBoost; // 0x1D0
		::System::Boolean active_skyDiffuseScale; // 0x1D4
		::System::Boolean use_skyDiffuseScale; // 0x1D5
		::System::Single skyDiffuseScale; // 0x1D8
		::System::Boolean active_skySpecularScale; // 0x1DC
		::System::Boolean use_skySpecularScale; // 0x1DD
		::System::Single skySpecularScale; // 0x1E0
		::System::Boolean active_splitSpecThreshold; // 0x1E4
		::System::Boolean use_splitSpecThreshold; // 0x1E5
		::System::Single splitSpecThreshold; // 0x1E8
		::System::Boolean active_microAOStrength; // 0x1EC
		::System::Boolean use_microAOStrength; // 0x1ED
		::System::Single microAOStrength; // 0x1F0
		::System::Boolean active_multiBounceScale; // 0x1F4
		::System::Boolean use_multiBounceScale; // 0x1F5
		::System::Single multiBounceScale; // 0x1F8
		::System::Boolean active_multiBounceFarDistScale; // 0x1FC
		::System::Boolean use_multiBounceFarDistScale; // 0x1FD
		::System::Single multiBounceFarDistScale; // 0x200
		::System::Boolean active_multiBounceIndoorScale; // 0x204
		::System::Boolean use_multiBounceIndoorScale; // 0x205
		::System::Single multiBounceIndoorScale; // 0x208
		::System::Boolean active_multiBounceScaleMaxDist; // 0x20C
		::System::Boolean use_multiBounceScaleMaxDist; // 0x20D
		::System::Single multiBounceScaleMaxDist; // 0x210
		::System::Boolean active_lightmapBoost; // 0x214
		::System::Boolean use_lightmapBoost; // 0x215
		::System::Single lightmapBoost; // 0x218
		::System::Boolean active_lut; // 0x21C
		::System::Boolean use_lut; // 0x21D
		::UnityEngine::Texture* lut; // 0x220
		::System::Boolean active_roughnessLut; // 0x228
		::System::Boolean use_roughnessLut; // 0x229
		::UnityEngine::Texture* roughnessLut; // 0x230
		::System::Boolean active_multiBounceAlbedoLut; // 0x238
		::System::Boolean use_multiBounceAlbedoLut; // 0x239
		::UnityEngine::Texture* multiBounceAlbedoLut; // 0x240
		::System::Boolean active_hueExcludeMin; // 0x248
		::System::Boolean use_hueExcludeMin; // 0x249
		::System::Single hueExcludeMin; // 0x24C
		::System::Boolean active_hueExcludeMax; // 0x250
		::System::Boolean use_hueExcludeMax; // 0x251
		::System::Single hueExcludeMax; // 0x254
		::System::Boolean active_hueExcludeFade; // 0x258
		::System::Boolean use_hueExcludeFade; // 0x259
		::System::Single hueExcludeFade; // 0x25C
		::System::Boolean active_hitHueExcludeMin; // 0x260
		::System::Boolean use_hitHueExcludeMin; // 0x261
		::System::Single hitHueExcludeMin; // 0x264
		::System::Boolean active_hitHueExcludeMax; // 0x268
		::System::Boolean use_hitHueExcludeMax; // 0x269
		::System::Single hitHueExcludeMax; // 0x26C
		::System::Boolean active_hitHueExcludeFade; // 0x270
		::System::Boolean use_hitHueExcludeFade; // 0x271
		::System::Single hitHueExcludeFade; // 0x274
		::System::Boolean active_colorBleedChromaBoost; // 0x278
		::System::Boolean use_colorBleedChromaBoost; // 0x279
		::System::Single colorBleedChromaBoost; // 0x27C
		::System::Boolean active_colorBleedHueSimThreshold; // 0x280
		::System::Boolean use_colorBleedHueSimThreshold; // 0x281
		::System::Single colorBleedHueSimThreshold; // 0x284
		::System::Boolean active_colorBleedSatSimThreshold; // 0x288
		::System::Boolean use_colorBleedSatSimThreshold; // 0x289
		::System::Single colorBleedSatSimThreshold; // 0x28C
		::System::Boolean active_colorBleedValSimThreshold; // 0x290
		::System::Boolean use_colorBleedValSimThreshold; // 0x291
		::System::Single colorBleedValSimThreshold; // 0x294
		::System::Boolean active_dirBiasStrength; // 0x298
		::System::Boolean use_dirBiasStrength; // 0x299
		::System::Single dirBiasStrength; // 0x29C
		::System::Boolean active_bandBiasPower; // 0x2A0
		::System::Boolean use_bandBiasPower; // 0x2A1
		::System::Single bandBiasPower; // 0x2A4
		::System::Boolean active_upSuppressStrength; // 0x2A8
		::System::Boolean use_upSuppressStrength; // 0x2A9
		::System::Single upSuppressStrength; // 0x2AC
		::System::Boolean active_inverseBentBiasEnabled; // 0x2B0
		::System::Boolean use_inverseBentBiasEnabled; // 0x2B1
		::System::Boolean inverseBentBiasEnabled; // 0x2B2
		::System::Boolean active_inverseBentBiasStrength; // 0x2B3
		::System::Boolean use_inverseBentBiasStrength; // 0x2B4
		::System::Single inverseBentBiasStrength; // 0x2B8
		::System::Boolean active_screenSteerEnabled; // 0x2BC
		::System::Boolean use_screenSteerEnabled; // 0x2BD
		::System::Boolean screenSteerEnabled; // 0x2BE
		::System::Boolean active_screenSteerStrength; // 0x2BF
		::System::Boolean use_screenSteerStrength; // 0x2C0
		::System::Single screenSteerStrength; // 0x2C4
		::System::Boolean active_distWeightEnabled; // 0x2C8
		::System::Boolean use_distWeightEnabled; // 0x2C9
		::System::Boolean distWeightEnabled; // 0x2CA
		::System::Boolean active_distWeightExp; // 0x2CB
		::System::Boolean use_distWeightExp; // 0x2CC
		::System::Single distWeightExp; // 0x2D0
		::System::Boolean active_restirSatWeight; // 0x2D4
		::System::Boolean use_restirSatWeight; // 0x2D5
		::System::Single restirSatWeight; // 0x2D8
		::System::Boolean active_historySatWeight; // 0x2DC
		::System::Boolean use_historySatWeight; // 0x2DD
		::System::Single historySatWeight; // 0x2E0
		::System::Boolean active_cacheSatInjectScale; // 0x2E4
		::System::Boolean use_cacheSatInjectScale; // 0x2E5
		::System::Single cacheSatInjectScale; // 0x2E8
		::System::Boolean active_thresholdRelax; // 0x2EC
		::System::Boolean use_thresholdRelax; // 0x2ED
		::System::Single thresholdRelax; // 0x2F0
		::System::Boolean active_aoLength; // 0x2F4
		::System::Boolean use_aoLength; // 0x2F5
		::System::Single aoLength; // 0x2F8
		::System::Boolean active_aoIntensity; // 0x2FC
		::System::Boolean use_aoIntensity; // 0x2FD
		::System::Single aoIntensity; // 0x300
		::UnityEngine::Rendering::Universal::RTXVolume* _RTXVolume; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_146BFCE7108816B9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_146BFCE7108816B9_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Rendering::Universal::RTXVolume* Method_4_21687F330C2D11B4(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::RTXVolume*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_21687F330C2D11B4_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RTXVOLUMEBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
