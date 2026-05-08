#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/VREffectsBehaviour_Struct_2_52AD02145F5FCE3A_24.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x10E56C00)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x17E22410)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_47EA092FA95FD8DA_OFFSET UNITYSDK_OFFSET(0x17E13D40)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x17E22400)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_95F0B0E4A30C4E0A_OFFSET UNITYSDK_OFFSET(0x17E14130)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x17E22420)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x17E223F0)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10E58D60)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17E12E10)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x17E1F220)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x17E220D0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VREffectsBehaviour_TypeDefinitionIndex = 76738;

	class VREffectsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::VREffectsBehaviour_Struct_2_52AD02145F5FCE3A_24 _methodParm; // 0x18
		::System::Boolean enabled; // 0x540
		::System::Boolean active_useStencil; // 0x541
		::System::Boolean use_useStencil; // 0x542
		::System::Boolean useStencil; // 0x543
		::System::Boolean active_gridOn; // 0x544
		::System::Boolean use_gridOn; // 0x545
		::System::Boolean gridOn; // 0x546
		::System::Boolean active_gridDistance; // 0x547
		::System::Boolean use_gridDistance; // 0x548
		::System::Single gridDistance; // 0x54C
		::System::Boolean active_gridBlendScanLine; // 0x550
		::System::Boolean use_gridBlendScanLine; // 0x551
		::System::Boolean gridBlendScanLine; // 0x552
		::System::Boolean active_gridColor; // 0x553
		::System::Boolean use_gridColor; // 0x554
		::UnityEngine::Color gridColor; // 0x558
		::System::Boolean active_gridPower; // 0x568
		::System::Boolean use_gridPower; // 0x569
		::System::Single gridPower; // 0x56C
		::System::Boolean active_groundYPos; // 0x570
		::System::Boolean use_groundYPos; // 0x571
		::System::Single groundYPos; // 0x574
		::System::Boolean active_screenSpaceGrid; // 0x578
		::System::Boolean use_screenSpaceGrid; // 0x579
		::System::Boolean screenSpaceGrid; // 0x57A
		::System::Boolean active_screenSpaceGridScale; // 0x57B
		::System::Boolean use_screenSpaceGridScale; // 0x57C
		::System::Single screenSpaceGridScale; // 0x580
		::System::Boolean active_screenSpaceGridWidth; // 0x584
		::System::Boolean use_screenSpaceGridWidth; // 0x585
		::System::Single screenSpaceGridWidth; // 0x588
		::System::Boolean active_outlineOn; // 0x58C
		::System::Boolean use_outlineOn; // 0x58D
		::System::Boolean outlineOn; // 0x58E
		::System::Boolean active_outlineBlendScanLine; // 0x58F
		::System::Boolean use_outlineBlendScanLine; // 0x590
		::System::Boolean outlineBlendScanLine; // 0x591
		::System::Boolean active_outlineOpacity; // 0x592
		::System::Boolean use_outlineOpacity; // 0x593
		::System::Single outlineOpacity; // 0x594
		::System::Boolean active_outlineDiffOffset; // 0x598
		::System::Boolean use_outlineDiffOffset; // 0x599
		::System::Single outlineDiffOffset; // 0x59C
		::System::Boolean active_outlineDepthThreshold; // 0x5A0
		::System::Boolean use_outlineDepthThreshold; // 0x5A1
		::System::Single outlineDepthThreshold; // 0x5A4
		::System::Boolean active_outlineNormalThreshold; // 0x5A8
		::System::Boolean use_outlineNormalThreshold; // 0x5A9
		::System::Single outlineNormalThreshold; // 0x5AC
		::System::Boolean active_outlineNormalThresholdScale; // 0x5B0
		::System::Boolean use_outlineNormalThresholdScale; // 0x5B1
		::System::Single outlineNormalThresholdScale; // 0x5B4
		::System::Boolean active_outlineColor; // 0x5B8
		::System::Boolean use_outlineColor; // 0x5B9
		::UnityEngine::Color outlineColor; // 0x5BC
		::System::Boolean active_textureSheetOn; // 0x5CC
		::System::Boolean use_textureSheetOn; // 0x5CD
		::System::Boolean textureSheetOn; // 0x5CE
		::System::Boolean active_textureSheetTex; // 0x5CF
		::System::Boolean use_textureSheetTex; // 0x5D0
		::UnityEngine::Texture* textureSheetTex; // 0x5D8
		::System::Boolean active_textureSheetXY; // 0x5E0
		::System::Boolean use_textureSheetXY; // 0x5E1
		::UnityEngine::Vector2 textureSheetXY; // 0x5E4
		::System::Boolean active_textureSheetIndex; // 0x5EC
		::System::Boolean use_textureSheetIndex; // 0x5ED
		::System::Int32 textureSheetIndex; // 0x5F0
		::System::Boolean active_textureSheetColor; // 0x5F4
		::System::Boolean use_textureSheetColor; // 0x5F5
		::UnityEngine::Color textureSheetColor; // 0x5F8
		::System::Boolean active_scanType; // 0x608
		::System::Boolean use_scanType; // 0x609
		::UnityEngine::Rendering::Universal::ScanType scanType; // 0x60C
		::System::Boolean active_useCustomScanDirection; // 0x610
		::System::Boolean use_useCustomScanDirection; // 0x611
		::System::Boolean useCustomScanDirection; // 0x612
		::System::Boolean active_customScanDirection; // 0x613
		::System::Boolean use_customScanDirection; // 0x614
		::System::Single customScanDirection; // 0x618
		::System::Boolean active_scanColor0End; // 0x61C
		::System::Boolean use_scanColor0End; // 0x61D
		::UnityEngine::Color scanColor0End; // 0x620
		::System::Boolean active_scanColor1End; // 0x630
		::System::Boolean use_scanColor1End; // 0x631
		::UnityEngine::Color scanColor1End; // 0x634
		::System::Boolean active_scanColor2End; // 0x644
		::System::Boolean use_scanColor2End; // 0x645
		::UnityEngine::Color scanColor2End; // 0x648
		::System::Boolean active_scanColor3End; // 0x658
		::System::Boolean use_scanColor3End; // 0x659
		::UnityEngine::Color scanColor3End; // 0x65C
		::System::Boolean active_lensDistortionIntensity; // 0x66C
		::System::Boolean use_lensDistortionIntensity; // 0x66D
		::System::Single lensDistortionIntensity; // 0x670
		::System::Boolean active_lensDistortionXMultiplier; // 0x674
		::System::Boolean use_lensDistortionXMultiplier; // 0x675
		::System::Single lensDistortionXMultiplier; // 0x678
		::System::Boolean active_lensDistortionYMultiplier; // 0x67C
		::System::Boolean use_lensDistortionYMultiplier; // 0x67D
		::System::Single lensDistortionYMultiplier; // 0x680
		::System::Boolean active_lensDistortionCenter; // 0x684
		::System::Boolean use_lensDistortionCenter; // 0x685
		::UnityEngine::Vector2 lensDistortionCenter; // 0x688
		::System::Boolean active_lensDistortionScale; // 0x690
		::System::Boolean use_lensDistortionScale; // 0x691
		::System::Single lensDistortionScale; // 0x694
		::System::Boolean active_enable; // 0x698
		::System::Boolean use_enable; // 0x699
		::System::Boolean enable; // 0x69A
		::System::Boolean active_hue; // 0x69B
		::System::Boolean use_hue; // 0x69C
		::System::Single hue; // 0x6A0
		::System::Boolean active_saturation; // 0x6A4
		::System::Boolean use_saturation; // 0x6A5
		::System::Single saturation; // 0x6A8
		::System::Boolean active_brightness; // 0x6AC
		::System::Boolean use_brightness; // 0x6AD
		::System::Single brightness; // 0x6B0
		::System::Boolean active_contrast; // 0x6B4
		::System::Boolean use_contrast; // 0x6B5
		::System::Single contrast; // 0x6B8
		::System::Boolean active_contrastMiddlePoint; // 0x6BC
		::System::Boolean use_contrastMiddlePoint; // 0x6BD
		::System::Single contrastMiddlePoint; // 0x6C0
		::System::Boolean active_colorTintNear; // 0x6C4
		::System::Boolean use_colorTintNear; // 0x6C5
		::UnityEngine::Color colorTintNear; // 0x6C8
		::System::Boolean active_colorTintFar; // 0x6D8
		::System::Boolean use_colorTintFar; // 0x6D9
		::UnityEngine::Color colorTintFar; // 0x6DC
		::System::Boolean active_colorTintStart; // 0x6EC
		::System::Boolean use_colorTintStart; // 0x6ED
		::System::Single colorTintStart; // 0x6F0
		::System::Boolean active_colorTintEnd; // 0x6F4
		::System::Boolean use_colorTintEnd; // 0x6F5
		::System::Single colorTintEnd; // 0x6F8
		::System::Boolean active_scanlineWidth; // 0x6FC
		::System::Boolean use_scanlineWidth; // 0x6FD
		::System::Single scanlineWidth; // 0x700
		::System::Boolean active_scanlineContrast; // 0x704
		::System::Boolean use_scanlineContrast; // 0x705
		::System::Single scanlineContrast; // 0x708
		::System::Boolean active_scanlineDistortion; // 0x70C
		::System::Boolean use_scanlineDistortion; // 0x70D
		::System::Single scanlineDistortion; // 0x710
		::System::Boolean active_sliceWidth; // 0x714
		::System::Boolean use_sliceWidth; // 0x715
		::System::Single sliceWidth; // 0x718
		::System::Boolean active_sliceAngle; // 0x71C
		::System::Boolean use_sliceAngle; // 0x71D
		::System::Single sliceAngle; // 0x720
		::System::Boolean active_reverse; // 0x724
		::System::Boolean use_reverse; // 0x725
		::System::Boolean reverse; // 0x726
		::System::Boolean active_sliceOffset; // 0x727
		::System::Boolean use_sliceOffset; // 0x728
		::System::Single sliceOffset; // 0x72C
		::System::Boolean active_sliceColorA; // 0x730
		::System::Boolean use_sliceColorA; // 0x731
		::UnityEngine::Color sliceColorA; // 0x734
		::System::Boolean active_sliceColorAMode; // 0x744
		::System::Boolean use_sliceColorAMode; // 0x745
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorAMode; // 0x748
		::System::Boolean active_sliceColorB; // 0x74C
		::System::Boolean use_sliceColorB; // 0x74D
		::UnityEngine::Color sliceColorB; // 0x750
		::System::Boolean active_sliceColorBMode; // 0x760
		::System::Boolean use_sliceColorBMode; // 0x761
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorBMode; // 0x764
		::System::Boolean active_scanStart0; // 0x768
		::System::Boolean use_scanStart0; // 0x769
		::System::Single scanStart0; // 0x76C
		::System::Boolean active_scanEnd0; // 0x770
		::System::Boolean use_scanEnd0; // 0x771
		::System::Single scanEnd0; // 0x774
		::System::Boolean active_scanStart0Soft; // 0x778
		::System::Boolean use_scanStart0Soft; // 0x779
		::System::Single scanStart0Soft; // 0x77C
		::System::Boolean active_scanEnd0Soft; // 0x780
		::System::Boolean use_scanEnd0Soft; // 0x781
		::System::Single scanEnd0Soft; // 0x784
		::System::Boolean active_scanColor0; // 0x788
		::System::Boolean use_scanColor0; // 0x789
		::UnityEngine::Color scanColor0; // 0x78C
		::System::Boolean active_scanColor0Mode; // 0x79C
		::System::Boolean use_scanColor0Mode; // 0x79D
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor0Mode; // 0x7A0
		::System::Boolean active_scanStart1; // 0x7A4
		::System::Boolean use_scanStart1; // 0x7A5
		::System::Single scanStart1; // 0x7A8
		::System::Boolean active_scanEnd1; // 0x7AC
		::System::Boolean use_scanEnd1; // 0x7AD
		::System::Single scanEnd1; // 0x7B0
		::System::Boolean active_scanStart1Soft; // 0x7B4
		::System::Boolean use_scanStart1Soft; // 0x7B5
		::System::Single scanStart1Soft; // 0x7B8
		::System::Boolean active_scanEnd1Soft; // 0x7BC
		::System::Boolean use_scanEnd1Soft; // 0x7BD
		::System::Single scanEnd1Soft; // 0x7C0
		::System::Boolean active_scanColor1; // 0x7C4
		::System::Boolean use_scanColor1; // 0x7C5
		::UnityEngine::Color scanColor1; // 0x7C8
		::System::Boolean active_scanColor1Mode; // 0x7D8
		::System::Boolean use_scanColor1Mode; // 0x7D9
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor1Mode; // 0x7DC
		::System::Boolean active_scanStart2; // 0x7E0
		::System::Boolean use_scanStart2; // 0x7E1
		::System::Single scanStart2; // 0x7E4
		::System::Boolean active_scanEnd2; // 0x7E8
		::System::Boolean use_scanEnd2; // 0x7E9
		::System::Single scanEnd2; // 0x7EC
		::System::Boolean active_scanStart2Soft; // 0x7F0
		::System::Boolean use_scanStart2Soft; // 0x7F1
		::System::Single scanStart2Soft; // 0x7F4
		::System::Boolean active_scanEnd2Soft; // 0x7F8
		::System::Boolean use_scanEnd2Soft; // 0x7F9
		::System::Single scanEnd2Soft; // 0x7FC
		::System::Boolean active_scanColor2; // 0x800
		::System::Boolean use_scanColor2; // 0x801
		::UnityEngine::Color scanColor2; // 0x804
		::System::Boolean active_scanColor2Mode; // 0x814
		::System::Boolean use_scanColor2Mode; // 0x815
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor2Mode; // 0x818
		::System::Boolean active_scanStart3; // 0x81C
		::System::Boolean use_scanStart3; // 0x81D
		::System::Single scanStart3; // 0x820
		::System::Boolean active_scanEnd3; // 0x824
		::System::Boolean use_scanEnd3; // 0x825
		::System::Single scanEnd3; // 0x828
		::System::Boolean active_scanStart3Soft; // 0x82C
		::System::Boolean use_scanStart3Soft; // 0x82D
		::System::Single scanStart3Soft; // 0x830
		::System::Boolean active_scanEnd3Soft; // 0x834
		::System::Boolean use_scanEnd3Soft; // 0x835
		::System::Single scanEnd3Soft; // 0x838
		::System::Boolean active_scanColor3; // 0x83C
		::System::Boolean use_scanColor3; // 0x83D
		::UnityEngine::Color scanColor3; // 0x840
		::System::Boolean active_scanColor3Mode; // 0x850
		::System::Boolean use_scanColor3Mode; // 0x851
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor3Mode; // 0x854
		::System::Boolean active_uvOffsetR; // 0x858
		::System::Boolean use_uvOffsetR; // 0x859
		::UnityEngine::Vector2 uvOffsetR; // 0x85C
		::System::Boolean active_colorR; // 0x864
		::System::Boolean use_colorR; // 0x865
		::UnityEngine::Color colorR; // 0x868
		::System::Boolean active_uvOffsetG; // 0x878
		::System::Boolean use_uvOffsetG; // 0x879
		::UnityEngine::Vector2 uvOffsetG; // 0x87C
		::System::Boolean active_colorG; // 0x884
		::System::Boolean use_colorG; // 0x885
		::UnityEngine::Color colorG; // 0x888
		::System::Boolean active_uvOffsetB; // 0x898
		::System::Boolean use_uvOffsetB; // 0x899
		::UnityEngine::Vector2 uvOffsetB; // 0x89C
		::System::Boolean active_colorB; // 0x8A4
		::System::Boolean use_colorB; // 0x8A5
		::UnityEngine::Color colorB; // 0x8A8
		::System::Boolean active_fadeSourceImage; // 0x8B8
		::System::Boolean use_fadeSourceImage; // 0x8B9
		::System::Single fadeSourceImage; // 0x8BC
		::System::Boolean active_outlineDistortion; // 0x8C0
		::System::Boolean use_outlineDistortion; // 0x8C1
		::System::Boolean outlineDistortion; // 0x8C2
		::System::Boolean active_outlineDistortionTex; // 0x8C3
		::System::Boolean use_outlineDistortionTex; // 0x8C4
		::UnityEngine::Texture* outlineDistortionTex; // 0x8C8
		::System::Boolean active_outlineDistortionTexTiling; // 0x8D0
		::System::Boolean use_outlineDistortionTexTiling; // 0x8D1
		::UnityEngine::Vector2 outlineDistortionTexTiling; // 0x8D4
		::System::Boolean active_outlineDistortionTexOffset; // 0x8DC
		::System::Boolean use_outlineDistortionTexOffset; // 0x8DD
		::UnityEngine::Vector2 outlineDistortionTexOffset; // 0x8E0
		::System::Boolean active_outlineDistortionUVSpeed; // 0x8E8
		::System::Boolean use_outlineDistortionUVSpeed; // 0x8E9
		::UnityEngine::Vector2 outlineDistortionUVSpeed; // 0x8EC
		::System::Boolean active_outlineDistortionOffset; // 0x8F4
		::System::Boolean use_outlineDistortionOffset; // 0x8F5
		::UnityEngine::Vector2 outlineDistortionOffset; // 0x8F8
		::System::Boolean active_outlineDistortionIntensity; // 0x900
		::System::Boolean use_outlineDistortionIntensity; // 0x901
		::UnityEngine::Vector2 outlineDistortionIntensity; // 0x904
		::System::Boolean active_scanMaskType; // 0x90C
		::System::Boolean use_scanMaskType; // 0x90D
		::UnityEngine::Rendering::Universal::ScanMaskType scanMaskType; // 0x910
		::System::Boolean active_scanMaskTex; // 0x914
		::System::Boolean use_scanMaskTex; // 0x915
		::UnityEngine::Texture* scanMaskTex; // 0x918
		::System::Boolean active_scanMaskTexChannel; // 0x920
		::System::Boolean use_scanMaskTexChannel; // 0x921
		::UnityEngine::Rendering::Universal::ChannelMapping scanMaskTexChannel; // 0x924
		::System::Boolean active_scanMaskTexTiling; // 0x928
		::System::Boolean use_scanMaskTexTiling; // 0x929
		::UnityEngine::Vector2 scanMaskTexTiling; // 0x92C
		::System::Boolean active_scanMaskTexOffset; // 0x934
		::System::Boolean use_scanMaskTexOffset; // 0x935
		::UnityEngine::Vector2 scanMaskTexOffset; // 0x938
		::System::Boolean active_scanMaskTexUVSpeed; // 0x940
		::System::Boolean use_scanMaskTexUVSpeed; // 0x941
		::UnityEngine::Vector2 scanMaskTexUVSpeed; // 0x944
		::System::Boolean active_scanMaskBaseY; // 0x94C
		::System::Boolean use_scanMaskBaseY; // 0x94D
		::System::Single scanMaskBaseY; // 0x950
		::System::Boolean active_scanMaskYRange; // 0x954
		::System::Boolean use_scanMaskYRange; // 0x955
		::System::Single scanMaskYRange; // 0x958
		::System::Boolean active_scanMaskIntensity0; // 0x95C
		::System::Boolean use_scanMaskIntensity0; // 0x95D
		::System::Single scanMaskIntensity0; // 0x960
		::System::Boolean active_scanMaskIntensity1; // 0x964
		::System::Boolean use_scanMaskIntensity1; // 0x965
		::System::Single scanMaskIntensity1; // 0x968
		::System::Boolean active_scanMaskIntensity2; // 0x96C
		::System::Boolean use_scanMaskIntensity2; // 0x96D
		::System::Single scanMaskIntensity2; // 0x970
		::System::Boolean active_scanMaskIntensity3; // 0x974
		::System::Boolean use_scanMaskIntensity3; // 0x975
		::System::Single scanMaskIntensity3; // 0x978
		::System::Boolean active_keepInFrontForUberPost; // 0x97C
		::System::Boolean use_keepInFrontForUberPost; // 0x97D
		::System::Boolean keepInFrontForUberPost; // 0x97E
		::System::Boolean active_enableDistanceDistortionColorization; // 0x97F
		::System::Boolean use_enableDistanceDistortionColorization; // 0x980
		::System::Boolean enableDistanceDistortionColorization; // 0x981
		::System::Boolean active_distanceDistortionTexture; // 0x982
		::System::Boolean use_distanceDistortionTexture; // 0x983
		::UnityEngine::Texture* distanceDistortionTexture; // 0x988
		::System::Boolean active_distanceColorizeTexture; // 0x990
		::System::Boolean use_distanceColorizeTexture; // 0x991
		::UnityEngine::Texture* distanceColorizeTexture; // 0x998
		::System::Boolean active_distanceDistortionColor; // 0x9A0
		::System::Boolean use_distanceDistortionColor; // 0x9A1
		::UnityEngine::Color distanceDistortionColor; // 0x9A4
		::System::Boolean active_distanceDistortionStart; // 0x9B4
		::System::Boolean use_distanceDistortionStart; // 0x9B5
		::System::Single distanceDistortionStart; // 0x9B8
		::System::Boolean active_distanceDistortionEnd; // 0x9BC
		::System::Boolean use_distanceDistortionEnd; // 0x9BD
		::System::Single distanceDistortionEnd; // 0x9C0
		::System::Boolean active_distanceDistortionFadeRange; // 0x9C4
		::System::Boolean use_distanceDistortionFadeRange; // 0x9C5
		::System::Single distanceDistortionFadeRange; // 0x9C8
		::System::Boolean active_distanceDistortionOffsetSpeed; // 0x9CC
		::System::Boolean use_distanceDistortionOffsetSpeed; // 0x9CD
		::UnityEngine::Vector3 distanceDistortionOffsetSpeed; // 0x9D0
		::System::Boolean active_distanceDistortionTiling; // 0x9DC
		::System::Boolean use_distanceDistortionTiling; // 0x9DD
		::System::Single distanceDistortionTiling; // 0x9E0
		::System::Boolean active_distanceDistortionIntensity; // 0x9E4
		::System::Boolean use_distanceDistortionIntensity; // 0x9E5
		::System::Single distanceDistortionIntensity; // 0x9E8
		::System::Boolean active_distanceColorizationOffsetSpeed; // 0x9EC
		::System::Boolean use_distanceColorizationOffsetSpeed; // 0x9ED
		::UnityEngine::Vector3 distanceColorizationOffsetSpeed; // 0x9F0
		::System::Boolean active_distanceColorizationTiling; // 0x9FC
		::System::Boolean use_distanceColorizationTiling; // 0x9FD
		::System::Single distanceColorizationTiling; // 0xA00
		::System::Boolean active_distanceDistortionHeightStart; // 0xA04
		::System::Boolean use_distanceDistortionHeightStart; // 0xA05
		::System::Single distanceDistortionHeightStart; // 0xA08
		::System::Boolean active_distanceDistortionHeightEnd; // 0xA0C
		::System::Boolean use_distanceDistortionHeightEnd; // 0xA0D
		::System::Single distanceDistortionHeightEnd; // 0xA10
		::System::Boolean active_distanceDistortionHeightFadeRange; // 0xA14
		::System::Boolean use_distanceDistortionHeightFadeRange; // 0xA15
		::System::Single distanceDistortionHeightFadeRange; // 0xA18
		::System::Boolean active_distanceDistortionBlendMode; // 0xA1C
		::System::Boolean use_distanceDistortionBlendMode; // 0xA1D
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode distanceDistortionBlendMode; // 0xA20
		::System::Boolean active_distanceColorizationEffect; // 0xA24
		::System::Boolean use_distanceColorizationEffect; // 0xA25
		::System::Single distanceColorizationEffect; // 0xA28
		::System::Boolean active_scanCustomCenterPosition; // 0xA2C
		::System::Boolean use_scanCustomCenterPosition; // 0xA2D
		::UnityEngine::Vector3 scanCustomCenterPosition; // 0xA30
		::System::Boolean active_outlineInUberShader; // 0xA3C
		::System::Boolean use_outlineInUberShader; // 0xA3D
		::System::Boolean outlineInUberShader; // 0xA3E
		::System::Boolean active_outlineScreenSpaceMaskTex; // 0xA3F
		::System::Boolean use_outlineScreenSpaceMaskTex; // 0xA40
		::UnityEngine::Texture* outlineScreenSpaceMaskTex; // 0xA48
		::System::Boolean active_applyBeforeUberPost; // 0xA50
		::System::Boolean use_applyBeforeUberPost; // 0xA51
		::System::Boolean applyBeforeUberPost; // 0xA52
		::System::Boolean active_outlineScreenSpaceMaskTexScaleOffset; // 0xA53
		::System::Boolean use_outlineScreenSpaceMaskTexScaleOffset; // 0xA54
		::UnityEngine::Vector4 outlineScreenSpaceMaskTexScaleOffset; // 0xA58
		::UnityEngine::Rendering::Universal::VREffects* _VREffects; // 0xA68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::VREffects* Method_4_47EA092FA95FD8DA(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::VREffects*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_47EA092FA95FD8DA_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_95F0B0E4A30C4E0A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_95F0B0E4A30C4E0A_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
