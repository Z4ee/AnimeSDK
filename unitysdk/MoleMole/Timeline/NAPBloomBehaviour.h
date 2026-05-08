#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/NAPBloomBehaviour_Struct_2_52AD02145F5FCE3A_20.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloomQuality.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BloomResolution.h"
#include "unitysdk/UnityEngine/Rendering/Universal/HQBloomMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/PP_Quality.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class FlareProfile_NativeSRP; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }

#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x17049D90)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x17053640)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_402B55CB455D7182_OFFSET UNITYSDK_OFFSET(0x1704AB70)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x17053630)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET UNITYSDK_OFFSET(0x1704B780)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x17053620)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x17053610)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1704AF60)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x170513B0)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17051CE0)
#define MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17053380)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NAPBloomBehaviour_TypeDefinitionIndex = 63674;

	class NAPBloomBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::NAPBloomBehaviour_Struct_2_52AD02145F5FCE3A_20 _methodParm; // 0x18
		::System::Boolean enabled; // 0x268
		::System::Boolean active_hqBloomMode; // 0x269
		::System::Boolean use_hqBloomMode; // 0x26A
		::UnityEngine::Rendering::Universal::HQBloomMode hqBloomMode; // 0x26C
		::System::Boolean active_hqUESampleQuality; // 0x270
		::System::Boolean use_hqUESampleQuality; // 0x271
		::UnityEngine::Rendering::Universal::PP_Quality hqUESampleQuality; // 0x274
		::System::Boolean active_hqUEBloomThreshold; // 0x278
		::System::Boolean use_hqUEBloomThreshold; // 0x279
		::System::Single hqUEBloomThreshold; // 0x27C
		::System::Boolean active_hqUEBloomThresholdChar; // 0x280
		::System::Boolean use_hqUEBloomThresholdChar; // 0x281
		::System::Single hqUEBloomThresholdChar; // 0x284
		::System::Boolean active_hqUEBloomMaxThreshold; // 0x288
		::System::Boolean use_hqUEBloomMaxThreshold; // 0x289
		::System::Single hqUEBloomMaxThreshold; // 0x28C
		::System::Boolean active_hqUEBloomMaxThresholdChar; // 0x290
		::System::Boolean use_hqUEBloomMaxThresholdChar; // 0x291
		::System::Single hqUEBloomMaxThresholdChar; // 0x294
		::System::Boolean active_hqUEBloomIntensity; // 0x298
		::System::Boolean use_hqUEBloomIntensity; // 0x299
		::System::Single hqUEBloomIntensity; // 0x29C
		::System::Boolean active_hqUEBloomIntensityChar; // 0x2A0
		::System::Boolean use_hqUEBloomIntensityChar; // 0x2A1
		::System::Single hqUEBloomIntensityChar; // 0x2A4
		::System::Boolean active_glareIntensity; // 0x2A8
		::System::Boolean use_glareIntensity; // 0x2A9
		::System::Single glareIntensity; // 0x2AC
		::System::Boolean active_xBlurIntensity; // 0x2B0
		::System::Boolean use_xBlurIntensity; // 0x2B1
		::System::Single xBlurIntensity; // 0x2B4
		::System::Boolean active_yBlurIntensity; // 0x2B8
		::System::Boolean use_yBlurIntensity; // 0x2B9
		::System::Single yBlurIntensity; // 0x2BC
		::System::Boolean active_hqBloomSize6; // 0x2C0
		::System::Boolean use_hqBloomSize6; // 0x2C1
		::System::Single hqBloomSize6; // 0x2C4
		::System::Boolean active_hqBloomSize5; // 0x2C8
		::System::Boolean use_hqBloomSize5; // 0x2C9
		::System::Single hqBloomSize5; // 0x2CC
		::System::Boolean active_hqBloomSize4; // 0x2D0
		::System::Boolean use_hqBloomSize4; // 0x2D1
		::System::Single hqBloomSize4; // 0x2D4
		::System::Boolean active_hqBloomSize3; // 0x2D8
		::System::Boolean use_hqBloomSize3; // 0x2D9
		::System::Single hqBloomSize3; // 0x2DC
		::System::Boolean active_hqBloomSize2; // 0x2E0
		::System::Boolean use_hqBloomSize2; // 0x2E1
		::System::Single hqBloomSize2; // 0x2E4
		::System::Boolean active_hqBloomSize1; // 0x2E8
		::System::Boolean use_hqBloomSize1; // 0x2E9
		::System::Single hqBloomSize1; // 0x2EC
		::System::Boolean active_hqBloomTint6; // 0x2F0
		::System::Boolean use_hqBloomTint6; // 0x2F1
		::System::Single hqBloomTint6; // 0x2F4
		::System::Boolean active_hqBloomTint5; // 0x2F8
		::System::Boolean use_hqBloomTint5; // 0x2F9
		::System::Single hqBloomTint5; // 0x2FC
		::System::Boolean active_hqBloomTint4; // 0x300
		::System::Boolean use_hqBloomTint4; // 0x301
		::System::Single hqBloomTint4; // 0x304
		::System::Boolean active_hqBloomTint3; // 0x308
		::System::Boolean use_hqBloomTint3; // 0x309
		::System::Single hqBloomTint3; // 0x30C
		::System::Boolean active_hqBloomTint2; // 0x310
		::System::Boolean use_hqBloomTint2; // 0x311
		::System::Single hqBloomTint2; // 0x314
		::System::Boolean active_hqBloomTint1; // 0x318
		::System::Boolean use_hqBloomTint1; // 0x319
		::System::Single hqBloomTint1; // 0x31C
		::System::Boolean active_hQBloomIntensity; // 0x320
		::System::Boolean use_hQBloomIntensity; // 0x321
		::System::Single hQBloomIntensity; // 0x324
		::System::Boolean active_hQBloomThreshold; // 0x328
		::System::Boolean use_hQBloomThreshold; // 0x329
		::System::Single hQBloomThreshold; // 0x32C
		::System::Boolean active_hQBloomScatter; // 0x330
		::System::Boolean use_hQBloomScatter; // 0x331
		::System::Single hQBloomScatter; // 0x334
		::System::Boolean active_hQBloomTint; // 0x338
		::System::Boolean use_hQBloomTint; // 0x339
		::UnityEngine::Color hQBloomTint; // 0x33C
		::System::Boolean active_hqBloomResolution; // 0x34C
		::System::Boolean use_hqBloomResolution; // 0x34D
		::UnityEngine::Rendering::Universal::BloomResolution hqBloomResolution; // 0x350
		::System::Boolean active_useRealDownSample; // 0x354
		::System::Boolean use_useRealDownSample; // 0x355
		::System::Boolean useRealDownSample; // 0x356
		::System::Boolean active_blurRadius; // 0x357
		::System::Boolean use_blurRadius; // 0x358
		::System::Single blurRadius; // 0x35C
		::System::Boolean active_doBloomAfterTAA; // 0x360
		::System::Boolean use_doBloomAfterTAA; // 0x361
		::System::Boolean doBloomAfterTAA; // 0x362
		::System::Boolean active_useSourceLumaMask; // 0x363
		::System::Boolean use_useSourceLumaMask; // 0x364
		::System::Boolean useSourceLumaMask; // 0x365
		::System::Boolean active_glareThreshold; // 0x366
		::System::Boolean use_glareThreshold; // 0x367
		::System::Single glareThreshold; // 0x368
		::System::Boolean active_glareThresholdForHDR; // 0x36C
		::System::Boolean use_glareThresholdForHDR; // 0x36D
		::System::Single glareThresholdForHDR; // 0x370
		::System::Boolean active_glareScaler; // 0x374
		::System::Boolean use_glareScaler; // 0x375
		::System::Single glareScaler; // 0x378
		::System::Boolean active_glareScalerForHDR; // 0x37C
		::System::Boolean use_glareScalerForHDR; // 0x37D
		::System::Single glareScalerForHDR; // 0x380
		::System::Boolean active_blurLevelWeights; // 0x384
		::System::Boolean use_blurLevelWeights; // 0x385
		::UnityEngine::Vector4 blurLevelWeights; // 0x388
		::System::Boolean active_secondaryGlareThreshold; // 0x398
		::System::Boolean use_secondaryGlareThreshold; // 0x399
		::System::Single secondaryGlareThreshold; // 0x39C
		::System::Boolean active_secondaryGlareContrast; // 0x3A0
		::System::Boolean use_secondaryGlareContrast; // 0x3A1
		::System::Single secondaryGlareContrast; // 0x3A4
		::System::Boolean active_secondaryGlareWeight; // 0x3A8
		::System::Boolean use_secondaryGlareWeight; // 0x3A9
		::System::Single secondaryGlareWeight; // 0x3AC
		::System::Boolean active_secondaryBlurRadius; // 0x3B0
		::System::Boolean use_secondaryBlurRadius; // 0x3B1
		::System::Int32 secondaryBlurRadius; // 0x3B4
		::System::Boolean active_quality; // 0x3B8
		::System::Boolean use_quality; // 0x3B9
		::UnityEngine::NAPRenderPipeline0::NapBloomQuality quality; // 0x3BC
		::System::Boolean active_blurLevelBufferHeights; // 0x3C0
		::System::Boolean use_blurLevelBufferHeights; // 0x3C1
		::UnityEngine::Vector4 blurLevelBufferHeights; // 0x3C4
		::System::Boolean active_secondaryBlurLevelBufferHeight; // 0x3D4
		::System::Boolean use_secondaryBlurLevelBufferHeight; // 0x3D5
		::System::Int32 secondaryBlurLevelBufferHeight; // 0x3D8
		::System::Boolean active_dirtTexture; // 0x3DC
		::System::Boolean use_dirtTexture; // 0x3DD
		::UnityEngine::Texture* dirtTexture; // 0x3E0
		::System::Boolean active_dirtIntensity; // 0x3E8
		::System::Boolean use_dirtIntensity; // 0x3E9
		::System::Single dirtIntensity; // 0x3EC
		::System::Boolean active_HasExtraDownsample; // 0x3F0
		::System::Boolean use_HasExtraDownsample; // 0x3F1
		::System::Boolean HasExtraDownsample; // 0x3F2
		::System::Boolean active_enableSpriteFlare; // 0x3F3
		::System::Boolean use_enableSpriteFlare; // 0x3F4
		::System::Boolean enableSpriteFlare; // 0x3F5
		::System::Boolean active_flareThreshold; // 0x3F6
		::System::Boolean use_flareThreshold; // 0x3F7
		::System::Single flareThreshold; // 0x3F8
		::System::Boolean active_areaThreshold; // 0x3FC
		::System::Boolean use_areaThreshold; // 0x3FD
		::System::Single areaThreshold; // 0x400
		::System::Boolean active_saturate; // 0x404
		::System::Boolean use_saturate; // 0x405
		::System::Single saturate; // 0x408
		::System::Boolean active_randomize; // 0x40C
		::System::Boolean use_randomize; // 0x40D
		::System::Single randomize; // 0x410
		::System::Boolean active_sizeClamp; // 0x414
		::System::Boolean use_sizeClamp; // 0x415
		::System::Single sizeClamp; // 0x418
		::System::Boolean active_intensityClamp; // 0x41C
		::System::Boolean use_intensityClamp; // 0x41D
		::System::Single intensityClamp; // 0x420
		::System::Boolean active_iterationNum; // 0x424
		::System::Boolean use_iterationNum; // 0x425
		::System::Int32 iterationNum; // 0x428
		::System::Boolean active_flareProfile; // 0x42C
		::System::Boolean use_flareProfile; // 0x42D
		::UnityEngine::NAPRenderPipeline0::FlareProfile_NativeSRP* flareProfile; // 0x430
		::System::Boolean active_hqUEBloomEnableRTXSingleControl; // 0x438
		::System::Boolean use_hqUEBloomEnableRTXSingleControl; // 0x439
		::System::Boolean hqUEBloomEnableRTXSingleControl; // 0x43A
		::System::Boolean active_hqUEBloomThresholdRTX; // 0x43B
		::System::Boolean use_hqUEBloomThresholdRTX; // 0x43C
		::System::Single hqUEBloomThresholdRTX; // 0x440
		::System::Boolean active_hqUEBloomIntensityRTX; // 0x444
		::System::Boolean use_hqUEBloomIntensityRTX; // 0x445
		::System::Single hqUEBloomIntensityRTX; // 0x448
		::System::Boolean active_hqBloomSize6RTX; // 0x44C
		::System::Boolean use_hqBloomSize6RTX; // 0x44D
		::System::Single hqBloomSize6RTX; // 0x450
		::System::Boolean active_hqBloomSize5RTX; // 0x454
		::System::Boolean use_hqBloomSize5RTX; // 0x455
		::System::Single hqBloomSize5RTX; // 0x458
		::System::Boolean active_hqBloomSize4RTX; // 0x45C
		::System::Boolean use_hqBloomSize4RTX; // 0x45D
		::System::Single hqBloomSize4RTX; // 0x460
		::System::Boolean active_hqBloomSize3RTX; // 0x464
		::System::Boolean use_hqBloomSize3RTX; // 0x465
		::System::Single hqBloomSize3RTX; // 0x468
		::System::Boolean active_hqBloomSize2RTX; // 0x46C
		::System::Boolean use_hqBloomSize2RTX; // 0x46D
		::System::Single hqBloomSize2RTX; // 0x470
		::System::Boolean active_hqBloomSize1RTX; // 0x474
		::System::Boolean use_hqBloomSize1RTX; // 0x475
		::System::Single hqBloomSize1RTX; // 0x478
		::System::Boolean active_hqUEBloomMaxThresholdRTX; // 0x47C
		::System::Boolean use_hqUEBloomMaxThresholdRTX; // 0x47D
		::System::Single hqUEBloomMaxThresholdRTX; // 0x480
		::System::Boolean active_hqBloomTint6RTX; // 0x484
		::System::Boolean use_hqBloomTint6RTX; // 0x485
		::System::Single hqBloomTint6RTX; // 0x488
		::System::Boolean active_hqBloomTint5RTX; // 0x48C
		::System::Boolean use_hqBloomTint5RTX; // 0x48D
		::System::Single hqBloomTint5RTX; // 0x490
		::System::Boolean active_hqBloomTint4RTX; // 0x494
		::System::Boolean use_hqBloomTint4RTX; // 0x495
		::System::Single hqBloomTint4RTX; // 0x498
		::System::Boolean active_hqBloomTint3RTX; // 0x49C
		::System::Boolean use_hqBloomTint3RTX; // 0x49D
		::System::Single hqBloomTint3RTX; // 0x4A0
		::System::Boolean active_hqBloomTint2RTX; // 0x4A4
		::System::Boolean use_hqBloomTint2RTX; // 0x4A5
		::System::Single hqBloomTint2RTX; // 0x4A8
		::System::Boolean active_hqBloomTint1RTX; // 0x4AC
		::System::Boolean use_hqBloomTint1RTX; // 0x4AD
		::System::Single hqBloomTint1RTX; // 0x4B0
		::UnityEngine::Rendering::Universal::NapBloom* _NapBloom; // 0x4B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::NapBloom* Method_4_402B55CB455D7182(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::NapBloom*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_402B55CB455D7182_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_8DC55F996A78F0A1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPBLOOMBEHAVIOUR_METHOD_4_8DC55F996A78F0A1_OFFSET))(this);
		}
	};
}
