#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityVREffectsEffects; }
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
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_06A906193DFA2C63_OFFSET UNITYSDK_OFFSET(0x18F95B80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x16031680)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0x18F61A90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16031730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x160318E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x16031390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x160293D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_3AB4010736FA63A8_OFFSET UNITYSDK_OFFSET(0x18F71F40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x16029310)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x16029600)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x16029530)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x160294D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x16031890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x16031870)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x18F606C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_63D56313608AFE32_OFFSET UNITYSDK_OFFSET(0x16026D40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x1602A220)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x18F6D110)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76ECC59BC7430042_1_OFFSET UNITYSDK_OFFSET(0x1602CDB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0x16029650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_7857B385C2B6C0EB_OFFSET UNITYSDK_OFFSET(0x16031370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x16031430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x16031720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x16029410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x16029590)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x16029360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0x16026050)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x160317E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x16029480)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99450342763EB98_OFFSET UNITYSDK_OFFSET(0x18F633D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x160317D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x16031380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x16026C50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x16031880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B747781924F4C9A5_OFFSET UNITYSDK_OFFSET(0x160291F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x160318A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16031690)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18F61A50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D2A9AB4F8BBC1A87_1_OFFSET UNITYSDK_OFFSET(0x1601CD40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D2A9AB4F8BBC1A87_OFFSET UNITYSDK_OFFSET(0x16013A30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x160292C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x16031980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x160318F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x16031420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x16031360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1602D980)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessVREffects_TypeDefinitionIndex = 59129;

	class ESPostProcessVREffects : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::VREffects*>
	{
	public:
		::MoleMole::Config::ConfigEntityVREffectsEffects* m_stAsset; // 0xB0
		::System::Boolean _VolDefault_enable; // 0xB8
		::System::Single _VolDefault_hue; // 0xBC
		::System::Single _VolDefault_saturation; // 0xC0
		::System::Single _VolDefault_brightness; // 0xC4
		::System::Single _VolDefault_contrast; // 0xC8
		::System::Single _VolDefault_contrastMiddlePoint; // 0xCC
		::System::Single _VolDefault_colorTintStart; // 0xD0
		::UnityEngine::Color _VolDefault_colorTintNear; // 0xD4
		::System::Single _VolDefault_colorTintEnd; // 0xE4
		::UnityEngine::Color _VolDefault_colorTintFar; // 0xE8
		::System::Single _VolDefault_scanlineWidth; // 0xF8
		::System::Single _VolDefault_scanlineContrast; // 0xFC
		::System::Single _VolDefault_scanlineDistortion; // 0x100
		::UnityEngine::Rendering::Universal::ScanType _VolDefault_scanType; // 0x104
		::System::Boolean _VolDefault_useCustomScanDirection; // 0x108
		::System::Single _VolDefault_customScanDirection; // 0x10C
		::UnityEngine::Rendering::Universal::ScanMaskType _VolDefault_scanMaskType; // 0x110
		::UnityEngine::Texture* _VolDefault_scanMaskTex; // 0x118
		::UnityEngine::Rendering::Universal::ChannelMapping _VolDefault_scanMaskTexChannel; // 0x120
		::UnityEngine::Vector2 _VolDefault_scanMaskTexTiling; // 0x124
		::UnityEngine::Vector2 _VolDefault_scanMaskTexOffset; // 0x12C
		::UnityEngine::Vector2 _VolDefault_scanMaskTexUVSpeed; // 0x134
		::System::Single _VolDefault_scanMaskBaseY; // 0x13C
		::System::Single _VolDefault_scanMaskYRange; // 0x140
		::System::Boolean _VolDefault_keepInFrontForUberPost; // 0x144
		::System::Single _VolDefault_scanStart0; // 0x148
		::System::Single _VolDefault_scanEnd0; // 0x14C
		::System::Single _VolDefault_scanStart0Soft; // 0x150
		::System::Single _VolDefault_scanEnd0Soft; // 0x154
		::UnityEngine::Color _VolDefault_scanColor0; // 0x158
		::UnityEngine::Color _VolDefault_scanColor0End; // 0x168
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor0Mode; // 0x178
		::System::Single _VolDefault_scanMaskIntensity0; // 0x17C
		::System::Single _VolDefault_scanStart1; // 0x180
		::System::Single _VolDefault_scanEnd1; // 0x184
		::System::Single _VolDefault_scanStart1Soft; // 0x188
		::System::Single _VolDefault_scanEnd1Soft; // 0x18C
		::UnityEngine::Color _VolDefault_scanColor1; // 0x190
		::UnityEngine::Color _VolDefault_scanColor1End; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor1Mode; // 0x1B0
		::System::Single _VolDefault_scanMaskIntensity1; // 0x1B4
		::System::Single _VolDefault_scanStart2; // 0x1B8
		::System::Single _VolDefault_scanEnd2; // 0x1BC
		::System::Single _VolDefault_scanStart2Soft; // 0x1C0
		::System::Single _VolDefault_scanEnd2Soft; // 0x1C4
		::UnityEngine::Color _VolDefault_scanColor2; // 0x1C8
		::UnityEngine::Color _VolDefault_scanColor2End; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor2Mode; // 0x1E8
		::System::Single _VolDefault_scanMaskIntensity2; // 0x1EC
		::System::Single _VolDefault_scanStart3; // 0x1F0
		::System::Single _VolDefault_scanEnd3; // 0x1F4
		::System::Single _VolDefault_scanStart3Soft; // 0x1F8
		::System::Single _VolDefault_scanEnd3Soft; // 0x1FC
		::UnityEngine::Color _VolDefault_scanColor3; // 0x200
		::UnityEngine::Color _VolDefault_scanColor3End; // 0x210
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_scanColor3Mode; // 0x220
		::System::Single _VolDefault_scanMaskIntensity3; // 0x224
		::UnityEngine::Vector2 _VolDefault_uvOffsetR; // 0x228
		::UnityEngine::Color _VolDefault_colorR; // 0x230
		::UnityEngine::Vector2 _VolDefault_uvOffsetG; // 0x240
		::UnityEngine::Color _VolDefault_colorG; // 0x248
		::UnityEngine::Vector2 _VolDefault_uvOffsetB; // 0x258
		::UnityEngine::Color _VolDefault_colorB; // 0x260
		::System::Single _VolDefault_fadeSourceImage; // 0x270
		::System::Single _VolDefault_sliceWidth; // 0x274
		::System::Single _VolDefault_sliceAngle; // 0x278
		::System::Boolean _VolDefault_reverse; // 0x27C
		::System::Single _VolDefault_sliceOffset; // 0x280
		::UnityEngine::Color _VolDefault_sliceColorA; // 0x284
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_sliceColorAMode; // 0x294
		::UnityEngine::Color _VolDefault_sliceColorB; // 0x298
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolDefault_sliceColorBMode; // 0x2A8
		::System::Boolean _VolDefault_gridOn; // 0x2AC
		::System::Single _VolDefault_gridDistance; // 0x2B0
		::System::Boolean _VolDefault_gridBlendScanLine; // 0x2B4
		::UnityEngine::Color _VolDefault_gridColor; // 0x2B8
		::System::Single _VolDefault_gridPower; // 0x2C8
		::System::Single _VolDefault_groundYPos; // 0x2CC
		::System::Single _VolDefault_screenSpaceGridScale; // 0x2D0
		::System::Single _VolDefault_screenSpaceGridWidth; // 0x2D4
		::System::Boolean _VolDefault_outlineOn; // 0x2D8
		::System::Boolean _VolDefault_outlineBlendScanLine; // 0x2D9
		::System::Single _VolDefault_outlineOpacity; // 0x2DC
		::System::Single _VolDefault_outlineDiffOffset; // 0x2E0
		::System::Single _VolDefault_outlineDepthThreshold; // 0x2E4
		::System::Single _VolDefault_outlineNormalThreshold; // 0x2E8
		::System::Single _VolDefault_outlineNormalThresholdScale; // 0x2EC
		::UnityEngine::Color _VolDefault_outlineColor; // 0x2F0
		::System::Boolean _VolDefault_outlineInUberShader; // 0x300
		::System::Boolean _VolDefault_outlineDistortion; // 0x301
		::UnityEngine::Texture* _VolDefault_outlineDistortionTex; // 0x308
		::UnityEngine::Vector2 _VolDefault_outlineDistortionTexTiling; // 0x310
		::UnityEngine::Vector2 _VolDefault_outlineDistortionTexOffset; // 0x318
		::UnityEngine::Vector2 _VolDefault_outlineDistortionUVSpeed; // 0x320
		::UnityEngine::Vector2 _VolDefault_outlineDistortionOffset; // 0x328
		::UnityEngine::Vector2 _VolDefault_outlineDistortionIntensity; // 0x330
		::System::Boolean _VolDefault_textureSheetOn; // 0x338
		::UnityEngine::Texture* _VolDefault_textureSheetTex; // 0x340
		::UnityEngine::Vector2 _VolDefault_textureSheetXY; // 0x348
		::System::Int32 _VolDefault_textureSheetIndex; // 0x350
		::UnityEngine::Color _VolDefault_textureSheetColor; // 0x354
		::System::Single _VolDefault_lensDistortionIntensity; // 0x364
		::System::Single _VolDefault_lensDistortionXMultiplier; // 0x368
		::System::Single _VolDefault_lensDistortionYMultiplier; // 0x36C
		::UnityEngine::Vector2 _VolDefault_lensDistortionCenter; // 0x370
		::System::Single _VolDefault_lensDistortionScale; // 0x378
		::System::Boolean _VolDefault_enableDistanceDistortionColorization; // 0x37C
		::System::Single _VolDefault_distanceColorizationEffect; // 0x380
		::UnityEngine::Texture* _VolDefault_distanceDistortionTexture; // 0x388
		::UnityEngine::Texture* _VolDefault_distanceColorizeTexture; // 0x390
		::System::Single _VolDefault_distanceDistortionStart; // 0x398
		::System::Single _VolDefault_distanceDistortionEnd; // 0x39C
		::System::Single _VolDefault_distanceDistortionFadeRange; // 0x3A0
		::System::Single _VolDefault_distanceDistortionHeightStart; // 0x3A4
		::System::Single _VolDefault_distanceDistortionHeightEnd; // 0x3A8
		::System::Single _VolDefault_distanceDistortionHeightFadeRange; // 0x3AC
		::UnityEngine::Vector3 _VolDefault_distanceDistortionOffsetSpeed; // 0x3B0
		::System::Single _VolDefault_distanceDistortionTiling; // 0x3BC
		::System::Single _VolDefault_distanceDistortionIntensity; // 0x3C0
		::UnityEngine::Vector3 _VolDefault_distanceColorizationOffsetSpeed; // 0x3C4
		::System::Single _VolDefault_distanceColorizationTiling; // 0x3D0
		::UnityEngine::Color _VolDefault_distanceDistortionColor; // 0x3D4
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode _VolDefault_distanceDistortionBlendMode; // 0x3E4
		::System::Boolean _VolDefault_useStencil; // 0x3E8
		::System::Boolean _VolDefault_applyBeforeUberPost; // 0x3E9
		::System::Boolean _VolDefault_screenSpaceGrid; // 0x3EA
		::UnityEngine::Texture* _VolDefault_outlineScreenSpaceMaskTex; // 0x3F0
		::UnityEngine::Vector3 _VolDefault_scanCustomCenterPosition; // 0x3F8
		::UnityEngine::Vector4 _VolDefault_outlineScreenSpaceMaskTexScaleOffset; // 0x404
		::System::Boolean _VolPreVal_enable_overrideState; // 0x414
		::System::Boolean _VolPreVal_enable; // 0x415
		::System::Boolean _VolPreVal_hue_overrideState; // 0x416
		::System::Single _VolPreVal_hue; // 0x418
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x41C
		::System::Single _VolPreVal_saturation; // 0x420
		::System::Boolean _VolPreVal_brightness_overrideState; // 0x424
		::System::Single _VolPreVal_brightness; // 0x428
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x42C
		::System::Single _VolPreVal_contrast; // 0x430
		::System::Boolean _VolPreVal_contrastMiddlePoint_overrideState; // 0x434
		::System::Single _VolPreVal_contrastMiddlePoint; // 0x438
		::System::Boolean _VolPreVal_colorTintStart_overrideState; // 0x43C
		::System::Single _VolPreVal_colorTintStart; // 0x440
		::System::Boolean _VolPreVal_colorTintNear_overrideState; // 0x444
		::UnityEngine::Color _VolPreVal_colorTintNear; // 0x448
		::System::Boolean _VolPreVal_colorTintEnd_overrideState; // 0x458
		::System::Single _VolPreVal_colorTintEnd; // 0x45C
		::System::Boolean _VolPreVal_colorTintFar_overrideState; // 0x460
		::UnityEngine::Color _VolPreVal_colorTintFar; // 0x464
		::System::Boolean _VolPreVal_scanlineWidth_overrideState; // 0x474
		::System::Single _VolPreVal_scanlineWidth; // 0x478
		::System::Boolean _VolPreVal_scanlineContrast_overrideState; // 0x47C
		::System::Single _VolPreVal_scanlineContrast; // 0x480
		::System::Boolean _VolPreVal_scanlineDistortion_overrideState; // 0x484
		::System::Single _VolPreVal_scanlineDistortion; // 0x488
		::System::Boolean _VolPreVal_scanType_overrideState; // 0x48C
		::UnityEngine::Rendering::Universal::ScanType _VolPreVal_scanType; // 0x490
		::System::Boolean _VolPreVal_useCustomScanDirection_overrideState; // 0x494
		::System::Boolean _VolPreVal_useCustomScanDirection; // 0x495
		::System::Boolean _VolPreVal_customScanDirection_overrideState; // 0x496
		::System::Single _VolPreVal_customScanDirection; // 0x498
		::System::Boolean _VolPreVal_scanMaskType_overrideState; // 0x49C
		::UnityEngine::Rendering::Universal::ScanMaskType _VolPreVal_scanMaskType; // 0x4A0
		::System::Boolean _VolPreVal_scanMaskTex_overrideState; // 0x4A4
		::UnityEngine::Texture* _VolPreVal_scanMaskTex; // 0x4A8
		::System::Boolean _VolPreVal_scanMaskTexChannel_overrideState; // 0x4B0
		::UnityEngine::Rendering::Universal::ChannelMapping _VolPreVal_scanMaskTexChannel; // 0x4B4
		::System::Boolean _VolPreVal_scanMaskTexTiling_overrideState; // 0x4B8
		::UnityEngine::Vector2 _VolPreVal_scanMaskTexTiling; // 0x4BC
		::System::Boolean _VolPreVal_scanMaskTexOffset_overrideState; // 0x4C4
		::UnityEngine::Vector2 _VolPreVal_scanMaskTexOffset; // 0x4C8
		::System::Boolean _VolPreVal_scanMaskTexUVSpeed_overrideState; // 0x4D0
		::UnityEngine::Vector2 _VolPreVal_scanMaskTexUVSpeed; // 0x4D4
		::System::Boolean _VolPreVal_scanMaskBaseY_overrideState; // 0x4DC
		::System::Single _VolPreVal_scanMaskBaseY; // 0x4E0
		::System::Boolean _VolPreVal_scanMaskYRange_overrideState; // 0x4E4
		::System::Single _VolPreVal_scanMaskYRange; // 0x4E8
		::System::Boolean _VolPreVal_keepInFrontForUberPost_overrideState; // 0x4EC
		::System::Boolean _VolPreVal_keepInFrontForUberPost; // 0x4ED
		::System::Boolean _VolPreVal_scanStart0_overrideState; // 0x4EE
		::System::Single _VolPreVal_scanStart0; // 0x4F0
		::System::Boolean _VolPreVal_scanEnd0_overrideState; // 0x4F4
		::System::Single _VolPreVal_scanEnd0; // 0x4F8
		::System::Boolean _VolPreVal_scanStart0Soft_overrideState; // 0x4FC
		::System::Single _VolPreVal_scanStart0Soft; // 0x500
		::System::Boolean _VolPreVal_scanEnd0Soft_overrideState; // 0x504
		::System::Single _VolPreVal_scanEnd0Soft; // 0x508
		::System::Boolean _VolPreVal_scanColor0_overrideState; // 0x50C
		::UnityEngine::Color _VolPreVal_scanColor0; // 0x510
		::System::Boolean _VolPreVal_scanColor0End_overrideState; // 0x520
		::UnityEngine::Color _VolPreVal_scanColor0End; // 0x524
		::System::Boolean _VolPreVal_scanColor0Mode_overrideState; // 0x534
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor0Mode; // 0x538
		::System::Boolean _VolPreVal_scanMaskIntensity0_overrideState; // 0x53C
		::System::Single _VolPreVal_scanMaskIntensity0; // 0x540
		::System::Boolean _VolPreVal_scanStart1_overrideState; // 0x544
		::System::Single _VolPreVal_scanStart1; // 0x548
		::System::Boolean _VolPreVal_scanEnd1_overrideState; // 0x54C
		::System::Single _VolPreVal_scanEnd1; // 0x550
		::System::Boolean _VolPreVal_scanStart1Soft_overrideState; // 0x554
		::System::Single _VolPreVal_scanStart1Soft; // 0x558
		::System::Boolean _VolPreVal_scanEnd1Soft_overrideState; // 0x55C
		::System::Single _VolPreVal_scanEnd1Soft; // 0x560
		::System::Boolean _VolPreVal_scanColor1_overrideState; // 0x564
		::UnityEngine::Color _VolPreVal_scanColor1; // 0x568
		::System::Boolean _VolPreVal_scanColor1End_overrideState; // 0x578
		::UnityEngine::Color _VolPreVal_scanColor1End; // 0x57C
		::System::Boolean _VolPreVal_scanColor1Mode_overrideState; // 0x58C
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor1Mode; // 0x590
		::System::Boolean _VolPreVal_scanMaskIntensity1_overrideState; // 0x594
		::System::Single _VolPreVal_scanMaskIntensity1; // 0x598
		::System::Boolean _VolPreVal_scanStart2_overrideState; // 0x59C
		::System::Single _VolPreVal_scanStart2; // 0x5A0
		::System::Boolean _VolPreVal_scanEnd2_overrideState; // 0x5A4
		::System::Single _VolPreVal_scanEnd2; // 0x5A8
		::System::Boolean _VolPreVal_scanStart2Soft_overrideState; // 0x5AC
		::System::Single _VolPreVal_scanStart2Soft; // 0x5B0
		::System::Boolean _VolPreVal_scanEnd2Soft_overrideState; // 0x5B4
		::System::Single _VolPreVal_scanEnd2Soft; // 0x5B8
		::System::Boolean _VolPreVal_scanColor2_overrideState; // 0x5BC
		::UnityEngine::Color _VolPreVal_scanColor2; // 0x5C0
		::System::Boolean _VolPreVal_scanColor2End_overrideState; // 0x5D0
		::UnityEngine::Color _VolPreVal_scanColor2End; // 0x5D4
		::System::Boolean _VolPreVal_scanColor2Mode_overrideState; // 0x5E4
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor2Mode; // 0x5E8
		::System::Boolean _VolPreVal_scanMaskIntensity2_overrideState; // 0x5EC
		::System::Single _VolPreVal_scanMaskIntensity2; // 0x5F0
		::System::Boolean _VolPreVal_scanStart3_overrideState; // 0x5F4
		::System::Single _VolPreVal_scanStart3; // 0x5F8
		::System::Boolean _VolPreVal_scanEnd3_overrideState; // 0x5FC
		::System::Single _VolPreVal_scanEnd3; // 0x600
		::System::Boolean _VolPreVal_scanStart3Soft_overrideState; // 0x604
		::System::Single _VolPreVal_scanStart3Soft; // 0x608
		::System::Boolean _VolPreVal_scanEnd3Soft_overrideState; // 0x60C
		::System::Single _VolPreVal_scanEnd3Soft; // 0x610
		::System::Boolean _VolPreVal_scanColor3_overrideState; // 0x614
		::UnityEngine::Color _VolPreVal_scanColor3; // 0x618
		::System::Boolean _VolPreVal_scanColor3End_overrideState; // 0x628
		::UnityEngine::Color _VolPreVal_scanColor3End; // 0x62C
		::System::Boolean _VolPreVal_scanColor3Mode_overrideState; // 0x63C
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_scanColor3Mode; // 0x640
		::System::Boolean _VolPreVal_scanMaskIntensity3_overrideState; // 0x644
		::System::Single _VolPreVal_scanMaskIntensity3; // 0x648
		::System::Boolean _VolPreVal_uvOffsetR_overrideState; // 0x64C
		::UnityEngine::Vector2 _VolPreVal_uvOffsetR; // 0x650
		::System::Boolean _VolPreVal_colorR_overrideState; // 0x658
		::UnityEngine::Color _VolPreVal_colorR; // 0x65C
		::System::Boolean _VolPreVal_uvOffsetG_overrideState; // 0x66C
		::UnityEngine::Vector2 _VolPreVal_uvOffsetG; // 0x670
		::System::Boolean _VolPreVal_colorG_overrideState; // 0x678
		::UnityEngine::Color _VolPreVal_colorG; // 0x67C
		::System::Boolean _VolPreVal_uvOffsetB_overrideState; // 0x68C
		::UnityEngine::Vector2 _VolPreVal_uvOffsetB; // 0x690
		::System::Boolean _VolPreVal_colorB_overrideState; // 0x698
		::UnityEngine::Color _VolPreVal_colorB; // 0x69C
		::System::Boolean _VolPreVal_fadeSourceImage_overrideState; // 0x6AC
		::System::Single _VolPreVal_fadeSourceImage; // 0x6B0
		::System::Boolean _VolPreVal_sliceWidth_overrideState; // 0x6B4
		::System::Single _VolPreVal_sliceWidth; // 0x6B8
		::System::Boolean _VolPreVal_sliceAngle_overrideState; // 0x6BC
		::System::Single _VolPreVal_sliceAngle; // 0x6C0
		::System::Boolean _VolPreVal_reverse_overrideState; // 0x6C4
		::System::Boolean _VolPreVal_reverse; // 0x6C5
		::System::Boolean _VolPreVal_sliceOffset_overrideState; // 0x6C6
		::System::Single _VolPreVal_sliceOffset; // 0x6C8
		::System::Boolean _VolPreVal_sliceColorA_overrideState; // 0x6CC
		::UnityEngine::Color _VolPreVal_sliceColorA; // 0x6D0
		::System::Boolean _VolPreVal_sliceColorAMode_overrideState; // 0x6E0
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_sliceColorAMode; // 0x6E4
		::System::Boolean _VolPreVal_sliceColorB_overrideState; // 0x6E8
		::UnityEngine::Color _VolPreVal_sliceColorB; // 0x6EC
		::System::Boolean _VolPreVal_sliceColorBMode_overrideState; // 0x6FC
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod _VolPreVal_sliceColorBMode; // 0x700
		::System::Boolean _VolPreVal_gridOn_overrideState; // 0x704
		::System::Boolean _VolPreVal_gridOn; // 0x705
		::System::Boolean _VolPreVal_gridDistance_overrideState; // 0x706
		::System::Single _VolPreVal_gridDistance; // 0x708
		::System::Boolean _VolPreVal_gridBlendScanLine_overrideState; // 0x70C
		::System::Boolean _VolPreVal_gridBlendScanLine; // 0x70D
		::System::Boolean _VolPreVal_gridColor_overrideState; // 0x70E
		::UnityEngine::Color _VolPreVal_gridColor; // 0x710
		::System::Boolean _VolPreVal_gridPower_overrideState; // 0x720
		::System::Single _VolPreVal_gridPower; // 0x724
		::System::Boolean _VolPreVal_groundYPos_overrideState; // 0x728
		::System::Single _VolPreVal_groundYPos; // 0x72C
		::System::Boolean _VolPreVal_screenSpaceGridScale_overrideState; // 0x730
		::System::Single _VolPreVal_screenSpaceGridScale; // 0x734
		::System::Boolean _VolPreVal_screenSpaceGridWidth_overrideState; // 0x738
		::System::Single _VolPreVal_screenSpaceGridWidth; // 0x73C
		::System::Boolean _VolPreVal_outlineOn_overrideState; // 0x740
		::System::Boolean _VolPreVal_outlineOn; // 0x741
		::System::Boolean _VolPreVal_outlineBlendScanLine_overrideState; // 0x742
		::System::Boolean _VolPreVal_outlineBlendScanLine; // 0x743
		::System::Boolean _VolPreVal_outlineOpacity_overrideState; // 0x744
		::System::Single _VolPreVal_outlineOpacity; // 0x748
		::System::Boolean _VolPreVal_outlineDiffOffset_overrideState; // 0x74C
		::System::Single _VolPreVal_outlineDiffOffset; // 0x750
		::System::Boolean _VolPreVal_outlineDepthThreshold_overrideState; // 0x754
		::System::Single _VolPreVal_outlineDepthThreshold; // 0x758
		::System::Boolean _VolPreVal_outlineNormalThreshold_overrideState; // 0x75C
		::System::Single _VolPreVal_outlineNormalThreshold; // 0x760
		::System::Boolean _VolPreVal_outlineNormalThresholdScale_overrideState; // 0x764
		::System::Single _VolPreVal_outlineNormalThresholdScale; // 0x768
		::System::Boolean _VolPreVal_outlineColor_overrideState; // 0x76C
		::UnityEngine::Color _VolPreVal_outlineColor; // 0x770
		::System::Boolean _VolPreVal_outlineInUberShader_overrideState; // 0x780
		::System::Boolean _VolPreVal_outlineInUberShader; // 0x781
		::System::Boolean _VolPreVal_outlineDistortion_overrideState; // 0x782
		::System::Boolean _VolPreVal_outlineDistortion; // 0x783
		::System::Boolean _VolPreVal_outlineDistortionTex_overrideState; // 0x784
		::UnityEngine::Texture* _VolPreVal_outlineDistortionTex; // 0x788
		::System::Boolean _VolPreVal_outlineDistortionTexTiling_overrideState; // 0x790
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionTexTiling; // 0x794
		::System::Boolean _VolPreVal_outlineDistortionTexOffset_overrideState; // 0x79C
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionTexOffset; // 0x7A0
		::System::Boolean _VolPreVal_outlineDistortionUVSpeed_overrideState; // 0x7A8
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionUVSpeed; // 0x7AC
		::System::Boolean _VolPreVal_outlineDistortionOffset_overrideState; // 0x7B4
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionOffset; // 0x7B8
		::System::Boolean _VolPreVal_outlineDistortionIntensity_overrideState; // 0x7C0
		::UnityEngine::Vector2 _VolPreVal_outlineDistortionIntensity; // 0x7C4
		::System::Boolean _VolPreVal_textureSheetOn_overrideState; // 0x7CC
		::System::Boolean _VolPreVal_textureSheetOn; // 0x7CD
		::System::Boolean _VolPreVal_textureSheetTex_overrideState; // 0x7CE
		::UnityEngine::Texture* _VolPreVal_textureSheetTex; // 0x7D0
		::System::Boolean _VolPreVal_textureSheetXY_overrideState; // 0x7D8
		::UnityEngine::Vector2 _VolPreVal_textureSheetXY; // 0x7DC
		::System::Boolean _VolPreVal_textureSheetIndex_overrideState; // 0x7E4
		::System::Int32 _VolPreVal_textureSheetIndex; // 0x7E8
		::System::Boolean _VolPreVal_textureSheetColor_overrideState; // 0x7EC
		::UnityEngine::Color _VolPreVal_textureSheetColor; // 0x7F0
		::System::Boolean _VolPreVal_lensDistortionIntensity_overrideState; // 0x800
		::System::Single _VolPreVal_lensDistortionIntensity; // 0x804
		::System::Boolean _VolPreVal_lensDistortionXMultiplier_overrideState; // 0x808
		::System::Single _VolPreVal_lensDistortionXMultiplier; // 0x80C
		::System::Boolean _VolPreVal_lensDistortionYMultiplier_overrideState; // 0x810
		::System::Single _VolPreVal_lensDistortionYMultiplier; // 0x814
		::System::Boolean _VolPreVal_lensDistortionCenter_overrideState; // 0x818
		::UnityEngine::Vector2 _VolPreVal_lensDistortionCenter; // 0x81C
		::System::Boolean _VolPreVal_lensDistortionScale_overrideState; // 0x824
		::System::Single _VolPreVal_lensDistortionScale; // 0x828
		::System::Boolean _VolPreVal_enableDistanceDistortionColorization_overrideState; // 0x82C
		::System::Boolean _VolPreVal_enableDistanceDistortionColorization; // 0x82D
		::System::Boolean _VolPreVal_distanceColorizationEffect_overrideState; // 0x82E
		::System::Single _VolPreVal_distanceColorizationEffect; // 0x830
		::System::Boolean _VolPreVal_distanceDistortionTexture_overrideState; // 0x834
		::UnityEngine::Texture* _VolPreVal_distanceDistortionTexture; // 0x838
		::System::Boolean _VolPreVal_distanceColorizeTexture_overrideState; // 0x840
		::UnityEngine::Texture* _VolPreVal_distanceColorizeTexture; // 0x848
		::System::Boolean _VolPreVal_distanceDistortionStart_overrideState; // 0x850
		::System::Single _VolPreVal_distanceDistortionStart; // 0x854
		::System::Boolean _VolPreVal_distanceDistortionEnd_overrideState; // 0x858
		::System::Single _VolPreVal_distanceDistortionEnd; // 0x85C
		::System::Boolean _VolPreVal_distanceDistortionFadeRange_overrideState; // 0x860
		::System::Single _VolPreVal_distanceDistortionFadeRange; // 0x864
		::System::Boolean _VolPreVal_distanceDistortionHeightStart_overrideState; // 0x868
		::System::Single _VolPreVal_distanceDistortionHeightStart; // 0x86C
		::System::Boolean _VolPreVal_distanceDistortionHeightEnd_overrideState; // 0x870
		::System::Single _VolPreVal_distanceDistortionHeightEnd; // 0x874
		::System::Boolean _VolPreVal_distanceDistortionHeightFadeRange_overrideState; // 0x878
		::System::Single _VolPreVal_distanceDistortionHeightFadeRange; // 0x87C
		::System::Boolean _VolPreVal_distanceDistortionOffsetSpeed_overrideState; // 0x880
		::UnityEngine::Vector3 _VolPreVal_distanceDistortionOffsetSpeed; // 0x884
		::System::Boolean _VolPreVal_distanceDistortionTiling_overrideState; // 0x890
		::System::Single _VolPreVal_distanceDistortionTiling; // 0x894
		::System::Boolean _VolPreVal_distanceDistortionIntensity_overrideState; // 0x898
		::System::Single _VolPreVal_distanceDistortionIntensity; // 0x89C
		::System::Boolean _VolPreVal_distanceColorizationOffsetSpeed_overrideState; // 0x8A0
		::UnityEngine::Vector3 _VolPreVal_distanceColorizationOffsetSpeed; // 0x8A4
		::System::Boolean _VolPreVal_distanceColorizationTiling_overrideState; // 0x8B0
		::System::Single _VolPreVal_distanceColorizationTiling; // 0x8B4
		::System::Boolean _VolPreVal_distanceDistortionColor_overrideState; // 0x8B8
		::UnityEngine::Color _VolPreVal_distanceDistortionColor; // 0x8BC
		::System::Boolean _VolPreVal_distanceDistortionBlendMode_overrideState; // 0x8CC
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode _VolPreVal_distanceDistortionBlendMode; // 0x8D0
		::System::Boolean _VolPreVal_useStencil_overrideState; // 0x8D4
		::System::Boolean _VolPreVal_useStencil; // 0x8D5
		::System::Boolean _VolPreVal_applyBeforeUberPost_overrideState; // 0x8D6
		::System::Boolean _VolPreVal_applyBeforeUberPost; // 0x8D7
		::System::Boolean _VolPreVal_screenSpaceGrid_overrideState; // 0x8D8
		::System::Boolean _VolPreVal_screenSpaceGrid; // 0x8D9
		::System::Boolean _VolPreVal_outlineScreenSpaceMaskTex_overrideState; // 0x8DA
		::UnityEngine::Texture* _VolPreVal_outlineScreenSpaceMaskTex; // 0x8E0
		::System::Boolean _VolPreVal_scanCustomCenterPosition_overrideState; // 0x8E8
		::UnityEngine::Vector3 _VolPreVal_scanCustomCenterPosition; // 0x8EC
		::System::Boolean _VolPreVal_outlineScreenSpaceMaskTexScaleOffset_overrideState; // 0x8F8
		::UnityEngine::Vector4 _VolPreVal_outlineScreenSpaceMaskTexScaleOffset; // 0x8FC
		::System::Single _TimelineCurveFirstVal_hue; // 0x90C
		::System::Single _TimelineCurveLastVal_hue; // 0x910
		::System::Single _TimelineCurveFirstVal_saturation; // 0x914
		::System::Single _TimelineCurveLastVal_saturation; // 0x918
		::System::Single _TimelineCurveFirstVal_brightness; // 0x91C
		::System::Single _TimelineCurveLastVal_brightness; // 0x920
		::System::Single _TimelineCurveFirstVal_contrast; // 0x924
		::System::Single _TimelineCurveLastVal_contrast; // 0x928
		::System::Single _TimelineCurveFirstVal_contrastMiddlePoint; // 0x92C
		::System::Single _TimelineCurveLastVal_contrastMiddlePoint; // 0x930
		::System::Single _TimelineCurveFirstVal_colorTintStart; // 0x934
		::System::Single _TimelineCurveLastVal_colorTintStart; // 0x938
		::UnityEngine::Color _TimelineCurveFirstVal_colorTintNear; // 0x93C
		::UnityEngine::Color _TimelineCurveLastVal_colorTintNear; // 0x94C
		::System::Single _TimelineCurveFirstVal_colorTintEnd; // 0x95C
		::System::Single _TimelineCurveLastVal_colorTintEnd; // 0x960
		::UnityEngine::Color _TimelineCurveFirstVal_colorTintFar; // 0x964
		::UnityEngine::Color _TimelineCurveLastVal_colorTintFar; // 0x974
		::System::Single _TimelineCurveFirstVal_scanlineContrast; // 0x984
		::System::Single _TimelineCurveLastVal_scanlineContrast; // 0x988
		::System::Single _TimelineCurveFirstVal_scanlineDistortion; // 0x98C
		::System::Single _TimelineCurveLastVal_scanlineDistortion; // 0x990
		::System::Boolean _TimelineCurveFirstVal_useCustomScanDirection; // 0x994
		::System::Boolean _TimelineCurveLastVal_useCustomScanDirection; // 0x995
		::System::Single _TimelineCurveFirstVal_customScanDirection; // 0x998
		::System::Single _TimelineCurveLastVal_customScanDirection; // 0x99C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_scanMaskTexTiling; // 0x9A0
		::UnityEngine::Vector2 _TimelineCurveLastVal_scanMaskTexTiling; // 0x9A8
		::UnityEngine::Vector2 _TimelineCurveFirstVal_scanMaskTexOffset; // 0x9B0
		::UnityEngine::Vector2 _TimelineCurveLastVal_scanMaskTexOffset; // 0x9B8
		::UnityEngine::Vector2 _TimelineCurveFirstVal_scanMaskTexUVSpeed; // 0x9C0
		::UnityEngine::Vector2 _TimelineCurveLastVal_scanMaskTexUVSpeed; // 0x9C8
		::System::Single _TimelineCurveFirstVal_scanMaskBaseY; // 0x9D0
		::System::Single _TimelineCurveLastVal_scanMaskBaseY; // 0x9D4
		::System::Single _TimelineCurveFirstVal_scanMaskYRange; // 0x9D8
		::System::Single _TimelineCurveLastVal_scanMaskYRange; // 0x9DC
		::System::Boolean _TimelineCurveFirstVal_keepInFrontForUberPost; // 0x9E0
		::System::Boolean _TimelineCurveLastVal_keepInFrontForUberPost; // 0x9E1
		::System::Single _TimelineCurveFirstVal_scanStart0; // 0x9E4
		::System::Single _TimelineCurveLastVal_scanStart0; // 0x9E8
		::System::Single _TimelineCurveFirstVal_scanEnd0; // 0x9EC
		::System::Single _TimelineCurveLastVal_scanEnd0; // 0x9F0
		::System::Single _TimelineCurveFirstVal_scanStart0Soft; // 0x9F4
		::System::Single _TimelineCurveLastVal_scanStart0Soft; // 0x9F8
		::System::Single _TimelineCurveFirstVal_scanEnd0Soft; // 0x9FC
		::System::Single _TimelineCurveLastVal_scanEnd0Soft; // 0xA00
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor0; // 0xA04
		::UnityEngine::Color _TimelineCurveLastVal_scanColor0; // 0xA14
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor0End; // 0xA24
		::UnityEngine::Color _TimelineCurveLastVal_scanColor0End; // 0xA34
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity0; // 0xA44
		::System::Single _TimelineCurveLastVal_scanMaskIntensity0; // 0xA48
		::System::Single _TimelineCurveFirstVal_scanStart1; // 0xA4C
		::System::Single _TimelineCurveLastVal_scanStart1; // 0xA50
		::System::Single _TimelineCurveFirstVal_scanEnd1; // 0xA54
		::System::Single _TimelineCurveLastVal_scanEnd1; // 0xA58
		::System::Single _TimelineCurveFirstVal_scanStart1Soft; // 0xA5C
		::System::Single _TimelineCurveLastVal_scanStart1Soft; // 0xA60
		::System::Single _TimelineCurveFirstVal_scanEnd1Soft; // 0xA64
		::System::Single _TimelineCurveLastVal_scanEnd1Soft; // 0xA68
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor1; // 0xA6C
		::UnityEngine::Color _TimelineCurveLastVal_scanColor1; // 0xA7C
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor1End; // 0xA8C
		::UnityEngine::Color _TimelineCurveLastVal_scanColor1End; // 0xA9C
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity1; // 0xAAC
		::System::Single _TimelineCurveLastVal_scanMaskIntensity1; // 0xAB0
		::System::Single _TimelineCurveFirstVal_scanStart2; // 0xAB4
		::System::Single _TimelineCurveLastVal_scanStart2; // 0xAB8
		::System::Single _TimelineCurveFirstVal_scanEnd2; // 0xABC
		::System::Single _TimelineCurveLastVal_scanEnd2; // 0xAC0
		::System::Single _TimelineCurveFirstVal_scanStart2Soft; // 0xAC4
		::System::Single _TimelineCurveLastVal_scanStart2Soft; // 0xAC8
		::System::Single _TimelineCurveFirstVal_scanEnd2Soft; // 0xACC
		::System::Single _TimelineCurveLastVal_scanEnd2Soft; // 0xAD0
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor2; // 0xAD4
		::UnityEngine::Color _TimelineCurveLastVal_scanColor2; // 0xAE4
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor2End; // 0xAF4
		::UnityEngine::Color _TimelineCurveLastVal_scanColor2End; // 0xB04
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity2; // 0xB14
		::System::Single _TimelineCurveLastVal_scanMaskIntensity2; // 0xB18
		::System::Single _TimelineCurveFirstVal_scanStart3; // 0xB1C
		::System::Single _TimelineCurveLastVal_scanStart3; // 0xB20
		::System::Single _TimelineCurveFirstVal_scanEnd3; // 0xB24
		::System::Single _TimelineCurveLastVal_scanEnd3; // 0xB28
		::System::Single _TimelineCurveFirstVal_scanStart3Soft; // 0xB2C
		::System::Single _TimelineCurveLastVal_scanStart3Soft; // 0xB30
		::System::Single _TimelineCurveFirstVal_scanEnd3Soft; // 0xB34
		::System::Single _TimelineCurveLastVal_scanEnd3Soft; // 0xB38
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor3; // 0xB3C
		::UnityEngine::Color _TimelineCurveLastVal_scanColor3; // 0xB4C
		::UnityEngine::Color _TimelineCurveFirstVal_scanColor3End; // 0xB5C
		::UnityEngine::Color _TimelineCurveLastVal_scanColor3End; // 0xB6C
		::System::Single _TimelineCurveFirstVal_scanMaskIntensity3; // 0xB7C
		::System::Single _TimelineCurveLastVal_scanMaskIntensity3; // 0xB80
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvOffsetR; // 0xB84
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvOffsetR; // 0xB8C
		::UnityEngine::Color _TimelineCurveFirstVal_colorR; // 0xB94
		::UnityEngine::Color _TimelineCurveLastVal_colorR; // 0xBA4
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvOffsetG; // 0xBB4
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvOffsetG; // 0xBBC
		::UnityEngine::Color _TimelineCurveFirstVal_colorG; // 0xBC4
		::UnityEngine::Color _TimelineCurveLastVal_colorG; // 0xBD4
		::UnityEngine::Vector2 _TimelineCurveFirstVal_uvOffsetB; // 0xBE4
		::UnityEngine::Vector2 _TimelineCurveLastVal_uvOffsetB; // 0xBEC
		::UnityEngine::Color _TimelineCurveFirstVal_colorB; // 0xBF4
		::UnityEngine::Color _TimelineCurveLastVal_colorB; // 0xC04
		::System::Single _TimelineCurveFirstVal_fadeSourceImage; // 0xC14
		::System::Single _TimelineCurveLastVal_fadeSourceImage; // 0xC18
		::System::Single _TimelineCurveFirstVal_sliceWidth; // 0xC1C
		::System::Single _TimelineCurveLastVal_sliceWidth; // 0xC20
		::System::Single _TimelineCurveFirstVal_sliceAngle; // 0xC24
		::System::Single _TimelineCurveLastVal_sliceAngle; // 0xC28
		::System::Boolean _TimelineCurveFirstVal_reverse; // 0xC2C
		::System::Boolean _TimelineCurveLastVal_reverse; // 0xC2D
		::System::Single _TimelineCurveFirstVal_sliceOffset; // 0xC30
		::System::Single _TimelineCurveLastVal_sliceOffset; // 0xC34
		::UnityEngine::Color _TimelineCurveFirstVal_sliceColorA; // 0xC38
		::UnityEngine::Color _TimelineCurveLastVal_sliceColorA; // 0xC48
		::UnityEngine::Color _TimelineCurveFirstVal_sliceColorB; // 0xC58
		::UnityEngine::Color _TimelineCurveLastVal_sliceColorB; // 0xC68
		::System::Boolean _TimelineCurveFirstVal_gridOn; // 0xC78
		::System::Boolean _TimelineCurveLastVal_gridOn; // 0xC79
		::UnityEngine::Color _TimelineCurveFirstVal_gridColor; // 0xC7C
		::UnityEngine::Color _TimelineCurveLastVal_gridColor; // 0xC8C
		::System::Single _TimelineCurveFirstVal_groundYPos; // 0xC9C
		::System::Single _TimelineCurveLastVal_groundYPos; // 0xCA0
		::System::Single _TimelineCurveFirstVal_screenSpaceGridScale; // 0xCA4
		::System::Single _TimelineCurveLastVal_screenSpaceGridScale; // 0xCA8
		::System::Single _TimelineCurveFirstVal_screenSpaceGridWidth; // 0xCAC
		::System::Single _TimelineCurveLastVal_screenSpaceGridWidth; // 0xCB0
		::System::Boolean _TimelineCurveFirstVal_outlineOn; // 0xCB4
		::System::Boolean _TimelineCurveLastVal_outlineOn; // 0xCB5
		::System::Single _TimelineCurveFirstVal_outlineOpacity; // 0xCB8
		::System::Single _TimelineCurveLastVal_outlineOpacity; // 0xCBC
		::UnityEngine::Color _TimelineCurveFirstVal_outlineColor; // 0xCC0
		::UnityEngine::Color _TimelineCurveLastVal_outlineColor; // 0xCD0
		::System::Boolean _TimelineCurveFirstVal_outlineInUberShader; // 0xCE0
		::System::Boolean _TimelineCurveLastVal_outlineInUberShader; // 0xCE1
		::System::Boolean _TimelineCurveFirstVal_outlineDistortion; // 0xCE2
		::System::Boolean _TimelineCurveLastVal_outlineDistortion; // 0xCE3
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionTexTiling; // 0xCE4
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionTexTiling; // 0xCEC
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionTexOffset; // 0xCF4
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionTexOffset; // 0xCFC
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionUVSpeed; // 0xD04
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionUVSpeed; // 0xD0C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionOffset; // 0xD14
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionOffset; // 0xD1C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_outlineDistortionIntensity; // 0xD24
		::UnityEngine::Vector2 _TimelineCurveLastVal_outlineDistortionIntensity; // 0xD2C
		::System::Int32 _TimelineCurveFirstVal_textureSheetIndex; // 0xD34
		::System::Int32 _TimelineCurveLastVal_textureSheetIndex; // 0xD38
		::UnityEngine::Color _TimelineCurveFirstVal_textureSheetColor; // 0xD3C
		::UnityEngine::Color _TimelineCurveLastVal_textureSheetColor; // 0xD4C
		::System::Single _TimelineCurveFirstVal_lensDistortionIntensity; // 0xD5C
		::System::Single _TimelineCurveLastVal_lensDistortionIntensity; // 0xD60
		::System::Single _TimelineCurveFirstVal_lensDistortionXMultiplier; // 0xD64
		::System::Single _TimelineCurveLastVal_lensDistortionXMultiplier; // 0xD68
		::System::Single _TimelineCurveFirstVal_lensDistortionYMultiplier; // 0xD6C
		::System::Single _TimelineCurveLastVal_lensDistortionYMultiplier; // 0xD70
		::UnityEngine::Vector2 _TimelineCurveFirstVal_lensDistortionCenter; // 0xD74
		::UnityEngine::Vector2 _TimelineCurveLastVal_lensDistortionCenter; // 0xD7C
		::System::Single _TimelineCurveFirstVal_lensDistortionScale; // 0xD84
		::System::Single _TimelineCurveLastVal_lensDistortionScale; // 0xD88
		::System::Boolean _TimelineCurveFirstVal_enableDistanceDistortionColorization; // 0xD8C
		::System::Boolean _TimelineCurveLastVal_enableDistanceDistortionColorization; // 0xD8D
		::System::Single _TimelineCurveFirstVal_distanceColorizationEffect; // 0xD90
		::System::Single _TimelineCurveLastVal_distanceColorizationEffect; // 0xD94
		::System::Single _TimelineCurveFirstVal_distanceDistortionStart; // 0xD98
		::System::Single _TimelineCurveLastVal_distanceDistortionStart; // 0xD9C
		::System::Single _TimelineCurveFirstVal_distanceDistortionEnd; // 0xDA0
		::System::Single _TimelineCurveLastVal_distanceDistortionEnd; // 0xDA4
		::System::Single _TimelineCurveFirstVal_distanceDistortionFadeRange; // 0xDA8
		::System::Single _TimelineCurveLastVal_distanceDistortionFadeRange; // 0xDAC
		::System::Single _TimelineCurveFirstVal_distanceDistortionHeightStart; // 0xDB0
		::System::Single _TimelineCurveLastVal_distanceDistortionHeightStart; // 0xDB4
		::System::Single _TimelineCurveFirstVal_distanceDistortionHeightEnd; // 0xDB8
		::System::Single _TimelineCurveLastVal_distanceDistortionHeightEnd; // 0xDBC
		::System::Single _TimelineCurveFirstVal_distanceDistortionHeightFadeRange; // 0xDC0
		::System::Single _TimelineCurveLastVal_distanceDistortionHeightFadeRange; // 0xDC4
		::UnityEngine::Vector3 _TimelineCurveFirstVal_distanceDistortionOffsetSpeed; // 0xDC8
		::UnityEngine::Vector3 _TimelineCurveLastVal_distanceDistortionOffsetSpeed; // 0xDD4
		::System::Single _TimelineCurveFirstVal_distanceDistortionTiling; // 0xDE0
		::System::Single _TimelineCurveLastVal_distanceDistortionTiling; // 0xDE4
		::System::Single _TimelineCurveFirstVal_distanceDistortionIntensity; // 0xDE8
		::System::Single _TimelineCurveLastVal_distanceDistortionIntensity; // 0xDEC
		::UnityEngine::Vector3 _TimelineCurveFirstVal_distanceColorizationOffsetSpeed; // 0xDF0
		::UnityEngine::Vector3 _TimelineCurveLastVal_distanceColorizationOffsetSpeed; // 0xDFC
		::System::Single _TimelineCurveFirstVal_distanceColorizationTiling; // 0xE08
		::System::Single _TimelineCurveLastVal_distanceColorizationTiling; // 0xE0C
		::UnityEngine::Color _TimelineCurveFirstVal_distanceDistortionColor; // 0xE10
		::UnityEngine::Color _TimelineCurveLastVal_distanceDistortionColor; // 0xE20
		::System::Boolean _TimelineCurveFirstVal_useStencil; // 0xE30
		::System::Boolean _TimelineCurveLastVal_useStencil; // 0xE31
		::System::Boolean _TimelineCurveFirstVal_applyBeforeUberPost; // 0xE32
		::System::Boolean _TimelineCurveLastVal_applyBeforeUberPost; // 0xE33
		::System::Boolean _TimelineCurveFirstVal_screenSpaceGrid; // 0xE34
		::System::Boolean _TimelineCurveLastVal_screenSpaceGrid; // 0xE35
		::UnityEngine::Vector3 _TimelineCurveFirstVal_scanCustomCenterPosition; // 0xE38
		::UnityEngine::Vector3 _TimelineCurveLastVal_scanCustomCenterPosition; // 0xE44
		::UnityEngine::Vector4 _TimelineCurveFirstVal_outlineScreenSpaceMaskTexScaleOffset; // 0xE50
		::UnityEngine::Vector4 _TimelineCurveLastVal_outlineScreenSpaceMaskTexScaleOffset; // 0xE60
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enable_FieldHandleType; // 0xE70
		::System::Boolean ESPP_enable; // 0xE74
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hue_FieldHandleType; // 0xE78
		::System::Boolean ESPP_hue_UseIt; // 0xE7C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hue; // 0xE80
		::System::Boolean ESPP_hue_EnableFade; // 0xE88
		::System::Boolean ESPP_hue_EnableOverrideDefaultValue; // 0xE89
		::System::Single ESPP_hue_OverrideDefaultValue; // 0xE8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0xE90
		::System::Boolean ESPP_saturation_UseIt; // 0xE94
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0xE98
		::System::Boolean ESPP_saturation_EnableFade; // 0xEA0
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0xEA1
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0xEA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_brightness_FieldHandleType; // 0xEA8
		::System::Boolean ESPP_brightness_UseIt; // 0xEAC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_brightness; // 0xEB0
		::System::Boolean ESPP_brightness_EnableFade; // 0xEB8
		::System::Boolean ESPP_brightness_EnableOverrideDefaultValue; // 0xEB9
		::System::Single ESPP_brightness_OverrideDefaultValue; // 0xEBC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0xEC0
		::System::Boolean ESPP_contrast_UseIt; // 0xEC4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0xEC8
		::System::Boolean ESPP_contrast_EnableFade; // 0xED0
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0xED1
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0xED4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrastMiddlePoint_FieldHandleType; // 0xED8
		::System::Boolean ESPP_contrastMiddlePoint_UseIt; // 0xEDC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrastMiddlePoint; // 0xEE0
		::System::Boolean ESPP_contrastMiddlePoint_EnableFade; // 0xEE8
		::System::Boolean ESPP_contrastMiddlePoint_EnableOverrideDefaultValue; // 0xEE9
		::System::Single ESPP_contrastMiddlePoint_OverrideDefaultValue; // 0xEEC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintStart_FieldHandleType; // 0xEF0
		::System::Boolean ESPP_colorTintStart_UseIt; // 0xEF4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_colorTintStart; // 0xEF8
		::System::Boolean ESPP_colorTintStart_EnableFade; // 0xF00
		::System::Boolean ESPP_colorTintStart_EnableOverrideDefaultValue; // 0xF01
		::System::Single ESPP_colorTintStart_OverrideDefaultValue; // 0xF04
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintNear_FieldHandleType; // 0xF08
		::System::Boolean ESPP_colorTintNear_UseIt; // 0xF0C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorTintNear; // 0xF10
		::System::Boolean ESPP_colorTintNear_EnableFade; // 0xF18
		::System::Boolean ESPP_colorTintNear_EnableOverrideDefaultValue; // 0xF19
		::UnityEngine::Color ESPP_colorTintNear_OverrideDefaultValue; // 0xF1C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintEnd_FieldHandleType; // 0xF2C
		::System::Boolean ESPP_colorTintEnd_UseIt; // 0xF30
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_colorTintEnd; // 0xF38
		::System::Boolean ESPP_colorTintEnd_EnableFade; // 0xF40
		::System::Boolean ESPP_colorTintEnd_EnableOverrideDefaultValue; // 0xF41
		::System::Single ESPP_colorTintEnd_OverrideDefaultValue; // 0xF44
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorTintFar_FieldHandleType; // 0xF48
		::System::Boolean ESPP_colorTintFar_UseIt; // 0xF4C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorTintFar; // 0xF50
		::System::Boolean ESPP_colorTintFar_EnableFade; // 0xF58
		::System::Boolean ESPP_colorTintFar_EnableOverrideDefaultValue; // 0xF59
		::UnityEngine::Color ESPP_colorTintFar_OverrideDefaultValue; // 0xF5C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineWidth_FieldHandleType; // 0xF6C
		::System::Single ESPP_scanlineWidth; // 0xF70
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineContrast_FieldHandleType; // 0xF74
		::System::Boolean ESPP_scanlineContrast_UseIt; // 0xF78
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanlineContrast; // 0xF80
		::System::Boolean ESPP_scanlineContrast_EnableFade; // 0xF88
		::System::Boolean ESPP_scanlineContrast_EnableOverrideDefaultValue; // 0xF89
		::System::Single ESPP_scanlineContrast_OverrideDefaultValue; // 0xF8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanlineDistortion_FieldHandleType; // 0xF90
		::System::Boolean ESPP_scanlineDistortion_UseIt; // 0xF94
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanlineDistortion; // 0xF98
		::System::Boolean ESPP_scanlineDistortion_EnableFade; // 0xFA0
		::System::Boolean ESPP_scanlineDistortion_EnableOverrideDefaultValue; // 0xFA1
		::System::Single ESPP_scanlineDistortion_OverrideDefaultValue; // 0xFA4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanType_FieldHandleType; // 0xFA8
		::UnityEngine::Rendering::Universal::ScanType ESPP_scanType; // 0xFAC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useCustomScanDirection_FieldHandleType; // 0xFB0
		::System::Boolean ESPP_useCustomScanDirection_UseIt; // 0xFB4
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useCustomScanDirection; // 0xFB8
		::System::Boolean ESPP_useCustomScanDirection_EnableFade; // 0xFC0
		::System::Boolean ESPP_useCustomScanDirection_EnableOverrideDefaultValue; // 0xFC1
		::System::Boolean ESPP_useCustomScanDirection_OverrideDefaultValue; // 0xFC2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_customScanDirection_FieldHandleType; // 0xFC4
		::System::Boolean ESPP_customScanDirection_UseIt; // 0xFC8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_customScanDirection; // 0xFD0
		::System::Boolean ESPP_customScanDirection_EnableFade; // 0xFD8
		::System::Boolean ESPP_customScanDirection_EnableOverrideDefaultValue; // 0xFD9
		::System::Single ESPP_customScanDirection_OverrideDefaultValue; // 0xFDC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskType_FieldHandleType; // 0xFE0
		::UnityEngine::Rendering::Universal::ScanMaskType ESPP_scanMaskType; // 0xFE4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTex_FieldHandleType; // 0xFE8
		::UnityEngine::Texture* ESPP_scanMaskTex; // 0xFF0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexChannel_FieldHandleType; // 0xFF8
		::UnityEngine::Rendering::Universal::ChannelMapping ESPP_scanMaskTexChannel; // 0xFFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexTiling_FieldHandleType; // 0x1000
		::System::Boolean ESPP_scanMaskTexTiling_UseIt; // 0x1004
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_scanMaskTexTiling; // 0x1008
		::System::Boolean ESPP_scanMaskTexTiling_EnableFade; // 0x1010
		::System::Boolean ESPP_scanMaskTexTiling_EnableOverrideDefaultValue; // 0x1011
		::UnityEngine::Vector2 ESPP_scanMaskTexTiling_OverrideDefaultValue; // 0x1014
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexOffset_FieldHandleType; // 0x101C
		::System::Boolean ESPP_scanMaskTexOffset_UseIt; // 0x1020
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_scanMaskTexOffset; // 0x1028
		::System::Boolean ESPP_scanMaskTexOffset_EnableFade; // 0x1030
		::System::Boolean ESPP_scanMaskTexOffset_EnableOverrideDefaultValue; // 0x1031
		::UnityEngine::Vector2 ESPP_scanMaskTexOffset_OverrideDefaultValue; // 0x1034
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskTexUVSpeed_FieldHandleType; // 0x103C
		::System::Boolean ESPP_scanMaskTexUVSpeed_UseIt; // 0x1040
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_scanMaskTexUVSpeed; // 0x1048
		::System::Boolean ESPP_scanMaskTexUVSpeed_EnableFade; // 0x1050
		::System::Boolean ESPP_scanMaskTexUVSpeed_EnableOverrideDefaultValue; // 0x1051
		::UnityEngine::Vector2 ESPP_scanMaskTexUVSpeed_OverrideDefaultValue; // 0x1054
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskBaseY_FieldHandleType; // 0x105C
		::System::Boolean ESPP_scanMaskBaseY_UseIt; // 0x1060
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskBaseY; // 0x1068
		::System::Boolean ESPP_scanMaskBaseY_EnableFade; // 0x1070
		::System::Boolean ESPP_scanMaskBaseY_EnableOverrideDefaultValue; // 0x1071
		::System::Single ESPP_scanMaskBaseY_OverrideDefaultValue; // 0x1074
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskYRange_FieldHandleType; // 0x1078
		::System::Boolean ESPP_scanMaskYRange_UseIt; // 0x107C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskYRange; // 0x1080
		::System::Boolean ESPP_scanMaskYRange_EnableFade; // 0x1088
		::System::Boolean ESPP_scanMaskYRange_EnableOverrideDefaultValue; // 0x1089
		::System::Single ESPP_scanMaskYRange_OverrideDefaultValue; // 0x108C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_keepInFrontForUberPost_FieldHandleType; // 0x1090
		::System::Boolean ESPP_keepInFrontForUberPost_UseIt; // 0x1094
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_keepInFrontForUberPost; // 0x1098
		::System::Boolean ESPP_keepInFrontForUberPost_EnableFade; // 0x10A0
		::System::Boolean ESPP_keepInFrontForUberPost_EnableOverrideDefaultValue; // 0x10A1
		::System::Boolean ESPP_keepInFrontForUberPost_OverrideDefaultValue; // 0x10A2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart0_FieldHandleType; // 0x10A4
		::System::Boolean ESPP_scanStart0_UseIt; // 0x10A8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart0; // 0x10B0
		::System::Boolean ESPP_scanStart0_EnableFade; // 0x10B8
		::System::Boolean ESPP_scanStart0_EnableOverrideDefaultValue; // 0x10B9
		::System::Single ESPP_scanStart0_OverrideDefaultValue; // 0x10BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd0_FieldHandleType; // 0x10C0
		::System::Boolean ESPP_scanEnd0_UseIt; // 0x10C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd0; // 0x10C8
		::System::Boolean ESPP_scanEnd0_EnableFade; // 0x10D0
		::System::Boolean ESPP_scanEnd0_EnableOverrideDefaultValue; // 0x10D1
		::System::Single ESPP_scanEnd0_OverrideDefaultValue; // 0x10D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart0Soft_KeyFrame_FieldHandleType; // 0x10D8
		::System::Boolean ESPP_scanStart0Soft_KeyFrame_UseIt; // 0x10DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart0Soft_KeyFrame; // 0x10E0
		::System::Boolean ESPP_scanStart0Soft_KeyFrame_EnableFade; // 0x10E8
		::System::Boolean ESPP_scanStart0Soft_KeyFrame_EnableOverrideDefaultValue; // 0x10E9
		::System::Single ESPP_scanStart0Soft_KeyFrame_OverrideDefaultValue; // 0x10EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd0Soft_KeyFrame_FieldHandleType; // 0x10F0
		::System::Boolean ESPP_scanEnd0Soft_KeyFrame_UseIt; // 0x10F4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd0Soft_KeyFrame; // 0x10F8
		::System::Boolean ESPP_scanEnd0Soft_KeyFrame_EnableFade; // 0x1100
		::System::Boolean ESPP_scanEnd0Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1101
		::System::Single ESPP_scanEnd0Soft_KeyFrame_OverrideDefaultValue; // 0x1104
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor0_FieldHandleType; // 0x1108
		::System::Boolean ESPP_scanColor0_UseIt; // 0x110C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor0; // 0x1110
		::System::Boolean ESPP_scanColor0_EnableFade; // 0x1118
		::System::Boolean ESPP_scanColor0_EnableOverrideDefaultValue; // 0x1119
		::UnityEngine::Color ESPP_scanColor0_OverrideDefaultValue; // 0x111C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor0End_FieldHandleType; // 0x112C
		::System::Boolean ESPP_scanColor0End_UseIt; // 0x1130
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor0End; // 0x1138
		::System::Boolean ESPP_scanColor0End_EnableFade; // 0x1140
		::System::Boolean ESPP_scanColor0End_EnableOverrideDefaultValue; // 0x1141
		::UnityEngine::Color ESPP_scanColor0End_OverrideDefaultValue; // 0x1144
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor0Mode_FieldHandleType; // 0x1154
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor0Mode; // 0x1158
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity0_FieldHandleType; // 0x115C
		::System::Boolean ESPP_scanMaskIntensity0_UseIt; // 0x1160
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity0; // 0x1168
		::System::Boolean ESPP_scanMaskIntensity0_EnableFade; // 0x1170
		::System::Boolean ESPP_scanMaskIntensity0_EnableOverrideDefaultValue; // 0x1171
		::System::Single ESPP_scanMaskIntensity0_OverrideDefaultValue; // 0x1174
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart1_FieldHandleType; // 0x1178
		::System::Boolean ESPP_scanStart1_UseIt; // 0x117C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart1; // 0x1180
		::System::Boolean ESPP_scanStart1_EnableFade; // 0x1188
		::System::Boolean ESPP_scanStart1_EnableOverrideDefaultValue; // 0x1189
		::System::Single ESPP_scanStart1_OverrideDefaultValue; // 0x118C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd1_FieldHandleType; // 0x1190
		::System::Boolean ESPP_scanEnd1_UseIt; // 0x1194
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd1; // 0x1198
		::System::Boolean ESPP_scanEnd1_EnableFade; // 0x11A0
		::System::Boolean ESPP_scanEnd1_EnableOverrideDefaultValue; // 0x11A1
		::System::Single ESPP_scanEnd1_OverrideDefaultValue; // 0x11A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart1Soft_KeyFrame_FieldHandleType; // 0x11A8
		::System::Boolean ESPP_scanStart1Soft_KeyFrame_UseIt; // 0x11AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart1Soft_KeyFrame; // 0x11B0
		::System::Boolean ESPP_scanStart1Soft_KeyFrame_EnableFade; // 0x11B8
		::System::Boolean ESPP_scanStart1Soft_KeyFrame_EnableOverrideDefaultValue; // 0x11B9
		::System::Single ESPP_scanStart1Soft_KeyFrame_OverrideDefaultValue; // 0x11BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd1Soft_KeyFrame_FieldHandleType; // 0x11C0
		::System::Boolean ESPP_scanEnd1Soft_KeyFrame_UseIt; // 0x11C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd1Soft_KeyFrame; // 0x11C8
		::System::Boolean ESPP_scanEnd1Soft_KeyFrame_EnableFade; // 0x11D0
		::System::Boolean ESPP_scanEnd1Soft_KeyFrame_EnableOverrideDefaultValue; // 0x11D1
		::System::Single ESPP_scanEnd1Soft_KeyFrame_OverrideDefaultValue; // 0x11D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor1_FieldHandleType; // 0x11D8
		::System::Boolean ESPP_scanColor1_UseIt; // 0x11DC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor1; // 0x11E0
		::System::Boolean ESPP_scanColor1_EnableFade; // 0x11E8
		::System::Boolean ESPP_scanColor1_EnableOverrideDefaultValue; // 0x11E9
		::UnityEngine::Color ESPP_scanColor1_OverrideDefaultValue; // 0x11EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor1End_FieldHandleType; // 0x11FC
		::System::Boolean ESPP_scanColor1End_UseIt; // 0x1200
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor1End; // 0x1208
		::System::Boolean ESPP_scanColor1End_EnableFade; // 0x1210
		::System::Boolean ESPP_scanColor1End_EnableOverrideDefaultValue; // 0x1211
		::UnityEngine::Color ESPP_scanColor1End_OverrideDefaultValue; // 0x1214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor1Mode_FieldHandleType; // 0x1224
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor1Mode; // 0x1228
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity1_FieldHandleType; // 0x122C
		::System::Boolean ESPP_scanMaskIntensity1_UseIt; // 0x1230
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity1; // 0x1238
		::System::Boolean ESPP_scanMaskIntensity1_EnableFade; // 0x1240
		::System::Boolean ESPP_scanMaskIntensity1_EnableOverrideDefaultValue; // 0x1241
		::System::Single ESPP_scanMaskIntensity1_OverrideDefaultValue; // 0x1244
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart2_FieldHandleType; // 0x1248
		::System::Boolean ESPP_scanStart2_UseIt; // 0x124C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart2; // 0x1250
		::System::Boolean ESPP_scanStart2_EnableFade; // 0x1258
		::System::Boolean ESPP_scanStart2_EnableOverrideDefaultValue; // 0x1259
		::System::Single ESPP_scanStart2_OverrideDefaultValue; // 0x125C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd2_FieldHandleType; // 0x1260
		::System::Boolean ESPP_scanEnd2_UseIt; // 0x1264
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd2; // 0x1268
		::System::Boolean ESPP_scanEnd2_EnableFade; // 0x1270
		::System::Boolean ESPP_scanEnd2_EnableOverrideDefaultValue; // 0x1271
		::System::Single ESPP_scanEnd2_OverrideDefaultValue; // 0x1274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart2Soft_KeyFrame_FieldHandleType; // 0x1278
		::System::Boolean ESPP_scanStart2Soft_KeyFrame_UseIt; // 0x127C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart2Soft_KeyFrame; // 0x1280
		::System::Boolean ESPP_scanStart2Soft_KeyFrame_EnableFade; // 0x1288
		::System::Boolean ESPP_scanStart2Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1289
		::System::Single ESPP_scanStart2Soft_KeyFrame_OverrideDefaultValue; // 0x128C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd2Soft_KeyFrame_FieldHandleType; // 0x1290
		::System::Boolean ESPP_scanEnd2Soft_KeyFrame_UseIt; // 0x1294
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd2Soft_KeyFrame; // 0x1298
		::System::Boolean ESPP_scanEnd2Soft_KeyFrame_EnableFade; // 0x12A0
		::System::Boolean ESPP_scanEnd2Soft_KeyFrame_EnableOverrideDefaultValue; // 0x12A1
		::System::Single ESPP_scanEnd2Soft_KeyFrame_OverrideDefaultValue; // 0x12A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor2_FieldHandleType; // 0x12A8
		::System::Boolean ESPP_scanColor2_UseIt; // 0x12AC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor2; // 0x12B0
		::System::Boolean ESPP_scanColor2_EnableFade; // 0x12B8
		::System::Boolean ESPP_scanColor2_EnableOverrideDefaultValue; // 0x12B9
		::UnityEngine::Color ESPP_scanColor2_OverrideDefaultValue; // 0x12BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor2End_FieldHandleType; // 0x12CC
		::System::Boolean ESPP_scanColor2End_UseIt; // 0x12D0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor2End; // 0x12D8
		::System::Boolean ESPP_scanColor2End_EnableFade; // 0x12E0
		::System::Boolean ESPP_scanColor2End_EnableOverrideDefaultValue; // 0x12E1
		::UnityEngine::Color ESPP_scanColor2End_OverrideDefaultValue; // 0x12E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor2Mode_FieldHandleType; // 0x12F4
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor2Mode; // 0x12F8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity2_FieldHandleType; // 0x12FC
		::System::Boolean ESPP_scanMaskIntensity2_UseIt; // 0x1300
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity2; // 0x1308
		::System::Boolean ESPP_scanMaskIntensity2_EnableFade; // 0x1310
		::System::Boolean ESPP_scanMaskIntensity2_EnableOverrideDefaultValue; // 0x1311
		::System::Single ESPP_scanMaskIntensity2_OverrideDefaultValue; // 0x1314
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart3_FieldHandleType; // 0x1318
		::System::Boolean ESPP_scanStart3_UseIt; // 0x131C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart3; // 0x1320
		::System::Boolean ESPP_scanStart3_EnableFade; // 0x1328
		::System::Boolean ESPP_scanStart3_EnableOverrideDefaultValue; // 0x1329
		::System::Single ESPP_scanStart3_OverrideDefaultValue; // 0x132C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd3_FieldHandleType; // 0x1330
		::System::Boolean ESPP_scanEnd3_UseIt; // 0x1334
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd3; // 0x1338
		::System::Boolean ESPP_scanEnd3_EnableFade; // 0x1340
		::System::Boolean ESPP_scanEnd3_EnableOverrideDefaultValue; // 0x1341
		::System::Single ESPP_scanEnd3_OverrideDefaultValue; // 0x1344
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart3Soft_KeyFrame_FieldHandleType; // 0x1348
		::System::Boolean ESPP_scanStart3Soft_KeyFrame_UseIt; // 0x134C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanStart3Soft_KeyFrame; // 0x1350
		::System::Boolean ESPP_scanStart3Soft_KeyFrame_EnableFade; // 0x1358
		::System::Boolean ESPP_scanStart3Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1359
		::System::Single ESPP_scanStart3Soft_KeyFrame_OverrideDefaultValue; // 0x135C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd3Soft_KeyFrame_FieldHandleType; // 0x1360
		::System::Boolean ESPP_scanEnd3Soft_KeyFrame_UseIt; // 0x1364
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanEnd3Soft_KeyFrame; // 0x1368
		::System::Boolean ESPP_scanEnd3Soft_KeyFrame_EnableFade; // 0x1370
		::System::Boolean ESPP_scanEnd3Soft_KeyFrame_EnableOverrideDefaultValue; // 0x1371
		::System::Single ESPP_scanEnd3Soft_KeyFrame_OverrideDefaultValue; // 0x1374
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor3_FieldHandleType; // 0x1378
		::System::Boolean ESPP_scanColor3_UseIt; // 0x137C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor3; // 0x1380
		::System::Boolean ESPP_scanColor3_EnableFade; // 0x1388
		::System::Boolean ESPP_scanColor3_EnableOverrideDefaultValue; // 0x1389
		::UnityEngine::Color ESPP_scanColor3_OverrideDefaultValue; // 0x138C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor3End_FieldHandleType; // 0x139C
		::System::Boolean ESPP_scanColor3End_UseIt; // 0x13A0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_scanColor3End; // 0x13A8
		::System::Boolean ESPP_scanColor3End_EnableFade; // 0x13B0
		::System::Boolean ESPP_scanColor3End_EnableOverrideDefaultValue; // 0x13B1
		::UnityEngine::Color ESPP_scanColor3End_OverrideDefaultValue; // 0x13B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanColor3Mode_FieldHandleType; // 0x13C4
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_scanColor3Mode; // 0x13C8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanMaskIntensity3_FieldHandleType; // 0x13CC
		::System::Boolean ESPP_scanMaskIntensity3_UseIt; // 0x13D0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_scanMaskIntensity3; // 0x13D8
		::System::Boolean ESPP_scanMaskIntensity3_EnableFade; // 0x13E0
		::System::Boolean ESPP_scanMaskIntensity3_EnableOverrideDefaultValue; // 0x13E1
		::System::Single ESPP_scanMaskIntensity3_OverrideDefaultValue; // 0x13E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvOffsetR_FieldHandleType; // 0x13E8
		::System::Boolean ESPP_uvOffsetR_UseIt; // 0x13EC
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvOffsetR; // 0x13F0
		::System::Boolean ESPP_uvOffsetR_EnableFade; // 0x13F8
		::System::Boolean ESPP_uvOffsetR_EnableOverrideDefaultValue; // 0x13F9
		::UnityEngine::Vector2 ESPP_uvOffsetR_OverrideDefaultValue; // 0x13FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorR_FieldHandleType; // 0x1404
		::System::Boolean ESPP_colorR_UseIt; // 0x1408
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorR; // 0x1410
		::System::Boolean ESPP_colorR_EnableFade; // 0x1418
		::System::Boolean ESPP_colorR_EnableOverrideDefaultValue; // 0x1419
		::UnityEngine::Color ESPP_colorR_OverrideDefaultValue; // 0x141C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvOffsetG_FieldHandleType; // 0x142C
		::System::Boolean ESPP_uvOffsetG_UseIt; // 0x1430
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvOffsetG; // 0x1438
		::System::Boolean ESPP_uvOffsetG_EnableFade; // 0x1440
		::System::Boolean ESPP_uvOffsetG_EnableOverrideDefaultValue; // 0x1441
		::UnityEngine::Vector2 ESPP_uvOffsetG_OverrideDefaultValue; // 0x1444
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorG_FieldHandleType; // 0x144C
		::System::Boolean ESPP_colorG_UseIt; // 0x1450
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorG; // 0x1458
		::System::Boolean ESPP_colorG_EnableFade; // 0x1460
		::System::Boolean ESPP_colorG_EnableOverrideDefaultValue; // 0x1461
		::UnityEngine::Color ESPP_colorG_OverrideDefaultValue; // 0x1464
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_uvOffsetB_FieldHandleType; // 0x1474
		::System::Boolean ESPP_uvOffsetB_UseIt; // 0x1478
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_uvOffsetB; // 0x1480
		::System::Boolean ESPP_uvOffsetB_EnableFade; // 0x1488
		::System::Boolean ESPP_uvOffsetB_EnableOverrideDefaultValue; // 0x1489
		::UnityEngine::Vector2 ESPP_uvOffsetB_OverrideDefaultValue; // 0x148C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorB_FieldHandleType; // 0x1494
		::System::Boolean ESPP_colorB_UseIt; // 0x1498
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_colorB; // 0x14A0
		::System::Boolean ESPP_colorB_EnableFade; // 0x14A8
		::System::Boolean ESPP_colorB_EnableOverrideDefaultValue; // 0x14A9
		::UnityEngine::Color ESPP_colorB_OverrideDefaultValue; // 0x14AC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fadeSourceImage_FieldHandleType; // 0x14BC
		::System::Boolean ESPP_fadeSourceImage_UseIt; // 0x14C0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fadeSourceImage; // 0x14C8
		::System::Boolean ESPP_fadeSourceImage_EnableFade; // 0x14D0
		::System::Boolean ESPP_fadeSourceImage_EnableOverrideDefaultValue; // 0x14D1
		::System::Single ESPP_fadeSourceImage_OverrideDefaultValue; // 0x14D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceWidth_FieldHandleType; // 0x14D8
		::System::Boolean ESPP_sliceWidth_UseIt; // 0x14DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sliceWidth; // 0x14E0
		::System::Boolean ESPP_sliceWidth_EnableFade; // 0x14E8
		::System::Boolean ESPP_sliceWidth_EnableOverrideDefaultValue; // 0x14E9
		::System::Single ESPP_sliceWidth_OverrideDefaultValue; // 0x14EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceAngle_FieldHandleType; // 0x14F0
		::System::Boolean ESPP_sliceAngle_UseIt; // 0x14F4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sliceAngle; // 0x14F8
		::System::Boolean ESPP_sliceAngle_EnableFade; // 0x1500
		::System::Boolean ESPP_sliceAngle_EnableOverrideDefaultValue; // 0x1501
		::System::Single ESPP_sliceAngle_OverrideDefaultValue; // 0x1504
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_reverse_FieldHandleType; // 0x1508
		::System::Boolean ESPP_reverse_UseIt; // 0x150C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_reverse; // 0x1510
		::System::Boolean ESPP_reverse_EnableFade; // 0x1518
		::System::Boolean ESPP_reverse_EnableOverrideDefaultValue; // 0x1519
		::System::Boolean ESPP_reverse_OverrideDefaultValue; // 0x151A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceOffset_FieldHandleType; // 0x151C
		::System::Boolean ESPP_sliceOffset_UseIt; // 0x1520
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_sliceOffset; // 0x1528
		::System::Boolean ESPP_sliceOffset_EnableFade; // 0x1530
		::System::Boolean ESPP_sliceOffset_EnableOverrideDefaultValue; // 0x1531
		::System::Single ESPP_sliceOffset_OverrideDefaultValue; // 0x1534
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorA_FieldHandleType; // 0x1538
		::System::Boolean ESPP_sliceColorA_UseIt; // 0x153C
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sliceColorA; // 0x1540
		::System::Boolean ESPP_sliceColorA_EnableFade; // 0x1548
		::System::Boolean ESPP_sliceColorA_EnableOverrideDefaultValue; // 0x1549
		::UnityEngine::Color ESPP_sliceColorA_OverrideDefaultValue; // 0x154C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorAMode_FieldHandleType; // 0x155C
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_sliceColorAMode; // 0x1560
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorB_FieldHandleType; // 0x1564
		::System::Boolean ESPP_sliceColorB_UseIt; // 0x1568
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sliceColorB; // 0x1570
		::System::Boolean ESPP_sliceColorB_EnableFade; // 0x1578
		::System::Boolean ESPP_sliceColorB_EnableOverrideDefaultValue; // 0x1579
		::UnityEngine::Color ESPP_sliceColorB_OverrideDefaultValue; // 0x157C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sliceColorBMode_FieldHandleType; // 0x158C
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod ESPP_sliceColorBMode; // 0x1590
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridOn_FieldHandleType; // 0x1594
		::System::Boolean ESPP_gridOn_UseIt; // 0x1598
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_gridOn; // 0x15A0
		::System::Boolean ESPP_gridOn_EnableFade; // 0x15A8
		::System::Boolean ESPP_gridOn_EnableOverrideDefaultValue; // 0x15A9
		::System::Boolean ESPP_gridOn_OverrideDefaultValue; // 0x15AA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridDistance_FieldHandleType; // 0x15AC
		::System::Single ESPP_gridDistance; // 0x15B0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridBlendScanLine_FieldHandleType; // 0x15B4
		::System::Boolean ESPP_gridBlendScanLine; // 0x15B8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridColor_FieldHandleType; // 0x15BC
		::System::Boolean ESPP_gridColor_UseIt; // 0x15C0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_gridColor; // 0x15C8
		::System::Boolean ESPP_gridColor_EnableFade; // 0x15D0
		::System::Boolean ESPP_gridColor_EnableOverrideDefaultValue; // 0x15D1
		::UnityEngine::Color ESPP_gridColor_OverrideDefaultValue; // 0x15D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_gridPower_FieldHandleType; // 0x15E4
		::System::Single ESPP_gridPower; // 0x15E8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_groundYPos_FieldHandleType; // 0x15EC
		::System::Boolean ESPP_groundYPos_UseIt; // 0x15F0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_groundYPos; // 0x15F8
		::System::Boolean ESPP_groundYPos_EnableFade; // 0x1600
		::System::Boolean ESPP_groundYPos_EnableOverrideDefaultValue; // 0x1601
		::System::Single ESPP_groundYPos_OverrideDefaultValue; // 0x1604
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenSpaceGridScale_FieldHandleType; // 0x1608
		::System::Boolean ESPP_screenSpaceGridScale_UseIt; // 0x160C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenSpaceGridScale; // 0x1610
		::System::Boolean ESPP_screenSpaceGridScale_EnableFade; // 0x1618
		::System::Boolean ESPP_screenSpaceGridScale_EnableOverrideDefaultValue; // 0x1619
		::System::Single ESPP_screenSpaceGridScale_OverrideDefaultValue; // 0x161C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenSpaceGridWidth_FieldHandleType; // 0x1620
		::System::Boolean ESPP_screenSpaceGridWidth_UseIt; // 0x1624
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_screenSpaceGridWidth; // 0x1628
		::System::Boolean ESPP_screenSpaceGridWidth_EnableFade; // 0x1630
		::System::Boolean ESPP_screenSpaceGridWidth_EnableOverrideDefaultValue; // 0x1631
		::System::Single ESPP_screenSpaceGridWidth_OverrideDefaultValue; // 0x1634
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOn_FieldHandleType; // 0x1638
		::System::Boolean ESPP_outlineOn_UseIt; // 0x163C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineOn; // 0x1640
		::System::Boolean ESPP_outlineOn_EnableFade; // 0x1648
		::System::Boolean ESPP_outlineOn_EnableOverrideDefaultValue; // 0x1649
		::System::Boolean ESPP_outlineOn_OverrideDefaultValue; // 0x164A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineBlendScanLine_FieldHandleType; // 0x164C
		::System::Boolean ESPP_outlineBlendScanLine; // 0x1650
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineOpacity_FieldHandleType; // 0x1654
		::System::Boolean ESPP_outlineOpacity_UseIt; // 0x1658
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_outlineOpacity; // 0x1660
		::System::Boolean ESPP_outlineOpacity_EnableFade; // 0x1668
		::System::Boolean ESPP_outlineOpacity_EnableOverrideDefaultValue; // 0x1669
		::System::Single ESPP_outlineOpacity_OverrideDefaultValue; // 0x166C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDiffOffset_FieldHandleType; // 0x1670
		::System::Single ESPP_outlineDiffOffset; // 0x1674
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDepthThreshold_FieldHandleType; // 0x1678
		::System::Single ESPP_outlineDepthThreshold; // 0x167C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalThreshold_FieldHandleType; // 0x1680
		::System::Single ESPP_outlineNormalThreshold; // 0x1684
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineNormalThresholdScale_FieldHandleType; // 0x1688
		::System::Single ESPP_outlineNormalThresholdScale; // 0x168C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineColor_FieldHandleType; // 0x1690
		::System::Boolean ESPP_outlineColor_UseIt; // 0x1694
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineColor; // 0x1698
		::System::Boolean ESPP_outlineColor_EnableFade; // 0x16A0
		::System::Boolean ESPP_outlineColor_EnableOverrideDefaultValue; // 0x16A1
		::UnityEngine::Color ESPP_outlineColor_OverrideDefaultValue; // 0x16A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineInUberShader_FieldHandleType; // 0x16B4
		::System::Boolean ESPP_outlineInUberShader_UseIt; // 0x16B8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineInUberShader; // 0x16C0
		::System::Boolean ESPP_outlineInUberShader_EnableFade; // 0x16C8
		::System::Boolean ESPP_outlineInUberShader_EnableOverrideDefaultValue; // 0x16C9
		::System::Boolean ESPP_outlineInUberShader_OverrideDefaultValue; // 0x16CA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortion_FieldHandleType; // 0x16CC
		::System::Boolean ESPP_outlineDistortion_UseIt; // 0x16D0
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_outlineDistortion; // 0x16D8
		::System::Boolean ESPP_outlineDistortion_EnableFade; // 0x16E0
		::System::Boolean ESPP_outlineDistortion_EnableOverrideDefaultValue; // 0x16E1
		::System::Boolean ESPP_outlineDistortion_OverrideDefaultValue; // 0x16E2
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionTex_FieldHandleType; // 0x16E4
		::UnityEngine::Texture* ESPP_outlineDistortionTex; // 0x16E8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionTexTiling_FieldHandleType; // 0x16F0
		::System::Boolean ESPP_outlineDistortionTexTiling_UseIt; // 0x16F4
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionTexTiling; // 0x16F8
		::System::Boolean ESPP_outlineDistortionTexTiling_EnableFade; // 0x1700
		::System::Boolean ESPP_outlineDistortionTexTiling_EnableOverrideDefaultValue; // 0x1701
		::UnityEngine::Vector2 ESPP_outlineDistortionTexTiling_OverrideDefaultValue; // 0x1704
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionTexOffset_FieldHandleType; // 0x170C
		::System::Boolean ESPP_outlineDistortionTexOffset_UseIt; // 0x1710
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionTexOffset; // 0x1718
		::System::Boolean ESPP_outlineDistortionTexOffset_EnableFade; // 0x1720
		::System::Boolean ESPP_outlineDistortionTexOffset_EnableOverrideDefaultValue; // 0x1721
		::UnityEngine::Vector2 ESPP_outlineDistortionTexOffset_OverrideDefaultValue; // 0x1724
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionUVSpeed_FieldHandleType; // 0x172C
		::System::Boolean ESPP_outlineDistortionUVSpeed_UseIt; // 0x1730
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionUVSpeed; // 0x1738
		::System::Boolean ESPP_outlineDistortionUVSpeed_EnableFade; // 0x1740
		::System::Boolean ESPP_outlineDistortionUVSpeed_EnableOverrideDefaultValue; // 0x1741
		::UnityEngine::Vector2 ESPP_outlineDistortionUVSpeed_OverrideDefaultValue; // 0x1744
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionOffset_FieldHandleType; // 0x174C
		::System::Boolean ESPP_outlineDistortionOffset_UseIt; // 0x1750
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionOffset; // 0x1758
		::System::Boolean ESPP_outlineDistortionOffset_EnableFade; // 0x1760
		::System::Boolean ESPP_outlineDistortionOffset_EnableOverrideDefaultValue; // 0x1761
		::UnityEngine::Vector2 ESPP_outlineDistortionOffset_OverrideDefaultValue; // 0x1764
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineDistortionIntensity_FieldHandleType; // 0x176C
		::System::Boolean ESPP_outlineDistortionIntensity_UseIt; // 0x1770
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_outlineDistortionIntensity; // 0x1778
		::System::Boolean ESPP_outlineDistortionIntensity_EnableFade; // 0x1780
		::System::Boolean ESPP_outlineDistortionIntensity_EnableOverrideDefaultValue; // 0x1781
		::UnityEngine::Vector2 ESPP_outlineDistortionIntensity_OverrideDefaultValue; // 0x1784
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetOn_FieldHandleType; // 0x178C
		::System::Boolean ESPP_textureSheetOn; // 0x1790
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetTex_FieldHandleType; // 0x1794
		::UnityEngine::Texture* ESPP_textureSheetTex; // 0x1798
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetXY_FieldHandleType; // 0x17A0
		::UnityEngine::Vector2 ESPP_textureSheetXY; // 0x17A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetIndex_FieldHandleType; // 0x17AC
		::System::Boolean ESPP_textureSheetIndex_UseIt; // 0x17B0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_textureSheetIndex; // 0x17B8
		::System::Boolean ESPP_textureSheetIndex_EnableFade; // 0x17C0
		::System::Boolean ESPP_textureSheetIndex_EnableOverrideDefaultValue; // 0x17C1
		::System::Int32 ESPP_textureSheetIndex_OverrideDefaultValue; // 0x17C4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_textureSheetColor_FieldHandleType; // 0x17C8
		::System::Boolean ESPP_textureSheetColor_UseIt; // 0x17CC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_textureSheetColor; // 0x17D0
		::System::Boolean ESPP_textureSheetColor_EnableFade; // 0x17D8
		::System::Boolean ESPP_textureSheetColor_EnableOverrideDefaultValue; // 0x17D9
		::UnityEngine::Color ESPP_textureSheetColor_OverrideDefaultValue; // 0x17DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionIntensity_FieldHandleType; // 0x17EC
		::System::Boolean ESPP_lensDistortionIntensity_UseIt; // 0x17F0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionIntensity; // 0x17F8
		::System::Boolean ESPP_lensDistortionIntensity_EnableFade; // 0x1800
		::System::Boolean ESPP_lensDistortionIntensity_EnableOverrideDefaultValue; // 0x1801
		::System::Single ESPP_lensDistortionIntensity_OverrideDefaultValue; // 0x1804
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionXMultiplier_FieldHandleType; // 0x1808
		::System::Boolean ESPP_lensDistortionXMultiplier_UseIt; // 0x180C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionXMultiplier; // 0x1810
		::System::Boolean ESPP_lensDistortionXMultiplier_EnableFade; // 0x1818
		::System::Boolean ESPP_lensDistortionXMultiplier_EnableOverrideDefaultValue; // 0x1819
		::System::Single ESPP_lensDistortionXMultiplier_OverrideDefaultValue; // 0x181C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionYMultiplier_FieldHandleType; // 0x1820
		::System::Boolean ESPP_lensDistortionYMultiplier_UseIt; // 0x1824
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionYMultiplier; // 0x1828
		::System::Boolean ESPP_lensDistortionYMultiplier_EnableFade; // 0x1830
		::System::Boolean ESPP_lensDistortionYMultiplier_EnableOverrideDefaultValue; // 0x1831
		::System::Single ESPP_lensDistortionYMultiplier_OverrideDefaultValue; // 0x1834
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionCenter_FieldHandleType; // 0x1838
		::System::Boolean ESPP_lensDistortionCenter_UseIt; // 0x183C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_lensDistortionCenter; // 0x1840
		::System::Boolean ESPP_lensDistortionCenter_EnableFade; // 0x1848
		::System::Boolean ESPP_lensDistortionCenter_EnableOverrideDefaultValue; // 0x1849
		::UnityEngine::Vector2 ESPP_lensDistortionCenter_OverrideDefaultValue; // 0x184C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_lensDistortionScale_FieldHandleType; // 0x1854
		::System::Boolean ESPP_lensDistortionScale_UseIt; // 0x1858
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_lensDistortionScale; // 0x1860
		::System::Boolean ESPP_lensDistortionScale_EnableFade; // 0x1868
		::System::Boolean ESPP_lensDistortionScale_EnableOverrideDefaultValue; // 0x1869
		::System::Single ESPP_lensDistortionScale_OverrideDefaultValue; // 0x186C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_enableDistanceDistortionColorization_FieldHandleType; // 0x1870
		::System::Boolean ESPP_enableDistanceDistortionColorization_UseIt; // 0x1874
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_enableDistanceDistortionColorization; // 0x1878
		::System::Boolean ESPP_enableDistanceDistortionColorization_EnableFade; // 0x1880
		::System::Boolean ESPP_enableDistanceDistortionColorization_EnableOverrideDefaultValue; // 0x1881
		::System::Boolean ESPP_enableDistanceDistortionColorization_OverrideDefaultValue; // 0x1882
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizationEffect_FieldHandleType; // 0x1884
		::System::Boolean ESPP_distanceColorizationEffect_UseIt; // 0x1888
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceColorizationEffect; // 0x1890
		::System::Boolean ESPP_distanceColorizationEffect_EnableFade; // 0x1898
		::System::Boolean ESPP_distanceColorizationEffect_EnableOverrideDefaultValue; // 0x1899
		::System::Single ESPP_distanceColorizationEffect_OverrideDefaultValue; // 0x189C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionTexture_FieldHandleType; // 0x18A0
		::UnityEngine::Texture* ESPP_distanceDistortionTexture; // 0x18A8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizeTexture_FieldHandleType; // 0x18B0
		::UnityEngine::Texture* ESPP_distanceColorizeTexture; // 0x18B8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionStart_FieldHandleType; // 0x18C0
		::System::Boolean ESPP_distanceDistortionStart_UseIt; // 0x18C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionStart; // 0x18C8
		::System::Boolean ESPP_distanceDistortionStart_EnableFade; // 0x18D0
		::System::Boolean ESPP_distanceDistortionStart_EnableOverrideDefaultValue; // 0x18D1
		::System::Single ESPP_distanceDistortionStart_OverrideDefaultValue; // 0x18D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionEnd_FieldHandleType; // 0x18D8
		::System::Boolean ESPP_distanceDistortionEnd_UseIt; // 0x18DC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionEnd; // 0x18E0
		::System::Boolean ESPP_distanceDistortionEnd_EnableFade; // 0x18E8
		::System::Boolean ESPP_distanceDistortionEnd_EnableOverrideDefaultValue; // 0x18E9
		::System::Single ESPP_distanceDistortionEnd_OverrideDefaultValue; // 0x18EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionFadeRange_FieldHandleType; // 0x18F0
		::System::Boolean ESPP_distanceDistortionFadeRange_UseIt; // 0x18F4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionFadeRange; // 0x18F8
		::System::Boolean ESPP_distanceDistortionFadeRange_EnableFade; // 0x1900
		::System::Boolean ESPP_distanceDistortionFadeRange_EnableOverrideDefaultValue; // 0x1901
		::System::Single ESPP_distanceDistortionFadeRange_OverrideDefaultValue; // 0x1904
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionHeightStart_FieldHandleType; // 0x1908
		::System::Boolean ESPP_distanceDistortionHeightStart_UseIt; // 0x190C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionHeightStart; // 0x1910
		::System::Boolean ESPP_distanceDistortionHeightStart_EnableFade; // 0x1918
		::System::Boolean ESPP_distanceDistortionHeightStart_EnableOverrideDefaultValue; // 0x1919
		::System::Single ESPP_distanceDistortionHeightStart_OverrideDefaultValue; // 0x191C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionHeightEnd_FieldHandleType; // 0x1920
		::System::Boolean ESPP_distanceDistortionHeightEnd_UseIt; // 0x1924
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionHeightEnd; // 0x1928
		::System::Boolean ESPP_distanceDistortionHeightEnd_EnableFade; // 0x1930
		::System::Boolean ESPP_distanceDistortionHeightEnd_EnableOverrideDefaultValue; // 0x1931
		::System::Single ESPP_distanceDistortionHeightEnd_OverrideDefaultValue; // 0x1934
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionHeightFadeRange_FieldHandleType; // 0x1938
		::System::Boolean ESPP_distanceDistortionHeightFadeRange_UseIt; // 0x193C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionHeightFadeRange; // 0x1940
		::System::Boolean ESPP_distanceDistortionHeightFadeRange_EnableFade; // 0x1948
		::System::Boolean ESPP_distanceDistortionHeightFadeRange_EnableOverrideDefaultValue; // 0x1949
		::System::Single ESPP_distanceDistortionHeightFadeRange_OverrideDefaultValue; // 0x194C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionOffsetSpeed_FieldHandleType; // 0x1950
		::System::Boolean ESPP_distanceDistortionOffsetSpeed_UseIt; // 0x1954
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_distanceDistortionOffsetSpeed; // 0x1958
		::System::Boolean ESPP_distanceDistortionOffsetSpeed_EnableFade; // 0x1960
		::System::Boolean ESPP_distanceDistortionOffsetSpeed_EnableOverrideDefaultValue; // 0x1961
		::UnityEngine::Vector3 ESPP_distanceDistortionOffsetSpeed_OverrideDefaultValue; // 0x1964
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionTiling_FieldHandleType; // 0x1970
		::System::Boolean ESPP_distanceDistortionTiling_UseIt; // 0x1974
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionTiling; // 0x1978
		::System::Boolean ESPP_distanceDistortionTiling_EnableFade; // 0x1980
		::System::Boolean ESPP_distanceDistortionTiling_EnableOverrideDefaultValue; // 0x1981
		::System::Single ESPP_distanceDistortionTiling_OverrideDefaultValue; // 0x1984
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionIntensity_FieldHandleType; // 0x1988
		::System::Boolean ESPP_distanceDistortionIntensity_UseIt; // 0x198C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceDistortionIntensity; // 0x1990
		::System::Boolean ESPP_distanceDistortionIntensity_EnableFade; // 0x1998
		::System::Boolean ESPP_distanceDistortionIntensity_EnableOverrideDefaultValue; // 0x1999
		::System::Single ESPP_distanceDistortionIntensity_OverrideDefaultValue; // 0x199C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizationOffsetSpeed_FieldHandleType; // 0x19A0
		::System::Boolean ESPP_distanceColorizationOffsetSpeed_UseIt; // 0x19A4
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_distanceColorizationOffsetSpeed; // 0x19A8
		::System::Boolean ESPP_distanceColorizationOffsetSpeed_EnableFade; // 0x19B0
		::System::Boolean ESPP_distanceColorizationOffsetSpeed_EnableOverrideDefaultValue; // 0x19B1
		::UnityEngine::Vector3 ESPP_distanceColorizationOffsetSpeed_OverrideDefaultValue; // 0x19B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceColorizationTiling_FieldHandleType; // 0x19C0
		::System::Boolean ESPP_distanceColorizationTiling_UseIt; // 0x19C4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_distanceColorizationTiling; // 0x19C8
		::System::Boolean ESPP_distanceColorizationTiling_EnableFade; // 0x19D0
		::System::Boolean ESPP_distanceColorizationTiling_EnableOverrideDefaultValue; // 0x19D1
		::System::Single ESPP_distanceColorizationTiling_OverrideDefaultValue; // 0x19D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionColor_FieldHandleType; // 0x19D8
		::System::Boolean ESPP_distanceDistortionColor_UseIt; // 0x19DC
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_distanceDistortionColor; // 0x19E0
		::System::Boolean ESPP_distanceDistortionColor_EnableFade; // 0x19E8
		::System::Boolean ESPP_distanceDistortionColor_EnableOverrideDefaultValue; // 0x19E9
		::UnityEngine::Color ESPP_distanceDistortionColor_OverrideDefaultValue; // 0x19EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_distanceDistortionBlendMode_FieldHandleType; // 0x19FC
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode ESPP_distanceDistortionBlendMode; // 0x1A00
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useStencil_FieldHandleType; // 0x1A04
		::System::Boolean ESPP_useStencil_UseIt; // 0x1A08
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useStencil; // 0x1A10
		::System::Boolean ESPP_useStencil_EnableFade; // 0x1A18
		::System::Boolean ESPP_useStencil_EnableOverrideDefaultValue; // 0x1A19
		::System::Boolean ESPP_useStencil_OverrideDefaultValue; // 0x1A1A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_applyBeforeUberPost_FieldHandleType; // 0x1A1C
		::System::Boolean ESPP_applyBeforeUberPost_UseIt; // 0x1A20
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_applyBeforeUberPost; // 0x1A28
		::System::Boolean ESPP_applyBeforeUberPost_EnableFade; // 0x1A30
		::System::Boolean ESPP_applyBeforeUberPost_EnableOverrideDefaultValue; // 0x1A31
		::System::Boolean ESPP_applyBeforeUberPost_OverrideDefaultValue; // 0x1A32
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_screenSpaceGrid_FieldHandleType; // 0x1A34
		::System::Boolean ESPP_screenSpaceGrid_UseIt; // 0x1A38
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_screenSpaceGrid; // 0x1A40
		::System::Boolean ESPP_screenSpaceGrid_EnableFade; // 0x1A48
		::System::Boolean ESPP_screenSpaceGrid_EnableOverrideDefaultValue; // 0x1A49
		::System::Boolean ESPP_screenSpaceGrid_OverrideDefaultValue; // 0x1A4A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineScreenSpaceMaskTex_FieldHandleType; // 0x1A4C
		::UnityEngine::Texture* ESPP_outlineScreenSpaceMaskTex; // 0x1A50
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanCustomCenterPosition_FieldHandleType; // 0x1A58
		::System::Boolean ESPP_scanCustomCenterPosition_UseIt; // 0x1A5C
		::MoleMole::EffectSimulate::Vector3KeyframeCurve* ESPP_scanCustomCenterPosition; // 0x1A60
		::System::Boolean ESPP_scanCustomCenterPosition_EnableFade; // 0x1A68
		::System::Boolean ESPP_scanCustomCenterPosition_EnableOverrideDefaultValue; // 0x1A69
		::UnityEngine::Vector3 ESPP_scanCustomCenterPosition_OverrideDefaultValue; // 0x1A6C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineScreenSpaceMaskTexScaleOffset_FieldHandleType; // 0x1A78
		::System::Boolean ESPP_outlineScreenSpaceMaskTexScaleOffset_UseIt; // 0x1A7C
		::MoleMole::EffectSimulate::Vector4KeyframeCurve* ESPP_outlineScreenSpaceMaskTexScaleOffset; // 0x1A80
		::System::Boolean ESPP_outlineScreenSpaceMaskTexScaleOffset_EnableFade; // 0x1A88
		::System::Boolean ESPP_outlineScreenSpaceMaskTexScaleOffset_EnableOverrideDefaultValue; // 0x1A89
		::UnityEngine::Vector4 ESPP_outlineScreenSpaceMaskTexScaleOffset_OverrideDefaultValue; // 0x1A8C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart0Soft_FieldHandleType; // 0x1A9C
		::System::Single ESPP_scanStart0Soft; // 0x1AA0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd0Soft_FieldHandleType; // 0x1AA4
		::System::Single ESPP_scanEnd0Soft; // 0x1AA8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart1Soft_FieldHandleType; // 0x1AAC
		::System::Single ESPP_scanStart1Soft; // 0x1AB0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd1Soft_FieldHandleType; // 0x1AB4
		::System::Single ESPP_scanEnd1Soft; // 0x1AB8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart2Soft_FieldHandleType; // 0x1ABC
		::System::Single ESPP_scanStart2Soft; // 0x1AC0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd2Soft_FieldHandleType; // 0x1AC4
		::System::Single ESPP_scanEnd2Soft; // 0x1AC8
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanStart3Soft_FieldHandleType; // 0x1ACC
		::System::Single ESPP_scanStart3Soft; // 0x1AD0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_scanEnd3Soft_FieldHandleType; // 0x1AD4
		::System::Single ESPP_scanEnd3Soft; // 0x1AD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_60E1F7F58CCF739F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_60E1F7F58CCF739F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_1DE6433C25680F9D_OFFSET))(this);
		}

		::System::Void Method_5_A99450342763EB98()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99450342763EB98_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_3AB4010736FA63A8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_3AB4010736FA63A8_OFFSET))(this, a1);
		}

		::System::Void Method_5_06A906193DFA2C63(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_06A906193DFA2C63_OFFSET))(this, a1);
		}

		::System::Void Method_5_D2A9AB4F8BBC1A87(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D2A9AB4F8BBC1A87_OFFSET))(this, a1);
		}

		::System::Void Method_5_D2A9AB4F8BBC1A87_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D2A9AB4F8BBC1A87_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D6879CAA76F6588()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_8D6879CAA76F6588_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_63D56313608AFE32(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_63D56313608AFE32_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_B747781924F4C9A5()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B747781924F4C9A5_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76ECC59BC7430042_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_76ECC59BC7430042_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::String* Method_5_7857B385C2B6C0EB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_7857B385C2B6C0EB_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_79830F666EE579C0_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVREFFECTS_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}
	};
}
