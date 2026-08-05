#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_77D255857CC40452;
class Class_2_3D94007308503477;
class Class_2_605AD98A72C8A20F;
class Class_2_6729AC3ED949BE6A_4;
class Class_2_A0EF1227A3C680C4;
class Class_2_A48F3719AA1CF200_21;
class Class_2_A48F3719AA1CF200_27;
class Class_2_A48F3719AA1CF200_28;
class Class_2_A48F3719AA1CF200_29;
class Class_2_A48F3719AA1CF200_30;
class Class_2_D20AEF51FFA59F87;
class Class_2_E66E0476299305E7;
class Class_2_E66E0476299305E7_1;
class Class_2_F6E7E959625A0CB5;
namespace MoleMole::Config { class ConfigHollowChessboardBGVideo; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }
namespace UnityEngine::Rendering::Universal { class Distortion; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }
namespace UnityEngine::Rendering::Universal { class Glitch; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }
namespace UnityEngine::Rendering::Universal { class Lighting; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define MOLEMOLE_CONFIG_ATMOSPHEREDATA_CLOSE_OFFSET UNITYSDK_OFFSET(0x17296210)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA_COPYVOLUMETOCONFIG_OFFSET UNITYSDK_OFFSET(0x17296360)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA_OPEN_OFFSET UNITYSDK_OFFSET(0x17296090)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_AMPLIFYOCCLUSION_3_1_OFFSET UNITYSDK_OFFSET(0x17296A60)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_CHROMATICABERRATION_3_6_OFFSET UNITYSDK_OFFSET(0x17297870)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_COLORADJUSTMENTS_3_11_OFFSET UNITYSDK_OFFSET(0x172985A0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_DEPTHOFFIELD_3_7_OFFSET UNITYSDK_OFFSET(0x17297900)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_DISTORTION_3_2_OFFSET UNITYSDK_OFFSET(0x17296C60)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_GAUSSIANBLUR_3_12_OFFSET UNITYSDK_OFFSET(0x17298730)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_GLITCH_3_3_OFFSET UNITYSDK_OFFSET(0x17296D60)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_LENSDISTORTION_3_8_OFFSET UNITYSDK_OFFSET(0x17297B30)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_LIGHTING_3_10_OFFSET UNITYSDK_OFFSET(0x172982A0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_NAPBLOOM_3_5_OFFSET UNITYSDK_OFFSET(0x172973E0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_RADIALBLUR_3_4_OFFSET UNITYSDK_OFFSET(0x17297190)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_SCREENEFFECTS_3_9_OFFSET UNITYSDK_OFFSET(0x17297C60)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_VIGNETTE_3_0_OFFSET UNITYSDK_OFFSET(0x172969A0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x172987F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AtmosphereData_TypeDefinitionIndex = 69512;

	class AtmosphereData : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x10
		::UnityEngine::AnimationCurve* LightCurve; // 0x18
		::System::String* FadeOutVoice; // 0x20
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x28
		::System::String* key; // 0x30
		::MoleMole::Config::ConfigHollowChessboardBGVideo* BgVideo; // 0x38
		::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* ProfileSrp; // 0x40
		::System::String* FadeInVoice; // 0x48
		::System::Single FadeInLength; // 0x50
		::System::Single BGTVLight; // 0x54
		::System::Boolean ApplyLUTforEmission; // 0x58
		::System::Single LightDuration; // 0x5C
		::System::Single FadeOutLength; // 0x60
		::UnityEngine::Vector3 LightAngle; // 0x64
		::MoleMole::HollowChessboard::HollowChessboardUID ChessboardUid; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__CTOR_OFFSET))(this);
		}

		::System::Void Open()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA_OPEN_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA_CLOSE_OFFSET))(this);
		}

		static ::Class_1_77D255857CC40452* CopyVolumeToConfig(::UnityEngine::Rendering::Volume* volume)
		{
			return ((::Class_1_77D255857CC40452*(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA_COPYVOLUMETOCONFIG_OFFSET))(volume);
		}

		static ::Class_2_D20AEF51FFA59F87* _CopyVolumeToConfig_g__CopyVolumeToConfig_Vignette_3_0(::UnityEngine::Rendering::Universal::Vignette* vignette)
		{
			return ((::Class_2_D20AEF51FFA59F87*(*)(::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_VIGNETTE_3_0_OFFSET))(vignette);
		}

		static ::Class_2_605AD98A72C8A20F* _CopyVolumeToConfig_g__CopyVolumeToConfig_AmplifyOcclusion_3_1(::UnityEngine::Rendering::Universal::AmplifyOcclusion* amplifyOcclusion)
		{
			return ((::Class_2_605AD98A72C8A20F*(*)(::UnityEngine::Rendering::Universal::AmplifyOcclusion*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_AMPLIFYOCCLUSION_3_1_OFFSET))(amplifyOcclusion);
		}

		static ::Class_2_F6E7E959625A0CB5* _CopyVolumeToConfig_g__CopyVolumeToConfig_Distortion_3_2(::UnityEngine::Rendering::Universal::Distortion* distortion)
		{
			return ((::Class_2_F6E7E959625A0CB5*(*)(::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_DISTORTION_3_2_OFFSET))(distortion);
		}

		static ::Class_2_A48F3719AA1CF200_28* _CopyVolumeToConfig_g__CopyVolumeToConfig_Glitch_3_3(::UnityEngine::Rendering::Universal::Glitch* glitch)
		{
			return ((::Class_2_A48F3719AA1CF200_28*(*)(::UnityEngine::Rendering::Universal::Glitch*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_GLITCH_3_3_OFFSET))(glitch);
		}

		static ::Class_2_A48F3719AA1CF200_27* _CopyVolumeToConfig_g__CopyVolumeToConfig_RadialBlur_3_4(::UnityEngine::Rendering::Universal::RadialBlur* blur)
		{
			return ((::Class_2_A48F3719AA1CF200_27*(*)(::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_RADIALBLUR_3_4_OFFSET))(blur);
		}

		static ::Class_2_A48F3719AA1CF200_29* _CopyVolumeToConfig_g__CopyVolumeToConfig_NapBloom_3_5(::UnityEngine::Rendering::Universal::NapBloom* bloom)
		{
			return ((::Class_2_A48F3719AA1CF200_29*(*)(::UnityEngine::Rendering::Universal::NapBloom*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_NAPBLOOM_3_5_OFFSET))(bloom);
		}

		static ::Class_2_E66E0476299305E7* _CopyVolumeToConfig_g__CopyVolumeToConfig_ChromaticAberration_3_6(::UnityEngine::Rendering::Universal::ChromaticAberration* chromatic)
		{
			return ((::Class_2_E66E0476299305E7*(*)(::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_CHROMATICABERRATION_3_6_OFFSET))(chromatic);
		}

		static ::Class_2_A48F3719AA1CF200_30* _CopyVolumeToConfig_g__CopyVolumeToConfig_DepthOfField_3_7(::UnityEngine::Rendering::Universal::DepthOfField* depth)
		{
			return ((::Class_2_A48F3719AA1CF200_30*(*)(::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_DEPTHOFFIELD_3_7_OFFSET))(depth);
		}

		static ::Class_2_E66E0476299305E7_1* _CopyVolumeToConfig_g__CopyVolumeToConfig_LensDistortion_3_8(::UnityEngine::Rendering::Universal::LensDistortion* lens)
		{
			return ((::Class_2_E66E0476299305E7_1*(*)(::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_LENSDISTORTION_3_8_OFFSET))(lens);
		}

		static ::Class_2_A48F3719AA1CF200_21* _CopyVolumeToConfig_g__CopyVolumeToConfig_ScreenEffects_3_9(::UnityEngine::Rendering::Universal::ScreenEffects* screeneffects)
		{
			return ((::Class_2_A48F3719AA1CF200_21*(*)(::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_SCREENEFFECTS_3_9_OFFSET))(screeneffects);
		}

		static ::Class_2_6729AC3ED949BE6A_4* _CopyVolumeToConfig_g__CopyVolumeToConfig_Lighting_3_10(::UnityEngine::Rendering::Universal::Lighting* lighting)
		{
			return ((::Class_2_6729AC3ED949BE6A_4*(*)(::UnityEngine::Rendering::Universal::Lighting*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_LIGHTING_3_10_OFFSET))(lighting);
		}

		static ::Class_2_A0EF1227A3C680C4* _CopyVolumeToConfig_g__CopyVolumeToConfig_ColorAdjustments_3_11(::UnityEngine::Rendering::Universal::ColorAdjustments* color)
		{
			return ((::Class_2_A0EF1227A3C680C4*(*)(::UnityEngine::Rendering::Universal::ColorAdjustments*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_COLORADJUSTMENTS_3_11_OFFSET))(color);
		}

		static ::Class_2_3D94007308503477* _CopyVolumeToConfig_g__CopyVolumeToConfig_GaussianBlur_3_12(::UnityEngine::Rendering::Universal::GaussianBlur* gaussian)
		{
			return ((::Class_2_3D94007308503477*(*)(::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_GAUSSIANBLUR_3_12_OFFSET))(gaussian);
		}
	};
}
