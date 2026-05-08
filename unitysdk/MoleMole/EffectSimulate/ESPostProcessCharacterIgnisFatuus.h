#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityCharacterIgnisFatuusEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class CharacterIgnisFatuus; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x18F5CCF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x18F468B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x18F5CAE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x18F5CB90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x18F5C9A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18F5A620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x18F5A560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x18F43560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x18F5A850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4F6CBEF30D6E7AC4_1_OFFSET UNITYSDK_OFFSET(0x18F56FE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4F6CBEF30D6E7AC4_OFFSET UNITYSDK_OFFSET(0x18F54900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x18F5A780)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x18F5A720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x18F5CAC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x18F5CD60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x18F42F40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_63D56313608AFE32_OFFSET UNITYSDK_OFFSET(0x18F59AF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_76ECC59BC7430042_1_OFFSET UNITYSDK_OFFSET(0x18F5B700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0x18F5A8A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x18F5CD40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_7A5EE891DA69F667_OFFSET UNITYSDK_OFFSET(0x18F47A50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x18F5CCD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x18F5A660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x18F5A7E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x18F5A5B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0x18F596C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x18F5CA30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x18F5A6D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x18F5ABB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x18F43C60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x18F5CD70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x18F5CD50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x18F59A00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x18F5CAD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x18F5A440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x18F5CD00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x18F5CC30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18F43520)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x18F5A510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x18F5CCE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x18F5CBA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x18F5CCC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x18F5CB80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_FFE188B6911A2F42_OFFSET UNITYSDK_OFFSET(0x18F51380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS__CTOR_OFFSET UNITYSDK_OFFSET(0x18F5BA10)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCharacterIgnisFatuus_TypeDefinitionIndex = 79763;

	class ESPostProcessCharacterIgnisFatuus : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::CharacterIgnisFatuus*>
	{
	public:
		::MoleMole::Config::ConfigEntityCharacterIgnisFatuusEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_characterIgnisFatuusActive; // 0xB8
		::System::Int32 _VolDefault_characterIgnisFatuusDownSample; // 0xBC
		::System::Boolean _VolDefault_characterIgnisFatuusSelfMask; // 0xC0
		::System::Single _VolDefault_characterIgnisFatuusDepthMaskOffset; // 0xC4
		::UnityEngine::Rendering::Universal::BlendModes _VolDefault_characterIgnisFatuusColorBlendMode; // 0xC8
		::System::Boolean _VolDefault_useIgnisFatuusColorTextureAlpha; // 0xCC
		::UnityEngine::Color _VolDefault_characterIgnisFatuusColor; // 0xD0
		::UnityEngine::Texture* _VolDefault_characterIgnisFatuusColorTexture; // 0xE0
		::UnityEngine::Vector2 _VolDefault_characterIgnisFatuusColorTextureUVScale; // 0xE8
		::UnityEngine::Vector2 _VolDefault_characterIgnisFatuusColorTextureUVSpeed; // 0xF0
		::UnityEngine::Texture* _VolDefault_characterIgnisFatuusNoiseTexture; // 0xF8
		::UnityEngine::Vector2 _VolDefault_characterIgnisFatuusNoiseTextureUVScale; // 0x100
		::UnityEngine::Vector2 _VolDefault_characterIgnisFatuusNoiseTextureUVSpeed; // 0x108
		::System::Single _VolDefault_characterIgnisFatuusDistortionIntensity; // 0x110
		::System::Single _VolDefault_characterIgnisFatuusDistortionOffset; // 0x114
		::System::Single _VolDefault_characterIgnisFatuusBlurPow; // 0x118
		::System::Single _VolDefault_characterIgnisFatuusColorDistortionIntensity; // 0x11C
		::UnityEngine::Color _VolDefault_characterIgnisFatuusColor2; // 0x120
		::UnityEngine::Texture* _VolDefault_characterIgnisFatuusColorTexture2; // 0x130
		::UnityEngine::Vector2 _VolDefault_characterIgnisFatuusColorTextureUVScale2; // 0x138
		::UnityEngine::Vector2 _VolDefault_characterIgnisFatuusColorTextureUVSpeed2; // 0x140
		::UnityEngine::Texture* _VolDefault_characterIgnisFatuusNoiseTexture2; // 0x148
		::UnityEngine::Vector2 _VolDefault_characterIgnisFatuusNoiseTextureUVScale2; // 0x150
		::UnityEngine::Vector2 _VolDefault_characterIgnisFatuusNoiseTextureUVSpeed2; // 0x158
		::System::Single _VolDefault_characterIgnisFatuusDistortionIntensity2; // 0x160
		::System::Single _VolDefault_characterIgnisFatuusDistortionOffset2; // 0x164
		::System::Single _VolDefault_characterIgnisFatuusBlurPow2; // 0x168
		::System::Single _VolDefault_characterIgnisFatuusColorDistortionIntensity2; // 0x16C
		::System::Single _VolDefault_characterIgnisFatuusSoftEdgePow; // 0x170
		::System::Single _VolDefault_characterIgnisFatuusSoftEdgeRange; // 0x174
		::System::Single _VolDefault_characterIgnisFatuusDisappearStart; // 0x178
		::System::Single _VolDefault_characterIgnisFatuusDisappearEnd; // 0x17C
		::System::Single _VolDefault_characterIgnisFatuusFadeIn; // 0x180
		::System::Single _VolDefault_characterIgnisFatuusFadeOut; // 0x184
		::System::Boolean _VolPreVal_characterIgnisFatuusActive_overrideState; // 0x188
		::System::Boolean _VolPreVal_characterIgnisFatuusActive; // 0x189
		::System::Boolean _VolPreVal_characterIgnisFatuusDownSample_overrideState; // 0x18A
		::System::Int32 _VolPreVal_characterIgnisFatuusDownSample; // 0x18C
		::System::Boolean _VolPreVal_characterIgnisFatuusSelfMask_overrideState; // 0x190
		::System::Boolean _VolPreVal_characterIgnisFatuusSelfMask; // 0x191
		::System::Boolean _VolPreVal_characterIgnisFatuusDepthMaskOffset_overrideState; // 0x192
		::System::Single _VolPreVal_characterIgnisFatuusDepthMaskOffset; // 0x194
		::System::Boolean _VolPreVal_characterIgnisFatuusColorBlendMode_overrideState; // 0x198
		::UnityEngine::Rendering::Universal::BlendModes _VolPreVal_characterIgnisFatuusColorBlendMode; // 0x19C
		::System::Boolean _VolPreVal_useIgnisFatuusColorTextureAlpha_overrideState; // 0x1A0
		::System::Boolean _VolPreVal_useIgnisFatuusColorTextureAlpha; // 0x1A1
		::System::Boolean _VolPreVal_characterIgnisFatuusColor_overrideState; // 0x1A2
		::UnityEngine::Color _VolPreVal_characterIgnisFatuusColor; // 0x1A4
		::System::Boolean _VolPreVal_characterIgnisFatuusColorTexture_overrideState; // 0x1B4
		::UnityEngine::Texture* _VolPreVal_characterIgnisFatuusColorTexture; // 0x1B8
		::System::Boolean _VolPreVal_characterIgnisFatuusColorTextureUVScale_overrideState; // 0x1C0
		::UnityEngine::Vector2 _VolPreVal_characterIgnisFatuusColorTextureUVScale; // 0x1C4
		::System::Boolean _VolPreVal_characterIgnisFatuusColorTextureUVSpeed_overrideState; // 0x1CC
		::UnityEngine::Vector2 _VolPreVal_characterIgnisFatuusColorTextureUVSpeed; // 0x1D0
		::System::Boolean _VolPreVal_characterIgnisFatuusNoiseTexture_overrideState; // 0x1D8
		::UnityEngine::Texture* _VolPreVal_characterIgnisFatuusNoiseTexture; // 0x1E0
		::System::Boolean _VolPreVal_characterIgnisFatuusNoiseTextureUVScale_overrideState; // 0x1E8
		::UnityEngine::Vector2 _VolPreVal_characterIgnisFatuusNoiseTextureUVScale; // 0x1EC
		::System::Boolean _VolPreVal_characterIgnisFatuusNoiseTextureUVSpeed_overrideState; // 0x1F4
		::UnityEngine::Vector2 _VolPreVal_characterIgnisFatuusNoiseTextureUVSpeed; // 0x1F8
		::System::Boolean _VolPreVal_characterIgnisFatuusDistortionIntensity_overrideState; // 0x200
		::System::Single _VolPreVal_characterIgnisFatuusDistortionIntensity; // 0x204
		::System::Boolean _VolPreVal_characterIgnisFatuusDistortionOffset_overrideState; // 0x208
		::System::Single _VolPreVal_characterIgnisFatuusDistortionOffset; // 0x20C
		::System::Boolean _VolPreVal_characterIgnisFatuusBlurPow_overrideState; // 0x210
		::System::Single _VolPreVal_characterIgnisFatuusBlurPow; // 0x214
		::System::Boolean _VolPreVal_characterIgnisFatuusColorDistortionIntensity_overrideState; // 0x218
		::System::Single _VolPreVal_characterIgnisFatuusColorDistortionIntensity; // 0x21C
		::System::Boolean _VolPreVal_characterIgnisFatuusColor2_overrideState; // 0x220
		::UnityEngine::Color _VolPreVal_characterIgnisFatuusColor2; // 0x224
		::System::Boolean _VolPreVal_characterIgnisFatuusColorTexture2_overrideState; // 0x234
		::UnityEngine::Texture* _VolPreVal_characterIgnisFatuusColorTexture2; // 0x238
		::System::Boolean _VolPreVal_characterIgnisFatuusColorTextureUVScale2_overrideState; // 0x240
		::UnityEngine::Vector2 _VolPreVal_characterIgnisFatuusColorTextureUVScale2; // 0x244
		::System::Boolean _VolPreVal_characterIgnisFatuusColorTextureUVSpeed2_overrideState; // 0x24C
		::UnityEngine::Vector2 _VolPreVal_characterIgnisFatuusColorTextureUVSpeed2; // 0x250
		::System::Boolean _VolPreVal_characterIgnisFatuusNoiseTexture2_overrideState; // 0x258
		::UnityEngine::Texture* _VolPreVal_characterIgnisFatuusNoiseTexture2; // 0x260
		::System::Boolean _VolPreVal_characterIgnisFatuusNoiseTextureUVScale2_overrideState; // 0x268
		::UnityEngine::Vector2 _VolPreVal_characterIgnisFatuusNoiseTextureUVScale2; // 0x26C
		::System::Boolean _VolPreVal_characterIgnisFatuusNoiseTextureUVSpeed2_overrideState; // 0x274
		::UnityEngine::Vector2 _VolPreVal_characterIgnisFatuusNoiseTextureUVSpeed2; // 0x278
		::System::Boolean _VolPreVal_characterIgnisFatuusDistortionIntensity2_overrideState; // 0x280
		::System::Single _VolPreVal_characterIgnisFatuusDistortionIntensity2; // 0x284
		::System::Boolean _VolPreVal_characterIgnisFatuusDistortionOffset2_overrideState; // 0x288
		::System::Single _VolPreVal_characterIgnisFatuusDistortionOffset2; // 0x28C
		::System::Boolean _VolPreVal_characterIgnisFatuusBlurPow2_overrideState; // 0x290
		::System::Single _VolPreVal_characterIgnisFatuusBlurPow2; // 0x294
		::System::Boolean _VolPreVal_characterIgnisFatuusColorDistortionIntensity2_overrideState; // 0x298
		::System::Single _VolPreVal_characterIgnisFatuusColorDistortionIntensity2; // 0x29C
		::System::Boolean _VolPreVal_characterIgnisFatuusSoftEdgePow_overrideState; // 0x2A0
		::System::Single _VolPreVal_characterIgnisFatuusSoftEdgePow; // 0x2A4
		::System::Boolean _VolPreVal_characterIgnisFatuusSoftEdgeRange_overrideState; // 0x2A8
		::System::Single _VolPreVal_characterIgnisFatuusSoftEdgeRange; // 0x2AC
		::System::Boolean _VolPreVal_characterIgnisFatuusDisappearStart_overrideState; // 0x2B0
		::System::Single _VolPreVal_characterIgnisFatuusDisappearStart; // 0x2B4
		::System::Boolean _VolPreVal_characterIgnisFatuusDisappearEnd_overrideState; // 0x2B8
		::System::Single _VolPreVal_characterIgnisFatuusDisappearEnd; // 0x2BC
		::System::Boolean _VolPreVal_characterIgnisFatuusFadeIn_overrideState; // 0x2C0
		::System::Single _VolPreVal_characterIgnisFatuusFadeIn; // 0x2C4
		::System::Boolean _VolPreVal_characterIgnisFatuusFadeOut_overrideState; // 0x2C8
		::System::Single _VolPreVal_characterIgnisFatuusFadeOut; // 0x2CC
		::UnityEngine::Color _TimelineCurveFirstVal_characterIgnisFatuusColor; // 0x2D0
		::UnityEngine::Color _TimelineCurveLastVal_characterIgnisFatuusColor; // 0x2E0
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterIgnisFatuusColorTextureUVScale; // 0x2F0
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterIgnisFatuusColorTextureUVScale; // 0x2F8
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterIgnisFatuusColorTextureUVSpeed; // 0x300
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterIgnisFatuusColorTextureUVSpeed; // 0x308
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterIgnisFatuusNoiseTextureUVScale; // 0x310
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterIgnisFatuusNoiseTextureUVScale; // 0x318
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterIgnisFatuusNoiseTextureUVSpeed; // 0x320
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterIgnisFatuusNoiseTextureUVSpeed; // 0x328
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusDistortionIntensity; // 0x330
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusDistortionIntensity; // 0x334
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusDistortionOffset; // 0x338
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusDistortionOffset; // 0x33C
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusBlurPow; // 0x340
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusBlurPow; // 0x344
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusColorDistortionIntensity; // 0x348
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusColorDistortionIntensity; // 0x34C
		::UnityEngine::Color _TimelineCurveFirstVal_characterIgnisFatuusColor2; // 0x350
		::UnityEngine::Color _TimelineCurveLastVal_characterIgnisFatuusColor2; // 0x360
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterIgnisFatuusColorTextureUVScale2; // 0x370
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterIgnisFatuusColorTextureUVScale2; // 0x378
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterIgnisFatuusColorTextureUVSpeed2; // 0x380
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterIgnisFatuusColorTextureUVSpeed2; // 0x388
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterIgnisFatuusNoiseTextureUVScale2; // 0x390
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterIgnisFatuusNoiseTextureUVScale2; // 0x398
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterIgnisFatuusNoiseTextureUVSpeed2; // 0x3A0
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterIgnisFatuusNoiseTextureUVSpeed2; // 0x3A8
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusDistortionIntensity2; // 0x3B0
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusDistortionIntensity2; // 0x3B4
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusDistortionOffset2; // 0x3B8
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusDistortionOffset2; // 0x3BC
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusBlurPow2; // 0x3C0
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusBlurPow2; // 0x3C4
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusColorDistortionIntensity2; // 0x3C8
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusColorDistortionIntensity2; // 0x3CC
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusSoftEdgePow; // 0x3D0
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusSoftEdgePow; // 0x3D4
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusSoftEdgeRange; // 0x3D8
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusSoftEdgeRange; // 0x3DC
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusDisappearStart; // 0x3E0
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusDisappearStart; // 0x3E4
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusDisappearEnd; // 0x3E8
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusDisappearEnd; // 0x3EC
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusFadeIn; // 0x3F0
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusFadeIn; // 0x3F4
		::System::Single _TimelineCurveFirstVal_characterIgnisFatuusFadeOut; // 0x3F8
		::System::Single _TimelineCurveLastVal_characterIgnisFatuusFadeOut; // 0x3FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusActive_FieldHandleType; // 0x400
		::System::Boolean ESPP_characterIgnisFatuusActive; // 0x404
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusDownSample_FieldHandleType; // 0x408
		::System::Int32 ESPP_characterIgnisFatuusDownSample; // 0x40C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusSelfMask_FieldHandleType; // 0x410
		::System::Boolean ESPP_characterIgnisFatuusSelfMask; // 0x414
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusDepthMaskOffset_FieldHandleType; // 0x418
		::System::Single ESPP_characterIgnisFatuusDepthMaskOffset; // 0x41C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColorBlendMode_FieldHandleType; // 0x420
		::UnityEngine::Rendering::Universal::BlendModes ESPP_characterIgnisFatuusColorBlendMode; // 0x424
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useIgnisFatuusColorTextureAlpha_FieldHandleType; // 0x428
		::System::Boolean ESPP_useIgnisFatuusColorTextureAlpha; // 0x42C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColor_FieldHandleType; // 0x430
		::System::Boolean ESPP_characterIgnisFatuusColor_UseIt; // 0x434
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_characterIgnisFatuusColor; // 0x438
		::System::Boolean ESPP_characterIgnisFatuusColor_EnableFade; // 0x440
		::System::Boolean ESPP_characterIgnisFatuusColor_EnableOverrideDefaultValue; // 0x441
		::UnityEngine::Color ESPP_characterIgnisFatuusColor_OverrideDefaultValue; // 0x444
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColorTexture_FieldHandleType; // 0x454
		::UnityEngine::Texture* ESPP_characterIgnisFatuusColorTexture; // 0x458
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColorTextureUVScale_FieldHandleType; // 0x460
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVScale_UseIt; // 0x464
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterIgnisFatuusColorTextureUVScale; // 0x468
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVScale_EnableFade; // 0x470
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVScale_EnableOverrideDefaultValue; // 0x471
		::UnityEngine::Vector2 ESPP_characterIgnisFatuusColorTextureUVScale_OverrideDefaultValue; // 0x474
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColorTextureUVSpeed_FieldHandleType; // 0x47C
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVSpeed_UseIt; // 0x480
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterIgnisFatuusColorTextureUVSpeed; // 0x488
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVSpeed_EnableFade; // 0x490
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVSpeed_EnableOverrideDefaultValue; // 0x491
		::UnityEngine::Vector2 ESPP_characterIgnisFatuusColorTextureUVSpeed_OverrideDefaultValue; // 0x494
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusNoiseTexture_FieldHandleType; // 0x49C
		::UnityEngine::Texture* ESPP_characterIgnisFatuusNoiseTexture; // 0x4A0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusNoiseTextureUVScale_FieldHandleType; // 0x4A8
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVScale_UseIt; // 0x4AC
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterIgnisFatuusNoiseTextureUVScale; // 0x4B0
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVScale_EnableFade; // 0x4B8
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVScale_EnableOverrideDefaultValue; // 0x4B9
		::UnityEngine::Vector2 ESPP_characterIgnisFatuusNoiseTextureUVScale_OverrideDefaultValue; // 0x4BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusNoiseTextureUVSpeed_FieldHandleType; // 0x4C4
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVSpeed_UseIt; // 0x4C8
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterIgnisFatuusNoiseTextureUVSpeed; // 0x4D0
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVSpeed_EnableFade; // 0x4D8
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVSpeed_EnableOverrideDefaultValue; // 0x4D9
		::UnityEngine::Vector2 ESPP_characterIgnisFatuusNoiseTextureUVSpeed_OverrideDefaultValue; // 0x4DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusDistortionIntensity_FieldHandleType; // 0x4E4
		::System::Boolean ESPP_characterIgnisFatuusDistortionIntensity_UseIt; // 0x4E8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusDistortionIntensity; // 0x4F0
		::System::Boolean ESPP_characterIgnisFatuusDistortionIntensity_EnableFade; // 0x4F8
		::System::Boolean ESPP_characterIgnisFatuusDistortionIntensity_EnableOverrideDefaultValue; // 0x4F9
		::System::Single ESPP_characterIgnisFatuusDistortionIntensity_OverrideDefaultValue; // 0x4FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusDistortionOffset_FieldHandleType; // 0x500
		::System::Boolean ESPP_characterIgnisFatuusDistortionOffset_UseIt; // 0x504
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusDistortionOffset; // 0x508
		::System::Boolean ESPP_characterIgnisFatuusDistortionOffset_EnableFade; // 0x510
		::System::Boolean ESPP_characterIgnisFatuusDistortionOffset_EnableOverrideDefaultValue; // 0x511
		::System::Single ESPP_characterIgnisFatuusDistortionOffset_OverrideDefaultValue; // 0x514
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusBlurPow_FieldHandleType; // 0x518
		::System::Boolean ESPP_characterIgnisFatuusBlurPow_UseIt; // 0x51C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusBlurPow; // 0x520
		::System::Boolean ESPP_characterIgnisFatuusBlurPow_EnableFade; // 0x528
		::System::Boolean ESPP_characterIgnisFatuusBlurPow_EnableOverrideDefaultValue; // 0x529
		::System::Single ESPP_characterIgnisFatuusBlurPow_OverrideDefaultValue; // 0x52C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColorDistortionIntensity_FieldHandleType; // 0x530
		::System::Boolean ESPP_characterIgnisFatuusColorDistortionIntensity_UseIt; // 0x534
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusColorDistortionIntensity; // 0x538
		::System::Boolean ESPP_characterIgnisFatuusColorDistortionIntensity_EnableFade; // 0x540
		::System::Boolean ESPP_characterIgnisFatuusColorDistortionIntensity_EnableOverrideDefaultValue; // 0x541
		::System::Single ESPP_characterIgnisFatuusColorDistortionIntensity_OverrideDefaultValue; // 0x544
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColor2_FieldHandleType; // 0x548
		::System::Boolean ESPP_characterIgnisFatuusColor2_UseIt; // 0x54C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_characterIgnisFatuusColor2; // 0x550
		::System::Boolean ESPP_characterIgnisFatuusColor2_EnableFade; // 0x558
		::System::Boolean ESPP_characterIgnisFatuusColor2_EnableOverrideDefaultValue; // 0x559
		::UnityEngine::Color ESPP_characterIgnisFatuusColor2_OverrideDefaultValue; // 0x55C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColorTexture2_FieldHandleType; // 0x56C
		::UnityEngine::Texture* ESPP_characterIgnisFatuusColorTexture2; // 0x570
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColorTextureUVScale2_FieldHandleType; // 0x578
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVScale2_UseIt; // 0x57C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterIgnisFatuusColorTextureUVScale2; // 0x580
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVScale2_EnableFade; // 0x588
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVScale2_EnableOverrideDefaultValue; // 0x589
		::UnityEngine::Vector2 ESPP_characterIgnisFatuusColorTextureUVScale2_OverrideDefaultValue; // 0x58C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColorTextureUVSpeed2_FieldHandleType; // 0x594
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVSpeed2_UseIt; // 0x598
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterIgnisFatuusColorTextureUVSpeed2; // 0x5A0
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVSpeed2_EnableFade; // 0x5A8
		::System::Boolean ESPP_characterIgnisFatuusColorTextureUVSpeed2_EnableOverrideDefaultValue; // 0x5A9
		::UnityEngine::Vector2 ESPP_characterIgnisFatuusColorTextureUVSpeed2_OverrideDefaultValue; // 0x5AC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusNoiseTexture2_FieldHandleType; // 0x5B4
		::UnityEngine::Texture* ESPP_characterIgnisFatuusNoiseTexture2; // 0x5B8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusNoiseTextureUVScale2_FieldHandleType; // 0x5C0
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVScale2_UseIt; // 0x5C4
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterIgnisFatuusNoiseTextureUVScale2; // 0x5C8
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVScale2_EnableFade; // 0x5D0
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVScale2_EnableOverrideDefaultValue; // 0x5D1
		::UnityEngine::Vector2 ESPP_characterIgnisFatuusNoiseTextureUVScale2_OverrideDefaultValue; // 0x5D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusNoiseTextureUVSpeed2_FieldHandleType; // 0x5DC
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVSpeed2_UseIt; // 0x5E0
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterIgnisFatuusNoiseTextureUVSpeed2; // 0x5E8
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVSpeed2_EnableFade; // 0x5F0
		::System::Boolean ESPP_characterIgnisFatuusNoiseTextureUVSpeed2_EnableOverrideDefaultValue; // 0x5F1
		::UnityEngine::Vector2 ESPP_characterIgnisFatuusNoiseTextureUVSpeed2_OverrideDefaultValue; // 0x5F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusDistortionIntensity2_FieldHandleType; // 0x5FC
		::System::Boolean ESPP_characterIgnisFatuusDistortionIntensity2_UseIt; // 0x600
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusDistortionIntensity2; // 0x608
		::System::Boolean ESPP_characterIgnisFatuusDistortionIntensity2_EnableFade; // 0x610
		::System::Boolean ESPP_characterIgnisFatuusDistortionIntensity2_EnableOverrideDefaultValue; // 0x611
		::System::Single ESPP_characterIgnisFatuusDistortionIntensity2_OverrideDefaultValue; // 0x614
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusDistortionOffset2_FieldHandleType; // 0x618
		::System::Boolean ESPP_characterIgnisFatuusDistortionOffset2_UseIt; // 0x61C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusDistortionOffset2; // 0x620
		::System::Boolean ESPP_characterIgnisFatuusDistortionOffset2_EnableFade; // 0x628
		::System::Boolean ESPP_characterIgnisFatuusDistortionOffset2_EnableOverrideDefaultValue; // 0x629
		::System::Single ESPP_characterIgnisFatuusDistortionOffset2_OverrideDefaultValue; // 0x62C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusBlurPow2_FieldHandleType; // 0x630
		::System::Boolean ESPP_characterIgnisFatuusBlurPow2_UseIt; // 0x634
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusBlurPow2; // 0x638
		::System::Boolean ESPP_characterIgnisFatuusBlurPow2_EnableFade; // 0x640
		::System::Boolean ESPP_characterIgnisFatuusBlurPow2_EnableOverrideDefaultValue; // 0x641
		::System::Single ESPP_characterIgnisFatuusBlurPow2_OverrideDefaultValue; // 0x644
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusColorDistortionIntensity2_FieldHandleType; // 0x648
		::System::Boolean ESPP_characterIgnisFatuusColorDistortionIntensity2_UseIt; // 0x64C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusColorDistortionIntensity2; // 0x650
		::System::Boolean ESPP_characterIgnisFatuusColorDistortionIntensity2_EnableFade; // 0x658
		::System::Boolean ESPP_characterIgnisFatuusColorDistortionIntensity2_EnableOverrideDefaultValue; // 0x659
		::System::Single ESPP_characterIgnisFatuusColorDistortionIntensity2_OverrideDefaultValue; // 0x65C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusSoftEdgePow_FieldHandleType; // 0x660
		::System::Boolean ESPP_characterIgnisFatuusSoftEdgePow_UseIt; // 0x664
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusSoftEdgePow; // 0x668
		::System::Boolean ESPP_characterIgnisFatuusSoftEdgePow_EnableFade; // 0x670
		::System::Boolean ESPP_characterIgnisFatuusSoftEdgePow_EnableOverrideDefaultValue; // 0x671
		::System::Single ESPP_characterIgnisFatuusSoftEdgePow_OverrideDefaultValue; // 0x674
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusSoftEdgeRange_FieldHandleType; // 0x678
		::System::Boolean ESPP_characterIgnisFatuusSoftEdgeRange_UseIt; // 0x67C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusSoftEdgeRange; // 0x680
		::System::Boolean ESPP_characterIgnisFatuusSoftEdgeRange_EnableFade; // 0x688
		::System::Boolean ESPP_characterIgnisFatuusSoftEdgeRange_EnableOverrideDefaultValue; // 0x689
		::System::Single ESPP_characterIgnisFatuusSoftEdgeRange_OverrideDefaultValue; // 0x68C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusDisappearStart_FieldHandleType; // 0x690
		::System::Boolean ESPP_characterIgnisFatuusDisappearStart_UseIt; // 0x694
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusDisappearStart; // 0x698
		::System::Boolean ESPP_characterIgnisFatuusDisappearStart_EnableFade; // 0x6A0
		::System::Boolean ESPP_characterIgnisFatuusDisappearStart_EnableOverrideDefaultValue; // 0x6A1
		::System::Single ESPP_characterIgnisFatuusDisappearStart_OverrideDefaultValue; // 0x6A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusDisappearEnd_FieldHandleType; // 0x6A8
		::System::Boolean ESPP_characterIgnisFatuusDisappearEnd_UseIt; // 0x6AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusDisappearEnd; // 0x6B0
		::System::Boolean ESPP_characterIgnisFatuusDisappearEnd_EnableFade; // 0x6B8
		::System::Boolean ESPP_characterIgnisFatuusDisappearEnd_EnableOverrideDefaultValue; // 0x6B9
		::System::Single ESPP_characterIgnisFatuusDisappearEnd_OverrideDefaultValue; // 0x6BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusFadeIn_FieldHandleType; // 0x6C0
		::System::Boolean ESPP_characterIgnisFatuusFadeIn_UseIt; // 0x6C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusFadeIn; // 0x6C8
		::System::Boolean ESPP_characterIgnisFatuusFadeIn_EnableFade; // 0x6D0
		::System::Boolean ESPP_characterIgnisFatuusFadeIn_EnableOverrideDefaultValue; // 0x6D1
		::System::Single ESPP_characterIgnisFatuusFadeIn_OverrideDefaultValue; // 0x6D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterIgnisFatuusFadeOut_FieldHandleType; // 0x6D8
		::System::Boolean ESPP_characterIgnisFatuusFadeOut_UseIt; // 0x6DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterIgnisFatuusFadeOut; // 0x6E0
		::System::Boolean ESPP_characterIgnisFatuusFadeOut_EnableFade; // 0x6E8
		::System::Boolean ESPP_characterIgnisFatuusFadeOut_EnableOverrideDefaultValue; // 0x6E9
		::System::Single ESPP_characterIgnisFatuusFadeOut_OverrideDefaultValue; // 0x6EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_7A5EE891DA69F667(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_7A5EE891DA69F667_OFFSET))(this, a1);
		}

		::System::Void Method_5_FFE188B6911A2F42(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_FFE188B6911A2F42_OFFSET))(this, a1);
		}

		::System::Void Method_5_4F6CBEF30D6E7AC4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4F6CBEF30D6E7AC4_OFFSET))(this, a1);
		}

		::System::Void Method_5_4F6CBEF30D6E7AC4_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4F6CBEF30D6E7AC4_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D6879CAA76F6588()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_8D6879CAA76F6588_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_63D56313608AFE32(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_63D56313608AFE32_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_76ECC59BC7430042_OFFSET))(this, a1);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_76ECC59BC7430042_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERIGNISFATUUS_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}
	};
}
