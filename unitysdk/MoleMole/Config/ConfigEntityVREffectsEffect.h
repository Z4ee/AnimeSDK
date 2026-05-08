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

#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETAPPLYBEFOREUBERPOST_OFFSET UNITYSDK_OFFSET(0x1424AF70)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0xED18CB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORB_OFFSET UNITYSDK_OFFSET(0xED1AD20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORG_OFFSET UNITYSDK_OFFSET(0xED1AC00)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORR_OFFSET UNITYSDK_OFFSET(0xED1AAE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTEND_OFFSET UNITYSDK_OFFSET(0xED18F50)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTFAR_OFFSET UNITYSDK_OFFSET(0xED18FD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTNEAR_OFFSET UNITYSDK_OFFSET(0xED18EB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCOLORTINTSTART_OFFSET UNITYSDK_OFFSET(0xED18E30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCONTRASTMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0xED18DB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0xED18D30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETCUSTOMSCANDIRECTION_OFFSET UNITYSDK_OFFSET(0xED192D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZATIONEFFECT_OFFSET UNITYSDK_OFFSET(0x1424A2D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZATIONOFFSETSPEED_OFFSET UNITYSDK_OFFSET(0x1424ACC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZATIONTILING_OFFSET UNITYSDK_OFFSET(0x1424AD60)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCECOLORIZETEXTURE_OFFSET UNITYSDK_OFFSET(0x1424A7B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONBLENDMODE_OFFSET UNITYSDK_OFFSET(0x1424AE80)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONCOLOR_OFFSET UNITYSDK_OFFSET(0x1424ADE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONEND_OFFSET UNITYSDK_OFFSET(0x1424A8A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONFADERANGE_OFFSET UNITYSDK_OFFSET(0x1424A920)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONHEIGHTEND_OFFSET UNITYSDK_OFFSET(0x1424AA20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONHEIGHTFADERANGE_OFFSET UNITYSDK_OFFSET(0x1424AAA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONHEIGHTSTART_OFFSET UNITYSDK_OFFSET(0x1424A9A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1424AC40)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONOFFSETSPEED_OFFSET UNITYSDK_OFFSET(0x1424AB20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONSTART_OFFSET UNITYSDK_OFFSET(0x1424A820)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1424A540)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETDISTANCEDISTORTIONTILING_OFFSET UNITYSDK_OFFSET(0x1424ABC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETENABLEDISTANCEDISTORTIONCOLORIZATION_OFFSET UNITYSDK_OFFSET(0x1424A250)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETENABLE_OFFSET UNITYSDK_OFFSET(0xED18B40)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETFADESOURCEIMAGE_OFFSET UNITYSDK_OFFSET(0xED1ADC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDBLENDSCANLINE_OFFSET UNITYSDK_OFFSET(0xED1B350)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDCOLOR_OFFSET UNITYSDK_OFFSET(0xED1B3C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDDISTANCE_OFFSET UNITYSDK_OFFSET(0xED1B2E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDON_OFFSET UNITYSDK_OFFSET(0xED1B260)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGRIDPOWER_OFFSET UNITYSDK_OFFSET(0xED1B460)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETGROUNDYPOS_OFFSET UNITYSDK_OFFSET(0xED1B4D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETHUE_OFFSET UNITYSDK_OFFSET(0xED18BB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETKEEPINFRONTFORUBERPOST_OFFSET UNITYSDK_OFFSET(0xED19920)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONCENTER_OFFSET UNITYSDK_OFFSET(0xED1C600)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0xED1C480)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONSCALE_OFFSET UNITYSDK_OFFSET(0x1424A1D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xED1C500)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETLENSDISTORTIONYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0xED1C580)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEBLENDSCANLINE_OFFSET UNITYSDK_OFFSET(0xED1B6D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINECOLOR_OFFSET UNITYSDK_OFFSET(0xED1B980)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDEPTHTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xED1B830)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDIFFOFFSET_OFFSET UNITYSDK_OFFSET(0xED1B7C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0xED1BF90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONOFFSET_OFFSET UNITYSDK_OFFSET(0xED1BF10)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONTEXOFFSET_OFFSET UNITYSDK_OFFSET(0xED1BE10)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONTEXTILING_OFFSET UNITYSDK_OFFSET(0xED1BD90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONTEX_OFFSET UNITYSDK_OFFSET(0xED1BD20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTIONUVSPEED_OFFSET UNITYSDK_OFFSET(0xED1BE90)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0xED1BAA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEINUBERSHADER_OFFSET UNITYSDK_OFFSET(0xED1BA20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINENORMALTHRESHOLDSCALE_OFFSET UNITYSDK_OFFSET(0xED1B910)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINENORMALTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xED1B8A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEON_OFFSET UNITYSDK_OFFSET(0xED1B650)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINEOPACITY_OFFSET UNITYSDK_OFFSET(0xED1B740)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINESCREENSPACEMASKTEXSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x1424B380)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETOUTLINESCREENSPACEMASKTEX_OFFSET UNITYSDK_OFFSET(0x1424B270)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETREVERSE_OFFSET UNITYSDK_OFFSET(0xED1AF40)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSATURATION_OFFSET UNITYSDK_OFFSET(0xED18C30)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR0END_OFFSET UNITYSDK_OFFSET(0xED19C40)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR0MODE_OFFSET UNITYSDK_OFFSET(0xED19CE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR0_OFFSET UNITYSDK_OFFSET(0xED19BA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR1END_OFFSET UNITYSDK_OFFSET(0xED1A070)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR1MODE_OFFSET UNITYSDK_OFFSET(0xED1A110)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR1_OFFSET UNITYSDK_OFFSET(0xED19FD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR2END_OFFSET UNITYSDK_OFFSET(0xED1A4A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR2MODE_OFFSET UNITYSDK_OFFSET(0xED1A540)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR2_OFFSET UNITYSDK_OFFSET(0xED1A400)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR3END_OFFSET UNITYSDK_OFFSET(0xED1A8D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR3MODE_OFFSET UNITYSDK_OFFSET(0xED1A970)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCOLOR3_OFFSET UNITYSDK_OFFSET(0xED1A830)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANCUSTOMCENTERPOSITION_OFFSET UNITYSDK_OFFSET(0x1424B2E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND0SOFT_OFFSET UNITYSDK_OFFSET(0xED19B20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND0_OFFSET UNITYSDK_OFFSET(0xED19A20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND1SOFT_OFFSET UNITYSDK_OFFSET(0xED19F50)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND1_OFFSET UNITYSDK_OFFSET(0xED19E50)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND2SOFT_OFFSET UNITYSDK_OFFSET(0xED1A380)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND2_OFFSET UNITYSDK_OFFSET(0xED1A280)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND3SOFT_OFFSET UNITYSDK_OFFSET(0xED1A7B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANEND3_OFFSET UNITYSDK_OFFSET(0xED1A6B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINECONTRAST_OFFSET UNITYSDK_OFFSET(0xED190E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0xED19160)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANLINEWIDTH_OFFSET UNITYSDK_OFFSET(0xED19070)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKBASEY_OFFSET UNITYSDK_OFFSET(0xED19820)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY0_OFFSET UNITYSDK_OFFSET(0xED19D50)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY1_OFFSET UNITYSDK_OFFSET(0xED1A180)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY2_OFFSET UNITYSDK_OFFSET(0xED1A5B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKINTENSITY3_OFFSET UNITYSDK_OFFSET(0xED1A9E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXCHANNEL_OFFSET UNITYSDK_OFFSET(0xED19630)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXOFFSET_OFFSET UNITYSDK_OFFSET(0xED19720)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXTILING_OFFSET UNITYSDK_OFFSET(0xED196A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEXUVSPEED_OFFSET UNITYSDK_OFFSET(0xED197A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTEX_OFFSET UNITYSDK_OFFSET(0xED195C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKTYPE_OFFSET UNITYSDK_OFFSET(0xED19350)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANMASKYRANGE_OFFSET UNITYSDK_OFFSET(0xED198A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART0SOFT_OFFSET UNITYSDK_OFFSET(0xED19AA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART0_OFFSET UNITYSDK_OFFSET(0xED199A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART1SOFT_OFFSET UNITYSDK_OFFSET(0xED19ED0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART1_OFFSET UNITYSDK_OFFSET(0xED19DD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART2SOFT_OFFSET UNITYSDK_OFFSET(0xED1A300)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART2_OFFSET UNITYSDK_OFFSET(0xED1A200)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART3SOFT_OFFSET UNITYSDK_OFFSET(0xED1A730)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANSTART3_OFFSET UNITYSDK_OFFSET(0xED1A630)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCANTYPE_OFFSET UNITYSDK_OFFSET(0xED191E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCREENSPACEGRIDSCALE_OFFSET UNITYSDK_OFFSET(0xED1B550)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCREENSPACEGRIDWIDTH_OFFSET UNITYSDK_OFFSET(0xED1B5D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSCREENSPACEGRID_OFFSET UNITYSDK_OFFSET(0x1424AFF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICEANGLE_OFFSET UNITYSDK_OFFSET(0xED1AEC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORAMODE_OFFSET UNITYSDK_OFFSET(0xED1B0E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORA_OFFSET UNITYSDK_OFFSET(0xED1B040)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORBMODE_OFFSET UNITYSDK_OFFSET(0xED1B1F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICECOLORB_OFFSET UNITYSDK_OFFSET(0xED1B150)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICEOFFSET_OFFSET UNITYSDK_OFFSET(0xED1AFC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETSLICEWIDTH_OFFSET UNITYSDK_OFFSET(0xED1AE40)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETCOLOR_OFFSET UNITYSDK_OFFSET(0xED1C3E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETINDEX_OFFSET UNITYSDK_OFFSET(0xED1C360)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETON_OFFSET UNITYSDK_OFFSET(0xED1C010)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETTEX_OFFSET UNITYSDK_OFFSET(0xED1C280)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETTEXTURESHEETXY_OFFSET UNITYSDK_OFFSET(0xED1C2F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUSECUSTOMSCANDIRECTION_OFFSET UNITYSDK_OFFSET(0xED19250)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUSESTENCIL_OFFSET UNITYSDK_OFFSET(0x1424AEF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUVOFFSETB_OFFSET UNITYSDK_OFFSET(0xED1ACA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUVOFFSETG_OFFSET UNITYSDK_OFFSET(0xED1AB80)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GETUVOFFSETR_OFFSET UNITYSDK_OFFSET(0xED1AA60)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_DISTANCECOLORIZETEXTURE_OFFSET UNITYSDK_OFFSET(0x1424A5B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_DISTANCEDISTORTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1424A350)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_OUTLINEDISTORTIONTEX_OFFSET UNITYSDK_OFFSET(0xED1BB20)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_OUTLINESCREENSPACEMASKTEX_OFFSET UNITYSDK_OFFSET(0x1424B070)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_SCANMASKTEX_OFFSET UNITYSDK_OFFSET(0xED193C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT_GET_TEXTURESHEETTEX_OFFSET UNITYSDK_OFFSET(0xED1C080)
#define MOLEMOLE_CONFIG_CONFIGENTITYVREFFECTSEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1424B420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityVREffectsEffect_TypeDefinitionIndex = 39333;

	class ConfigEntityVREffectsEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectBool* useCustomScanDirection; // 0x40
		::MoleMole::Config::ScreenEffectFloat* sliceOffset; // 0x48
		::MoleMole::Config::ScreenEffectBool* screenSpaceGrid; // 0x50
		::System::String* distanceDistortionTexturePath; // 0x58
		::MoleMole::Config::ScreenEffectFloat* scanStart0Soft; // 0x60
		::MoleMole::Config::ScreenEffectFloat* scanlineDistortion; // 0x68
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionOffset; // 0x70
		::MoleMole::Config::ScreenEffectFloat* outlineOpacity; // 0x78
		::MoleMole::Config::ScreenEffectFloat* scanMaskIntensity2; // 0x80
		::UnityEngine::Texture2D* _outlineScreenSpaceMaskTex; // 0x88
		::MoleMole::Config::ScreenEffectVector2* scanMaskTexOffset; // 0x90
		::MoleMole::Config::ScreenEffectColor* outlineColor; // 0x98
		::MoleMole::Config::ScreenEffectFloat* screenSpaceGridWidth; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* scanStart0; // 0xA8
		::MoleMole::Config::ScreenEffectFloat* groundYPos; // 0xB0
		::MoleMole::Config::ScreenEffectFloat* brightness; // 0xB8
		::MoleMole::Config::ScreenEffectColor* scanColor0End; // 0xC0
		::MoleMole::Config::ScreenEffectVector2* scanMaskTexUVSpeed; // 0xC8
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionHeightFadeRange; // 0xD0
		::UnityEngine::Texture2D* _distanceColorizeTexture; // 0xD8
		::UnityEngine::Texture2D* _scanMaskTex; // 0xE0
		::System::String* textureSheetTexPath; // 0xE8
		::MoleMole::Config::ScreenEffectFloat* lensDistortionXMultiplier; // 0xF0
		::MoleMole::Config::ScreenEffectBool* keepInFrontForUberPost; // 0xF8
		::MoleMole::Config::ScreenEffectBool* applyBeforeUberPost; // 0x100
		::MoleMole::Config::ScreenEffectColor* colorTintNear; // 0x108
		::MoleMole::Config::ScreenEffectFloat* scanMaskYRange; // 0x110
		::MoleMole::Config::ScreenEffectFloat* colorTintStart; // 0x118
		::MoleMole::Config::ScreenEffectBool* outlineDistortion; // 0x120
		::MoleMole::Config::ScreenEffectBool* useStencil; // 0x128
		::MoleMole::Config::ScreenEffectVector2* scanMaskTexTiling; // 0x130
		::System::String* scanMaskTexPath; // 0x138
		::System::String* outlineScreenSpaceMaskTexPath; // 0x140
		::MoleMole::Config::ScreenEffectFloat* lensDistortionIntensity; // 0x148
		::MoleMole::Config::ScreenEffectColor* scanColor0; // 0x150
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionEnd; // 0x158
		::MoleMole::Config::ScreenEffectFloat* hue; // 0x160
		::MoleMole::Config::ScreenEffectBool* gridOn; // 0x168
		::MoleMole::Config::ScreenEffectFloat* fadeSourceImage; // 0x170
		::MoleMole::Config::ScreenEffectFloat* lensDistortionYMultiplier; // 0x178
		::MoleMole::Config::ScreenEffectColor* scanColor2End; // 0x180
		::MoleMole::Config::ScreenEffectFloat* scanMaskIntensity0; // 0x188
		::MoleMole::Config::ScreenEffectVector2* uvOffsetR; // 0x190
		::MoleMole::Config::ScreenEffectColor* colorG; // 0x198
		::MoleMole::Config::ScreenEffectFloat* scanEnd0Soft; // 0x1A0
		::MoleMole::Config::ScreenEffectColor* sliceColorA; // 0x1A8
		::MoleMole::Config::ScreenEffectBool* enableDistanceDistortionColorization; // 0x1B0
		::MoleMole::Config::ScreenEffectFloat* distanceColorizationTiling; // 0x1B8
		::MoleMole::Config::ScreenEffectColor* scanColor3End; // 0x1C0
		::MoleMole::Config::ScreenEffectFloat* scanEnd1; // 0x1C8
		::MoleMole::Config::ScreenEffectFloat* contrastMiddlePoint; // 0x1D0
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0x1D8
		::MoleMole::Config::ScreenEffectBool* outlineOn; // 0x1E0
		::MoleMole::Config::ScreenEffectBool* reverse; // 0x1E8
		::MoleMole::Config::ScreenEffectFloat* scanStart1Soft; // 0x1F0
		::MoleMole::Config::ScreenEffectFloat* customScanDirection; // 0x1F8
		::MoleMole::Config::ScreenEffectFloat* scanEnd2; // 0x200
		::MoleMole::Config::ScreenEffectColor* scanColor3; // 0x208
		::MoleMole::Config::ScreenEffectFloat* scanMaskIntensity3; // 0x210
		::MoleMole::Config::ScreenEffectColor* textureSheetColor; // 0x218
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionIntensity; // 0x220
		::MoleMole::Config::ScreenEffectColor* distanceDistortionColor; // 0x228
		::MoleMole::Config::ScreenEffectBool* outlineInUberShader; // 0x230
		::MoleMole::Config::ScreenEffectColor* colorB; // 0x238
		::UnityEngine::Texture2D* _textureSheetTex; // 0x240
		::MoleMole::Config::ScreenEffectVector2* uvOffsetB; // 0x248
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x250
		::MoleMole::Config::ScreenEffectFloat* scanStart1; // 0x258
		::MoleMole::Config::ScreenEffectFloat* scanEnd3Soft; // 0x260
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionTexOffset; // 0x268
		::MoleMole::Config::ScreenEffectFloat* distanceColorizationEffect; // 0x270
		::MoleMole::Config::ScreenEffectColor* colorTintFar; // 0x278
		::MoleMole::Config::ScreenEffectVector3* distanceColorizationOffsetSpeed; // 0x280
		::MoleMole::Config::ScreenEffectFloat* scanEnd3; // 0x288
		::MoleMole::Config::ScreenEffectFloat* sliceWidth; // 0x290
		::MoleMole::Config::ScreenEffectFloat* screenSpaceGridScale; // 0x298
		::MoleMole::Config::ScreenEffectFloat* lensDistortionScale; // 0x2A0
		::MoleMole::Config::ScreenEffectColor* scanColor1; // 0x2A8
		::MoleMole::Config::ScreenEffectFloat* scanStart3Soft; // 0x2B0
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionIntensity; // 0x2B8
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionFadeRange; // 0x2C0
		::MoleMole::Config::ScreenEffectVector2* uvOffsetG; // 0x2C8
		::MoleMole::Config::ScreenEffectFloat* scanStart3; // 0x2D0
		::MoleMole::Config::ScreenEffectFloat* scanMaskIntensity1; // 0x2D8
		::MoleMole::Config::ScreenEffectVector3* distanceDistortionOffsetSpeed; // 0x2E0
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionTiling; // 0x2E8
		::System::String* distanceColorizeTexturePath; // 0x2F0
		::MoleMole::Config::ScreenEffectVector3* scanCustomCenterPosition; // 0x2F8
		::UnityEngine::Texture2D* _outlineDistortionTex; // 0x300
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionHeightStart; // 0x308
		::MoleMole::Config::ScreenEffectColor* colorR; // 0x310
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionStart; // 0x318
		::MoleMole::Config::ScreenEffectColor* scanColor1End; // 0x320
		::MoleMole::Config::ScreenEffectFloat* scanEnd2Soft; // 0x328
		::MoleMole::Config::ScreenEffectFloat* scanEnd0; // 0x330
		::MoleMole::Config::ScreenEffectVector4* outlineScreenSpaceMaskTexScaleOffset; // 0x338
		::MoleMole::Config::ScreenEffectFloat* colorTintEnd; // 0x340
		::MoleMole::Config::ScreenEffectFloat* sliceAngle; // 0x348
		::MoleMole::Config::ScreenEffectFloat* distanceDistortionHeightEnd; // 0x350
		::MoleMole::Config::ScreenEffectFloat* scanStart2Soft; // 0x358
		::MoleMole::Config::ScreenEffectFloat* textureSheetIndex; // 0x360
		::MoleMole::Config::ScreenEffectFloat* scanEnd1Soft; // 0x368
		::MoleMole::Config::ScreenEffectColor* gridColor; // 0x370
		::UnityEngine::Texture2D* _distanceDistortionTexture; // 0x378
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionTexTiling; // 0x380
		::System::String* outlineDistortionTexPath; // 0x388
		::MoleMole::Config::ScreenEffectFloat* scanlineContrast; // 0x390
		::MoleMole::Config::ScreenEffectFloat* scanMaskBaseY; // 0x398
		::MoleMole::Config::ScreenEffectVector2* outlineDistortionUVSpeed; // 0x3A0
		::MoleMole::Config::ScreenEffectColor* scanColor2; // 0x3A8
		::MoleMole::Config::ScreenEffectFloat* scanStart2; // 0x3B0
		::MoleMole::Config::ScreenEffectVector2* lensDistortionCenter; // 0x3B8
		::MoleMole::Config::ScreenEffectColor* sliceColorB; // 0x3C0
		::MoleMole::Config::ScreenEffectFieldHandleType sliceAngleHandleType; // 0x3C8
		::MoleMole::Config::ScreenEffectFieldHandleType uvOffsetGHandleType; // 0x3CC
		::MoleMole::Config::ScreenEffectFieldHandleType colorTintFarHandleType; // 0x3D0
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor2EndHandleType; // 0x3D4
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionUVSpeedHandleType; // 0x3D8
		::MoleMole::Config::ScreenEffectFieldHandleType sliceWidthHandleType; // 0x3DC
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd3SoftHandleType; // 0x3E0
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart1HandleType; // 0x3E4
		::MoleMole::Config::ScreenEffectFieldHandleType brightnessHandleType; // 0x3E8
		::System::Single outlineDiffOffset; // 0x3EC
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd0SoftHandleType; // 0x3F0
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexTilingHandleType; // 0x3F4
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x3F8
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexUVSpeedHandleType; // 0x3FC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineNormalThresholdScaleHandleType; // 0x400
		::MoleMole::Config::ScreenEffectFieldHandleType outlineNormalThresholdHandleType; // 0x404
		::MoleMole::Config::ScreenEffectFieldHandleType applyBeforeUberPostHandleType; // 0x408
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskYRangeHandleType; // 0x40C
		::MoleMole::Config::ScreenEffectFieldHandleType outlineInUberShaderHandleType; // 0x410
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd1HandleType; // 0x414
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart2SoftHandleType; // 0x418
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd2HandleType; // 0x41C
		::MoleMole::Config::ScreenEffectFieldHandleType gridDistanceHandleType; // 0x420
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetTexHandleType; // 0x424
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionXMultiplierHandleType; // 0x428
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart3SoftHandleType; // 0x42C
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor3Mode; // 0x430
		::MoleMole::Config::ScreenEffectFieldHandleType outlineOnHandleType; // 0x434
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionIntensityHandleType; // 0x438
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor0HandleType; // 0x43C
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionHeightStartHandleType; // 0x440
		::UnityEngine::Vector2 textureSheetXY; // 0x444
		::MoleMole::Config::ScreenEffectFieldHandleType screenSpaceGridHandleType; // 0x44C
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetIndexHandleType; // 0x450
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskBaseYHandleType; // 0x454
		::MoleMole::Config::ScreenEffectFieldHandleType distanceColorizeTextureHandleType; // 0x458
		::MoleMole::Config::ScreenEffectFieldHandleType colorBHandleType; // 0x45C
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionTexHandleType; // 0x460
		::MoleMole::Config::ScreenEffectFieldHandleType sliceColorAModeHandleType; // 0x464
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetXYHandleType; // 0x468
		::MoleMole::Config::ScreenEffectFieldHandleType scanlineDistortionHandleType; // 0x46C
		::MoleMole::Config::ScreenEffectFieldHandleType colorGHandleType; // 0x470
		::MoleMole::Config::ScreenEffectFieldHandleType outlineOpacityHandleType; // 0x474
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor1Mode; // 0x478
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd3HandleType; // 0x47C
		::System::Single outlineDepthThreshold; // 0x480
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexOffsetHandleType; // 0x484
		::MoleMole::Config::ScreenEffectFieldHandleType outlineScreenSpaceMaskTexHandleType; // 0x488
		::MoleMole::Config::ScreenEffectFieldHandleType fadeSourceImageHandleType; // 0x48C
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionYMultiplierHandleType; // 0x490
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionHeightEndHandleType; // 0x494
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorBMode; // 0x498
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionIntensityHandleType; // 0x49C
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionTexTilingHandleType; // 0x4A0
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetColorHandleType; // 0x4A4
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor3EndHandleType; // 0x4A8
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor1EndHandleType; // 0x4AC
		::MoleMole::Config::ScreenEffectFieldHandleType screenSpaceGridScaleHandleType; // 0x4B0
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor0ModeHandleType; // 0x4B4
		::UnityEngine::Rendering::Universal::ScanMaskType scanMaskType; // 0x4B8
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart1SoftHandleType; // 0x4BC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionTexOffsetHandleType; // 0x4C0
		::System::Boolean outlineBlendScanLine; // 0x4C4
		::System::Boolean textureSheetOn; // 0x4C5
		::System::Boolean enable; // 0x4C6
		::System::Boolean gridBlendScanLine; // 0x4C7
		::MoleMole::Config::ScreenEffectFieldHandleType outlineColorHandleType; // 0x4C8
		::MoleMole::Config::ScreenEffectFieldHandleType sliceColorAHandleType; // 0x4CC
		::MoleMole::Config::ScreenEffectFieldHandleType scanlineWidthHandleType; // 0x4D0
		::MoleMole::Config::ScreenEffectFieldHandleType customScanDirectionHandleType; // 0x4D4
		::UnityEngine::Rendering::Universal::ScanType scanType; // 0x4D8
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor0EndHandleType; // 0x4DC
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod sliceColorAMode; // 0x4E0
		::MoleMole::Config::ScreenEffectFieldHandleType colorTintEndHandleType; // 0x4E4
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor3ModeHandleType; // 0x4E8
		::UnityEngine::Rendering::Universal::ChannelMapping scanMaskTexChannel; // 0x4EC
		::MoleMole::Config::ScreenEffectFieldHandleType outlineScreenSpaceMaskTexScaleOffsetHandleType; // 0x4F0
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskIntensity3HandleType; // 0x4F4
		::MoleMole::Config::ScreenEffectFieldHandleType colorRHandleType; // 0x4F8
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDiffOffsetHandleType; // 0x4FC
		::System::Single gridPower; // 0x500
		::UnityEngine::Rendering::Universal::DistanceDistortionBlendMode distanceDistortionBlendMode; // 0x504
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart2HandleType; // 0x508
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDepthThresholdHandleType; // 0x50C
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd0HandleType; // 0x510
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTypeHandleType; // 0x514
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor2ModeHandleType; // 0x518
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionStartHandleType; // 0x51C
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionHeightFadeRangeHandleType; // 0x520
		::System::Single scanlineWidth; // 0x524
		::MoleMole::Config::ScreenEffectFieldHandleType sliceColorBModeHandleType; // 0x528
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionScaleHandleType; // 0x52C
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd2SoftHandleType; // 0x530
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor3HandleType; // 0x534
		::MoleMole::Config::ScreenEffectFieldHandleType gridBlendScanLineHandleType; // 0x538
		::MoleMole::Config::ScreenEffectFieldHandleType scanEnd1SoftHandleType; // 0x53C
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0x540
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart3HandleType; // 0x544
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskIntensity1HandleType; // 0x548
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskIntensity2HandleType; // 0x54C
		::MoleMole::Config::ScreenEffectFieldHandleType keepInFrontForUberPostHandleType; // 0x550
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionOffsetSpeedHandleType; // 0x554
		::MoleMole::Config::ScreenEffectFieldHandleType distanceColorizationOffsetSpeedHandleType; // 0x558
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionIntensityHandleType; // 0x55C
		::MoleMole::Config::ScreenEffectFieldHandleType gridColorHandleType; // 0x560
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor1ModeHandleType; // 0x564
		::MoleMole::Config::ScreenEffectFieldHandleType textureSheetOnHandleType; // 0x568
		::MoleMole::Config::ScreenEffectFieldHandleType uvOffsetBHandleType; // 0x56C
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionTilingHandleType; // 0x570
		::MoleMole::Config::ScreenEffectFieldHandleType enableHandleType; // 0x574
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart0SoftHandleType; // 0x578
		::MoleMole::Config::ScreenEffectFieldHandleType scanTypeHandleType; // 0x57C
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionHandleType; // 0x580
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionColorHandleType; // 0x584
		::MoleMole::Config::ScreenEffectFieldHandleType scanCustomCenterPositionHandleType; // 0x588
		::MoleMole::Config::ScreenEffectFieldHandleType enableDistanceDistortionColorizationHandleType; // 0x58C
		::MoleMole::Config::ScreenEffectFieldHandleType hueHandleType; // 0x590
		::MoleMole::Config::ScreenEffectFieldHandleType sliceColorBHandleType; // 0x594
		::System::Single outlineNormalThresholdScale; // 0x598
		::MoleMole::Config::ScreenEffectFieldHandleType outlineDistortionOffsetHandleType; // 0x59C
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionTextureHandleType; // 0x5A0
		::MoleMole::Config::ScreenEffectFieldHandleType lensDistortionCenterHandleType; // 0x5A4
		::MoleMole::Config::ScreenEffectFieldHandleType uvOffsetRHandleType; // 0x5A8
		::MoleMole::Config::ScreenEffectFieldHandleType gridPowerHandleType; // 0x5AC
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor2HandleType; // 0x5B0
		::MoleMole::Config::ScreenEffectFieldHandleType distanceColorizationTilingHandleType; // 0x5B4
		::System::Single outlineNormalThreshold; // 0x5B8
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexHandleType; // 0x5BC
		::MoleMole::Config::ScreenEffectFieldHandleType distanceColorizationEffectHandleType; // 0x5C0
		::MoleMole::Config::ScreenEffectFieldHandleType useCustomScanDirectionHandleType; // 0x5C4
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor0Mode; // 0x5C8
		::MoleMole::Config::ScreenEffectFieldHandleType scanStart0HandleType; // 0x5CC
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionBlendModeHandleType; // 0x5D0
		::MoleMole::Config::ScreenEffectFieldHandleType scanColor1HandleType; // 0x5D4
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionEndHandleType; // 0x5D8
		::System::Single gridDistance; // 0x5DC
		::MoleMole::Config::ScreenEffectFieldHandleType gridOnHandleType; // 0x5E0
		::UnityEngine::NAPRenderPipeline0::VREffects_NativeSRP_ColorBlendMethod scanColor2Mode; // 0x5E4
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskIntensity0HandleType; // 0x5E8
		::MoleMole::Config::ScreenEffectFieldHandleType scanlineContrastHandleType; // 0x5EC
		::MoleMole::Config::ScreenEffectFieldHandleType groundYPosHandleType; // 0x5F0
		::MoleMole::Config::ScreenEffectFieldHandleType distanceDistortionFadeRangeHandleType; // 0x5F4
		::MoleMole::Config::ScreenEffectFieldHandleType reverseHandleType; // 0x5F8
		::MoleMole::Config::ScreenEffectFieldHandleType contrastMiddlePointHandleType; // 0x5FC
		::MoleMole::Config::ScreenEffectFieldHandleType scanMaskTexChannelHandleType; // 0x600
		::MoleMole::Config::ScreenEffectFieldHandleType sliceOffsetHandleType; // 0x604
		::MoleMole::Config::ScreenEffectFieldHandleType outlineBlendScanLineHandleType; // 0x608
		::MoleMole::Config::ScreenEffectFieldHandleType useStencilHandleType; // 0x60C
		::MoleMole::Config::ScreenEffectFieldHandleType screenSpaceGridWidthHandleType; // 0x610
		::MoleMole::Config::ScreenEffectFieldHandleType colorTintStartHandleType; // 0x614
		::MoleMole::Config::ScreenEffectFieldHandleType colorTintNearHandleType; // 0x618

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
	};
}
