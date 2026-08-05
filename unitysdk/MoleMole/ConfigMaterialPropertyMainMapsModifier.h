#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_413B2BDBE645DB66;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x1B80D160)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1B80D080)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x1B817460)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x1B80CDC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x1B80D280)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x1B80D1C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x1B80D2E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x1B812A80)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x1B80FC40)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x1B80D440)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8179A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMainMapsModifier_TypeDefinitionIndex = 48191;

	class ConfigMaterialPropertyMainMapsModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _ThreadMap; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _ChannelMixTex; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _LightTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _MainTex; // 0xD8
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex2; // 0x108
		::MoleMole::MaterialPropertyModifierValueTexture _EyeColorMap; // 0x138
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex; // 0x168
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor2; // 0x198
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor5; // 0x1AC
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor2; // 0x1C0
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness5; // 0x1D4
		::MoleMole::MaterialPropertyModifierValueFloat _Glossiness; // 0x1DC
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor; // 0x1E4
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor3; // 0x1F8
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor; // 0x20C
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor4; // 0x220
		::MoleMole::MaterialPropertyModifierValueVector _SilkPackedParams0; // 0x234
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor2; // 0x24C
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor3; // 0x260
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity5; // 0x274
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity2; // 0x27C
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor5; // 0x284
		::UnityEngine::Color _ColorRef; // 0x298
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor; // 0x2A8
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor3; // 0x2BC
		::MoleMole::MaterialPropertyModifierValueFloat _ChannelMixerUsingUV4; // 0x2D0
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor2; // 0x2D8
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor3; // 0x2EC
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular; // 0x300
		::MoleMole::MaterialPropertyModifierValueColor _GChannelColorPrecomputed; // 0x308
		::MoleMole::MaterialPropertyModifierValueColor _Color; // 0x31C
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor5; // 0x330
		::MoleMole::MaterialPropertyModifierValueFloat _Emission; // 0x344
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor5; // 0x34C
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor3; // 0x360
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness; // 0x374
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor4; // 0x37C
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize4; // 0x390
		::MoleMole::MaterialPropertyModifierValueFloat _UseOverlayTex; // 0x398
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize3; // 0x3A0
		::MoleMole::MaterialPropertyModifierValueFloat _SymmetryUV; // 0x3A8
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness3; // 0x3B0
		::MoleMole::MaterialPropertyModifierValueColor _BChannelColorPrecomputed; // 0x3B8
		::MoleMole::MaterialPropertyModifierValueFloat _OutlineWidth; // 0x3CC
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness5; // 0x3D4
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor3; // 0x3DC
		::MoleMole::MaterialPropertyModifierValueColor _AChannelColorPrecomputed; // 0x3F0
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange4; // 0x404
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor4; // 0x40C
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular4; // 0x420
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity3; // 0x428
		::MoleMole::MaterialPropertyModifierValueFloat _OverlayTexScale; // 0x430
		::MoleMole::MaterialPropertyModifierValueFloat _BumpScale; // 0x438
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor2; // 0x440
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor4; // 0x454
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular5; // 0x468
		::MoleMole::MaterialPropertyModifierValueFloat _Metallic; // 0x470
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness4; // 0x478
		::MoleMole::MaterialPropertyModifierValueFloat _RenderType; // 0x480
		::MoleMole::MaterialPropertyModifierValueFloat _SkinMatId; // 0x488
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape4; // 0x490
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness; // 0x498
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity; // 0x4A0
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange; // 0x4A8
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness2; // 0x4B0
		::MoleMole::MaterialPropertyModifierValueFloat _UseChannelMixer; // 0x4B8
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape; // 0x4C0
		::MoleMole::MaterialPropertyModifierValueFloat _MaxOutlineZOffset; // 0x4C8
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor; // 0x4D0
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor4; // 0x4E4
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor5; // 0x4F8
		::MoleMole::MaterialPropertyModifierValueFloat _Cull; // 0x50C
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange3; // 0x514
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange5; // 0x51C
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular3; // 0x524
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor4; // 0x52C
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity4; // 0x540
		::MoleMole::MaterialPropertyModifierValueFloat _MaterialNum; // 0x548
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize5; // 0x550
		::UnityEngine::Color _ColorDefault; // 0x558
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize2; // 0x568
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular2; // 0x570
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape3; // 0x578
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness4; // 0x580
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize; // 0x588
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness3; // 0x590
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange2; // 0x598
		::MoleMole::MaterialPropertyModifierValueColor _RChannelColorPrecomputed; // 0x5A0
		::MoleMole::MaterialPropertyModifierValueFloat _DoubleSided; // 0x5B4
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor; // 0x5BC
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape5; // 0x5D0
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorFront; // 0x5D8
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor2; // 0x5EC
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor; // 0x600
		::MoleMole::MaterialPropertyModifierValueFloat _SpecIntensity; // 0x614
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape2; // 0x61C
		::MoleMole::MaterialPropertyModifierValueFloat _Anisotropy; // 0x624
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorEdge; // 0x62C
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness2; // 0x640
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor5; // 0x648

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
