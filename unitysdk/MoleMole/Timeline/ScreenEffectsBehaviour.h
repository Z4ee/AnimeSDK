#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenEffectsBehaviour_Struct_2_52AD02145F5FCE3A_31.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }

#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x18D15000)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x18D21330)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x18D21360)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_95F0B0E4A30C4E0A_OFFSET UNITYSDK_OFFSET(0x18D16EF0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_9A07A7A56A979E43_OFFSET UNITYSDK_OFFSET(0x18D16190)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x18D21350)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x18D21340)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18D16580)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18D1E7F0)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18D1F270)
#define MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18D211D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenEffectsBehaviour_TypeDefinitionIndex = 82849;

	class ScreenEffectsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenEffectsBehaviour_Struct_2_52AD02145F5FCE3A_31 _methodParm; // 0x18
		::System::Boolean behaviorEnabled; // 0x370
		::System::Boolean active_enabled; // 0x371
		::System::Boolean use_enabled; // 0x372
		::System::Boolean enabled; // 0x373
		::System::Boolean active_blendMode; // 0x374
		::System::Boolean use_blendMode; // 0x375
		::UnityEngine::Rendering::Universal::BlendModes blendMode; // 0x378
		::System::Boolean active_polarUVAspect; // 0x37C
		::System::Boolean use_polarUVAspect; // 0x37D
		::System::Single polarUVAspect; // 0x380
		::System::Boolean active_boundaryMode; // 0x384
		::System::Boolean use_boundaryMode; // 0x385
		::UnityEngine::Rendering::Universal::UvModes boundaryMode; // 0x388
		::System::Boolean active_boundaryUVAspect; // 0x38C
		::System::Boolean use_boundaryUVAspect; // 0x38D
		::System::Single boundaryUVAspect; // 0x390
		::System::Boolean active_boundary; // 0x394
		::System::Boolean use_boundary; // 0x395
		::System::Single boundary; // 0x398
		::System::Boolean active_feather; // 0x39C
		::System::Boolean use_feather; // 0x39D
		::System::Single feather; // 0x3A0
		::System::Boolean active_maxOpacity; // 0x3A4
		::System::Boolean use_maxOpacity; // 0x3A5
		::System::Single maxOpacity; // 0x3A8
		::System::Boolean active_invert; // 0x3AC
		::System::Boolean use_invert; // 0x3AD
		::System::Boolean invert; // 0x3AE
		::System::Boolean active_mainTex; // 0x3AF
		::System::Boolean use_mainTex; // 0x3B0
		::UnityEngine::Texture* mainTex; // 0x3B8
		::System::Boolean active_mainTexUvMode; // 0x3C0
		::System::Boolean use_mainTexUvMode; // 0x3C1
		::UnityEngine::Rendering::Universal::UvModes mainTexUvMode; // 0x3C4
		::System::Boolean active_mainTexScaleOffset; // 0x3C8
		::System::Boolean use_mainTexScaleOffset; // 0x3C9
		::UnityEngine::Vector4 mainTexScaleOffset; // 0x3CC
		::System::Boolean active_useRGBColorChannelMapping; // 0x3DC
		::System::Boolean use_useRGBColorChannelMapping; // 0x3DD
		::System::Boolean useRGBColorChannelMapping; // 0x3DE
		::System::Boolean active_colorChannelMapping; // 0x3DF
		::System::Boolean use_colorChannelMapping; // 0x3E0
		::UnityEngine::Rendering::Universal::ChannelMapping colorChannelMapping; // 0x3E4
		::System::Boolean active_alphaChannelMapping; // 0x3E8
		::System::Boolean use_alphaChannelMapping; // 0x3E9
		::UnityEngine::Rendering::Universal::ChannelMapping alphaChannelMapping; // 0x3EC
		::System::Boolean active_colorA; // 0x3F0
		::System::Boolean use_colorA; // 0x3F1
		::UnityEngine::Color colorA; // 0x3F4
		::System::Boolean active_colorB; // 0x404
		::System::Boolean use_colorB; // 0x405
		::UnityEngine::Color colorB; // 0x408
		::System::Boolean active_lerpBrightness; // 0x418
		::System::Boolean use_lerpBrightness; // 0x419
		::System::Single lerpBrightness; // 0x41C
		::System::Boolean active_uvMoveSpeed; // 0x420
		::System::Boolean use_uvMoveSpeed; // 0x421
		::UnityEngine::Vector2 uvMoveSpeed; // 0x424
		::System::Boolean active_maskTex; // 0x42C
		::System::Boolean use_maskTex; // 0x42D
		::UnityEngine::Texture* maskTex; // 0x430
		::System::Boolean active_maskTexUvMode; // 0x438
		::System::Boolean use_maskTexUvMode; // 0x439
		::UnityEngine::Rendering::Universal::UvModes maskTexUvMode; // 0x43C
		::System::Boolean active_maskTexScaleOffset; // 0x440
		::System::Boolean use_maskTexScaleOffset; // 0x441
		::UnityEngine::Vector4 maskTexScaleOffset; // 0x444
		::System::Boolean active_maskChannelMapping; // 0x454
		::System::Boolean use_maskChannelMapping; // 0x455
		::UnityEngine::Rendering::Universal::ChannelMapping maskChannelMapping; // 0x458
		::System::Boolean active_maskUvMoveSpeed; // 0x45C
		::System::Boolean use_maskUvMoveSpeed; // 0x45D
		::UnityEngine::Vector2 maskUvMoveSpeed; // 0x460
		::System::Boolean active_dissolveTex; // 0x468
		::System::Boolean use_dissolveTex; // 0x469
		::UnityEngine::Texture* dissolveTex; // 0x470
		::System::Boolean active_dissolveTexUvMode; // 0x478
		::System::Boolean use_dissolveTexUvMode; // 0x479
		::UnityEngine::Rendering::Universal::UvModes dissolveTexUvMode; // 0x47C
		::System::Boolean active_dissolveTexScaleOffset; // 0x480
		::System::Boolean use_dissolveTexScaleOffset; // 0x481
		::UnityEngine::Vector4 dissolveTexScaleOffset; // 0x484
		::System::Boolean active_dissolveChannel; // 0x494
		::System::Boolean use_dissolveChannel; // 0x495
		::UnityEngine::Rendering::Universal::ChannelMapping dissolveChannel; // 0x498
		::System::Boolean active_dissolveProgress; // 0x49C
		::System::Boolean use_dissolveProgress; // 0x49D
		::System::Single dissolveProgress; // 0x4A0
		::System::Boolean active_dissolveUVSpeed; // 0x4A4
		::System::Boolean use_dissolveUVSpeed; // 0x4A5
		::UnityEngine::Vector2 dissolveUVSpeed; // 0x4A8
		::System::Boolean active_dissolveRandomUV; // 0x4B0
		::System::Boolean use_dissolveRandomUV; // 0x4B1
		::System::Boolean dissolveRandomUV; // 0x4B2
		::System::Boolean active_dissolveAffects2Tone; // 0x4B3
		::System::Boolean use_dissolveAffects2Tone; // 0x4B4
		::System::Boolean dissolveAffects2Tone; // 0x4B5
		::System::Boolean active_distortionTex; // 0x4B6
		::System::Boolean use_distortionTex; // 0x4B7
		::UnityEngine::Texture* distortionTex; // 0x4B8
		::System::Boolean active_distortionTexUvMode; // 0x4C0
		::System::Boolean use_distortionTexUvMode; // 0x4C1
		::UnityEngine::Rendering::Universal::UvModes distortionTexUvMode; // 0x4C4
		::System::Boolean active_distortionTexScaleOffset; // 0x4C8
		::System::Boolean use_distortionTexScaleOffset; // 0x4C9
		::UnityEngine::Vector4 distortionTexScaleOffset; // 0x4CC
		::System::Boolean active_distortionChannel; // 0x4DC
		::System::Boolean use_distortionChannel; // 0x4DD
		::UnityEngine::Rendering::Universal::ChannelMapping distortionChannel; // 0x4E0
		::System::Boolean active_distortionUVSpeed; // 0x4E4
		::System::Boolean use_distortionUVSpeed; // 0x4E5
		::UnityEngine::Vector2 distortionUVSpeed; // 0x4E8
		::System::Boolean active_distortionRandomUV; // 0x4F0
		::System::Boolean use_distortionRandomUV; // 0x4F1
		::System::Boolean distortionRandomUV; // 0x4F2
		::System::Boolean active_distortionIntensity; // 0x4F3
		::System::Boolean use_distortionIntensity; // 0x4F4
		::System::Single distortionIntensity; // 0x4F8
		::System::Boolean active_dissolveDistortionIntensity; // 0x4FC
		::System::Boolean use_dissolveDistortionIntensity; // 0x4FD
		::System::Single dissolveDistortionIntensity; // 0x500
		::System::Boolean active_softRange; // 0x504
		::System::Boolean use_softRange; // 0x505
		::System::Single softRange; // 0x508
		::System::Boolean active_alphaCutoff; // 0x50C
		::System::Boolean use_alphaCutoff; // 0x50D
		::System::Single alphaCutoff; // 0x510
		::System::Boolean active_screenDistortion; // 0x514
		::System::Boolean use_screenDistortion; // 0x515
		::System::Boolean screenDistortion; // 0x516
		::System::Boolean active_screenDistortionTex; // 0x517
		::System::Boolean use_screenDistortionTex; // 0x518
		::UnityEngine::Texture* screenDistortionTex; // 0x520
		::System::Boolean active_screenDistortionTexUvMode; // 0x528
		::System::Boolean use_screenDistortionTexUvMode; // 0x529
		::UnityEngine::Rendering::Universal::UvModes screenDistortionTexUvMode; // 0x52C
		::System::Boolean active_screenDistortionTexScaleOffset; // 0x530
		::System::Boolean use_screenDistortionTexScaleOffset; // 0x531
		::UnityEngine::Vector4 screenDistortionTexScaleOffset; // 0x534
		::System::Boolean active_screenDistortionIntensity; // 0x544
		::System::Boolean use_screenDistortionIntensity; // 0x545
		::System::Single screenDistortionIntensity; // 0x548
		::System::Boolean active_screenDistortionUVSpeed; // 0x54C
		::System::Boolean use_screenDistortionUVSpeed; // 0x54D
		::UnityEngine::Vector2 screenDistortionUVSpeed; // 0x550
		::System::Boolean active_ignoreTimeScale; // 0x558
		::System::Boolean use_ignoreTimeScale; // 0x559
		::System::Boolean ignoreTimeScale; // 0x55A
		::System::Boolean active_characterGhost; // 0x55B
		::System::Boolean use_characterGhost; // 0x55C
		::System::Boolean characterGhost; // 0x55D
		::System::Boolean active_characterGhostBlitWithProxy; // 0x55E
		::System::Boolean use_characterGhostBlitWithProxy; // 0x55F
		::System::Boolean characterGhostBlitWithProxy; // 0x560
		::System::Boolean active_characterGhostDownSample; // 0x561
		::System::Boolean use_characterGhostDownSample; // 0x562
		::System::Int32 characterGhostDownSample; // 0x564
		::System::Boolean active_characterGhostDistortionTexture; // 0x568
		::System::Boolean use_characterGhostDistortionTexture; // 0x569
		::UnityEngine::Texture* characterGhostDistortionTexture; // 0x570
		::System::Boolean active_characterGhostDistortionUVScale; // 0x578
		::System::Boolean use_characterGhostDistortionUVScale; // 0x579
		::UnityEngine::Vector2 characterGhostDistortionUVScale; // 0x57C
		::System::Boolean active_characterGhostDistortionUVSpeed; // 0x584
		::System::Boolean use_characterGhostDistortionUVSpeed; // 0x585
		::UnityEngine::Vector2 characterGhostDistortionUVSpeed; // 0x588
		::System::Boolean active_characterGhostRadius; // 0x590
		::System::Boolean use_characterGhostRadius; // 0x591
		::System::Single characterGhostRadius; // 0x594
		::System::Boolean active_characterGhostIntensity; // 0x598
		::System::Boolean use_characterGhostIntensity; // 0x599
		::System::Single characterGhostIntensity; // 0x59C
		::System::Boolean active_characterGhostSelfMask; // 0x5A0
		::System::Boolean use_characterGhostSelfMask; // 0x5A1
		::System::Boolean characterGhostSelfMask; // 0x5A2
		::System::Boolean active_useScreenSpaceRadius; // 0x5A3
		::System::Boolean use_useScreenSpaceRadius; // 0x5A4
		::System::Boolean useScreenSpaceRadius; // 0x5A5
		::System::Boolean active_characterGhostTargetPosition; // 0x5A6
		::System::Boolean use_characterGhostTargetPosition; // 0x5A7
		::UnityEngine::Vector3 characterGhostTargetPosition; // 0x5A8
		::System::Boolean active_characterGhostLayer; // 0x5B4
		::System::Boolean use_characterGhostLayer; // 0x5B5
		::System::Int32 characterGhostLayer; // 0x5B8
		::System::Boolean active_layer1Direction; // 0x5BC
		::System::Boolean use_layer1Direction; // 0x5BD
		::System::Single layer1Direction; // 0x5C0
		::System::Boolean active_layer1Radius; // 0x5C4
		::System::Boolean use_layer1Radius; // 0x5C5
		::System::Single layer1Radius; // 0x5C8
		::System::Boolean active_layer1Intensity; // 0x5CC
		::System::Boolean use_layer1Intensity; // 0x5CD
		::System::Single layer1Intensity; // 0x5D0
		::System::Boolean active_layer1Color; // 0x5D4
		::System::Boolean use_layer1Color; // 0x5D5
		::UnityEngine::Color layer1Color; // 0x5D8
		::System::Boolean active_layer2Direction; // 0x5E8
		::System::Boolean use_layer2Direction; // 0x5E9
		::System::Single layer2Direction; // 0x5EC
		::System::Boolean active_layer2Radius; // 0x5F0
		::System::Boolean use_layer2Radius; // 0x5F1
		::System::Single layer2Radius; // 0x5F4
		::System::Boolean active_layer2Intensity; // 0x5F8
		::System::Boolean use_layer2Intensity; // 0x5F9
		::System::Single layer2Intensity; // 0x5FC
		::System::Boolean active_layer2Color; // 0x600
		::System::Boolean use_layer2Color; // 0x601
		::UnityEngine::Color layer2Color; // 0x604
		::System::Boolean active_layer3Direction; // 0x614
		::System::Boolean use_layer3Direction; // 0x615
		::System::Single layer3Direction; // 0x618
		::System::Boolean active_layer3Radius; // 0x61C
		::System::Boolean use_layer3Radius; // 0x61D
		::System::Single layer3Radius; // 0x620
		::System::Boolean active_layer3Intensity; // 0x624
		::System::Boolean use_layer3Intensity; // 0x625
		::System::Single layer3Intensity; // 0x628
		::System::Boolean active_layer3Color; // 0x62C
		::System::Boolean use_layer3Color; // 0x62D
		::UnityEngine::Color layer3Color; // 0x630
		::System::Boolean active_layer4Direction; // 0x640
		::System::Boolean use_layer4Direction; // 0x641
		::System::Single layer4Direction; // 0x644
		::System::Boolean active_layer4Radius; // 0x648
		::System::Boolean use_layer4Radius; // 0x649
		::System::Single layer4Radius; // 0x64C
		::System::Boolean active_layer4Intensity; // 0x650
		::System::Boolean use_layer4Intensity; // 0x651
		::System::Single layer4Intensity; // 0x654
		::System::Boolean active_layer4Color; // 0x658
		::System::Boolean use_layer4Color; // 0x659
		::UnityEngine::Color layer4Color; // 0x65C
		::System::Boolean active_layer5Direction; // 0x66C
		::System::Boolean use_layer5Direction; // 0x66D
		::System::Single layer5Direction; // 0x670
		::System::Boolean active_layer5Radius; // 0x674
		::System::Boolean use_layer5Radius; // 0x675
		::System::Single layer5Radius; // 0x678
		::System::Boolean active_layer5Intensity; // 0x67C
		::System::Boolean use_layer5Intensity; // 0x67D
		::System::Single layer5Intensity; // 0x680
		::System::Boolean active_layer5Color; // 0x684
		::System::Boolean use_layer5Color; // 0x685
		::UnityEngine::Color layer5Color; // 0x688
		::System::Boolean active_characterGhostColor; // 0x698
		::System::Boolean use_characterGhostColor; // 0x699
		::UnityEngine::Color characterGhostColor; // 0x69C
		::System::Boolean active_characterGhostFresnel; // 0x6AC
		::System::Boolean use_characterGhostFresnel; // 0x6AD
		::System::Boolean characterGhostFresnel; // 0x6AE
		::System::Boolean active_characterGhostFresnelPower; // 0x6AF
		::System::Boolean use_characterGhostFresnelPower; // 0x6B0
		::System::Single characterGhostFresnelPower; // 0x6B4
		::System::Boolean active_characterGhostSingleColor; // 0x6B8
		::System::Boolean use_characterGhostSingleColor; // 0x6B9
		::System::Boolean characterGhostSingleColor; // 0x6BA
		::System::Boolean active_characterGhostMinIntensity; // 0x6BB
		::System::Boolean use_characterGhostMinIntensity; // 0x6BC
		::System::Single characterGhostMinIntensity; // 0x6C0
		::System::Boolean active_ghostDepthCulling; // 0x6C4
		::System::Boolean use_ghostDepthCulling; // 0x6C5
		::System::Boolean ghostDepthCulling; // 0x6C6
		::UnityEngine::Rendering::Universal::ScreenEffects* _ScreenEffects; // 0x6C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::ScreenEffects* Method_4_9A07A7A56A979E43(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenEffects*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_9A07A7A56A979E43_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_95F0B0E4A30C4E0A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_95F0B0E4A30C4E0A_OFFSET))(this);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENEFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
