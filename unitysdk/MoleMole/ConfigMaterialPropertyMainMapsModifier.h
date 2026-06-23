#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1A0026A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1A0025C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1A00C970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1A002300)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1A0027C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1A002700)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1A002820)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1A007F90)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1A005150)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1A002980)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A00CEB0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMainMapsModifier_TypeDefinitionIndex = 60831;

	class ConfigMaterialPropertyMainMapsModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex2; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _ThreadMap; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _EyeColorMap; // 0xD8
		::MoleMole::MaterialPropertyModifierValueTexture _ChannelMixTex; // 0x108
		::MoleMole::MaterialPropertyModifierValueTexture _MainTex; // 0x138
		::MoleMole::MaterialPropertyModifierValueTexture _LightTex; // 0x168
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor2; // 0x198
		::MoleMole::MaterialPropertyModifierValueFloat _Metallic; // 0x1AC
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular3; // 0x1B4
		::MoleMole::MaterialPropertyModifierValueFloat _Glossiness; // 0x1BC
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular; // 0x1C4
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness5; // 0x1CC
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor5; // 0x1D4
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor3; // 0x1E8
		::MoleMole::MaterialPropertyModifierValueFloat _Anisotropy; // 0x1FC
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness5; // 0x204
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor2; // 0x20C
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorFront; // 0x220
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange2; // 0x234
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape3; // 0x23C
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor3; // 0x244
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize5; // 0x258
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorEdge; // 0x260
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor2; // 0x274
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness3; // 0x288
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor4; // 0x290
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape2; // 0x2A4
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor4; // 0x2AC
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor5; // 0x2C0
		::MoleMole::MaterialPropertyModifierValueColor _GChannelColorPrecomputed; // 0x2D4
		::UnityEngine::Color _ColorRef; // 0x2E8
		::MoleMole::MaterialPropertyModifierValueColor _AChannelColorPrecomputed; // 0x2F8
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange5; // 0x30C
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor4; // 0x314
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness2; // 0x328
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape; // 0x330
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor5; // 0x338
		::MoleMole::MaterialPropertyModifierValueFloat _MaterialNum; // 0x34C
		::MoleMole::MaterialPropertyModifierValueFloat _UseChannelMixer; // 0x354
		::MoleMole::MaterialPropertyModifierValueFloat _Emission; // 0x35C
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor2; // 0x364
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity2; // 0x378
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity3; // 0x380
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor2; // 0x388
		::MoleMole::MaterialPropertyModifierValueFloat _SpecIntensity; // 0x39C
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor4; // 0x3A4
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness; // 0x3B8
		::MoleMole::MaterialPropertyModifierValueFloat _SkinMatId; // 0x3C0
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor; // 0x3C8
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape4; // 0x3DC
		::MoleMole::MaterialPropertyModifierValueFloat _BumpScale; // 0x3E4
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape5; // 0x3EC
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity4; // 0x3F4
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor3; // 0x3FC
		::MoleMole::MaterialPropertyModifierValueFloat _Cull; // 0x410
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor; // 0x418
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor2; // 0x42C
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor4; // 0x440
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor5; // 0x454
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular5; // 0x468
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity; // 0x470
		::MoleMole::MaterialPropertyModifierValueFloat _ChannelMixerUsingUV4; // 0x478
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness; // 0x480
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize3; // 0x488
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness4; // 0x490
		::MoleMole::MaterialPropertyModifierValueFloat _OutlineWidth; // 0x498
		::MoleMole::MaterialPropertyModifierValueColor _BChannelColorPrecomputed; // 0x4A0
		::MoleMole::MaterialPropertyModifierValueFloat _UseOverlayTex; // 0x4B4
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor4; // 0x4BC
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor3; // 0x4D0
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor5; // 0x4E4
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor; // 0x4F8
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor; // 0x50C
		::MoleMole::MaterialPropertyModifierValueFloat _OverlayTexScale; // 0x520
		::MoleMole::MaterialPropertyModifierValueFloat _DoubleSided; // 0x528
		::MoleMole::MaterialPropertyModifierValueColor _RChannelColorPrecomputed; // 0x530
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor; // 0x544
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor; // 0x558
		::UnityEngine::Color _ColorDefault; // 0x56C
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor3; // 0x57C
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular2; // 0x590
		::MoleMole::MaterialPropertyModifierValueVector _SilkPackedParams0; // 0x598
		::MoleMole::MaterialPropertyModifierValueFloat _MaxOutlineZOffset; // 0x5B0
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange; // 0x5B8
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange4; // 0x5C0
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness3; // 0x5C8
		::MoleMole::MaterialPropertyModifierValueFloat _SymmetryUV; // 0x5D0
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize2; // 0x5D8
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor3; // 0x5E0
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange3; // 0x5F4
		::MoleMole::MaterialPropertyModifierValueColor _Color; // 0x5FC
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor5; // 0x610
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness4; // 0x624
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize4; // 0x62C
		::MoleMole::MaterialPropertyModifierValueFloat _RenderType; // 0x634
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize; // 0x63C
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity5; // 0x644
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular4; // 0x64C
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness2; // 0x654

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_413B2BDBE645DB66* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_413B2BDBE645DB66* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_413B2BDBE645DB66* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_413B2BDBE645DB66*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOWARMUP_OFFSET))(this);
		}
	};
}
