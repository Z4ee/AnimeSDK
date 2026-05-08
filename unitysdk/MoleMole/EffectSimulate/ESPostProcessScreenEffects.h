#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityScreenEffects; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector3KeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector4KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x191AB000)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_17C2BBE3CA88BBC8_OFFSET UNITYSDK_OFFSET(0x191A7C00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x191AAF50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0x1919CFB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x19197810)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x191AB040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x191AB1E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x191A51B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_39FD7185C859CEAD_OFFSET UNITYSDK_OFFSET(0x191A2750)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x191A50F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x1916CC90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x191A53E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x191A5310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x191A52B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x191AAF40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x191AB030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x1916C010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x191A5C10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x19174840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0x191A5430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x191AB1C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_7A5EE891DA69F667_OFFSET UNITYSDK_OFFSET(0x1918F460)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x191AB020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x191A51F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x191A5370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x191A5140)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x191A3930)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x191AB050)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x191A5260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x191AB300)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x191AB010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x191A3840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x191AAF30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x191A4FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x191AB180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x191AB270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1916CC50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x191A50A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_D35B60AE823B8CC1_OFFSET UNITYSDK_OFFSET(0x1916DC50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x191AAFF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x191AB0F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_E46509D2BC81F8FB_OFFSET UNITYSDK_OFFSET(0x19177620)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x191AB1D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x191AB0E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x191A8CC0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessScreenEffects_TypeDefinitionIndex = 71507;

	class ESPostProcessScreenEffects : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ScreenEffects*>
	{
	public:
		::MoleMole::Config::ConfigEntityScreenEffects* m_stAsset; // 0xB0
		::System::Single _DefaultBoundary; // 0xB8
		::System::Single _DefaultMaxOpacity; // 0xBC
		::System::Single _DefaultDissolveProgress; // 0xC0
		::System::Single _DefaultDissolveDistortionIntensity; // 0xC4
		::System::Boolean _VolDefault_enabled; // 0xC8
		::UnityEngine::Rendering::Universal::BlendModes _VolDefault_blendMode; // 0xCC
		::System::Single _VolDefault_polarUVAspect; // 0xD0
		::UnityEngine::Rendering::Universal::UvModes _VolDefault_boundaryMode; // 0xD4
		::System::Single _VolDefault_boundaryUVAspect; // 0xD8
		::System::Single _VolDefault_boundary; // 0xDC
		::System::Single _VolDefault_feather; // 0xE0
		::System::Single _VolDefault_maxOpacity; // 0xE4
		::System::Boolean _VolDefault_invert; // 0xE8
		::UnityEngine::Texture* _VolDefault_mainTex; // 0xF0
		::UnityEngine::Rendering::Universal::UvModes _VolDefault_mainTexUvMode; // 0xF8
		::UnityEngine::Vector4 _VolDefault_mainTexScaleOffset; // 0xFC
		::System::Boolean _VolDefault_useRGBColorChannelMapping; // 0x10C
		::UnityEngine::Rendering::Universal::ChannelMapping _VolDefault_colorChannelMapping; // 0x110
		::UnityEngine::Rendering::Universal::ChannelMapping _VolDefault_alphaChannelMapping; // 0x114
		::UnityEngine::Color _VolDefault_colorA; // 0x118
		::UnityEngine::Color _VolDefault_colorB; // 0x128
		::System::Single _VolDefault_lerpBrightness; // 0x138
		::UnityEngine::Vector2 _VolDefault_uvMoveSpeed; // 0x13C
		::UnityEngine::Texture* _VolDefault_maskTex; // 0x148
		::UnityEngine::Rendering::Universal::UvModes _VolDefault_maskTexUvMode; // 0x150
		::UnityEngine::Vector4 _VolDefault_maskTexScaleOffset; // 0x154
		::UnityEngine::Rendering::Universal::ChannelMapping _VolDefault_maskChannelMapping; // 0x164
		::UnityEngine::Vector2 _VolDefault_maskUvMoveSpeed; // 0x168
		::UnityEngine::Texture* _VolDefault_dissolveTex; // 0x170
		::UnityEngine::Rendering::Universal::UvModes _VolDefault_dissolveTexUvMode; // 0x178
		::UnityEngine::Vector4 _VolDefault_dissolveTexScaleOffset; // 0x17C
		::UnityEngine::Rendering::Universal::ChannelMapping _VolDefault_dissolveChannel; // 0x18C
		::System::Single _VolDefault_dissolveProgress; // 0x190
		::UnityEngine::Vector2 _VolDefault_dissolveUVSpeed; // 0x194
		::System::Boolean _VolDefault_dissolveRandomUV; // 0x19C
		::System::Boolean _VolDefault_dissolveAffects2Tone; // 0x19D
		::UnityEngine::Texture* _VolDefault_distortionTex; // 0x1A0
		::UnityEngine::Rendering::Universal::UvModes _VolDefault_distortionTexUvMode; // 0x1A8
		::UnityEngine::Vector4 _VolDefault_distortionTexScaleOffset; // 0x1AC
		::UnityEngine::Rendering::Universal::ChannelMapping _VolDefault_distortionChannel; // 0x1BC
		::UnityEngine::Vector2 _VolDefault_distortionUVSpeed; // 0x1C0
		::System::Boolean _VolDefault_distortionRandomUV; // 0x1C8
		::System::Single _VolDefault_distortionIntensity; // 0x1CC
		::System::Single _VolDefault_dissolveDistortionIntensity; // 0x1D0
		::System::Single _VolDefault_softRange; // 0x1D4
		::System::Single _VolDefault_alphaCutoff; // 0x1D8
		::System::Boolean _VolDefault_screenDistortion; // 0x1DC
		::UnityEngine::Texture* _VolDefault_screenDistortionTex; // 0x1E0
		::UnityEngine::Rendering::Universal::UvModes _VolDefault_screenDistortionTexUvMode; // 0x1E8
		::UnityEngine::Vector4 _VolDefault_screenDistortionTexScaleOffset; // 0x1EC
		::System::Single _VolDefault_screenDistortionIntensity; // 0x1FC
		::UnityEngine::Vector2 _VolDefault_screenDistortionUVSpeed; // 0x200
		::System::Boolean _VolDefault_ignoreTimeScale; // 0x208
		::System::Boolean _VolDefault_characterGhost; // 0x209
		::System::Boolean _VolDefault_characterGhostBlitWithProxy; // 0x20A
		::System::Int32 _VolDefault_characterGhostDownSample; // 0x20C
		::UnityEngine::Texture* _VolDefault_characterGhostDistortionTexture; // 0x210
		::UnityEngine::Vector2 _VolDefault_characterGhostDistortionUVScale; // 0x218
		::UnityEngine::Vector2 _VolDefault_characterGhostDistortionUVSpeed; // 0x220
		::System::Single _VolDefault_characterGhostRadius; // 0x228
		::System::Single _VolDefault_characterGhostIntensity; // 0x22C
		::System::Boolean _VolDefault_characterGhostSelfMask; // 0x230
		::System::Boolean _VolDefault_ghostDepthCulling; // 0x231
		::System::Boolean _VolDefault_useScreenSpaceRadius; // 0x232
		::UnityEngine::Vector3 _VolDefault_characterGhostTargetPosition; // 0x234
		::System::Int32 _VolDefault_characterGhostLayer; // 0x240
		::System::Single _VolDefault_layer1Direction; // 0x244
		::System::Single _VolDefault_layer1Radius; // 0x248
		::System::Single _VolDefault_layer1Intensity; // 0x24C
		::UnityEngine::Color _VolDefault_layer1Color; // 0x250
		::System::Single _VolDefault_layer2Direction; // 0x260
		::System::Single _VolDefault_layer2Radius; // 0x264
		::System::Single _VolDefault_layer2Intensity; // 0x268
		::UnityEngine::Color _VolDefault_layer2Color; // 0x26C
		::System::Single _VolDefault_layer3Direction; // 0x27C
		::System::Single _VolDefault_layer3Radius; // 0x280
		::System::Single _VolDefault_layer3Intensity; // 0x284
		::UnityEngine::Color _VolDefault_layer3Color; // 0x288
		::System::Single _VolDefault_layer4Direction; // 0x298
		::System::Single _VolDefault_layer4Radius; // 0x29C
		::System::Single _VolDefault_layer4Intensity; // 0x2A0
		::UnityEngine::Color _VolDefault_layer4Color; // 0x2A4
		::System::Single _VolDefault_layer5Direction; // 0x2B4
		::System::Single _VolDefault_layer5Radius; // 0x2B8
		::System::Single _VolDefault_layer5Intensity; // 0x2BC
		::UnityEngine::Color _VolDefault_layer5Color; // 0x2C0
		::UnityEngine::Color _VolDefault_characterGhostColor; // 0x2D0
		::System::Boolean _VolDefault_characterGhostFresnel; // 0x2E0
		::System::Single _VolDefault_characterGhostFresnelPower; // 0x2E4
		::System::Boolean _VolDefault_characterGhostSingleColor; // 0x2E8
		::System::Single _VolDefault_characterGhostMinIntensity; // 0x2EC
		::System::Boolean _VolPreVal_enabled_overrideState; // 0x2F0
		::System::Boolean _VolPreVal_enabled; // 0x2F1
		::System::Boolean _VolPreVal_blendMode_overrideState; // 0x2F2
		::UnityEngine::Rendering::Universal::BlendModes _VolPreVal_blendMode; // 0x2F4
		::System::Boolean _VolPreVal_polarUVAspect_overrideState; // 0x2F8
		::System::Single _VolPreVal_polarUVAspect; // 0x2FC
		::System::Boolean _VolPreVal_boundaryMode_overrideState; // 0x300
		::UnityEngine::Rendering::Universal::UvModes _VolPreVal_boundaryMode; // 0x304
		::System::Boolean _VolPreVal_boundaryUVAspect_overrideState; // 0x308
		::System::Single _VolPreVal_boundaryUVAspect; // 0x30C
		::System::Boolean _VolPreVal_boundary_overrideState; // 0x310
		::System::Single _VolPreVal_boundary; // 0x314
		::System::Boolean _VolPreVal_feather_overrideState; // 0x318
		::System::Single _VolPreVal_feather; // 0x31C
		::System::Boolean _VolPreVal_maxOpacity_overrideState; // 0x320
		::System::Single _VolPreVal_maxOpacity; // 0x324
		::System::Boolean _VolPreVal_invert_overrideState; // 0x328
		::System::Boolean _VolPreVal_invert; // 0x329
		::System::Boolean _VolPreVal_mainTex_overrideState; // 0x32A
		::UnityEngine::Texture* _VolPreVal_mainTex; // 0x330
		::System::Boolean _VolPreVal_mainTexUvMode_overrideState; // 0x338
		::UnityEngine::Rendering::Universal::UvModes _VolPreVal_mainTexUvMode; // 0x33C
		::System::Boolean _VolPreVal_mainTexScaleOffset_overrideState; // 0x340
		::UnityEngine::Vector4 _VolPreVal_mainTexScaleOffset; // 0x344
		::System::Boolean _VolPreVal_useRGBColorChannelMapping_overrideState; // 0x354
		::System::Boolean _VolPreVal_useRGBColorChannelMapping; // 0x355
		::System::Boolean _VolPreVal_colorChannelMapping_overrideState; // 0x356
		::UnityEngine::Rendering::Universal::ChannelMapping _VolPreVal_colorChannelMapping; // 0x358
		::System::Boolean _VolPreVal_alphaChannelMapping_overrideState; // 0x35C
		::UnityEngine::Rendering::Universal::ChannelMapping _VolPreVal_alphaChannelMapping; // 0x360
		::System::Boolean _VolPreVal_colorA_overrideState; // 0x364
		::UnityEngine::Color _VolPreVal_colorA; // 0x368
		::System::Boolean _VolPreVal_colorB_overrideState; // 0x378
		::UnityEngine::Color _VolPreVal_colorB; // 0x37C
		::System::Boolean _VolPreVal_lerpBrightness_overrideState; // 0x38C
		::System::Single _VolPreVal_lerpBrightness; // 0x390
		::System::Boolean _VolPreVal_uvMoveSpeed_overrideState; // 0x394
		::UnityEngine::Vector2 _VolPreVal_uvMoveSpeed; // 0x398
		::System::Boolean _VolPreVal_maskTex_overrideState; // 0x3A0
		::UnityEngine::Texture* _VolPreVal_maskTex; // 0x3A8
		::System::Boolean _VolPreVal_maskTexUvMode_overrideState; // 0x3B0
		::UnityEngine::Rendering::Universal::UvModes _VolPreVal_maskTexUvMode; // 0x3B4
		::System::Boolean _VolPreVal_maskTexScaleOffset_overrideState; // 0x3B8
		::UnityEngine::Vector4 _VolPreVal_maskTexScaleOffset; // 0x3BC
		::System::Boolean _VolPreVal_maskChannelMapping_overrideState; // 0x3CC
		::UnityEngine::Rendering::Universal::ChannelMapping _VolPreVal_maskChannelMapping; // 0x3D0
		::System::Boolean _VolPreVal_maskUvMoveSpeed_overrideState; // 0x3D4
		::UnityEngine::Vector2 _VolPreVal_maskUvMoveSpeed; // 0x3D8
		::System::Boolean _VolPreVal_dissolveTex_overrideState; // 0x3E0
		::UnityEngine::Texture* _VolPreVal_dissolveTex; // 0x3E8
		::System::Boolean _VolPreVal_dissolveTexUvMode_overrideState; // 0x3F0
		::UnityEngine::Rendering::Universal::UvModes _VolPreVal_dissolveTexUvMode; // 0x3F4
		::System::Boolean _VolPreVal_dissolveTexScaleOffset_overrideState; // 0x3F8
		::UnityEngine::Vector4 _VolPreVal_dissolveTexScaleOffset; // 0x3FC
		::System::Boolean _VolPreVal_dissolveChannel_overrideState; // 0x40C
		::UnityEngine::Rendering::Universal::ChannelMapping _VolPreVal_dissolveChannel; // 0x410
		::System::Boolean _VolPreVal_dissolveProgress_overrideState; // 0x414
		::System::Single _VolPreVal_dissolveProgress; // 0x418
		::System::Boolean _VolPreVal_dissolveUVSpeed_overrideState; // 0x41C
		::UnityEngine::Vector2 _VolPreVal_dissolveUVSpeed; // 0x420
		::System::Boolean _VolPreVal_dissolveRandomUV_overrideState; // 0x428
		::System::Boolean _VolPreVal_dissolveRandomUV; // 0x429
		::System::Boolean _VolPreVal_dissolveAffects2Tone_overrideState; // 0x42A
		::System::Boolean _VolPreVal_dissolveAffects2Tone; // 0x42B
		::System::Boolean _VolPreVal_distortionTex_overrideState; // 0x42C
		::UnityEngine::Texture* _VolPreVal_distortionTex; // 0x430
		::System::Boolean _VolPreVal_distortionTexUvMode_overrideState; // 0x438
		::UnityEngine::Rendering::Universal::UvModes _VolPreVal_distortionTexUvMode; // 0x43C
		::System::Boolean _VolPreVal_distortionTexScaleOffset_overrideState; // 0x440
		::UnityEngine::Vector4 _VolPreVal_distortionTexScaleOffset; // 0x444
		::System::Boolean _VolPreVal_distortionChannel_overrideState; // 0x454
		::UnityEngine::Rendering::Universal::ChannelMapping _VolPreVal_distortionChannel; // 0x458
		::System::Boolean _VolPreVal_distortionUVSpeed_overrideState; // 0x45C
		::UnityEngine::Vector2 _VolPreVal_distortionUVSpeed; // 0x460
		::System::Boolean _VolPreVal_distortionRandomUV_overrideState; // 0x468
		::System::Boolean _VolPreVal_distortionRandomUV; // 0x469
		::System::Boolean _VolPreVal_distortionIntensity_overrideState; // 0x46A
		::System::Single _VolPreVal_distortionIntensity; // 0x46C
		::System::Boolean _VolPreVal_dissolveDistortionIntensity_overrideState; // 0x470
		::System::Single _VolPreVal_dissolveDistortionIntensity; // 0x474
		::System::Boolean _VolPreVal_softRange_overrideState; // 0x478
		::System::Single _VolPreVal_softRange; // 0x47C
		::System::Boolean _VolPreVal_alphaCutoff_overrideState; // 0x480
		::System::Single _VolPreVal_alphaCutoff; // 0x484
		::System::Boolean _VolPreVal_screenDistortion_overrideState; // 0x488
		::System::Boolean _VolPreVal_screenDistortion; // 0x489
		::System::Boolean _VolPreVal_screenDistortionTex_overrideState; // 0x48A
		::UnityEngine::Texture* _VolPreVal_screenDistortionTex; // 0x490
		::System::Boolean _VolPreVal_screenDistortionTexUvMode_overrideState; // 0x498
		::UnityEngine::Rendering::Universal::UvModes _VolPreVal_screenDistortionTexUvMode; // 0x49C
		::System::Boolean _VolPreVal_screenDistortionTexScaleOffset_overrideState; // 0x4A0
		::UnityEngine::Vector4 _VolPreVal_screenDistortionTexScaleOffset; // 0x4A4
		::System::Boolean _VolPreVal_screenDistortionIntensity_overrideState; // 0x4B4
		::System::Single _VolPreVal_screenDistortionIntensity; // 0x4B8
		::System::Boolean _VolPreVal_screenDistortionUVSpeed_overrideState; // 0x4BC
		::UnityEngine::Vector2 _VolPreVal_screenDistortionUVSpeed; // 0x4C0
		::System::Boolean _VolPreVal_ignoreTimeScale_overrideState; // 0x4C8
		::System::Boolean _VolPreVal_ignoreTimeScale; // 0x4C9
		::System::Boolean _VolPreVal_characterGhost_overrideState; // 0x4CA
		::System::Boolean _VolPreVal_characterGhost; // 0x4CB
		::System::Boolean _VolPreVal_characterGhostBlitWithProxy_overrideState; // 0x4CC
		::System::Boolean _VolPreVal_characterGhostBlitWithProxy; // 0x4CD
		::System::Boolean _VolPreVal_characterGhostDownSample_overrideState; // 0x4CE
		::System::Int32 _VolPreVal_characterGhostDownSample; // 0x4D0
		::System::Boolean _VolPreVal_characterGhostDistortionTexture_overrideState; // 0x4D4
		::UnityEngine::Texture* _VolPreVal_characterGhostDistortionTexture; // 0x4D8
		::System::Boolean _VolPreVal_characterGhostDistortionUVScale_overrideState; // 0x4E0
		::UnityEngine::Vector2 _VolPreVal_characterGhostDistortionUVScale; // 0x4E4
		::System::Boolean _VolPreVal_characterGhostDistortionUVSpeed_overrideState; // 0x4EC
		::UnityEngine::Vector2 _VolPreVal_characterGhostDistortionUVSpeed; // 0x4F0
		::System::Boolean _VolPreVal_characterGhostRadius_overrideState; // 0x4F8
		::System::Single _VolPreVal_characterGhostRadius; // 0x4FC
		::System::Boolean _VolPreVal_characterGhostIntensity_overrideState; // 0x500
		::System::Single _VolPreVal_characterGhostIntensity; // 0x504
		::System::Boolean _VolPreVal_characterGhostSelfMask_overrideState; // 0x508
		::System::Boolean _VolPreVal_characterGhostSelfMask; // 0x509
		::System::Boolean _VolPreVal_ghostDepthCulling_overrideState; // 0x50A
		::System::Boolean _VolPreVal_ghostDepthCulling; // 0x50B
		::System::Boolean _VolPreVal_useScreenSpaceRadius_overrideState; // 0x50C
		::System::Boolean _VolPreVal_useScreenSpaceRadius; // 0x50D
		::System::Boolean _VolPreVal_characterGhostTargetPosition_overrideState; // 0x50E
		::UnityEngine::Vector3 _VolPreVal_characterGhostTargetPosition; // 0x510
		::System::Boolean _VolPreVal_characterGhostLayer_overrideState; // 0x51C
		::System::Int32 _VolPreVal_characterGhostLayer; // 0x520
		::System::Boolean _VolPreVal_layer1Direction_overrideState; // 0x524
		::System::Single _VolPreVal_layer1Direction; // 0x528
		::System::Boolean _VolPreVal_layer1Radius_overrideState; // 0x52C
		::System::Single _VolPreVal_layer1Radius; // 0x530
		::System::Boolean _VolPreVal_layer1Intensity_overrideState; // 0x534
		::System::Single _VolPreVal_layer1Intensity; // 0x538
		::System::Boolean _VolPreVal_layer1Color_overrideState; // 0x53C
		::UnityEngine::Color _VolPreVal_layer1Color; // 0x540
		::System::Boolean _VolPreVal_layer2Direction_overrideState; // 0x550
		::System::Single _VolPreVal_layer2Direction; // 0x554
		::System::Boolean _VolPreVal_layer2Radius_overrideState; // 0x558
		::System::Single _VolPreVal_layer2Radius; // 0x55C
		::System::Boolean _VolPreVal_layer2Intensity_overrideState; // 0x560
		::System::Single _VolPreVal_layer2Intensity; // 0x564
		::System::Boolean _VolPreVal_layer2Color_overrideState; // 0x568
		::UnityEngine::Color _VolPreVal_layer2Color; // 0x56C
		::System::Boolean _VolPreVal_layer3Direction_overrideState; // 0x57C
		::System::Single _VolPreVal_layer3Direction; // 0x580
		::System::Boolean _VolPreVal_layer3Radius_overrideState; // 0x584
		::System::Single _VolPreVal_layer3Radius; // 0x588
		::System::Boolean _VolPreVal_layer3Intensity_overrideState; // 0x58C
		::System::Single _VolPreVal_layer3Intensity; // 0x590
		::System::Boolean _VolPreVal_layer3Color_overrideState; // 0x594
		::UnityEngine::Color _VolPreVal_layer3Color; // 0x598
		::System::Boolean _VolPreVal_layer4Direction_overrideState; // 0x5A8
		::System::Single _VolPreVal_layer4Direction; // 0x5AC
		::System::Boolean _VolPreVal_layer4Radius_overrideState; // 0x5B0
		::System::Single _VolPreVal_layer4Radius; // 0x5B4
		::System::Boolean _VolPreVal_layer4Intensity_overrideState; // 0x5B8
		::System::Single _VolPreVal_layer4Intensity; // 0x5BC
		::System::Boolean _VolPreVal_layer4Color_overrideState; // 0x5C0
		::UnityEngine::Color _VolPreVal_layer4Color; // 0x5C4
		::System::Boolean _VolPreVal_layer5Direction_overrideState; // 0x5D4
		::System::Single _VolPreVal_layer5Direction; // 0x5D8
		::System::Boolean _VolPreVal_layer5Radius_overrideState; // 0x5DC
		::System::Single _VolPreVal_layer5Radius; // 0x5E0
		::System::Boolean _VolPreVal_layer5Intensity_overrideState; // 0x5E4
		::System::Single _VolPreVal_layer5Intensity; // 0x5E8
		::System::Boolean _VolPreVal_layer5Color_overrideState; // 0x5EC
		::UnityEngine::Color _VolPreVal_layer5Color; // 0x5F0
		::System::Boolean _VolPreVal_characterGhostColor_overrideState; // 0x600
		::UnityEngine::Color _VolPreVal_characterGhostColor; // 0x604
		::System::Boolean _VolPreVal_characterGhostFresnel_overrideState; // 0x614
		::System::Boolean _VolPreVal_characterGhostFresnel; // 0x615
		::System::Boolean _VolPreVal_characterGhostFresnelPower_overrideState; // 0x616
		::System::Single _VolPreVal_characterGhostFresnelPower; // 0x618
		::System::Boolean _VolPreVal_characterGhostSingleColor_overrideState; // 0x61C
		::System::Boolean _VolPreVal_characterGhostSingleColor; // 0x61D
		::System::Boolean _VolPreVal_characterGhostMinIntensity_overrideState; // 0x61E
		::System::Single _VolPreVal_characterGhostMinIntensity; // 0x620
		::System::Boolean _TimelineCurveFirstVal_enabled; // 0x624
		::System::Boolean _TimelineCurveLastVal_enabled; // 0x625
		::System::Single _TimelineCurveFirstVal_polarUVAspect; // 0x628
		::System::Single _TimelineCurveLastVal_polarUVAspect; // 0x62C
		::System::Single _TimelineCurveFirstVal_boundaryUVAspect; // 0x630
		::System::Single _TimelineCurveLastVal_boundaryUVAspect; // 0x634
		::System::Single _TimelineCurveFirstVal_boundary; // 0x638
		::System::Single _TimelineCurveLastVal_boundary; // 0x63C
		::System::Single _TimelineCurveFirstVal_feather; // 0x640
		::System::Single _TimelineCurveLastVal_feather; // 0x644
		::System::Single _TimelineCurveFirstVal_maxOpacity; // 0x648
		::System::Single _TimelineCurveLastVal_maxOpacity; // 0x64C
		::System::Boolean _TimelineCurveFirstVal_invert; // 0x650
		::System::Boolean _TimelineCurveLastVal_invert; // 0x651
		::UnityEngine::Vector4 _TimelineCurveFirstVal_mainTexScaleOffset; // 0x654
		::UnityEngine::Vector4 _TimelineCurveLastVal_mainTexScaleOffset; // 0x664
		::System::Boolean _TimelineCurveFirstVal_useRGBColorChannelMapping; // 0x674
		::System::Boolean _TimelineCurveLastVal_useRGBColorChannelMapping; // 0x675
		::System::Single _TimelineCurveFirstVal_lerpBrightness; // 0x678
		::System::Single _TimelineCurveLastVal_lerpBrightness; // 0x67C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvMoveSpeed; // 0x680
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvMoveSpeed; // 0x688
		::UnityEngine::Vector4 _TimelineCurveFirstVal_maskTexScaleOffset; // 0x690
		::UnityEngine::Vector4 _TimelineCurveLastVal_maskTexScaleOffset; // 0x6A0
		::UnityEngine::Vector2 _TimelineCurveFirstVal_maskUvMoveSpeed; // 0x6B0
		::UnityEngine::Vector2 _TimelineCurveLastVal_maskUvMoveSpeed; // 0x6B8
		::UnityEngine::Vector4 _TimelineCurveFirstVal_dissolveTexScaleOffset; // 0x6C0
		::UnityEngine::Vector4 _TimelineCurveLastVal_dissolveTexScaleOffset; // 0x6D0
		::System::Single _TimelineCurveFirstVal_dissolveProgress; // 0x6E0
		::System::Single _TimelineCurveLastVal_dissolveProgress; // 0x6E4
		::UnityEngine::Vector2 _TimelineCurveFirstVal_dissolveUVSpeed; // 0x6E8
		::UnityEngine::Vector2 _TimelineCurveLastVal_dissolveUVSpeed; // 0x6F0
		::System::Boolean _TimelineCurveFirstVal_dissolveRandomUV; // 0x6F8
		::System::Boolean _TimelineCurveLastVal_dissolveRandomUV; // 0x6F9
		::System::Boolean _TimelineCurveFirstVal_dissolveAffects2Tone; // 0x6FA
		::System::Boolean _TimelineCurveLastVal_dissolveAffects2Tone; // 0x6FB
		::UnityEngine::Vector4 _TimelineCurveFirstVal_distortionTexScaleOffset; // 0x6FC
		::UnityEngine::Vector4 _TimelineCurveLastVal_distortionTexScaleOffset; // 0x70C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_distortionUVSpeed; // 0x71C
		::UnityEngine::Vector2 _TimelineCurveLastVal_distortionUVSpeed; // 0x724
		::System::Boolean _TimelineCurveFirstVal_distortionRandomUV; // 0x72C
		::System::Boolean _TimelineCurveLastVal_distortionRandomUV; // 0x72D
		::System::Single _TimelineCurveFirstVal_distortionIntensity; // 0x730
		::System::Single _TimelineCurveLastVal_distortionIntensity; // 0x734
		::System::Single _TimelineCurveFirstVal_dissolveDistortionIntensity; // 0x738
		::System::Single _TimelineCurveLastVal_dissolveDistortionIntensity; // 0x73C
		::System::Single _TimelineCurveFirstVal_softRange; // 0x740
		::System::Single _TimelineCurveLastVal_softRange; // 0x744
		::System::Single _TimelineCurveFirstVal_alphaCutoff; // 0x748
		::System::Single _TimelineCurveLastVal_alphaCutoff; // 0x74C
		::System::Boolean _TimelineCurveFirstVal_screenDistortion; // 0x750
		::System::Boolean _TimelineCurveLastVal_screenDistortion; // 0x751
		::UnityEngine::Vector4 _TimelineCurveFirstVal_screenDistortionTexScaleOffset; // 0x754
		::UnityEngine::Vector4 _TimelineCurveLastVal_screenDistortionTexScaleOffset; // 0x764
		::System::Single _TimelineCurveFirstVal_screenDistortionIntensity; // 0x774
		::System::Single _TimelineCurveLastVal_screenDistortionIntensity; // 0x778
		::UnityEngine::Vector2 _TimelineCurveFirstVal_screenDistortionUVSpeed; // 0x77C
		::UnityEngine::Vector2 _TimelineCurveLastVal_screenDistortionUVSpeed; // 0x784
		::System::Boolean _TimelineCurveFirstVal_ignoreTimeScale; // 0x78C
		::System::Boolean _TimelineCurveLastVal_ignoreTimeScale; // 0x78D
		::System::Boolean _TimelineCurveFirstVal_characterGhostBlitWithProxy; // 0x78E
		::System::Boolean _TimelineCurveLastVal_characterGhostBlitWithProxy; // 0x78F
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterGhostDistortionUVScale; // 0x790
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterGhostDistortionUVScale; // 0x798
		::UnityEngine::Vector2 _TimelineCurveFirstVal_characterGhostDistortionUVSpeed; // 0x7A0
		::UnityEngine::Vector2 _TimelineCurveLastVal_characterGhostDistortionUVSpeed; // 0x7A8
		::System::Single _TimelineCurveFirstVal_characterGhostRadius; // 0x7B0
		::System::Single _TimelineCurveLastVal_characterGhostRadius; // 0x7B4
		::System::Single _TimelineCurveFirstVal_characterGhostIntensity; // 0x7B8
		::System::Single _TimelineCurveLastVal_characterGhostIntensity; // 0x7BC
		::System::Boolean _TimelineCurveFirstVal_ghostDepthCulling; // 0x7C0
		::System::Boolean _TimelineCurveLastVal_ghostDepthCulling; // 0x7C1
		::UnityEngine::Vector3 _TimelineCurveFirstVal_characterGhostTargetPosition; // 0x7C4
		::UnityEngine::Vector3 _TimelineCurveLastVal_characterGhostTargetPosition; // 0x7D0
		::System::Single _TimelineCurveFirstVal_layer1Direction; // 0x7DC
		::System::Single _TimelineCurveLastVal_layer1Direction; // 0x7E0
		::System::Single _TimelineCurveFirstVal_layer1Radius; // 0x7E4
		::System::Single _TimelineCurveLastVal_layer1Radius; // 0x7E8
		::System::Single _TimelineCurveFirstVal_layer1Intensity; // 0x7EC
		::System::Single _TimelineCurveLastVal_layer1Intensity; // 0x7F0
		::UnityEngine::Color _TimelineCurveFirstVal_layer1Color; // 0x7F4
		::UnityEngine::Color _TimelineCurveLastVal_layer1Color; // 0x804
		::System::Single _TimelineCurveFirstVal_layer2Direction; // 0x814
		::System::Single _TimelineCurveLastVal_layer2Direction; // 0x818
		::System::Single _TimelineCurveFirstVal_layer2Radius; // 0x81C
		::System::Single _TimelineCurveLastVal_layer2Radius; // 0x820
		::System::Single _TimelineCurveFirstVal_layer2Intensity; // 0x824
		::System::Single _TimelineCurveLastVal_layer2Intensity; // 0x828
		::UnityEngine::Color _TimelineCurveFirstVal_layer2Color; // 0x82C
		::UnityEngine::Color _TimelineCurveLastVal_layer2Color; // 0x83C
		::System::Single _TimelineCurveFirstVal_layer3Direction; // 0x84C
		::System::Single _TimelineCurveLastVal_layer3Direction; // 0x850
		::System::Single _TimelineCurveFirstVal_layer3Radius; // 0x854
		::System::Single _TimelineCurveLastVal_layer3Radius; // 0x858
		::System::Single _TimelineCurveFirstVal_layer3Intensity; // 0x85C
		::System::Single _TimelineCurveLastVal_layer3Intensity; // 0x860
		::UnityEngine::Color _TimelineCurveFirstVal_layer3Color; // 0x864
		::UnityEngine::Color _TimelineCurveLastVal_layer3Color; // 0x874
		::System::Single _TimelineCurveFirstVal_layer4Direction; // 0x884
		::System::Single _TimelineCurveLastVal_layer4Direction; // 0x888
		::System::Single _TimelineCurveFirstVal_layer4Radius; // 0x88C
		::System::Single _TimelineCurveLastVal_layer4Radius; // 0x890
		::System::Single _TimelineCurveFirstVal_layer4Intensity; // 0x894
		::System::Single _TimelineCurveLastVal_layer4Intensity; // 0x898
		::UnityEngine::Color _TimelineCurveFirstVal_layer4Color; // 0x89C
		::UnityEngine::Color _TimelineCurveLastVal_layer4Color; // 0x8AC
		::System::Single _TimelineCurveFirstVal_layer5Direction; // 0x8BC
		::System::Single _TimelineCurveLastVal_layer5Direction; // 0x8C0
		::System::Single _TimelineCurveFirstVal_layer5Radius; // 0x8C4
		::System::Single _TimelineCurveLastVal_layer5Radius; // 0x8C8
		::System::Single _TimelineCurveFirstVal_layer5Intensity; // 0x8CC
		::System::Single _TimelineCurveLastVal_layer5Intensity; // 0x8D0
		::UnityEngine::Color _TimelineCurveFirstVal_layer5Color; // 0x8D4
		::UnityEngine::Color _TimelineCurveLastVal_layer5Color; // 0x8E4
		::UnityEngine::Color _TimelineCurveFirstVal_characterGhostColor; // 0x8F4
		::UnityEngine::Color _TimelineCurveLastVal_characterGhostColor; // 0x904
		::System::Single _TimelineCurveFirstVal_characterGhostFresnelPower; // 0x914
		::System::Single _TimelineCurveLastVal_characterGhostFresnelPower; // 0x918
		::System::Single _TimelineCurveFirstVal_characterGhostMinIntensity; // 0x91C
		::System::Single _TimelineCurveLastVal_characterGhostMinIntensity; // 0x920
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enabled_FieldHandleType; // 0x924
		::System::Boolean ESPP_enabled_UseIt; // 0x928
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enabled; // 0x930
		::System::Boolean ESPP_enabled_EnableFade; // 0x938
		::System::Boolean ESPP_enabled_EnableOverrideDefaultValue; // 0x939
		::System::Boolean ESPP_enabled_OverrideDefaultValue; // 0x93A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_blendMode_FieldHandleType; // 0x93C
		::UnityEngine::Rendering::Universal::BlendModes ESPP_blendMode; // 0x940
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_polarUVAspect_FieldHandleType; // 0x944
		::System::Boolean ESPP_polarUVAspect_UseIt; // 0x948
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_polarUVAspect; // 0x950
		::System::Boolean ESPP_polarUVAspect_EnableFade; // 0x958
		::System::Boolean ESPP_polarUVAspect_EnableOverrideDefaultValue; // 0x959
		::System::Single ESPP_polarUVAspect_OverrideDefaultValue; // 0x95C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_boundaryMode_FieldHandleType; // 0x960
		::UnityEngine::Rendering::Universal::UvModes ESPP_boundaryMode; // 0x964
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_boundaryUVAspect_FieldHandleType; // 0x968
		::System::Boolean ESPP_boundaryUVAspect_UseIt; // 0x96C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_boundaryUVAspect; // 0x970
		::System::Boolean ESPP_boundaryUVAspect_EnableFade; // 0x978
		::System::Boolean ESPP_boundaryUVAspect_EnableOverrideDefaultValue; // 0x979
		::System::Single ESPP_boundaryUVAspect_OverrideDefaultValue; // 0x97C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_boundary_FieldHandleType; // 0x980
		::System::Boolean ESPP_boundary_UseIt; // 0x984
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_boundary; // 0x988
		::System::Boolean ESPP_boundary_EnableFade; // 0x990
		::System::Boolean ESPP_boundary_EnableOverrideDefaultValue; // 0x991
		::System::Single ESPP_boundary_OverrideDefaultValue; // 0x994
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_feather_FieldHandleType; // 0x998
		::System::Boolean ESPP_feather_UseIt; // 0x99C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_feather; // 0x9A0
		::System::Boolean ESPP_feather_EnableFade; // 0x9A8
		::System::Boolean ESPP_feather_EnableOverrideDefaultValue; // 0x9A9
		::System::Single ESPP_feather_OverrideDefaultValue; // 0x9AC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maxOpacity_FieldHandleType; // 0x9B0
		::System::Boolean ESPP_maxOpacity_UseIt; // 0x9B4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_maxOpacity; // 0x9B8
		::System::Boolean ESPP_maxOpacity_EnableFade; // 0x9C0
		::System::Boolean ESPP_maxOpacity_EnableOverrideDefaultValue; // 0x9C1
		::System::Single ESPP_maxOpacity_OverrideDefaultValue; // 0x9C4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_invert_FieldHandleType; // 0x9C8
		::System::Boolean ESPP_invert_UseIt; // 0x9CC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_invert; // 0x9D0
		::System::Boolean ESPP_invert_EnableFade; // 0x9D8
		::System::Boolean ESPP_invert_EnableOverrideDefaultValue; // 0x9D9
		::System::Boolean ESPP_invert_OverrideDefaultValue; // 0x9DA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mainTex_FieldHandleType; // 0x9DC
		::UnityEngine::Texture* ESPP_mainTex; // 0x9E0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mainTexUvMode_FieldHandleType; // 0x9E8
		::UnityEngine::Rendering::Universal::UvModes ESPP_mainTexUvMode; // 0x9EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mainTexScaleOffset_FieldHandleType; // 0x9F0
		::System::Boolean ESPP_mainTexScaleOffset_UseIt; // 0x9F4
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_mainTexScaleOffset; // 0x9F8
		::System::Boolean ESPP_mainTexScaleOffset_EnableFade; // 0xA00
		::System::Boolean ESPP_mainTexScaleOffset_EnableOverrideDefaultValue; // 0xA01
		::UnityEngine::Vector4 ESPP_mainTexScaleOffset_OverrideDefaultValue; // 0xA04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useRGBColorChannelMapping_FieldHandleType; // 0xA14
		::System::Boolean ESPP_useRGBColorChannelMapping_UseIt; // 0xA18
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useRGBColorChannelMapping; // 0xA20
		::System::Boolean ESPP_useRGBColorChannelMapping_EnableFade; // 0xA28
		::System::Boolean ESPP_useRGBColorChannelMapping_EnableOverrideDefaultValue; // 0xA29
		::System::Boolean ESPP_useRGBColorChannelMapping_OverrideDefaultValue; // 0xA2A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorChannelMapping_FieldHandleType; // 0xA2C
		::UnityEngine::Rendering::Universal::ChannelMapping ESPP_colorChannelMapping; // 0xA30
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_alphaChannelMapping_FieldHandleType; // 0xA34
		::UnityEngine::Rendering::Universal::ChannelMapping ESPP_alphaChannelMapping; // 0xA38
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorA_FieldHandleType; // 0xA3C
		::UnityEngine::Color ESPP_colorA; // 0xA40
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorB_FieldHandleType; // 0xA50
		::UnityEngine::Color ESPP_colorB; // 0xA54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lerpBrightness_FieldHandleType; // 0xA64
		::System::Boolean ESPP_lerpBrightness_UseIt; // 0xA68
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lerpBrightness; // 0xA70
		::System::Boolean ESPP_lerpBrightness_EnableFade; // 0xA78
		::System::Boolean ESPP_lerpBrightness_EnableOverrideDefaultValue; // 0xA79
		::System::Single ESPP_lerpBrightness_OverrideDefaultValue; // 0xA7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvMoveSpeed_FieldHandleType; // 0xA80
		::System::Boolean ESPP_uvMoveSpeed_UseIt; // 0xA84
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvMoveSpeed; // 0xA88
		::System::Boolean ESPP_uvMoveSpeed_EnableFade; // 0xA90
		::System::Boolean ESPP_uvMoveSpeed_EnableOverrideDefaultValue; // 0xA91
		::UnityEngine::Vector2 ESPP_uvMoveSpeed_OverrideDefaultValue; // 0xA94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskTex_FieldHandleType; // 0xA9C
		::UnityEngine::Texture* ESPP_maskTex; // 0xAA0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskTexUvMode_FieldHandleType; // 0xAA8
		::UnityEngine::Rendering::Universal::UvModes ESPP_maskTexUvMode; // 0xAAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskTexScaleOffset_FieldHandleType; // 0xAB0
		::System::Boolean ESPP_maskTexScaleOffset_UseIt; // 0xAB4
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_maskTexScaleOffset; // 0xAB8
		::System::Boolean ESPP_maskTexScaleOffset_EnableFade; // 0xAC0
		::System::Boolean ESPP_maskTexScaleOffset_EnableOverrideDefaultValue; // 0xAC1
		::UnityEngine::Vector4 ESPP_maskTexScaleOffset_OverrideDefaultValue; // 0xAC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskChannelMapping_FieldHandleType; // 0xAD4
		::UnityEngine::Rendering::Universal::ChannelMapping ESPP_maskChannelMapping; // 0xAD8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskUvMoveSpeed_FieldHandleType; // 0xADC
		::System::Boolean ESPP_maskUvMoveSpeed_UseIt; // 0xAE0
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_maskUvMoveSpeed; // 0xAE8
		::System::Boolean ESPP_maskUvMoveSpeed_EnableFade; // 0xAF0
		::System::Boolean ESPP_maskUvMoveSpeed_EnableOverrideDefaultValue; // 0xAF1
		::UnityEngine::Vector2 ESPP_maskUvMoveSpeed_OverrideDefaultValue; // 0xAF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dissolveTex_FieldHandleType; // 0xAFC
		::UnityEngine::Texture* ESPP_dissolveTex; // 0xB00
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dissolveTexUvMode_FieldHandleType; // 0xB08
		::UnityEngine::Rendering::Universal::UvModes ESPP_dissolveTexUvMode; // 0xB0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dissolveTexScaleOffset_FieldHandleType; // 0xB10
		::System::Boolean ESPP_dissolveTexScaleOffset_UseIt; // 0xB14
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_dissolveTexScaleOffset; // 0xB18
		::System::Boolean ESPP_dissolveTexScaleOffset_EnableFade; // 0xB20
		::System::Boolean ESPP_dissolveTexScaleOffset_EnableOverrideDefaultValue; // 0xB21
		::UnityEngine::Vector4 ESPP_dissolveTexScaleOffset_OverrideDefaultValue; // 0xB24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dissolveChannel_FieldHandleType; // 0xB34
		::UnityEngine::Rendering::Universal::ChannelMapping ESPP_dissolveChannel; // 0xB38
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dissolveProgress_FieldHandleType; // 0xB3C
		::System::Boolean ESPP_dissolveProgress_UseIt; // 0xB40
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_dissolveProgress; // 0xB48
		::System::Boolean ESPP_dissolveProgress_EnableFade; // 0xB50
		::System::Boolean ESPP_dissolveProgress_EnableOverrideDefaultValue; // 0xB51
		::System::Single ESPP_dissolveProgress_OverrideDefaultValue; // 0xB54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dissolveUVSpeed_FieldHandleType; // 0xB58
		::System::Boolean ESPP_dissolveUVSpeed_UseIt; // 0xB5C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_dissolveUVSpeed; // 0xB60
		::System::Boolean ESPP_dissolveUVSpeed_EnableFade; // 0xB68
		::System::Boolean ESPP_dissolveUVSpeed_EnableOverrideDefaultValue; // 0xB69
		::UnityEngine::Vector2 ESPP_dissolveUVSpeed_OverrideDefaultValue; // 0xB6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dissolveRandomUV_FieldHandleType; // 0xB74
		::System::Boolean ESPP_dissolveRandomUV_UseIt; // 0xB78
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_dissolveRandomUV; // 0xB80
		::System::Boolean ESPP_dissolveRandomUV_EnableFade; // 0xB88
		::System::Boolean ESPP_dissolveRandomUV_EnableOverrideDefaultValue; // 0xB89
		::System::Boolean ESPP_dissolveRandomUV_OverrideDefaultValue; // 0xB8A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dissolveAffects2Tone_FieldHandleType; // 0xB8C
		::System::Boolean ESPP_dissolveAffects2Tone_UseIt; // 0xB90
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_dissolveAffects2Tone; // 0xB98
		::System::Boolean ESPP_dissolveAffects2Tone_EnableFade; // 0xBA0
		::System::Boolean ESPP_dissolveAffects2Tone_EnableOverrideDefaultValue; // 0xBA1
		::System::Boolean ESPP_dissolveAffects2Tone_OverrideDefaultValue; // 0xBA2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distortionTex_FieldHandleType; // 0xBA4
		::UnityEngine::Texture* ESPP_distortionTex; // 0xBA8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distortionTexUvMode_FieldHandleType; // 0xBB0
		::UnityEngine::Rendering::Universal::UvModes ESPP_distortionTexUvMode; // 0xBB4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distortionTexScaleOffset_FieldHandleType; // 0xBB8
		::System::Boolean ESPP_distortionTexScaleOffset_UseIt; // 0xBBC
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_distortionTexScaleOffset; // 0xBC0
		::System::Boolean ESPP_distortionTexScaleOffset_EnableFade; // 0xBC8
		::System::Boolean ESPP_distortionTexScaleOffset_EnableOverrideDefaultValue; // 0xBC9
		::UnityEngine::Vector4 ESPP_distortionTexScaleOffset_OverrideDefaultValue; // 0xBCC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distortionChannel_FieldHandleType; // 0xBDC
		::UnityEngine::Rendering::Universal::ChannelMapping ESPP_distortionChannel; // 0xBE0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distortionUVSpeed_FieldHandleType; // 0xBE4
		::System::Boolean ESPP_distortionUVSpeed_UseIt; // 0xBE8
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_distortionUVSpeed; // 0xBF0
		::System::Boolean ESPP_distortionUVSpeed_EnableFade; // 0xBF8
		::System::Boolean ESPP_distortionUVSpeed_EnableOverrideDefaultValue; // 0xBF9
		::UnityEngine::Vector2 ESPP_distortionUVSpeed_OverrideDefaultValue; // 0xBFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distortionRandomUV_FieldHandleType; // 0xC04
		::System::Boolean ESPP_distortionRandomUV_UseIt; // 0xC08
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_distortionRandomUV; // 0xC10
		::System::Boolean ESPP_distortionRandomUV_EnableFade; // 0xC18
		::System::Boolean ESPP_distortionRandomUV_EnableOverrideDefaultValue; // 0xC19
		::System::Boolean ESPP_distortionRandomUV_OverrideDefaultValue; // 0xC1A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distortionIntensity_FieldHandleType; // 0xC1C
		::System::Boolean ESPP_distortionIntensity_UseIt; // 0xC20
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distortionIntensity; // 0xC28
		::System::Boolean ESPP_distortionIntensity_EnableFade; // 0xC30
		::System::Boolean ESPP_distortionIntensity_EnableOverrideDefaultValue; // 0xC31
		::System::Single ESPP_distortionIntensity_OverrideDefaultValue; // 0xC34
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_dissolveDistortionIntensity_FieldHandleType; // 0xC38
		::System::Boolean ESPP_dissolveDistortionIntensity_UseIt; // 0xC3C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_dissolveDistortionIntensity; // 0xC40
		::System::Boolean ESPP_dissolveDistortionIntensity_EnableFade; // 0xC48
		::System::Boolean ESPP_dissolveDistortionIntensity_EnableOverrideDefaultValue; // 0xC49
		::System::Single ESPP_dissolveDistortionIntensity_OverrideDefaultValue; // 0xC4C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_softRange_FieldHandleType; // 0xC50
		::System::Boolean ESPP_softRange_UseIt; // 0xC54
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_softRange; // 0xC58
		::System::Boolean ESPP_softRange_EnableFade; // 0xC60
		::System::Boolean ESPP_softRange_EnableOverrideDefaultValue; // 0xC61
		::System::Single ESPP_softRange_OverrideDefaultValue; // 0xC64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_alphaCutoff_FieldHandleType; // 0xC68
		::System::Boolean ESPP_alphaCutoff_UseIt; // 0xC6C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_alphaCutoff; // 0xC70
		::System::Boolean ESPP_alphaCutoff_EnableFade; // 0xC78
		::System::Boolean ESPP_alphaCutoff_EnableOverrideDefaultValue; // 0xC79
		::System::Single ESPP_alphaCutoff_OverrideDefaultValue; // 0xC7C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenDistortion_FieldHandleType; // 0xC80
		::System::Boolean ESPP_screenDistortion_UseIt; // 0xC84
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_screenDistortion; // 0xC88
		::System::Boolean ESPP_screenDistortion_EnableFade; // 0xC90
		::System::Boolean ESPP_screenDistortion_EnableOverrideDefaultValue; // 0xC91
		::System::Boolean ESPP_screenDistortion_OverrideDefaultValue; // 0xC92
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenDistortionTex_FieldHandleType; // 0xC94
		::UnityEngine::Texture* ESPP_screenDistortionTex; // 0xC98
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenDistortionTexUvMode_FieldHandleType; // 0xCA0
		::UnityEngine::Rendering::Universal::UvModes ESPP_screenDistortionTexUvMode; // 0xCA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenDistortionTexScaleOffset_FieldHandleType; // 0xCA8
		::System::Boolean ESPP_screenDistortionTexScaleOffset_UseIt; // 0xCAC
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_screenDistortionTexScaleOffset; // 0xCB0
		::System::Boolean ESPP_screenDistortionTexScaleOffset_EnableFade; // 0xCB8
		::System::Boolean ESPP_screenDistortionTexScaleOffset_EnableOverrideDefaultValue; // 0xCB9
		::UnityEngine::Vector4 ESPP_screenDistortionTexScaleOffset_OverrideDefaultValue; // 0xCBC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenDistortionIntensity_FieldHandleType; // 0xCCC
		::System::Boolean ESPP_screenDistortionIntensity_UseIt; // 0xCD0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenDistortionIntensity; // 0xCD8
		::System::Boolean ESPP_screenDistortionIntensity_EnableFade; // 0xCE0
		::System::Boolean ESPP_screenDistortionIntensity_EnableOverrideDefaultValue; // 0xCE1
		::System::Single ESPP_screenDistortionIntensity_OverrideDefaultValue; // 0xCE4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenDistortionUVSpeed_FieldHandleType; // 0xCE8
		::System::Boolean ESPP_screenDistortionUVSpeed_UseIt; // 0xCEC
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_screenDistortionUVSpeed; // 0xCF0
		::System::Boolean ESPP_screenDistortionUVSpeed_EnableFade; // 0xCF8
		::System::Boolean ESPP_screenDistortionUVSpeed_EnableOverrideDefaultValue; // 0xCF9
		::UnityEngine::Vector2 ESPP_screenDistortionUVSpeed_OverrideDefaultValue; // 0xCFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ignoreTimeScale_FieldHandleType; // 0xD04
		::System::Boolean ESPP_ignoreTimeScale_UseIt; // 0xD08
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ignoreTimeScale; // 0xD10
		::System::Boolean ESPP_ignoreTimeScale_EnableFade; // 0xD18
		::System::Boolean ESPP_ignoreTimeScale_EnableOverrideDefaultValue; // 0xD19
		::System::Boolean ESPP_ignoreTimeScale_OverrideDefaultValue; // 0xD1A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhost_FieldHandleType; // 0xD1C
		::System::Boolean ESPP_characterGhost; // 0xD20
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostBlitWithProxy_FieldHandleType; // 0xD24
		::System::Boolean ESPP_characterGhostBlitWithProxy_UseIt; // 0xD28
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_characterGhostBlitWithProxy; // 0xD30
		::System::Boolean ESPP_characterGhostBlitWithProxy_EnableFade; // 0xD38
		::System::Boolean ESPP_characterGhostBlitWithProxy_EnableOverrideDefaultValue; // 0xD39
		::System::Boolean ESPP_characterGhostBlitWithProxy_OverrideDefaultValue; // 0xD3A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostDownSample_FieldHandleType; // 0xD3C
		::System::Int32 ESPP_characterGhostDownSample; // 0xD40
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostDistortionTexture_FieldHandleType; // 0xD44
		::UnityEngine::Texture* ESPP_characterGhostDistortionTexture; // 0xD48
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostDistortionUVScale_FieldHandleType; // 0xD50
		::System::Boolean ESPP_characterGhostDistortionUVScale_UseIt; // 0xD54
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterGhostDistortionUVScale; // 0xD58
		::System::Boolean ESPP_characterGhostDistortionUVScale_EnableFade; // 0xD60
		::System::Boolean ESPP_characterGhostDistortionUVScale_EnableOverrideDefaultValue; // 0xD61
		::UnityEngine::Vector2 ESPP_characterGhostDistortionUVScale_OverrideDefaultValue; // 0xD64
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostDistortionUVSpeed_FieldHandleType; // 0xD6C
		::System::Boolean ESPP_characterGhostDistortionUVSpeed_UseIt; // 0xD70
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_characterGhostDistortionUVSpeed; // 0xD78
		::System::Boolean ESPP_characterGhostDistortionUVSpeed_EnableFade; // 0xD80
		::System::Boolean ESPP_characterGhostDistortionUVSpeed_EnableOverrideDefaultValue; // 0xD81
		::UnityEngine::Vector2 ESPP_characterGhostDistortionUVSpeed_OverrideDefaultValue; // 0xD84
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostRadius_FieldHandleType; // 0xD8C
		::System::Boolean ESPP_characterGhostRadius_UseIt; // 0xD90
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterGhostRadius; // 0xD98
		::System::Boolean ESPP_characterGhostRadius_EnableFade; // 0xDA0
		::System::Boolean ESPP_characterGhostRadius_EnableOverrideDefaultValue; // 0xDA1
		::System::Single ESPP_characterGhostRadius_OverrideDefaultValue; // 0xDA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostIntensity_FieldHandleType; // 0xDA8
		::System::Boolean ESPP_characterGhostIntensity_UseIt; // 0xDAC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterGhostIntensity; // 0xDB0
		::System::Boolean ESPP_characterGhostIntensity_EnableFade; // 0xDB8
		::System::Boolean ESPP_characterGhostIntensity_EnableOverrideDefaultValue; // 0xDB9
		::System::Single ESPP_characterGhostIntensity_OverrideDefaultValue; // 0xDBC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostSelfMask_FieldHandleType; // 0xDC0
		::System::Boolean ESPP_characterGhostSelfMask; // 0xDC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ghostDepthCulling_FieldHandleType; // 0xDC8
		::System::Boolean ESPP_ghostDepthCulling_UseIt; // 0xDCC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_ghostDepthCulling; // 0xDD0
		::System::Boolean ESPP_ghostDepthCulling_EnableFade; // 0xDD8
		::System::Boolean ESPP_ghostDepthCulling_EnableOverrideDefaultValue; // 0xDD9
		::System::Boolean ESPP_ghostDepthCulling_OverrideDefaultValue; // 0xDDA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useScreenSpaceRadius_FieldHandleType; // 0xDDC
		::System::Boolean ESPP_useScreenSpaceRadius; // 0xDE0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostTargetPosition_FieldHandleType; // 0xDE4
		::System::Boolean ESPP_characterGhostTargetPosition_UseIt; // 0xDE8
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_characterGhostTargetPosition; // 0xDF0
		::System::Boolean ESPP_characterGhostTargetPosition_EnableFade; // 0xDF8
		::System::Boolean ESPP_characterGhostTargetPosition_EnableOverrideDefaultValue; // 0xDF9
		::UnityEngine::Vector3 ESPP_characterGhostTargetPosition_OverrideDefaultValue; // 0xDFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostLayer_FieldHandleType; // 0xE08
		::System::Int32 ESPP_characterGhostLayer; // 0xE0C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1Direction_FieldHandleType; // 0xE10
		::System::Boolean ESPP_layer1Direction_UseIt; // 0xE14
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer1Direction; // 0xE18
		::System::Boolean ESPP_layer1Direction_EnableFade; // 0xE20
		::System::Boolean ESPP_layer1Direction_EnableOverrideDefaultValue; // 0xE21
		::System::Single ESPP_layer1Direction_OverrideDefaultValue; // 0xE24
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1Radius_FieldHandleType; // 0xE28
		::System::Boolean ESPP_layer1Radius_UseIt; // 0xE2C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer1Radius; // 0xE30
		::System::Boolean ESPP_layer1Radius_EnableFade; // 0xE38
		::System::Boolean ESPP_layer1Radius_EnableOverrideDefaultValue; // 0xE39
		::System::Single ESPP_layer1Radius_OverrideDefaultValue; // 0xE3C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1Intensity_FieldHandleType; // 0xE40
		::System::Boolean ESPP_layer1Intensity_UseIt; // 0xE44
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer1Intensity; // 0xE48
		::System::Boolean ESPP_layer1Intensity_EnableFade; // 0xE50
		::System::Boolean ESPP_layer1Intensity_EnableOverrideDefaultValue; // 0xE51
		::System::Single ESPP_layer1Intensity_OverrideDefaultValue; // 0xE54
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer1Color_FieldHandleType; // 0xE58
		::System::Boolean ESPP_layer1Color_UseIt; // 0xE5C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_layer1Color; // 0xE60
		::System::Boolean ESPP_layer1Color_EnableFade; // 0xE68
		::System::Boolean ESPP_layer1Color_EnableOverrideDefaultValue; // 0xE69
		::UnityEngine::Color ESPP_layer1Color_OverrideDefaultValue; // 0xE6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2Direction_FieldHandleType; // 0xE7C
		::System::Boolean ESPP_layer2Direction_UseIt; // 0xE80
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer2Direction; // 0xE88
		::System::Boolean ESPP_layer2Direction_EnableFade; // 0xE90
		::System::Boolean ESPP_layer2Direction_EnableOverrideDefaultValue; // 0xE91
		::System::Single ESPP_layer2Direction_OverrideDefaultValue; // 0xE94
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2Radius_FieldHandleType; // 0xE98
		::System::Boolean ESPP_layer2Radius_UseIt; // 0xE9C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer2Radius; // 0xEA0
		::System::Boolean ESPP_layer2Radius_EnableFade; // 0xEA8
		::System::Boolean ESPP_layer2Radius_EnableOverrideDefaultValue; // 0xEA9
		::System::Single ESPP_layer2Radius_OverrideDefaultValue; // 0xEAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2Intensity_FieldHandleType; // 0xEB0
		::System::Boolean ESPP_layer2Intensity_UseIt; // 0xEB4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer2Intensity; // 0xEB8
		::System::Boolean ESPP_layer2Intensity_EnableFade; // 0xEC0
		::System::Boolean ESPP_layer2Intensity_EnableOverrideDefaultValue; // 0xEC1
		::System::Single ESPP_layer2Intensity_OverrideDefaultValue; // 0xEC4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer2Color_FieldHandleType; // 0xEC8
		::System::Boolean ESPP_layer2Color_UseIt; // 0xECC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_layer2Color; // 0xED0
		::System::Boolean ESPP_layer2Color_EnableFade; // 0xED8
		::System::Boolean ESPP_layer2Color_EnableOverrideDefaultValue; // 0xED9
		::UnityEngine::Color ESPP_layer2Color_OverrideDefaultValue; // 0xEDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3Direction_FieldHandleType; // 0xEEC
		::System::Boolean ESPP_layer3Direction_UseIt; // 0xEF0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer3Direction; // 0xEF8
		::System::Boolean ESPP_layer3Direction_EnableFade; // 0xF00
		::System::Boolean ESPP_layer3Direction_EnableOverrideDefaultValue; // 0xF01
		::System::Single ESPP_layer3Direction_OverrideDefaultValue; // 0xF04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3Radius_FieldHandleType; // 0xF08
		::System::Boolean ESPP_layer3Radius_UseIt; // 0xF0C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer3Radius; // 0xF10
		::System::Boolean ESPP_layer3Radius_EnableFade; // 0xF18
		::System::Boolean ESPP_layer3Radius_EnableOverrideDefaultValue; // 0xF19
		::System::Single ESPP_layer3Radius_OverrideDefaultValue; // 0xF1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3Intensity_FieldHandleType; // 0xF20
		::System::Boolean ESPP_layer3Intensity_UseIt; // 0xF24
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer3Intensity; // 0xF28
		::System::Boolean ESPP_layer3Intensity_EnableFade; // 0xF30
		::System::Boolean ESPP_layer3Intensity_EnableOverrideDefaultValue; // 0xF31
		::System::Single ESPP_layer3Intensity_OverrideDefaultValue; // 0xF34
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer3Color_FieldHandleType; // 0xF38
		::System::Boolean ESPP_layer3Color_UseIt; // 0xF3C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_layer3Color; // 0xF40
		::System::Boolean ESPP_layer3Color_EnableFade; // 0xF48
		::System::Boolean ESPP_layer3Color_EnableOverrideDefaultValue; // 0xF49
		::UnityEngine::Color ESPP_layer3Color_OverrideDefaultValue; // 0xF4C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer4Direction_FieldHandleType; // 0xF5C
		::System::Boolean ESPP_layer4Direction_UseIt; // 0xF60
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer4Direction; // 0xF68
		::System::Boolean ESPP_layer4Direction_EnableFade; // 0xF70
		::System::Boolean ESPP_layer4Direction_EnableOverrideDefaultValue; // 0xF71
		::System::Single ESPP_layer4Direction_OverrideDefaultValue; // 0xF74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer4Radius_FieldHandleType; // 0xF78
		::System::Boolean ESPP_layer4Radius_UseIt; // 0xF7C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer4Radius; // 0xF80
		::System::Boolean ESPP_layer4Radius_EnableFade; // 0xF88
		::System::Boolean ESPP_layer4Radius_EnableOverrideDefaultValue; // 0xF89
		::System::Single ESPP_layer4Radius_OverrideDefaultValue; // 0xF8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer4Intensity_FieldHandleType; // 0xF90
		::System::Boolean ESPP_layer4Intensity_UseIt; // 0xF94
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer4Intensity; // 0xF98
		::System::Boolean ESPP_layer4Intensity_EnableFade; // 0xFA0
		::System::Boolean ESPP_layer4Intensity_EnableOverrideDefaultValue; // 0xFA1
		::System::Single ESPP_layer4Intensity_OverrideDefaultValue; // 0xFA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer4Color_FieldHandleType; // 0xFA8
		::System::Boolean ESPP_layer4Color_UseIt; // 0xFAC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_layer4Color; // 0xFB0
		::System::Boolean ESPP_layer4Color_EnableFade; // 0xFB8
		::System::Boolean ESPP_layer4Color_EnableOverrideDefaultValue; // 0xFB9
		::UnityEngine::Color ESPP_layer4Color_OverrideDefaultValue; // 0xFBC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer5Direction_FieldHandleType; // 0xFCC
		::System::Boolean ESPP_layer5Direction_UseIt; // 0xFD0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer5Direction; // 0xFD8
		::System::Boolean ESPP_layer5Direction_EnableFade; // 0xFE0
		::System::Boolean ESPP_layer5Direction_EnableOverrideDefaultValue; // 0xFE1
		::System::Single ESPP_layer5Direction_OverrideDefaultValue; // 0xFE4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer5Radius_FieldHandleType; // 0xFE8
		::System::Boolean ESPP_layer5Radius_UseIt; // 0xFEC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer5Radius; // 0xFF0
		::System::Boolean ESPP_layer5Radius_EnableFade; // 0xFF8
		::System::Boolean ESPP_layer5Radius_EnableOverrideDefaultValue; // 0xFF9
		::System::Single ESPP_layer5Radius_OverrideDefaultValue; // 0xFFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer5Intensity_FieldHandleType; // 0x1000
		::System::Boolean ESPP_layer5Intensity_UseIt; // 0x1004
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_layer5Intensity; // 0x1008
		::System::Boolean ESPP_layer5Intensity_EnableFade; // 0x1010
		::System::Boolean ESPP_layer5Intensity_EnableOverrideDefaultValue; // 0x1011
		::System::Single ESPP_layer5Intensity_OverrideDefaultValue; // 0x1014
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_layer5Color_FieldHandleType; // 0x1018
		::System::Boolean ESPP_layer5Color_UseIt; // 0x101C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_layer5Color; // 0x1020
		::System::Boolean ESPP_layer5Color_EnableFade; // 0x1028
		::System::Boolean ESPP_layer5Color_EnableOverrideDefaultValue; // 0x1029
		::UnityEngine::Color ESPP_layer5Color_OverrideDefaultValue; // 0x102C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostColor_FieldHandleType; // 0x103C
		::System::Boolean ESPP_characterGhostColor_UseIt; // 0x1040
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_characterGhostColor; // 0x1048
		::System::Boolean ESPP_characterGhostColor_EnableFade; // 0x1050
		::System::Boolean ESPP_characterGhostColor_EnableOverrideDefaultValue; // 0x1051
		::UnityEngine::Color ESPP_characterGhostColor_OverrideDefaultValue; // 0x1054
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostFresnel_FieldHandleType; // 0x1064
		::System::Boolean ESPP_characterGhostFresnel; // 0x1068
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostFresnelPower_FieldHandleType; // 0x106C
		::System::Boolean ESPP_characterGhostFresnelPower_UseIt; // 0x1070
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterGhostFresnelPower; // 0x1078
		::System::Boolean ESPP_characterGhostFresnelPower_EnableFade; // 0x1080
		::System::Boolean ESPP_characterGhostFresnelPower_EnableOverrideDefaultValue; // 0x1081
		::System::Single ESPP_characterGhostFresnelPower_OverrideDefaultValue; // 0x1084
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostSingleColor_FieldHandleType; // 0x1088
		::System::Boolean ESPP_characterGhostSingleColor; // 0x108C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_characterGhostMinIntensity_FieldHandleType; // 0x1090
		::System::Boolean ESPP_characterGhostMinIntensity_UseIt; // 0x1094
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_characterGhostMinIntensity; // 0x1098
		::System::Boolean ESPP_characterGhostMinIntensity_EnableFade; // 0x10A0
		::System::Boolean ESPP_characterGhostMinIntensity_EnableOverrideDefaultValue; // 0x10A1
		::System::Single ESPP_characterGhostMinIntensity_OverrideDefaultValue; // 0x10A4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_D35B60AE823B8CC1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_D35B60AE823B8CC1_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_E46509D2BC81F8FB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_E46509D2BC81F8FB_OFFSET))(this, a1);
		}

		::System::Void Method_5_7A5EE891DA69F667(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_7A5EE891DA69F667_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_39FD7185C859CEAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_39FD7185C859CEAD_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_76ECC59BC7430042_OFFSET))(this, a1);
		}

		::System::Void Method_5_6916CB2AB9451DD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_6916CB2AB9451DD7_OFFSET))(this);
		}

		::System::Void Method_5_17C2BBE3CA88BBC8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_17C2BBE3CA88BBC8_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSSCREENEFFECTS_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}
	};
}
