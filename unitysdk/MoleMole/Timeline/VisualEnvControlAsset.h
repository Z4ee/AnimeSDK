#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1740C680)
#define MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET_GET_FOGUSEOLDVERSION_OFFSET UNITYSDK_OFFSET(0x1740C620)
#define MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET_METHOD_4_C242374E179247ED_OFFSET UNITYSDK_OFFSET(0x1740CCF0)
#define MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET_SET_FOGUSEOLDVERSION_OFFSET UNITYSDK_OFFSET(0x1740C630)
#define MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1740CCE0)
#define MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1740CB50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VisualEnvControlAsset_TypeDefinitionIndex = 59770;

	class VisualEnvControlAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>** StaticGet_weatherFieldsDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvControlAsset_TypeDefinitionIndex)->GetStaticField(0x4F430);
		}
		static ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>** StaticGet_selfFields()
		{
			return (::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvControlAsset_TypeDefinitionIndex)->GetStaticField(0x4F438);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>** StaticGet_behaviorFieldDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Reflection::FieldInfo*>**)Il2CppClass::FromTypeDefinitionIndex(VisualEnvControlAsset_TypeDefinitionIndex)->GetStaticField(0x4F440);
		}
		::System::Boolean UnInit; // 0x18
		::System::Boolean fogUseNewVerion; // 0x19
		::System::Single GIIntensity; // 0x1C
		::UnityEngine::Color GIColorOffset; // 0x20
		::System::Single EmissionIntensity; // 0x30
		::System::Single IBLIntensity; // 0x34
		::System::Boolean hasGlobalVolumetricFog; // 0x38
		::System::Single volumetricFogSize; // 0x3C
		::System::Single volumetricFog_Jittering; // 0x40
		::System::Single volumetricFog_Dithering; // 0x44
		::System::Single volumetricFog_IntensityTowardLight; // 0x48
		::System::Single volumetricFog_DustIntensity; // 0x4C
		::System::Single volumetricFog_MaxIntensity; // 0x50
		::System::Single volumetricFog_Step; // 0x54
		::UnityEngine::Color volumetricFog_Color; // 0x58
		::System::Single volumetricFog_PunctualLightMultiplier; // 0x68
		::System::Single volumetricFog_PunctualLightFadePower; // 0x6C
		::System::Single volumetricFog_ExtraBlurValue; // 0x70
		::System::Boolean VolumetricFogBlitBeforeEffect; // 0x74
		::System::Boolean hasLightFogProxy; // 0x75
		::System::Single lightFogMaxDensity; // 0x78
		::System::Single lightFogSoftParticleStartFadeDistance; // 0x7C
		::System::Single lightFogSoftParticleFadeFactor; // 0x80
		::UnityEngine::Color fogRayColor; // 0x84
		::UnityEngine::Color fogMieColor; // 0x94
		::System::Single fogMieG; // 0xA4
		::UnityEngine::Color fogExtinctColor; // 0xA8
		::System::Single expHeightfogDensity; // 0xB8
		::System::Single fogScattering; // 0xBC
		::UnityEngine::Vector2 fogHeightRange; // 0xC0
		::System::Single fogStartDistance; // 0xC8
		::System::Single skyIntensity; // 0xCC
		::UnityEngine::Color skyColor; // 0xD0
		::UnityEngine::Color middleColor; // 0xE0
		::UnityEngine::Color groundColor; // 0xF0
		::System::Single dynamicObjectGIIntensity; // 0x100
		::System::Single cloudLightWidth; // 0x104
		::System::Single cloudLightStrength; // 0x108
		::System::Single cloudLightMaxIntervalTime; // 0x10C
		::System::Single cloudLightMinIntervalTime; // 0x110
		::System::Single cloudLightDurationTime; // 0x114
		::System::Single cloudShadowIntensity; // 0x118
		::UnityEngine::Texture* cloudShadow; // 0x120
		::UnityEngine::Vector4 cloudShadowTileAndOffset; // 0x128
		::System::Boolean cloudGodRay; // 0x138
		::UnityEngine::Vector2 cloudShadowMoveSpeed; // 0x13C
		::UnityEngine::Vector3 cloudShadowRotation; // 0x144
		::System::Single cloudOffsetY; // 0x150
		::System::Single cloudBaseRot; // 0x154
		::System::Single mainLightIntensityForChara; // 0x158
		::System::Single mainLightIntensity; // 0x15C
		::UnityEngine::Vector3 moonDir; // 0x160
		::System::Boolean mainLightShadowTint; // 0x16C
		::System::Boolean EnableAutoExposure; // 0x16D
		::System::Single AutoExposureCompensation; // 0x170
		::System::Single rippleSpeed; // 0x174
		::System::Single rippleDensity; // 0x178
		::System::Single rippleFoamIntensity; // 0x17C
		::System::Int32 rainDropBatchCount; // 0x180
		::System::Int32 rainSplashCount; // 0x184
		::System::Single rainSplashRange; // 0x188
		::System::Single FallbackConstantExposureCompensation; // 0x18C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET__CCTOR_OFFSET))();
		}

		::System::Boolean get_fogUseOldVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET_GET_FOGUSEOLDVERSION_OFFSET))(this);
		}

		::System::Void set_fogUseOldVersion(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET_SET_FOGUSEOLDVERSION_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_C242374E179247ED(::WeatherConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::WeatherConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VISUALENVCONTROLASSET_METHOD_4_C242374E179247ED_OFFSET))(this, a1);
		}
	};
}
