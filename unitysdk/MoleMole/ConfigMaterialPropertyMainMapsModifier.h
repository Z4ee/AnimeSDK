#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigMaterialPropertyModifier.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueColor.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueFloat.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueTexture.h"
#include "unitysdk/MoleMole/MaterialPropertyModifierValueVector.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_1_9610394F487FC231;

#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x181E3ED0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x181E3DB0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x181EE3A0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x181E3AC0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x181E4080)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x181E3F70)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x181E4110)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSKEEP_OFFSET UNITYSDK_OFFSET(0x181E9970)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCENABLES_OFFSET UNITYSDK_OFFSET(0x181E6AE0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCVALUES_OFFSET UNITYSDK_OFFSET(0x181E42C0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x181EE650)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOAFTERONENTER_OFFSET UNITYSDK_OFFSET(0x181EE660)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOONENTER_OFFSET UNITYSDK_OFFSET(0x181EE670)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOWARMUP_OFFSET UNITYSDK_OFFSET(0x181EE750)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PREPAREONENTER_OFFSET UNITYSDK_OFFSET(0x181EE7E0)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PREPAREONEXIT_OFFSET UNITYSDK_OFFSET(0x181EE870)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PROCESSENTER_OFFSET UNITYSDK_OFFSET(0x181EE900)
#define MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PROCESSEXIT_OFFSET UNITYSDK_OFFSET(0x181EE9D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigMaterialPropertyMainMapsModifier_TypeDefinitionIndex = 71747;

	class ConfigMaterialPropertyMainMapsModifier : public ::MoleMole::ConfigMaterialPropertyModifier
	{
	public:
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex2; // 0x48
		::MoleMole::MaterialPropertyModifierValueTexture _ChannelMixTex; // 0x78
		::MoleMole::MaterialPropertyModifierValueTexture _OtherDataTex; // 0xA8
		::MoleMole::MaterialPropertyModifierValueTexture _ThreadMap; // 0xD8
		::MoleMole::MaterialPropertyModifierValueTexture _EyeColorMap; // 0x108
		::MoleMole::MaterialPropertyModifierValueTexture _MainTex; // 0x138
		::MoleMole::MaterialPropertyModifierValueTexture _LightTex; // 0x168
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize3; // 0x198
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity3; // 0x1A0
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor5; // 0x1A8
		::MoleMole::MaterialPropertyModifierValueFloat _Emission; // 0x1BC
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor3; // 0x1C4
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor4; // 0x1D8
		::MoleMole::MaterialPropertyModifierValueFloat _OutlineWidth; // 0x1EC
		::UnityEngine::Color _ColorDefault; // 0x1F4
		::MoleMole::MaterialPropertyModifierValueColor _RChannelColorPrecomputed; // 0x204
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange5; // 0x218
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor; // 0x220
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular5; // 0x234
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor2; // 0x23C
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor; // 0x250
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize2; // 0x264
		::MoleMole::MaterialPropertyModifierValueFloat _MaxOutlineZOffset; // 0x26C
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor5; // 0x274
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange3; // 0x288
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape5; // 0x290
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness2; // 0x298
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor2; // 0x2A0
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor3; // 0x2B4
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular; // 0x2C8
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorEdge; // 0x2D0
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor5; // 0x2E4
		::MoleMole::MaterialPropertyModifierValueColor _BChannelColorPrecomputed; // 0x2F8
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape4; // 0x30C
		::MoleMole::MaterialPropertyModifierValueFloat _ChannelMixerUsingUV4; // 0x314
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor5; // 0x31C
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness2; // 0x330
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor4; // 0x338
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor; // 0x34C
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor5; // 0x360
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor2; // 0x374
		::MoleMole::MaterialPropertyModifierValueColor _GChannelColorPrecomputed; // 0x388
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor3; // 0x39C
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape; // 0x3B0
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular4; // 0x3B8
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness3; // 0x3C0
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor4; // 0x3C8
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness4; // 0x3DC
		::MoleMole::MaterialPropertyModifierValueFloat _OverlayTexScale; // 0x3E4
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular3; // 0x3EC
		::MoleMole::MaterialPropertyModifierValueFloat _RenderType; // 0x3F4
		::MoleMole::MaterialPropertyModifierValueFloat _Anisotropy; // 0x3FC
		::MoleMole::MaterialPropertyModifierValueColor _RimGlowLightColor3; // 0x404
		::MoleMole::MaterialPropertyModifierValueFloat _ToonSpecular2; // 0x418
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness4; // 0x420
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity5; // 0x428
		::MoleMole::MaterialPropertyModifierValueVector _SilkPackedParams0; // 0x430
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange4; // 0x448
		::UnityEngine::Color _ColorRef; // 0x450
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor4; // 0x460
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor3; // 0x474
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor3; // 0x488
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize5; // 0x49C
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity2; // 0x4A4
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor2; // 0x4AC
		::MoleMole::MaterialPropertyModifierValueFloat _Glossiness; // 0x4C0
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor; // 0x4C8
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape3; // 0x4DC
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness5; // 0x4E4
		::MoleMole::MaterialPropertyModifierValueFloat _MaterialNum; // 0x4EC
		::MoleMole::MaterialPropertyModifierValueColor _ShadowColor4; // 0x4F4
		::MoleMole::MaterialPropertyModifierValueFloat _UseChannelMixer; // 0x508
		::MoleMole::MaterialPropertyModifierValueFloat _DoubleSided; // 0x510
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness; // 0x518
		::MoleMole::MaterialPropertyModifierValueFloat _UseOverlayTex; // 0x520
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity4; // 0x528
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange2; // 0x530
		::MoleMole::MaterialPropertyModifierValueFloat _SpecularRange; // 0x538
		::MoleMole::MaterialPropertyModifierValueColor _SilkFresnelColorFront; // 0x540
		::MoleMole::MaterialPropertyModifierValueFloat _SkinMatId; // 0x554
		::MoleMole::MaterialPropertyModifierValueFloat _PerObjectShadowIntensity; // 0x55C
		::MoleMole::MaterialPropertyModifierValueColor _AChannelColorPrecomputed; // 0x564
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor4; // 0x578
		::MoleMole::MaterialPropertyModifierValueFloat _HighlightShape2; // 0x58C
		::MoleMole::MaterialPropertyModifierValueColor _SpecularColor5; // 0x594
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize4; // 0x5A8
		::MoleMole::MaterialPropertyModifierValueFloat _ShapeSoftness; // 0x5B0
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor2; // 0x5B8
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness3; // 0x5CC
		::MoleMole::MaterialPropertyModifierValueFloat _SpecIntensity; // 0x5D4
		::MoleMole::MaterialPropertyModifierValueColor _Color; // 0x5DC
		::MoleMole::MaterialPropertyModifierValueColor _ShallowColor; // 0x5F0
		::MoleMole::MaterialPropertyModifierValueFloat _Metallic; // 0x604
		::MoleMole::MaterialPropertyModifierValueColor _OutlineColor; // 0x60C
		::MoleMole::MaterialPropertyModifierValueFloat _SymmetryUV; // 0x620
		::MoleMole::MaterialPropertyModifierValueFloat _ModelSize; // 0x628
		::MoleMole::MaterialPropertyModifierValueFloat _AlbedoSmoothness5; // 0x630
		::MoleMole::MaterialPropertyModifierValueFloat _BumpScale; // 0x638
		::MoleMole::MaterialPropertyModifierValueFloat _Cull; // 0x640
		::MoleMole::MaterialPropertyModifierValueColor _EmissionColor2; // 0x648

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER__CTOR_OFFSET))(this);
		}

		::System::Void PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void DoOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOONENTER_OFFSET))(this, instance);
		}

		::System::Void DoAfterOnEnter(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOAFTERONENTER_OFFSET))(this, instance);
		}

		::System::Void ProcessEnter(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSENTER_OFFSET))(this, instance, timer);
		}

		::System::Void PrepareOnExit(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PREPAREONEXIT_OFFSET))(this, instance);
		}

		::System::Void ProcessExit(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSEXIT_OFFSET))(this, instance, timer);
		}

		::System::Void SyncValues(::Class_1_9610394F487FC231* instance)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCVALUES_OFFSET))(this, instance);
		}

		::System::Void SyncEnables(::Class_1_9610394F487FC231* instance, ::System::Boolean stop)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_SYNCENABLES_OFFSET))(this, instance, stop);
		}

		::System::Void ProcessKeep(::Class_1_9610394F487FC231* instance, ::System::Single timer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_PROCESSKEEP_OFFSET))(this, instance, timer);
		}

		::System::Void DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_DoAfterOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOAFTERONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoOnEnter(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOONENTER_OFFSET))(this, P0);
		}

		::System::Void __base_DoWarmUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_DOWARMUP_OFFSET))(this);
		}

		::System::Void __base_PrepareOnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PREPAREONENTER_OFFSET))(this);
		}

		::System::Void __base_PrepareOnExit(::Class_1_9610394F487FC231* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PREPAREONEXIT_OFFSET))(this, P0);
		}

		::System::Void __base_ProcessEnter(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PROCESSENTER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_ProcessExit(::Class_1_9610394F487FC231* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9610394F487FC231*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGMATERIALPROPERTYMAINMAPSMODIFIER___BASE_PROCESSEXIT_OFFSET))(this, P0, P1);
		}
	};
}
