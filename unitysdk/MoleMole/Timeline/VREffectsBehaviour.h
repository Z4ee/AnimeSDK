#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/VREffectsBehaviour_Struct_2_52AD02145F5FCE3A_32.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanlineBlendMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1B6B7280)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0x1B6CA580)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_47EA092FA95FD8DA_OFFSET UNITYSDK_OFFSET(0x1B6B9520)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0x1B6CA5A0)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_68160D9981ECFFF0_OFFSET UNITYSDK_OFFSET(0x1B6BA7F0)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0x1B6CA5B0)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0x1B6CA590)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B6B9910)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1B6C6190)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1B6C7190)
#define MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6CA250)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int VREffectsBehaviour_TypeDefinitionIndex = 87804;

	class VREffectsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::VREffectsBehaviour_Struct_2_52AD02145F5FCE3A_32 _methodParm; // 0x18
		::System::Boolean enabled; // 0x578
		::System::Boolean active_useStencil; // 0x579
		::System::Boolean use_useStencil; // 0x57A
		::System::Boolean useStencil; // 0x57B
		::System::Boolean active_gridOn; // 0x57C
		::System::Boolean use_gridOn; // 0x57D
		::System::Boolean gridOn; // 0x57E
		::System::Boolean active_gridDistance; // 0x57F
		::System::Boolean use_gridDistance; // 0x580
		::System::Single gridDistance; // 0x584
		::System::Boolean active_gridBlendScanLine; // 0x588
		::System::Boolean use_gridBlendScanLine; // 0x589
		::System::Boolean gridBlendScanLine; // 0x58A
		::System::Boolean active_gridColor; // 0x58B
		::System::Boolean use_gridColor; // 0x58C
		::UnityEngine::Color gridColor; // 0x590
		::System::Boolean active_gridPower; // 0x5A0
		::System::Boolean use_gridPower; // 0x5A1
		::System::Single gridPower; // 0x5A4
		::System::Boolean active_groundYPos; // 0x5A8
		::System::Boolean use_groundYPos; // 0x5A9
		::System::Single groundYPos; // 0x5AC
		::System::Boolean active_screenSpaceGrid; // 0x5B0
		::System::Boolean use_screenSpaceGrid; // 0x5B1
		::System::Boolean screenSpaceGrid; // 0x5B2
		::System::Boolean active_screenSpaceGridScale; // 0x5B3
		::System::Boolean use_screenSpaceGridScale; // 0x5B4
		::System::Single screenSpaceGridScale; // 0x5B8
		::System::Boolean active_screenSpaceGridWidth; // 0x5BC
		::System::Boolean use_screenSpaceGridWidth; // 0x5BD
		::System::Single screenSpaceGridWidth; // 0x5C0
		::System::Boolean active_outlineOn; // 0x5C4
		::System::Boolean use_outlineOn; // 0x5C5
		::System::Boolean outlineOn; // 0x5C6
		::System::Boolean active_outlineBlendScanLine; // 0x5C7
		::System::Boolean use_outlineBlendScanLine; // 0x5C8
		::System::Boolean outlineBlendScanLine; // 0x5C9
		::System::Boolean active_outlineOpacity; // 0x5CA
		::System::Boolean use_outlineOpacity; // 0x5CB
		::System::Single outlineOpacity; // 0x5CC
		::System::Boolean active_outlineDiffOffset; // 0x5D0
		::System::Boolean use_outlineDiffOffset; // 0x5D1
		::System::Single outlineDiffOffset; // 0x5D4
		::System::Boolean active_outlineDepthThreshold; // 0x5D8
		::System::Boolean use_outlineDepthThreshold; // 0x5D9
		::System::Single outlineDepthThreshold; // 0x5DC
		::System::Boolean active_outlineNormalThreshold; // 0x5E0
		::System::Boolean use_outlineNormalThreshold; // 0x5E1
		::System::Single outlineNormalThreshold; // 0x5E4
		::System::Boolean active_outlineNormalThresholdScale; // 0x5E8
		::System::Boolean use_outlineNormalThresholdScale; // 0x5E9
		::System::Single outlineNormalThresholdScale; // 0x5EC
		::System::Boolean active_outlineColor; // 0x5F0
		::System::Boolean use_outlineColor; // 0x5F1
		::UnityEngine::Color outlineColor; // 0x5F4
		::System::Boolean active_textureSheetOn; // 0x604
		::System::Boolean use_textureSheetOn; // 0x605
		::System::Boolean textureSheetOn; // 0x606
		::System::Boolean active_textureSheetTex; // 0x607
		::System::Boolean use_textureSheetTex; // 0x608
		::UnityEngine::Texture* textureSheetTex; // 0x610
		::System::Boolean active_textureSheetXY; // 0x618
		::System::Boolean use_textureSheetXY; // 0x619
		::UnityEngine::Vector2 textureSheetXY; // 0x61C
		::System::Boolean active_textureSheetIndex; // 0x624
		::System::Boolean use_textureSheetIndex; // 0x625
		::System::Int32 textureSheetIndex; // 0x628
		::System::Boolean active_textureSheetColor; // 0x62C
		::System::Boolean use_textureSheetColor; // 0x62D
		::UnityEngine::Color textureSheetColor; // 0x630
		::System::Boolean active_scanType; // 0x640
		::System::Boolean use_scanType; // 0x641
		::UnityEngine::Rendering::Universal::ScanType scanType; // 0x644
		::System::Boolean active_useCustomScanDirection; // 0x648
		::System::Boolean use_useCustomScanDirection; // 0x649
		::System::Boolean useCustomScanDirection; // 0x64A
		::System::Boolean active_customScanDirection; // 0x64B
		::System::Boolean use_customScanDirection; // 0x64C
		::System::Single customScanDirection; // 0x650
		::System::Boolean active_scanColor0End; // 0x654
		::System::Boolean use_scanColor0End; // 0x655
		::UnityEngine::Color scanColor0End; // 0x658
		::System::Boolean active_scanColor1End; // 0x668
		::System::Boolean use_scanColor1End; // 0x669
		::UnityEngine::Color scanColor1End; // 0x66C
		::System::Boolean active_scanColor2End; // 0x67C
		::System::Boolean use_scanColor2End; // 0x67D
		::UnityEngine::Color scanColor2End; // 0x680
		::System::Boolean active_scanColor3End; // 0x690
		::System::Boolean use_scanColor3End; // 0x691
		::UnityEngine::Color scanColor3End; // 0x694
		::System::Boolean active_lensDistortionIntensity; // 0x6A4
		::System::Boolean use_lensDistortionIntensity; // 0x6A5
		::System::Single lensDistortionIntensity; // 0x6A8
		::System::Boolean active_lensDistortionXMultiplier; // 0x6AC
		::System::Boolean use_lensDistortionXMultiplier; // 0x6AD
		::System::Single lensDistortionXMultiplier; // 0x6B0
		::System::Boolean active_lensDistortionYMultiplier; // 0x6B4
		::System::Boolean use_lensDistortionYMultiplier; // 0x6B5
		::System::Single lensDistortionYMultiplier; // 0x6B8
		::System::Boolean active_lensDistortionCenter; // 0x6BC
		::System::Boolean use_lensDistortionCenter; // 0x6BD
		::UnityEngine::Vector2 lensDistortionCenter; // 0x6C0
		::System::Boolean active_lensDistortionScale; // 0x6C8
		::System::Boolean use_lensDistortionScale; // 0x6C9
		::System::Single lensDistortionScale; // 0x6CC
		::System::Boolean active_enable; // 0x6D0
		::System::Boolean use_enable; // 0x6D1
		::System::Boolean enable; // 0x6D2
		::System::Boolean active_hue; // 0x6D3
		::System::Boolean use_hue; // 0x6D4
		::System::Single hue; // 0x6D8
		::System::Boolean active_saturation; // 0x6DC
		::System::Boolean use_saturation; // 0x6DD
		::System::Single saturation; // 0x6E0
		::System::Boolean active_brightness; // 0x6E4
		::System::Boolean use_brightness; // 0x6E5
		::System::Single brightness; // 0x6E8
		::System::Boolean active_contrast; // 0x6EC
		::System::Boolean use_contrast; // 0x6ED
		::System::Single contrast; // 0x6F0
		::System::Boolean active_contrastMiddlePoint; // 0x6F4
		::System::Boolean use_contrastMiddlePoint; // 0x6F5
		::System::Single contrastMiddlePoint; // 0x6F8
		::System::Boolean active_colorTintNear; // 0x6FC
		::System::Boolean use_colorTintNear; // 0x6FD
		::UnityEngine::Color colorTintNear; // 0x700
		::System::Boolean active_colorTintFar; // 0x710
		::System::Boolean use_colorTintFar; // 0x711
		::UnityEngine::Color colorTintFar; // 0x714
		::System::Boolean active_colorTintStart; // 0x724
		::System::Boolean use_colorTintStart; // 0x725
		::System::Single colorTintStart; // 0x728
		::System::Boolean active_colorTintEnd; // 0x72C
		::System::Boolean use_colorTintEnd; // 0x72D
		::System::Single colorTintEnd; // 0x730
		::System::Boolean active_scanlineWidth; // 0x734
		::System::Boolean use_scanlineWidth; // 0x735
		::System::Single scanlineWidth; // 0x738
		::System::Boolean active_scanlineContrast; // 0x73C
		::System::Boolean use_scanlineContrast; // 0x73D
		::System::Single scanlineContrast; // 0x740
		::System::Boolean active_scanlineDistortion; // 0x744
		::System::Boolean use_scanlineDistortion; // 0x745
		::System::Single scanlineDistortion; // 0x748
		::System::Boolean active_sliceWidth; // 0x74C
		::System::Boolean use_sliceWidth; // 0x74D
		::System::Single sliceWidth; // 0x750
		::System::Boolean active_sliceAngle; // 0x754
		::System::Boolean use_sliceAngle; // 0x755
		::System::Single sliceAngle; // 0x758
		::System::Boolean active_reverse; // 0x75C
		::System::Boolean use_reverse; // 0x75D
		::System::Boolean reverse; // 0x75E
		::System::Boolean active_sliceOffset; // 0x75F
		::System::Boolean use_sliceOffset; // 0x760
		::System::Single sliceOffset; // 0x764
		::System::Boolean active_sliceColorA; // 0x768
		::System::Boolean use_sliceColorA; // 0x769
		::UnityEngine::Color sliceColorA; // 0x76C
		::System::Boolean active_sliceColorAMode; // 0x77C
		::System::Boolean use_sliceColorAMode; // 0x77D
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorAMode; // 0x780
		::System::Boolean active_sliceColorB; // 0x784
		::System::Boolean use_sliceColorB; // 0x785
		::UnityEngine::Color sliceColorB; // 0x788
		::System::Boolean active_sliceColorBMode; // 0x798
		::System::Boolean use_sliceColorBMode; // 0x799
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorBMode; // 0x79C
		::System::Boolean active_scanStart0; // 0x7A0
		::System::Boolean use_scanStart0; // 0x7A1
		::System::Single scanStart0; // 0x7A4
		::System::Boolean active_scanEnd0; // 0x7A8
		::System::Boolean use_scanEnd0; // 0x7A9
		::System::Single scanEnd0; // 0x7AC
		::System::Boolean active_scanStart0Soft; // 0x7B0
		::System::Boolean use_scanStart0Soft; // 0x7B1
		::System::Single scanStart0Soft; // 0x7B4
		::System::Boolean active_scanEnd0Soft; // 0x7B8
		::System::Boolean use_scanEnd0Soft; // 0x7B9
		::System::Single scanEnd0Soft; // 0x7BC
		::System::Boolean active_scanColor0; // 0x7C0
		::System::Boolean use_scanColor0; // 0x7C1
		::UnityEngine::Color scanColor0; // 0x7C4
		::System::Boolean active_scanColor0Mode; // 0x7D4
		::System::Boolean use_scanColor0Mode; // 0x7D5
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor0Mode; // 0x7D8
		::System::Boolean active_scanStart1; // 0x7DC
		::System::Boolean use_scanStart1; // 0x7DD
		::System::Single scanStart1; // 0x7E0
		::System::Boolean active_scanEnd1; // 0x7E4
		::System::Boolean use_scanEnd1; // 0x7E5
		::System::Single scanEnd1; // 0x7E8
		::System::Boolean active_scanStart1Soft; // 0x7EC
		::System::Boolean use_scanStart1Soft; // 0x7ED
		::System::Single scanStart1Soft; // 0x7F0
		::System::Boolean active_scanEnd1Soft; // 0x7F4
		::System::Boolean use_scanEnd1Soft; // 0x7F5
		::System::Single scanEnd1Soft; // 0x7F8
		::System::Boolean active_scanColor1; // 0x7FC
		::System::Boolean use_scanColor1; // 0x7FD
		::UnityEngine::Color scanColor1; // 0x800
		::System::Boolean active_scanColor1Mode; // 0x810
		::System::Boolean use_scanColor1Mode; // 0x811
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor1Mode; // 0x814
		::System::Boolean active_scanStart2; // 0x818
		::System::Boolean use_scanStart2; // 0x819
		::System::Single scanStart2; // 0x81C
		::System::Boolean active_scanEnd2; // 0x820
		::System::Boolean use_scanEnd2; // 0x821
		::System::Single scanEnd2; // 0x824
		::System::Boolean active_scanStart2Soft; // 0x828
		::System::Boolean use_scanStart2Soft; // 0x829
		::System::Single scanStart2Soft; // 0x82C
		::System::Boolean active_scanEnd2Soft; // 0x830
		::System::Boolean use_scanEnd2Soft; // 0x831
		::System::Single scanEnd2Soft; // 0x834
		::System::Boolean active_scanColor2; // 0x838
		::System::Boolean use_scanColor2; // 0x839
		::UnityEngine::Color scanColor2; // 0x83C
		::System::Boolean active_scanColor2Mode; // 0x84C
		::System::Boolean use_scanColor2Mode; // 0x84D
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor2Mode; // 0x850
		::System::Boolean active_scanStart3; // 0x854
		::System::Boolean use_scanStart3; // 0x855
		::System::Single scanStart3; // 0x858
		::System::Boolean active_scanEnd3; // 0x85C
		::System::Boolean use_scanEnd3; // 0x85D
		::System::Single scanEnd3; // 0x860
		::System::Boolean active_scanStart3Soft; // 0x864
		::System::Boolean use_scanStart3Soft; // 0x865
		::System::Single scanStart3Soft; // 0x868
		::System::Boolean active_scanEnd3Soft; // 0x86C
		::System::Boolean use_scanEnd3Soft; // 0x86D
		::System::Single scanEnd3Soft; // 0x870
		::System::Boolean active_scanColor3; // 0x874
		::System::Boolean use_scanColor3; // 0x875
		::UnityEngine::Color scanColor3; // 0x878
		::System::Boolean active_scanColor3Mode; // 0x888
		::System::Boolean use_scanColor3Mode; // 0x889
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor3Mode; // 0x88C
		::System::Boolean active_uvOffsetR; // 0x890
		::System::Boolean use_uvOffsetR; // 0x891
		::UnityEngine::Vector2 uvOffsetR; // 0x894
		::System::Boolean active_colorR; // 0x89C
		::System::Boolean use_colorR; // 0x89D
		::UnityEngine::Color colorR; // 0x8A0
		::System::Boolean active_uvOffsetG; // 0x8B0
		::System::Boolean use_uvOffsetG; // 0x8B1
		::UnityEngine::Vector2 uvOffsetG; // 0x8B4
		::System::Boolean active_colorG; // 0x8BC
		::System::Boolean use_colorG; // 0x8BD
		::UnityEngine::Color colorG; // 0x8C0
		::System::Boolean active_uvOffsetB; // 0x8D0
		::System::Boolean use_uvOffsetB; // 0x8D1
		::UnityEngine::Vector2 uvOffsetB; // 0x8D4
		::System::Boolean active_colorB; // 0x8DC
		::System::Boolean use_colorB; // 0x8DD
		::UnityEngine::Color colorB; // 0x8E0
		::System::Boolean active_fadeSourceImage; // 0x8F0
		::System::Boolean use_fadeSourceImage; // 0x8F1
		::System::Single fadeSourceImage; // 0x8F4
		::System::Boolean active_outlineDistortion; // 0x8F8
		::System::Boolean use_outlineDistortion; // 0x8F9
		::System::Boolean outlineDistortion; // 0x8FA
		::System::Boolean active_outlineDistortionTex; // 0x8FB
		::System::Boolean use_outlineDistortionTex; // 0x8FC
		::UnityEngine::Texture* outlineDistortionTex; // 0x900
		::System::Boolean active_outlineDistortionTexTiling; // 0x908
		::System::Boolean use_outlineDistortionTexTiling; // 0x909
		::UnityEngine::Vector2 outlineDistortionTexTiling; // 0x90C
		::System::Boolean active_outlineDistortionTexOffset; // 0x914
		::System::Boolean use_outlineDistortionTexOffset; // 0x915
		::UnityEngine::Vector2 outlineDistortionTexOffset; // 0x918
		::System::Boolean active_outlineDistortionUVSpeed; // 0x920
		::System::Boolean use_outlineDistortionUVSpeed; // 0x921
		::UnityEngine::Vector2 outlineDistortionUVSpeed; // 0x924
		::System::Boolean active_outlineDistortionOffset; // 0x92C
		::System::Boolean use_outlineDistortionOffset; // 0x92D
		::UnityEngine::Vector2 outlineDistortionOffset; // 0x930
		::System::Boolean active_outlineDistortionIntensity; // 0x938
		::System::Boolean use_outlineDistortionIntensity; // 0x939
		::UnityEngine::Vector2 outlineDistortionIntensity; // 0x93C
		::System::Boolean active_scanMaskType; // 0x944
		::System::Boolean use_scanMaskType; // 0x945
		::UnityEngine::Rendering::Universal::ScanMaskType scanMaskType; // 0x948
		::System::Boolean active_scanMaskTex; // 0x94C
		::System::Boolean use_scanMaskTex; // 0x94D
		::UnityEngine::Texture* scanMaskTex; // 0x950
		::System::Boolean active_scanMaskTexChannel; // 0x958
		::System::Boolean use_scanMaskTexChannel; // 0x959
		::UnityEngine::Rendering::Universal::ChannelMapping scanMaskTexChannel; // 0x95C
		::System::Boolean active_scanMaskTexTiling; // 0x960
		::System::Boolean use_scanMaskTexTiling; // 0x961
		::UnityEngine::Vector2 scanMaskTexTiling; // 0x964
		::System::Boolean active_scanMaskTexOffset; // 0x96C
		::System::Boolean use_scanMaskTexOffset; // 0x96D
		::UnityEngine::Vector2 scanMaskTexOffset; // 0x970
		::System::Boolean active_scanMaskTexUVSpeed; // 0x978
		::System::Boolean use_scanMaskTexUVSpeed; // 0x979
		::UnityEngine::Vector2 scanMaskTexUVSpeed; // 0x97C
		::System::Boolean active_scanMaskBaseY; // 0x984
		::System::Boolean use_scanMaskBaseY; // 0x985
		::System::Single scanMaskBaseY; // 0x988
		::System::Boolean active_scanMaskYRange; // 0x98C
		::System::Boolean use_scanMaskYRange; // 0x98D
		::System::Single scanMaskYRange; // 0x990
		::System::Boolean active_scanMaskIntensity0; // 0x994
		::System::Boolean use_scanMaskIntensity0; // 0x995
		::System::Single scanMaskIntensity0; // 0x998
		::System::Boolean active_scanMaskIntensity1; // 0x99C
		::System::Boolean use_scanMaskIntensity1; // 0x99D
		::System::Single scanMaskIntensity1; // 0x9A0
		::System::Boolean active_scanMaskIntensity2; // 0x9A4
		::System::Boolean use_scanMaskIntensity2; // 0x9A5
		::System::Single scanMaskIntensity2; // 0x9A8
		::System::Boolean active_scanMaskIntensity3; // 0x9AC
		::System::Boolean use_scanMaskIntensity3; // 0x9AD
		::System::Single scanMaskIntensity3; // 0x9B0
		::System::Boolean active_keepInFrontForUberPost; // 0x9B4
		::System::Boolean use_keepInFrontForUberPost; // 0x9B5
		::System::Boolean keepInFrontForUberPost; // 0x9B6
		::System::Boolean active_enableDistanceDistortionColorization; // 0x9B7
		::System::Boolean use_enableDistanceDistortionColorization; // 0x9B8
		::System::Boolean enableDistanceDistortionColorization; // 0x9B9
		::System::Boolean active_distanceDistortionTexture; // 0x9BA
		::System::Boolean use_distanceDistortionTexture; // 0x9BB
		::UnityEngine::Texture* distanceDistortionTexture; // 0x9C0
		::System::Boolean active_distanceColorizeTexture; // 0x9C8
		::System::Boolean use_distanceColorizeTexture; // 0x9C9
		::UnityEngine::Texture* distanceColorizeTexture; // 0x9D0
		::System::Boolean active_distanceDistortionColor; // 0x9D8
		::System::Boolean use_distanceDistortionColor; // 0x9D9
		::UnityEngine::Color distanceDistortionColor; // 0x9DC
		::System::Boolean active_distanceDistortionStart; // 0x9EC
		::System::Boolean use_distanceDistortionStart; // 0x9ED
		::System::Single distanceDistortionStart; // 0x9F0
		::System::Boolean active_distanceDistortionEnd; // 0x9F4
		::System::Boolean use_distanceDistortionEnd; // 0x9F5
		::System::Single distanceDistortionEnd; // 0x9F8
		::System::Boolean active_distanceDistortionFadeRange; // 0x9FC
		::System::Boolean use_distanceDistortionFadeRange; // 0x9FD
		::System::Single distanceDistortionFadeRange; // 0xA00
		::System::Boolean active_distanceDistortionOffsetSpeed; // 0xA04
		::System::Boolean use_distanceDistortionOffsetSpeed; // 0xA05
		::UnityEngine::Vector3 distanceDistortionOffsetSpeed; // 0xA08
		::System::Boolean active_distanceDistortionTiling; // 0xA14
		::System::Boolean use_distanceDistortionTiling; // 0xA15
		::System::Single distanceDistortionTiling; // 0xA18
		::System::Boolean active_distanceDistortionIntensity; // 0xA1C
		::System::Boolean use_distanceDistortionIntensity; // 0xA1D
		::System::Single distanceDistortionIntensity; // 0xA20
		::System::Boolean active_distanceColorizationOffsetSpeed; // 0xA24
		::System::Boolean use_distanceColorizationOffsetSpeed; // 0xA25
		::UnityEngine::Vector3 distanceColorizationOffsetSpeed; // 0xA28
		::System::Boolean active_distanceColorizationTiling; // 0xA34
		::System::Boolean use_distanceColorizationTiling; // 0xA35
		::System::Single distanceColorizationTiling; // 0xA38
		::System::Boolean active_distanceDistortionHeightStart; // 0xA3C
		::System::Boolean use_distanceDistortionHeightStart; // 0xA3D
		::System::Single distanceDistortionHeightStart; // 0xA40
		::System::Boolean active_distanceDistortionHeightEnd; // 0xA44
		::System::Boolean use_distanceDistortionHeightEnd; // 0xA45
		::System::Single distanceDistortionHeightEnd; // 0xA48
		::System::Boolean active_distanceDistortionHeightFadeRange; // 0xA4C
		::System::Boolean use_distanceDistortionHeightFadeRange; // 0xA4D
		::System::Single distanceDistortionHeightFadeRange; // 0xA50
		::System::Boolean active_distanceDistortionBlendMode; // 0xA54
		::System::Boolean use_distanceDistortionBlendMode; // 0xA55
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode distanceDistortionBlendMode; // 0xA58
		::System::Boolean active_distanceColorizationEffect; // 0xA5C
		::System::Boolean use_distanceColorizationEffect; // 0xA5D
		::System::Single distanceColorizationEffect; // 0xA60
		::System::Boolean active_scanCustomCenterPosition; // 0xA64
		::System::Boolean use_scanCustomCenterPosition; // 0xA65
		::UnityEngine::Vector3 scanCustomCenterPosition; // 0xA68
		::System::Boolean active_outlineInUberShader; // 0xA74
		::System::Boolean use_outlineInUberShader; // 0xA75
		::System::Boolean outlineInUberShader; // 0xA76
		::System::Boolean active_outlineScreenSpaceMaskTex; // 0xA77
		::System::Boolean use_outlineScreenSpaceMaskTex; // 0xA78
		::UnityEngine::Texture* outlineScreenSpaceMaskTex; // 0xA80
		::System::Boolean active_applyBeforeUberPost; // 0xA88
		::System::Boolean use_applyBeforeUberPost; // 0xA89
		::System::Boolean applyBeforeUberPost; // 0xA8A
		::System::Boolean active_outlineScreenSpaceMaskTexScaleOffset; // 0xA8B
		::System::Boolean use_outlineScreenSpaceMaskTexScaleOffset; // 0xA8C
		::UnityEngine::Vector4 outlineScreenSpaceMaskTexScaleOffset; // 0xA90
		::System::Boolean active_scanlineBlendMode; // 0xAA0
		::System::Boolean use_scanlineBlendMode; // 0xAA1
		::UnityEngine::Rendering::Universal::ScanlineBlendMode scanlineBlendMode; // 0xAA4
		::System::Boolean active_enable2DSpot; // 0xAA8
		::System::Boolean use_enable2DSpot; // 0xAA9
		::System::Boolean enable2DSpot; // 0xAAA
		::System::Boolean active_spotCenter; // 0xAAB
		::System::Boolean use_spotCenter; // 0xAAC
		::UnityEngine::Vector2 spotCenter; // 0xAB0
		::System::Boolean active_spotRadius; // 0xAB8
		::System::Boolean use_spotRadius; // 0xAB9
		::System::Single spotRadius; // 0xABC
		::System::Boolean active_blackIntensity; // 0xAC0
		::System::Boolean use_blackIntensity; // 0xAC1
		::System::Single blackIntensity; // 0xAC4
		::System::Boolean active_overlayIntensity; // 0xAC8
		::System::Boolean use_overlayIntensity; // 0xAC9
		::System::Single overlayIntensity; // 0xACC
		::System::Boolean active_curvePower; // 0xAD0
		::System::Boolean use_curvePower; // 0xAD1
		::System::Single curvePower; // 0xAD4
		::UnityEngine::Rendering::Universal::VREffects* _VREffects; // 0xAD8

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

		::UnityEngine::Rendering::Universal::VREffects* Method_4_47EA092FA95FD8DA(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::VREffects*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_47EA092FA95FD8DA_OFFSET))(this, a1);
		}

		::System::Void Method_4_68160D9981ECFFF0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_68160D9981ECFFF0_OFFSET))(this);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_VREFFECTSBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}
	};
}
