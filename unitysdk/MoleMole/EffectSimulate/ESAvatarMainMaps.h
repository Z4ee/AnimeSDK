#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESAvatarMatChange.h"

namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::EffectSimulate { class Color01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Float01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class UV01KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector401KeyframeCurve; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_10_OFFSET UNITYSDK_OFFSET(0x1B143B00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_11_OFFSET UNITYSDK_OFFSET(0x1B143B40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_12_OFFSET UNITYSDK_OFFSET(0x1B143B80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_13_OFFSET UNITYSDK_OFFSET(0x1B143BC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_14_OFFSET UNITYSDK_OFFSET(0x1B143C00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_15_OFFSET UNITYSDK_OFFSET(0x1B143C40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_16_OFFSET UNITYSDK_OFFSET(0x1B143C80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_17_OFFSET UNITYSDK_OFFSET(0x1B143CC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_18_OFFSET UNITYSDK_OFFSET(0x1B143D00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_19_OFFSET UNITYSDK_OFFSET(0x1B143D40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x1B1438C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_20_OFFSET UNITYSDK_OFFSET(0x1B143D80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_21_OFFSET UNITYSDK_OFFSET(0x1B143DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_22_OFFSET UNITYSDK_OFFSET(0x1B143E00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_23_OFFSET UNITYSDK_OFFSET(0x1B143E40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_24_OFFSET UNITYSDK_OFFSET(0x1B143E80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_25_OFFSET UNITYSDK_OFFSET(0x1B143EC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_26_OFFSET UNITYSDK_OFFSET(0x1B143F00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_27_OFFSET UNITYSDK_OFFSET(0x1B143F40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_28_OFFSET UNITYSDK_OFFSET(0x1B143F80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_29_OFFSET UNITYSDK_OFFSET(0x1B143FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x1B143900)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_30_OFFSET UNITYSDK_OFFSET(0x1B144000)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_31_OFFSET UNITYSDK_OFFSET(0x1B144040)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_32_OFFSET UNITYSDK_OFFSET(0x1B144080)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_33_OFFSET UNITYSDK_OFFSET(0x1B1440C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_34_OFFSET UNITYSDK_OFFSET(0x1B144100)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_35_OFFSET UNITYSDK_OFFSET(0x1B144140)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_36_OFFSET UNITYSDK_OFFSET(0x1B144180)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_37_OFFSET UNITYSDK_OFFSET(0x1B1441C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_38_OFFSET UNITYSDK_OFFSET(0x1B144200)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_39_OFFSET UNITYSDK_OFFSET(0x1B144240)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_3_OFFSET UNITYSDK_OFFSET(0x1B143940)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_40_OFFSET UNITYSDK_OFFSET(0x1B144280)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_41_OFFSET UNITYSDK_OFFSET(0x1B1442C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_42_OFFSET UNITYSDK_OFFSET(0x1B144300)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_43_OFFSET UNITYSDK_OFFSET(0x1B144340)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_44_OFFSET UNITYSDK_OFFSET(0x1B144380)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_45_OFFSET UNITYSDK_OFFSET(0x1B1443C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_46_OFFSET UNITYSDK_OFFSET(0x1B144400)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_47_OFFSET UNITYSDK_OFFSET(0x1B144440)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_48_OFFSET UNITYSDK_OFFSET(0x1B144480)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_49_OFFSET UNITYSDK_OFFSET(0x1B1444C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_4_OFFSET UNITYSDK_OFFSET(0x1B143980)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_50_OFFSET UNITYSDK_OFFSET(0x1B144500)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_51_OFFSET UNITYSDK_OFFSET(0x1B144540)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_52_OFFSET UNITYSDK_OFFSET(0x1B144580)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_53_OFFSET UNITYSDK_OFFSET(0x1B145B60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_54_OFFSET UNITYSDK_OFFSET(0x1B145BA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_55_OFFSET UNITYSDK_OFFSET(0x1B145BE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_56_OFFSET UNITYSDK_OFFSET(0x1B145C20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_57_OFFSET UNITYSDK_OFFSET(0x1B145C60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_58_OFFSET UNITYSDK_OFFSET(0x1B145CA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_59_OFFSET UNITYSDK_OFFSET(0x1B145CE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_5_OFFSET UNITYSDK_OFFSET(0x1B1439C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_60_OFFSET UNITYSDK_OFFSET(0x1B145D20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_61_OFFSET UNITYSDK_OFFSET(0x1B145D60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_62_OFFSET UNITYSDK_OFFSET(0x1B145DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_63_OFFSET UNITYSDK_OFFSET(0x1B145DE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_64_OFFSET UNITYSDK_OFFSET(0x1B145E20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_65_OFFSET UNITYSDK_OFFSET(0x1B145E60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_66_OFFSET UNITYSDK_OFFSET(0x1B145EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_67_OFFSET UNITYSDK_OFFSET(0x1B145EE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_68_OFFSET UNITYSDK_OFFSET(0x1B145F20)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_69_OFFSET UNITYSDK_OFFSET(0x1B145F60)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_6_OFFSET UNITYSDK_OFFSET(0x1B143A00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_70_OFFSET UNITYSDK_OFFSET(0x1B145FA0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_71_OFFSET UNITYSDK_OFFSET(0x1B145FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_72_OFFSET UNITYSDK_OFFSET(0x1B146020)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_73_OFFSET UNITYSDK_OFFSET(0x1B146060)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_74_OFFSET UNITYSDK_OFFSET(0x1B1460A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_75_OFFSET UNITYSDK_OFFSET(0x1B1460E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_76_OFFSET UNITYSDK_OFFSET(0x1B146120)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_77_OFFSET UNITYSDK_OFFSET(0x1B146160)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_78_OFFSET UNITYSDK_OFFSET(0x1B1461A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_79_OFFSET UNITYSDK_OFFSET(0x1B1461E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_7_OFFSET UNITYSDK_OFFSET(0x1B143A40)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_80_OFFSET UNITYSDK_OFFSET(0x1B146220)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_81_OFFSET UNITYSDK_OFFSET(0x1B146260)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_82_OFFSET UNITYSDK_OFFSET(0x1B1462A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_83_OFFSET UNITYSDK_OFFSET(0x1B1462E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_84_OFFSET UNITYSDK_OFFSET(0x1B146320)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_85_OFFSET UNITYSDK_OFFSET(0x1B146360)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_86_OFFSET UNITYSDK_OFFSET(0x1B1463A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_87_OFFSET UNITYSDK_OFFSET(0x1B1463E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_88_OFFSET UNITYSDK_OFFSET(0x1B146420)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_89_OFFSET UNITYSDK_OFFSET(0x1B146460)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_8_OFFSET UNITYSDK_OFFSET(0x1B143A80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_90_OFFSET UNITYSDK_OFFSET(0x1B1464A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_91_OFFSET UNITYSDK_OFFSET(0x1B1464E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_92_OFFSET UNITYSDK_OFFSET(0x1B146520)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_93_OFFSET UNITYSDK_OFFSET(0x1B146560)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_94_OFFSET UNITYSDK_OFFSET(0x1B1465A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_95_OFFSET UNITYSDK_OFFSET(0x1B1465E0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_96_OFFSET UNITYSDK_OFFSET(0x1B146620)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_97_OFFSET UNITYSDK_OFFSET(0x1B146660)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_98_OFFSET UNITYSDK_OFFSET(0x1B1466A0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_9_OFFSET UNITYSDK_OFFSET(0x1B143AC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1B13FE80)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_561A93472A44E7CC_OFFSET UNITYSDK_OFFSET(0x1B1445C0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_65F7F584FDCE6774_OFFSET UNITYSDK_OFFSET(0x1B13FEC0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_6F54E34F52AB60F6_OFFSET UNITYSDK_OFFSET(0x14884B10)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_CF05E675E2E94F01_OFFSET UNITYSDK_OFFSET(0x1B13FF30)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1B13FE70)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_F922D767491C9C6A_OFFSET UNITYSDK_OFFSET(0x14884CE0)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_FB9A1387D38501D0_OFFSET UNITYSDK_OFFSET(0x1B13FF00)
#define MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B13FF40)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESAvatarMainMaps_TypeDefinitionIndex = 91343;

	class ESAvatarMainMaps : public ::MoleMole::EffectSimulate::ESAvatarMatChange
	{
	public:
		::System::Boolean use_Color; // 0xB8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_Color; // 0xC0
		::System::Boolean use_MainTex; // 0xC8
		::UnityEngine::Texture* AMC_MainTex; // 0xD0
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_MainTex_ST; // 0xD8
		::System::Boolean use_LightTex; // 0xE0
		::UnityEngine::Texture* AMC_LightTex; // 0xE8
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_LightTex_ST; // 0xF0
		::System::Boolean use_OtherDataTex; // 0xF8
		::UnityEngine::Texture* AMC_OtherDataTex; // 0x100
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_OtherDataTex_ST; // 0x108
		::System::Boolean use_OtherDataTex2; // 0x110
		::UnityEngine::Texture* AMC_OtherDataTex2; // 0x118
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_OtherDataTex2_ST; // 0x120
		::System::Boolean use_MaterialNum; // 0x128
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_MaterialNum; // 0x130
		::System::Boolean use_SkinMatId; // 0x138
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_SkinMatId; // 0x140
		::System::Boolean use_ShallowColor; // 0x148
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShallowColor; // 0x150
		::System::Boolean use_ShallowColor2; // 0x158
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShallowColor2; // 0x160
		::System::Boolean use_ShallowColor3; // 0x168
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShallowColor3; // 0x170
		::System::Boolean use_ShallowColor4; // 0x178
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShallowColor4; // 0x180
		::System::Boolean use_ShallowColor5; // 0x188
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShallowColor5; // 0x190
		::System::Boolean use_ShadowColor; // 0x198
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShadowColor; // 0x1A0
		::System::Boolean use_ShadowColor2; // 0x1A8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShadowColor2; // 0x1B0
		::System::Boolean use_ShadowColor3; // 0x1B8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShadowColor3; // 0x1C0
		::System::Boolean use_ShadowColor4; // 0x1C8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShadowColor4; // 0x1D0
		::System::Boolean use_ShadowColor5; // 0x1D8
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_ShadowColor5; // 0x1E0
		::System::Boolean use_EyeColorMap; // 0x1E8
		::UnityEngine::Texture* AMC_EyeColorMap; // 0x1F0
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_EyeColorMap_ST; // 0x1F8
		::System::Boolean use_ThreadMap; // 0x200
		::UnityEngine::Texture* AMC_ThreadMap; // 0x208
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_ThreadMap_ST; // 0x210
		::System::Boolean use_ChannelMixTex; // 0x218
		::UnityEngine::Texture* AMC_ChannelMixTex; // 0x220
		::MoleMole::EffectSimulate::UV01KeyframeCurve* AMC_ChannelMixTex_ST; // 0x228
		::System::Boolean use_SpecularColor; // 0x230
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_SpecularColor; // 0x238
		::System::Boolean use_SpecularColor2; // 0x240
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_SpecularColor2; // 0x248
		::System::Boolean use_SpecularColor3; // 0x250
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_SpecularColor3; // 0x258
		::System::Boolean use_SpecularColor4; // 0x260
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_SpecularColor4; // 0x268
		::System::Boolean use_SpecularColor5; // 0x270
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_SpecularColor5; // 0x278
		::System::Boolean use_RimGlowLightColor; // 0x280
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_RimGlowLightColor; // 0x288
		::System::Boolean use_RimGlowLightColor2; // 0x290
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_RimGlowLightColor2; // 0x298
		::System::Boolean use_RimGlowLightColor3; // 0x2A0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_RimGlowLightColor3; // 0x2A8
		::System::Boolean use_RimGlowLightColor4; // 0x2B0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_RimGlowLightColor4; // 0x2B8
		::System::Boolean use_RimGlowLightColor5; // 0x2C0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_RimGlowLightColor5; // 0x2C8
		::System::Boolean use_EmissionColor; // 0x2D0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_EmissionColor; // 0x2D8
		::System::Boolean use_EmissionColor2; // 0x2E0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_EmissionColor2; // 0x2E8
		::System::Boolean use_EmissionColor3; // 0x2F0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_EmissionColor3; // 0x2F8
		::System::Boolean use_EmissionColor4; // 0x300
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_EmissionColor4; // 0x308
		::System::Boolean use_EmissionColor5; // 0x310
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_EmissionColor5; // 0x318
		::System::Boolean use_OutlineColor; // 0x320
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_OutlineColor; // 0x328
		::System::Boolean use_OutlineColor2; // 0x330
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_OutlineColor2; // 0x338
		::System::Boolean use_OutlineColor3; // 0x340
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_OutlineColor3; // 0x348
		::System::Boolean use_OutlineColor4; // 0x350
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_OutlineColor4; // 0x358
		::System::Boolean use_OutlineColor5; // 0x360
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_OutlineColor5; // 0x368
		::System::Boolean use_SilkFresnelColorFront; // 0x370
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_SilkFresnelColorFront; // 0x378
		::System::Boolean use_SilkFresnelColorEdge; // 0x380
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_SilkFresnelColorEdge; // 0x388
		::System::Boolean use_RChannelColorPrecomputed; // 0x390
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_RChannelColorPrecomputed; // 0x398
		::System::Boolean use_GChannelColorPrecomputed; // 0x3A0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_GChannelColorPrecomputed; // 0x3A8
		::System::Boolean use_BChannelColorPrecomputed; // 0x3B0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_BChannelColorPrecomputed; // 0x3B8
		::System::Boolean use_AChannelColorPrecomputed; // 0x3C0
		::MoleMole::EffectSimulate::Color01KeyframeCurve* AMC_AChannelColorPrecomputed; // 0x3C8
		::System::Boolean use_SilkPackedParams0; // 0x3D0
		::MoleMole::EffectSimulate::Vector401KeyframeCurve* AMC_SilkPackedParams0; // 0x3D8
		::System::Boolean use_RenderType; // 0x3E0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_RenderType; // 0x3E8
		::System::Boolean use_UseOverlayTex; // 0x3F0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_UseOverlayTex; // 0x3F8
		::System::Boolean use_OverlayTexScale; // 0x400
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_OverlayTexScale; // 0x408
		::System::Boolean use_BumpScale; // 0x410
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_BumpScale; // 0x418
		::System::Boolean use_Glossiness; // 0x420
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_Glossiness; // 0x428
		::System::Boolean use_Metallic; // 0x430
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_Metallic; // 0x438
		::System::Boolean use_Anisotropy; // 0x440
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_Anisotropy; // 0x448
		::System::Boolean use_ModelSize; // 0x450
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ModelSize; // 0x458
		::System::Boolean use_ModelSize2; // 0x460
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ModelSize2; // 0x468
		::System::Boolean use_ModelSize3; // 0x470
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ModelSize3; // 0x478
		::System::Boolean use_ModelSize4; // 0x480
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ModelSize4; // 0x488
		::System::Boolean use_ModelSize5; // 0x490
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ModelSize5; // 0x498
		::System::Boolean use_AlbedoSmoothness; // 0x4A0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_AlbedoSmoothness; // 0x4A8
		::System::Boolean use_AlbedoSmoothness2; // 0x4B0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_AlbedoSmoothness2; // 0x4B8
		::System::Boolean use_AlbedoSmoothness3; // 0x4C0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_AlbedoSmoothness3; // 0x4C8
		::System::Boolean use_AlbedoSmoothness4; // 0x4D0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_AlbedoSmoothness4; // 0x4D8
		::System::Boolean use_AlbedoSmoothness5; // 0x4E0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_AlbedoSmoothness5; // 0x4E8
		::System::Boolean use_HighlightShape; // 0x4F0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_HighlightShape; // 0x4F8
		::System::Boolean use_HighlightShape2; // 0x500
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_HighlightShape2; // 0x508
		::System::Boolean use_HighlightShape3; // 0x510
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_HighlightShape3; // 0x518
		::System::Boolean use_HighlightShape4; // 0x520
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_HighlightShape4; // 0x528
		::System::Boolean use_HighlightShape5; // 0x530
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_HighlightShape5; // 0x538
		::System::Boolean use_ToonSpecular; // 0x540
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ToonSpecular; // 0x548
		::System::Boolean use_ToonSpecular2; // 0x550
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ToonSpecular2; // 0x558
		::System::Boolean use_ToonSpecular3; // 0x560
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ToonSpecular3; // 0x568
		::System::Boolean use_ToonSpecular4; // 0x570
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ToonSpecular4; // 0x578
		::System::Boolean use_ToonSpecular5; // 0x580
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ToonSpecular5; // 0x588
		::System::Boolean use_SpecularRange; // 0x590
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_SpecularRange; // 0x598
		::System::Boolean use_SpecularRange2; // 0x5A0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_SpecularRange2; // 0x5A8
		::System::Boolean use_SpecularRange3; // 0x5B0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_SpecularRange3; // 0x5B8
		::System::Boolean use_SpecularRange4; // 0x5C0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_SpecularRange4; // 0x5C8
		::System::Boolean use_SpecularRange5; // 0x5D0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_SpecularRange5; // 0x5D8
		::System::Boolean use_ShapeSoftness; // 0x5E0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ShapeSoftness; // 0x5E8
		::System::Boolean use_ShapeSoftness2; // 0x5F0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ShapeSoftness2; // 0x5F8
		::System::Boolean use_ShapeSoftness3; // 0x600
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ShapeSoftness3; // 0x608
		::System::Boolean use_ShapeSoftness4; // 0x610
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ShapeSoftness4; // 0x618
		::System::Boolean use_ShapeSoftness5; // 0x620
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ShapeSoftness5; // 0x628
		::System::Boolean use_SpecIntensity; // 0x630
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_SpecIntensity; // 0x638
		::System::Boolean use_Emission; // 0x640
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_Emission; // 0x648
		::System::Boolean use_OutlineWidth; // 0x650
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_OutlineWidth; // 0x658
		::System::Boolean use_MaxOutlineZOffset; // 0x660
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_MaxOutlineZOffset; // 0x668
		::System::Boolean use_PerObjectShadowIntensity; // 0x670
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_PerObjectShadowIntensity; // 0x678
		::System::Boolean use_PerObjectShadowIntensity2; // 0x680
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_PerObjectShadowIntensity2; // 0x688
		::System::Boolean use_PerObjectShadowIntensity3; // 0x690
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_PerObjectShadowIntensity3; // 0x698
		::System::Boolean use_PerObjectShadowIntensity4; // 0x6A0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_PerObjectShadowIntensity4; // 0x6A8
		::System::Boolean use_PerObjectShadowIntensity5; // 0x6B0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_PerObjectShadowIntensity5; // 0x6B8
		::System::Boolean use_UseChannelMixer; // 0x6C0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_UseChannelMixer; // 0x6C8
		::System::Boolean use_ChannelMixerUsingUV4; // 0x6D0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_ChannelMixerUsingUV4; // 0x6D8
		::System::Boolean use_Cull; // 0x6E0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_Cull; // 0x6E8
		::System::Boolean use_DoubleSided; // 0x6F0
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_DoubleSided; // 0x6F8
		::System::Boolean use_SymmetryUV; // 0x700
		::MoleMole::EffectSimulate::Float01KeyframeCurve* AMC_SymmetryUV; // 0x708

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS__CTOR_OFFSET))(this);
		}

		::System::Void Method_4_6F54E34F52AB60F6(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_6F54E34F52AB60F6_OFFSET))(this, a1);
		}

		::System::Void Method_4_F922D767491C9C6A(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_F922D767491C9C6A_OFFSET))(this, a1);
		}

		::System::Boolean Method_4_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_F0088C88851A7DFB_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_OFFSET))(this);
		}

		::MoleMole::ConfigMaterialPropertyModifier* Method_4_65F7F584FDCE6774()
		{
			return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_65F7F584FDCE6774_OFFSET))(this);
		}

		::System::Type* Method_4_FB9A1387D38501D0()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_FB9A1387D38501D0_OFFSET))(this);
		}

		::MoleMole::Config::MaterialPropertyType Method_4_CF05E675E2E94F01()
		{
			return ((::MoleMole::Config::MaterialPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_CF05E675E2E94F01_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_1_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_2_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_3()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_3_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_4()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_4_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_5()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_5_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_6()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_6_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_7()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_7_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_8()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_8_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_9()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_9_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_10()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_10_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_11()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_11_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_12()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_12_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_13()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_13_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_14()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_14_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_15()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_15_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_16()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_16_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_17()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_17_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_18()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_18_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_19()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_19_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_20()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_20_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_21()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_21_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_22_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_23()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_23_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_24()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_24_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_25()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_25_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_26()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_26_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_27()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_27_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_28()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_28_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_29()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_29_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_30()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_30_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_31()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_31_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_32()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_32_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_33()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_33_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_34()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_34_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_35()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_35_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_36()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_36_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_37()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_37_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_38()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_38_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_39()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_39_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_40()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_40_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_41()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_41_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_42()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_42_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_43()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_43_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_44()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_44_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_45()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_45_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_46()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_46_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_47()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_47_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_48()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_48_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_49()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_49_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_50()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_50_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_51()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_51_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_52()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_52_OFFSET))(this);
		}

		::System::Void Method_4_561A93472A44E7CC(::UnityEngine::Renderer* a1, ::UnityEngine::Material* a2, ::UnityEngine::MaterialPropertyBlock* a3, ::UnityEngine::Material* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_561A93472A44E7CC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* Method_4_128774387667156B_53()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_53_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_54()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_54_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_55()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_55_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_56()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_56_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_57()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_57_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_58()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_58_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_59()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_59_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_60()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_60_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_61()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_61_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_62()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_62_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_63()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_63_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_64()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_64_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_65()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_65_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_66()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_66_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_67()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_67_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_68()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_68_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_69()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_69_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_70()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_70_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_71()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_71_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_72()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_72_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_73()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_73_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_74()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_74_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_75()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_75_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_76()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_76_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_77()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_77_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_78()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_78_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_79()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_79_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_80()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_80_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_81()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_81_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_82()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_82_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_83()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_83_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_84()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_84_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_85()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_85_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_86_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_87()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_87_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_88()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_88_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_89()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_89_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_90()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_90_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_91()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_91_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_92()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_92_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_93()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_93_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_94()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_94_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_95()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_95_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_96()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_96_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_97()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_97_OFFSET))(this);
		}

		::System::String* Method_4_128774387667156B_98()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESAVATARMAINMAPS_METHOD_4_128774387667156B_98_OFFSET))(this);
		}
	};
}
