#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VREffects_NativeSRP_ColorBlendMethod.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DistanceDistortionBlendMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanMaskType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScanlineBlendMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace MoleMole::Config { class ScreenEffectVector3; }
namespace MoleMole::Config { class ScreenEffectVector4; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETAPPLYBEFOREUBERPOST_OFFSET UNITYSDK_OFFSET(0x10D08EE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETBLACKINTENSITY_OFFSET UNITYSDK_OFFSET(0x10D09580)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x10D04760)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORB_OFFSET UNITYSDK_OFFSET(0x10D067D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORG_OFFSET UNITYSDK_OFFSET(0x10D066B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORR_OFFSET UNITYSDK_OFFSET(0x10D06590)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTEND_OFFSET UNITYSDK_OFFSET(0x10D04A00)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTFAR_OFFSET UNITYSDK_OFFSET(0x10D04A80)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTNEAR_OFFSET UNITYSDK_OFFSET(0x10D04960)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTSTART_OFFSET UNITYSDK_OFFSET(0x10D048E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCONTRASTMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x10D04860)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0x10D047E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCURVEPOWER_OFFSET UNITYSDK_OFFSET(0x10D09680)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCUSTOMSCANDIRECTION_OFFSET UNITYSDK_OFFSET(0x10D04D80)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZATIONEFFECT_OFFSET UNITYSDK_OFFSET(0x10D08230)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZATIONOFFSETSPEED_OFFSET UNITYSDK_OFFSET(0x10D08C30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZATIONTILING_OFFSET UNITYSDK_OFFSET(0x10D08CD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZETEXTURE_OFFSET UNITYSDK_OFFSET(0x10D08720)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONBLENDMODE_OFFSET UNITYSDK_OFFSET(0x10D08DF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONCOLOR_OFFSET UNITYSDK_OFFSET(0x10D08D50)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONEND_OFFSET UNITYSDK_OFFSET(0x10D08810)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONFADERANGE_OFFSET UNITYSDK_OFFSET(0x10D08890)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONHEIGHTEND_OFFSET UNITYSDK_OFFSET(0x10D08990)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONHEIGHTFADERANGE_OFFSET UNITYSDK_OFFSET(0x10D08A10)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONHEIGHTSTART_OFFSET UNITYSDK_OFFSET(0x10D08910)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x10D08BB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONOFFSETSPEED_OFFSET UNITYSDK_OFFSET(0x10D08A90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONSTART_OFFSET UNITYSDK_OFFSET(0x10D08790)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x10D084B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONTILING_OFFSET UNITYSDK_OFFSET(0x10D08B30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETENABLE2DSPOT_OFFSET UNITYSDK_OFFSET(0x10D09400)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETENABLEDISTANCEDISTORTIONCOLORIZATION_OFFSET UNITYSDK_OFFSET(0x10D081B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETENABLE_OFFSET UNITYSDK_OFFSET(0x10D045F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETFADESOURCEIMAGE_OFFSET UNITYSDK_OFFSET(0x10D06870)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDBLENDSCANLINE_OFFSET UNITYSDK_OFFSET(0x10D06E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDCOLOR_OFFSET UNITYSDK_OFFSET(0x10D06E70)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDDISTANCE_OFFSET UNITYSDK_OFFSET(0x10D06D90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDON_OFFSET UNITYSDK_OFFSET(0x10D06D10)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDPOWER_OFFSET UNITYSDK_OFFSET(0x10D06F10)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGROUNDYPOS_OFFSET UNITYSDK_OFFSET(0x10D06F80)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETHUE_OFFSET UNITYSDK_OFFSET(0x10D04660)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETKEEPINFRONTFORUBERPOST_OFFSET UNITYSDK_OFFSET(0x10D053D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONCENTER_OFFSET UNITYSDK_OFFSET(0x10D080B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x10D07F30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONSCALE_OFFSET UNITYSDK_OFFSET(0x10D08130)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x10D07FB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x10D08030)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEBLENDSCANLINE_OFFSET UNITYSDK_OFFSET(0x10D07180)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0x10D07430)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDEPTHTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x10D072E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDIFFOFFSET_OFFSET UNITYSDK_OFFSET(0x10D07270)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x10D07A40)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONOFFSET_OFFSET UNITYSDK_OFFSET(0x10D079C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONTEXOFFSET_OFFSET UNITYSDK_OFFSET(0x10D078C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONTEXTILING_OFFSET UNITYSDK_OFFSET(0x10D07840)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONTEX_OFFSET UNITYSDK_OFFSET(0x10D077D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONUVSPEED_OFFSET UNITYSDK_OFFSET(0x10D07940)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0x10D07550)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEINUBERSHADER_OFFSET UNITYSDK_OFFSET(0x10D074D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINENORMALTHRESHOLDSCALE_OFFSET UNITYSDK_OFFSET(0x10D073C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINENORMALTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x10D07350)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEON_OFFSET UNITYSDK_OFFSET(0x10D07100)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEOPACITY_OFFSET UNITYSDK_OFFSET(0x10D071F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINESCREENSPACEMASKTEXSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x10D092F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINESCREENSPACEMASKTEX_OFFSET UNITYSDK_OFFSET(0x10D091E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOVERLAYINTENSITY_OFFSET UNITYSDK_OFFSET(0x10D09600)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETREVERSE_OFFSET UNITYSDK_OFFSET(0x10D069F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSATURATION_OFFSET UNITYSDK_OFFSET(0x10D046E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR0END_OFFSET UNITYSDK_OFFSET(0x10D056F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR0MODE_OFFSET UNITYSDK_OFFSET(0x10D05790)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR0_OFFSET UNITYSDK_OFFSET(0x10D05650)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR1END_OFFSET UNITYSDK_OFFSET(0x10D05B20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR1MODE_OFFSET UNITYSDK_OFFSET(0x10D05BC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR1_OFFSET UNITYSDK_OFFSET(0x10D05A80)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR2END_OFFSET UNITYSDK_OFFSET(0x10D05F50)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR2MODE_OFFSET UNITYSDK_OFFSET(0x10D05FF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR2_OFFSET UNITYSDK_OFFSET(0x10D05EB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR3END_OFFSET UNITYSDK_OFFSET(0x10D06380)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR3MODE_OFFSET UNITYSDK_OFFSET(0x10D06420)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR3_OFFSET UNITYSDK_OFFSET(0x10D062E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCUSTOMCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x10D09250)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND0SOFT_OFFSET UNITYSDK_OFFSET(0x10D055D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND0_OFFSET UNITYSDK_OFFSET(0x10D054D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND1SOFT_OFFSET UNITYSDK_OFFSET(0x10D05A00)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND1_OFFSET UNITYSDK_OFFSET(0x10D05900)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND2SOFT_OFFSET UNITYSDK_OFFSET(0x10D05E30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND2_OFFSET UNITYSDK_OFFSET(0x10D05D30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND3SOFT_OFFSET UNITYSDK_OFFSET(0x10D06260)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND3_OFFSET UNITYSDK_OFFSET(0x10D06160)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINEBLENDMODE_OFFSET UNITYSDK_OFFSET(0x10D09390)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINECONTRAST_OFFSET UNITYSDK_OFFSET(0x10D04B90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0x10D04C10)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINEWIDTH_OFFSET UNITYSDK_OFFSET(0x10D04B20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKBASEY_OFFSET UNITYSDK_OFFSET(0x10D052D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY0_OFFSET UNITYSDK_OFFSET(0x10D05800)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY1_OFFSET UNITYSDK_OFFSET(0x10D05C30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY2_OFFSET UNITYSDK_OFFSET(0x10D06060)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY3_OFFSET UNITYSDK_OFFSET(0x10D06490)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXCHANNEL_OFFSET UNITYSDK_OFFSET(0x10D050E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXOFFSET_OFFSET UNITYSDK_OFFSET(0x10D051D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXTILING_OFFSET UNITYSDK_OFFSET(0x10D05150)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXUVSPEED_OFFSET UNITYSDK_OFFSET(0x10D05250)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEX_OFFSET UNITYSDK_OFFSET(0x10D05070)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTYPE_OFFSET UNITYSDK_OFFSET(0x10D04E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKYRANGE_OFFSET UNITYSDK_OFFSET(0x10D05350)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART0SOFT_OFFSET UNITYSDK_OFFSET(0x10D05550)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART0_OFFSET UNITYSDK_OFFSET(0x10D05450)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART1SOFT_OFFSET UNITYSDK_OFFSET(0x10D05980)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART1_OFFSET UNITYSDK_OFFSET(0x10D05880)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART2SOFT_OFFSET UNITYSDK_OFFSET(0x10D05DB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART2_OFFSET UNITYSDK_OFFSET(0x10D05CB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART3SOFT_OFFSET UNITYSDK_OFFSET(0x10D061E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART3_OFFSET UNITYSDK_OFFSET(0x10D060E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANTYPE_OFFSET UNITYSDK_OFFSET(0x10D04C90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCREENSPACEGRIDSCALE_OFFSET UNITYSDK_OFFSET(0x10D07000)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCREENSPACEGRIDWIDTH_OFFSET UNITYSDK_OFFSET(0x10D07080)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCREENSPACEGRID_OFFSET UNITYSDK_OFFSET(0x10D08F60)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICEANGLE_OFFSET UNITYSDK_OFFSET(0x10D06970)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORAMODE_OFFSET UNITYSDK_OFFSET(0x10D06B90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORA_OFFSET UNITYSDK_OFFSET(0x10D06AF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORBMODE_OFFSET UNITYSDK_OFFSET(0x10D06CA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORB_OFFSET UNITYSDK_OFFSET(0x10D06C00)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICEOFFSET_OFFSET UNITYSDK_OFFSET(0x10D06A70)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICEWIDTH_OFFSET UNITYSDK_OFFSET(0x10D068F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSPOTCENTER_OFFSET UNITYSDK_OFFSET(0x10D09480)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSPOTRADIUS_OFFSET UNITYSDK_OFFSET(0x10D09500)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETCOLOR_OFFSET UNITYSDK_OFFSET(0x10D07E90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETINDEX_OFFSET UNITYSDK_OFFSET(0x10D07E10)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETON_OFFSET UNITYSDK_OFFSET(0x10D07AC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETTEX_OFFSET UNITYSDK_OFFSET(0x10D07D30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETXY_OFFSET UNITYSDK_OFFSET(0x10D07DA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUSECUSTOMSCANDIRECTION_OFFSET UNITYSDK_OFFSET(0x10D04D00)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUSESTENCIL_OFFSET UNITYSDK_OFFSET(0x10D08E60)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUVOFFSETB_OFFSET UNITYSDK_OFFSET(0x10D06750)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUVOFFSETG_OFFSET UNITYSDK_OFFSET(0x10D06630)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUVOFFSETR_OFFSET UNITYSDK_OFFSET(0x10D06510)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_DISTANCECOLORIZETEXTURE_OFFSET UNITYSDK_OFFSET(0x10D08520)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_DISTANCEDISTORTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x10D082B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_OUTLINEDISTORTIONTEX_OFFSET UNITYSDK_OFFSET(0x10D075D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_OUTLINESCREENSPACEMASKTEX_OFFSET UNITYSDK_OFFSET(0x10D08FE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_SCANMASKTEX_OFFSET UNITYSDK_OFFSET(0x10D04E70)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_TEXTURESHEETTEX_OFFSET UNITYSDK_OFFSET(0x10D07B30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x10D09700)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityVREffectsEffect_TypeDefinitionIndex = 63943;

	class ConfigEntityVREffectsEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* scanEnd1Soft; // 0x40
		::MoleMole::Config::ScreenEffectColor* distanceDistortionColor; // 0x48
		::MoleMole::Config::ScreenEffectFloat* lensDistortionXMultiplier; // 0x50
		::MoleMole::Config::ScreenEffectFloat* scanStart0; // 0x58
		::MoleMole::Config::ScreenEffectFloat* scanStart1Soft; // 0x60
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionHeightEnd; // 0x68
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionIntensity; // 0x70
		::MoleMole::Config::ScreenEffectFloat* scanStart1; // 0x78
		::MoleMole::Config::ScreenEffectBool* outlineOn; // 0x80
		::System::String* outlineScreenSpaceMaskTexPath; // 0x88
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionHeightFadeRange; // 0x90
		::MoleMole::Config::ScreenEffectFloat* customScanDirection; // 0x98
		::MoleMole::Config::ScreenEffectFloat* scanEnd3Soft; // 0xA0
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionUVSpeed; // 0xA8
		::MoleMole::Config::ScreenEffectVector3* scanCustomCenterPosition; // 0xB0
		::System::String* distanceDistortionTexturePath; // 0xB8
		::MoleMole::Config::ScreenEffectVector2* scanMaskTexTiling; // 0xC0
		::MoleMole::Config::ScreenEffectColor* colorR; // 0xC8
		::MoleMole::Config::ScreenEffectFloat* scanStart0Soft; // 0xD0
		::MoleMole::Config::ScreenEffectBool* screenSpaceGrid; // 0xD8
		::MoleMole::Config::ScreenEffectFloat* scanStart2Soft; // 0xE0
		::MoleMole::Config::ScreenEffectColor* sliceColorA; // 0xE8
		::MoleMole::Config::ScreenEffectVector3* distanceDistortionOffsetSpeed; // 0xF0
		::MoleMole::Config::ScreenEffectFloat* sliceWidth; // 0xF8
		::MoleMole::Config::ScreenEffectFloat* scanEnd0; // 0x100
		::MoleMole::Config::ScreenEffectFloat* hue; // 0x108
		::MoleMole::Config::ScreenEffectFloat* scanMaskBaseY; // 0x110
		::MoleMole::Config::ScreenEffectColor* colorB; // 0x118
		::MoleMole::Config::ScreenEffectColor* colorTintNear; // 0x120
		::MoleMole::Config::ScreenEffectBool* outlineInUberShader; // 0x128
		::MoleMole::Config::ScreenEffectVector2* scanMaskTexOffset; // 0x130
		::UnityEngine::Texture2D* _distanceDistortionTexture; // 0x138
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionIntensity; // 0x140
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionFadeRange; // 0x148
		::MoleMole::Config::ScreenEffectColor* colorTintFar; // 0x150
		::MoleMole::Config::ScreenEffectColor* scanColor3End; // 0x158
		::MoleMole::Config::ScreenEffectFloat* screenSpaceGridScale; // 0x160
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionEnd; // 0x168
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionStart; // 0x170
		::MoleMole::Config::ScreenEffectFloat* sliceAngle; // 0x178
		::MoleMole::Config::ScreenEffectBool* enableDistanceDistortionColorization; // 0x180
		::MoleMole::Config::ScreenEffectFloat* contrastMiddlePoint; // 0x188
		::MoleMole::Config::ScreenEffectFloat* outlineOpacity; // 0x190
		::System::String* outlineDistortionTexPath; // 0x198
		::MoleMole::Config::ScreenEffectFloat* fadeSourceImage; // 0x1A0
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionTexOffset; // 0x1A8
		::MoleMole::Config::ScreenEffectColor* gridColor; // 0x1B0
		::MoleMole::Config::ScreenEffectFloat* colorTintStart; // 0x1B8
		::MoleMole::Config::ScreenEffectFloat* lensDistortionIntensity; // 0x1C0
		::MoleMole::Config::ScreenEffectColor* outlineColor; // 0x1C8
		::MoleMole::Config::ScreenEffectFloat* lensDistortionYMultiplier; // 0x1D0
		::UnityEngine::Texture2D* _scanMaskTex; // 0x1D8
		::MoleMole::Config::ScreenEffectBool* enable2DSpot; // 0x1E0
		::MoleMole::Config::ScreenEffectColor* textureSheetColor; // 0x1E8
		::System::String* textureSheetTexPath; // 0x1F0
		::MoleMole::Config::ScreenEffectFloat* scanMaskIntensity2; // 0x1F8
		::MoleMole::Config::ScreenEffectFloat* blackIntensity; // 0x200
		::MoleMole::Config::ScreenEffectFloat* sliceOffset; // 0x208
		::MoleMole::Config::ScreenEffectFloat* scanMaskIntensity3; // 0x210
		::MoleMole::Config::ScreenEffectVector2* uvOffsetB; // 0x218
		::MoleMole::Config::ScreenEffectFloat* textureSheetIndex; // 0x220
		::MoleMole::Config::ScreenEffectBool* outlineDistortion; // 0x228
		::System::String* scanMaskTexPath; // 0x230
		::MoleMole::Config::ScreenEffectFloat* colorTintEnd; // 0x238
		::MoleMole::Config::ScreenEffectFloat* scanEnd3; // 0x240
		::UnityEngine::Texture2D* _distanceColorizeTexture; // 0x248
		::MoleMole::Config::ScreenEffectFloat* distanceColorizationTiling; // 0x250
		::MoleMole::Config::ScreenEffectFloat* groundYPos; // 0x258
		::MoleMole::Config::ScreenEffectVector2* scanMaskTexUVSpeed; // 0x260
		::MoleMole::Config::ScreenEffectColor* scanColor0; // 0x268
		::MoleMole::Config::ScreenEffectFloat* scanEnd2; // 0x270
		::MoleMole::Config::ScreenEffectVector2* uvOffsetR; // 0x278
		::MoleMole::Config::ScreenEffectColor* sliceColorB; // 0x280
		::MoleMole::Config::ScreenEffectBool* useStencil; // 0x288
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0x290
		::MoleMole::Config::ScreenEffectBool* applyBeforeUberPost; // 0x298
		::MoleMole::Config::ScreenEffectFloat* scanlineDistortion; // 0x2A0
		::MoleMole::Config::ScreenEffectFloat* scanStart3; // 0x2A8
		::MoleMole::Config::ScreenEffectColor* scanColor1End; // 0x2B0
		::MoleMole::Config::ScreenEffectColor* scanColor2; // 0x2B8
		::MoleMole::Config::ScreenEffectVector4* outlineScreenSpaceMaskTexScaleOffset; // 0x2C0
		::MoleMole::Config::ScreenEffectColor* scanColor3; // 0x2C8
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x2D0
		::MoleMole::Config::ScreenEffectFloat* scanEnd2Soft; // 0x2D8
		::MoleMole::Config::ScreenEffectVector2* lensDistortionCenter; // 0x2E0
		::MoleMole::Config::ScreenEffectFloat* screenSpaceGridWidth; // 0x2E8
		::MoleMole::Config::ScreenEffectFloat* scanEnd1; // 0x2F0
		::MoleMole::Config::ScreenEffectColor* colorG; // 0x2F8
		::MoleMole::Config::ScreenEffectVector3* distanceColorizationOffsetSpeed; // 0x300
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionOffset; // 0x308
		::MoleMole::Config::ScreenEffectFloat* brightness; // 0x310
		::MoleMole::Config::ScreenEffectFloat* curvePower; // 0x318
		::MoleMole::Config::ScreenEffectFloat* distanceColorizationEffect; // 0x320
		::MoleMole::Config::ScreenEffectFloat* scanMaskIntensity0; // 0x328
		::MoleMole::Config::ScreenEffectColor* scanColor1; // 0x330
		::MoleMole::Config::ScreenEffectBool* reverse; // 0x338
		::MoleMole::Config::ScreenEffectBool* keepInFrontForUberPost; // 0x340
		::UnityEngine::Texture2D* _outlineDistortionTex; // 0x348
		::MoleMole::Config::ScreenEffectVector2* uvOffsetG; // 0x350
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionTiling; // 0x358
		::MoleMole::Config::ScreenEffectFloat* scanStart2; // 0x360
		::MoleMole::Config::ScreenEffectColor* scanColor0End; // 0x368
		::MoleMole::Config::ScreenEffectBool* useCustomScanDirection; // 0x370
		::MoleMole::Config::ScreenEffectFloat* scanMaskIntensity1; // 0x378
		::MoleMole::Config::ScreenEffectFloat* spotRadius; // 0x380
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionTexTiling; // 0x388
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionHeightStart; // 0x390
		::UnityEngine::Texture2D* _outlineScreenSpaceMaskTex; // 0x398
		::System::String* distanceColorizeTexturePath; // 0x3A0
		::MoleMole::Config::ScreenEffectFloat* overlayIntensity; // 0x3A8
		::MoleMole::Config::ScreenEffectFloat* scanStart3Soft; // 0x3B0
		::MoleMole::Config::ScreenEffectFloat* scanMaskYRange; // 0x3B8
		::MoleMole::Config::ScreenEffectColor* scanColor2End; // 0x3C0
		::MoleMole::Config::ScreenEffectFloat* lensDistortionScale; // 0x3C8
		::UnityEngine::Texture2D* _textureSheetTex; // 0x3D0
		::MoleMole::Config::ScreenEffectFloat* scanEnd0Soft; // 0x3D8
		::MoleMole::Config::ScreenEffectBool* gridOn; // 0x3E0
		::MoleMole::Config::ScreenEffectFloat* scanlineContrast; // 0x3E8
		::MoleMole::Config::ScreenEffectVector2* spotCenter; // 0x3F0
		::MoleMole::Config::ScreenEffectFieldHandleType colorTintStartHandleType; // 0x3F8
		::MoleMole::Config::ScreenEffectFieldHandleType enable2DSpotHandleType; // 0x3FC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineOpacityHandleType; // 0x400
		::MoleMole::Config::ScreenEffectFieldHandleType distanceColorizationEffectHandleType; // 0x404
		::MoleMole::Config::ScreenEffectFieldHandleType blackIntensityHandleType; // 0x408
		::MoleMole::Config::ScreenEffectFieldHandleType distanceColorizeTextureHandleType; // 0x40C
		::MoleMole::Config::ScreenEffectFieldHandleType outlineNormalThresholdScaleHandleType; // 0x410
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor2ModeHandleType; // 0x414
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart0SoftHandleType; // 0x418
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionEndHandleType; // 0x41C
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionTextureHandleType; // 0x420
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor3Mode; // 0x424
		::MoleMole::Config::ScreenEffectFieldHandleType scanlineBlendModeHandleType; // 0x428
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart2HandleType; // 0x42C
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd1SoftHandleType; // 0x430
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionIntensityHandleType; // 0x434
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart3HandleType; // 0x438
		::MoleMole::Config::ScreenEffectFieldHandleType screenSpaceGridWidthHandleType; // 0x43C
		::UnityEngine::Rendering::Universal::ScanMaskType scanMaskType; // 0x440
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorAMode; // 0x444
		::MoleMole::Config::ScreenEffectFieldHandleType screenSpaceGridHandleType; // 0x448
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor1EndHandleType; // 0x44C
		::MoleMole::Config::ScreenEffectFieldHandleType brightnessHandleType; // 0x450
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd3HandleType; // 0x454
		::MoleMole::Config::ScreenEffectFieldHandleType distanceColorizationTilingHandleType; // 0x458
		::MoleMole::Config::ScreenEffectFieldHandleType scanlineContrastHandleType; // 0x45C
		::MoleMole::Config::ScreenEffectFieldHandleType outlineScreenSpaceMaskTexScaleOffsetHandleType; // 0x460
		::MoleMole::Config::ScreenEffectFieldHandleType sliceWidthHandleType; // 0x464
		::MoleMole::Config::ScreenEffectFieldHandleType colorTintEndHandleType; // 0x468
		::MoleMole::Config::ScreenEffectFieldHandleType scanCustomCenterPositionHandleType; // 0x46C
		::MoleMole::Config::ScreenEffectFieldHandleType colorTintNearHandleType; // 0x470
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor1HandleType; // 0x474
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskIntensity3HandleType; // 0x478
		::MoleMole::Config::ScreenEffectFieldHandleType screenSpaceGridScaleHandleType; // 0x47C
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor2EndHandleType; // 0x480
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor2Mode; // 0x484
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionTilingHandleType; // 0x488
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskYRangeHandleType; // 0x48C
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart3SoftHandleType; // 0x490
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionHeightStartHandleType; // 0x494
		::System::Single gridPower; // 0x498
		::MoleMole::Config::ScreenEffectFieldHandleType outlineInUberShaderHandleType; // 0x49C
		::MoleMole::Config::ScreenEffectFieldHandleType uvOffsetRHandleType; // 0x4A0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionTexHandleType; // 0x4A4
		::MoleMole::Config::ScreenEffectFieldHandleType gridOnHandleType; // 0x4A8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineScreenSpaceMaskTexHandleType; // 0x4AC
		::MoleMole::Config::ScreenEffectFieldHandleType sliceColorBHandleType; // 0x4B0
		::MoleMole::Config::ScreenEffectFieldHandleType reverseHandleType; // 0x4B4
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd2SoftHandleType; // 0x4B8
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskIntensity0HandleType; // 0x4BC
		::MoleMole::Config::ScreenEffectFieldHandleType scanlineDistortionHandleType; // 0x4C0
		::UnityEngine::Vector2 textureSheetXY; // 0x4C4
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart2SoftHandleType; // 0x4CC
		::MoleMole::Config::ScreenEffectFieldHandleType applyBeforeUberPostHandleType; // 0x4D0
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionYMultiplierHandleType; // 0x4D4
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionCenterHandleType; // 0x4D8
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionOffsetSpeedHandleType; // 0x4DC
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionBlendModeHandleType; // 0x4E0
		::MoleMole::Config::ScreenEffectFieldHandleType spotRadiusHandleType; // 0x4E4
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionHeightFadeRangeHandleType; // 0x4E8
		::UnityEngine::Rendering::Universal::ScanlineBlendMode scanlineBlendMode; // 0x4EC
		::System::Single scanlineWidth; // 0x4F0
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor0HandleType; // 0x4F4
		::UnityEngine::Rendering::Universal::ChannelMapping scanMaskTexChannel; // 0x4F8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineNormalThresholdHandleType; // 0x4FC
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetIndexHandleType; // 0x500
		::System::Boolean textureSheetOn; // 0x504
		::System::Boolean enable; // 0x505
		::System::Boolean outlineBlendScanLine; // 0x506
		::System::Boolean gridBlendScanLine; // 0x507
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart1HandleType; // 0x508
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexOffsetHandleType; // 0x50C
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionUVSpeedHandleType; // 0x510
		::MoleMole::Config::ScreenEffectFieldHandleType useStencilHandleType; // 0x514
		::System::Single outlineNormalThreshold; // 0x518
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorBMode; // 0x51C
		::MoleMole::Config::ScreenEffectFieldHandleType fadeSourceImageHandleType; // 0x520
		::MoleMole::Config::ScreenEffectFieldHandleType groundYPosHandleType; // 0x524
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDiffOffsetHandleType; // 0x528
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskIntensity2HandleType; // 0x52C
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionColorHandleType; // 0x530
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor2HandleType; // 0x534
		::MoleMole::Config::ScreenEffectFieldHandleType gridBlendScanLineHandleType; // 0x538
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor3HandleType; // 0x53C
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd2HandleType; // 0x540
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexChannelHandleType; // 0x544
		::MoleMole::Config::ScreenEffectFieldHandleType overlayIntensityHandleType; // 0x548
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexUVSpeedHandleType; // 0x54C
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode distanceDistortionBlendMode; // 0x550
		::MoleMole::Config::ScreenEffectFieldHandleType sliceAngleHandleType; // 0x554
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionScaleHandleType; // 0x558
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor3ModeHandleType; // 0x55C
		::MoleMole::Config::ScreenEffectFieldHandleType hueHandleType; // 0x560
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd0SoftHandleType; // 0x564
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor0EndHandleType; // 0x568
		::MoleMole::Config::ScreenEffectFieldHandleType colorGHandleType; // 0x56C
		::MoleMole::Config::ScreenEffectFieldHandleType sliceColorBModeHandleType; // 0x570
		::MoleMole::Config::ScreenEffectFieldHandleType sliceColorAHandleType; // 0x574
		::System::Single outlineDepthThreshold; // 0x578
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x57C
		::MoleMole::Config::ScreenEffectFieldHandleType curvePowerHandleType; // 0x580
		::MoleMole::Config::ScreenEffectFieldHandleType scanlineWidthHandleType; // 0x584
		::MoleMole::Config::ScreenEffectFieldHandleType sliceOffsetHandleType; // 0x588
		::MoleMole::Config::ScreenEffectFieldHandleType outlineColorHandleType; // 0x58C
		::MoleMole::Config::ScreenEffectFieldHandleType gridColorHandleType; // 0x590
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexTilingHandleType; // 0x594
		::MoleMole::Config::ScreenEffectFieldHandleType colorRHandleType; // 0x598
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskIntensity1HandleType; // 0x59C
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionXMultiplierHandleType; // 0x5A0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionTexOffsetHandleType; // 0x5A4
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionStartHandleType; // 0x5A8
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart1SoftHandleType; // 0x5AC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDepthThresholdHandleType; // 0x5B0
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexHandleType; // 0x5B4
		::MoleMole::Config::ScreenEffectFieldHandleType spotCenterHandleType; // 0x5B8
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd1HandleType; // 0x5BC
		::MoleMole::Config::ScreenEffectFieldHandleType colorBHandleType; // 0x5C0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineOnHandleType; // 0x5C4
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionOffsetHandleType; // 0x5C8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionTexTilingHandleType; // 0x5CC
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetColorHandleType; // 0x5D0
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor3EndHandleType; // 0x5D4
		::MoleMole::Config::ScreenEffectFieldHandleType gridDistanceHandleType; // 0x5D8
		::System::Single outlineNormalThresholdScale; // 0x5DC
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor0ModeHandleType; // 0x5E0
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionIntensityHandleType; // 0x5E4
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionFadeRangeHandleType; // 0x5E8
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor1ModeHandleType; // 0x5EC
		::MoleMole::Config::ScreenEffectFieldHandleType gridPowerHandleType; // 0x5F0
		::MoleMole::Config::ScreenEffectFieldHandleType distanceColorizationOffsetSpeedHandleType; // 0x5F4
		::System::Single gridDistance; // 0x5F8
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskBaseYHandleType; // 0x5FC
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart0HandleType; // 0x600
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor1Mode; // 0x604
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionIntensityHandleType; // 0x608
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetTexHandleType; // 0x60C
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0x610
		::MoleMole::Config::ScreenEffectFieldHandleType customScanDirectionHandleType; // 0x614
		::MoleMole::Config::ScreenEffectFieldHandleType uvOffsetBHandleType; // 0x618
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTypeHandleType; // 0x61C
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd0HandleType; // 0x620
		::MoleMole::Config::ScreenEffectFieldHandleType uvOffsetGHandleType; // 0x624
		::MoleMole::Config::ScreenEffectFieldHandleType outlineBlendScanLineHandleType; // 0x628
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionHandleType; // 0x62C
		::MoleMole::Config::ScreenEffectFieldHandleType enableDistanceDistortionColorizationHandleType; // 0x630
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd3SoftHandleType; // 0x634
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionHeightEndHandleType; // 0x638
		::MoleMole::Config::ScreenEffectFieldHandleType colorTintFarHandleType; // 0x63C
		::MoleMole::Config::ScreenEffectFieldHandleType enableHandleType; // 0x640
		::UnityEngine::Rendering::Universal::ScanType scanType; // 0x644
		::System::Single outlineDiffOffset; // 0x648
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor0Mode; // 0x64C
		::MoleMole::Config::ScreenEffectFieldHandleType keepInFrontForUberPostHandleType; // 0x650
		::MoleMole::Config::ScreenEffectFieldHandleType scanTypeHandleType; // 0x654
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetOnHandleType; // 0x658
		::MoleMole::Config::ScreenEffectFieldHandleType contrastMiddlePointHandleType; // 0x65C
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetXYHandleType; // 0x660
		::MoleMole::Config::ScreenEffectFieldHandleType useCustomScanDirectionHandleType; // 0x664
		::MoleMole::Config::ScreenEffectFieldHandleType sliceColorAModeHandleType; // 0x668

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnable(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETENABLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetHue(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETHUE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBrightness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETBRIGHTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContrastMiddlePoint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCONTRASTMIDDLEPOINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetColorTintStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorTintNear(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTNEAR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetColorTintEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTEND_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorTintFar(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTFAR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanlineWidth(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINEWIDTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanlineContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINECONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanlineDistortion(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINEDISTORTION_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::ScanType GetScanType(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::ScanType(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANTYPE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseCustomScanDirection(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUSECUSTOMSCANDIRECTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCustomScanDirection(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCUSTOMSCANDIRECTION_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::ScanMaskType GetScanMaskType(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::ScanMaskType(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTYPE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_scanMaskTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_SCANMASKTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetScanMaskTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::ChannelMapping GetScanMaskTexChannel(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::ChannelMapping(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXCHANNEL_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetScanMaskTexTiling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXTILING_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetScanMaskTexOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetScanMaskTexUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanMaskBaseY(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKBASEY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanMaskYRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKYRANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetKeepInFrontForUberPost(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETKEEPINFRONTFORUBERPOST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanStart0(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART0_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanEnd0(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND0_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanStart0Soft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART0SOFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanEnd0Soft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND0SOFT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetScanColor0(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR0_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetScanColor0End(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR0END_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod GetScanColor0Mode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR0MODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanMaskIntensity0(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY0_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanStart1(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART1_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanEnd1(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND1_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanStart1Soft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART1SOFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanEnd1Soft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND1SOFT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetScanColor1(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR1_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetScanColor1End(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR1END_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod GetScanColor1Mode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR1MODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanMaskIntensity1(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY1_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanStart2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanEnd2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanStart2Soft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART2SOFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanEnd2Soft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND2SOFT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetScanColor2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetScanColor2End(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR2END_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod GetScanColor2Mode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR2MODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanMaskIntensity2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY2_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanStart3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART3_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanEnd3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND3_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanStart3Soft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART3SOFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanEnd3Soft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND3SOFT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetScanColor3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR3_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetScanColor3End(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR3END_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod GetScanColor3Mode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR3MODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScanMaskIntensity3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY3_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetUvOffsetR(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUVOFFSETR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorR(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetUvOffsetG(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUVOFFSETG_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorG(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORG_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetUvOffsetB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUVOFFSETB_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORB_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFadeSourceImage(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETFADESOURCEIMAGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSliceWidth(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICEWIDTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSliceAngle(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICEANGLE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetReverse(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETREVERSE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSliceOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSliceColorA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod GetSliceColorAMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORAMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSliceColorB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORB_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod GetSliceColorBMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORBMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetGridOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGridDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetGridBlendScanLine(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDBLENDSCANLINE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetGridColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGridPower(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDPOWER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGroundYPos(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGROUNDYPOS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScreenSpaceGridScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCREENSPACEGRIDSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScreenSpaceGridWidth(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCREENSPACEGRIDWIDTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineBlendScanLine(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEBLENDSCANLINE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineOpacity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEOPACITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineDiffOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDIFFOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineDepthThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDEPTHTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineNormalThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINENORMALTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOutlineNormalThresholdScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINENORMALTHRESHOLDSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetOutlineColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINECOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineInUberShader(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEINUBERSHADER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOutlineDistortion(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTION_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_outlineDistortionTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_OUTLINEDISTORTIONTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetOutlineDistortionTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetOutlineDistortionTexTiling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONTEXTILING_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetOutlineDistortionTexOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONTEXOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetOutlineDistortionUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetOutlineDistortionOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetOutlineDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetTextureSheetOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETON_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_textureSheetTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_TEXTURESHEETTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetTextureSheetTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetTextureSheetXY(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETXY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetTextureSheetIndex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETINDEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetTextureSheetColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLensDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLensDistortionXMultiplier(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONXMULTIPLIER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLensDistortionYMultiplier(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONYMULTIPLIER_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetLensDistortionCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLensDistortionScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableDistanceDistortionColorization(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETENABLEDISTANCEDISTORTIONCOLORIZATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceColorizationEffect(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZATIONEFFECT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_distanceDistortionTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_DISTANCEDISTORTIONTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetDistanceDistortionTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_distanceColorizeTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_DISTANCECOLORIZETEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetDistanceColorizeTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZETEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceDistortionStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceDistortionEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONEND_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceDistortionFadeRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONFADERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceDistortionHeightStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONHEIGHTSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceDistortionHeightEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONHEIGHTEND_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceDistortionHeightFadeRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONHEIGHTFADERANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetDistanceDistortionOffsetSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONOFFSETSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceDistortionTiling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONTILING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetDistanceColorizationOffsetSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZATIONOFFSETSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistanceColorizationTiling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZATIONTILING_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetDistanceDistortionColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode GetDistanceDistortionBlendMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONBLENDMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseStencil(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUSESTENCIL_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetApplyBeforeUberPost(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETAPPLYBEFOREUBERPOST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetScreenSpaceGrid(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCREENSPACEGRID_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_outlineScreenSpaceMaskTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_OUTLINESCREENSPACEMASKTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetOutlineScreenSpaceMaskTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINESCREENSPACEMASKTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetScanCustomCenterPosition(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCUSTOMCENTERPOSITION_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetOutlineScreenSpaceMaskTexScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINESCREENSPACEMASKTEXSCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::ScanlineBlendMode GetScanlineBlendMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::ScanlineBlendMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINEBLENDMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnable2DSpot(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETENABLE2DSPOT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetSpotCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSPOTCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSpotRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSPOTRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBlackIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETBLACKINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetOverlayIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOVERLAYINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCurvePower(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCURVEPOWER_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
