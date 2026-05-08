#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rendering/Universal/BlendModes.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ChannelMapping.h"
#include "unitysdk/UnityEngine/Rendering/Universal/UvModes.h"
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

#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETALPHACHANNELMAPPING_OFFSET UNITYSDK_OFFSET(0x12308690)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETALPHACUTOFF_OFFSET UNITYSDK_OFFSET(0x123099C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETBLENDMODE_OFFSET UNITYSDK_OFFSET(0x12307E50)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETBOUNDARYMODE_OFFSET UNITYSDK_OFFSET(0x12307F40)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETBOUNDARYUVASPECT_OFFSET UNITYSDK_OFFSET(0x12307FB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETBOUNDARY_OFFSET UNITYSDK_OFFSET(0x12308030)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTBLITWITHPROXY_OFFSET UNITYSDK_OFFSET(0x1230A020)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTCOLOR_OFFSET UNITYSDK_OFFSET(0x1230B290)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTDISTORTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1230A310)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTDISTORTIONUVSCALE_OFFSET UNITYSDK_OFFSET(0x1230A380)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTDISTORTIONUVSPEED_OFFSET UNITYSDK_OFFSET(0x1230A400)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTDOWNSAMPLE_OFFSET UNITYSDK_OFFSET(0x1230A0A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTFRESNELPOWER_OFFSET UNITYSDK_OFFSET(0x1230B3A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTFRESNEL_OFFSET UNITYSDK_OFFSET(0x1230B330)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1230A500)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTLAYER_OFFSET UNITYSDK_OFFSET(0x1230A780)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTMININTENSITY_OFFSET UNITYSDK_OFFSET(0x1230B490)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTRADIUS_OFFSET UNITYSDK_OFFSET(0x1230A480)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTSELFMASK_OFFSET UNITYSDK_OFFSET(0x1230A580)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTSINGLECOLOR_OFFSET UNITYSDK_OFFSET(0x1230B420)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1230A6E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOST_OFFSET UNITYSDK_OFFSET(0x12309FB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCOLORA_OFFSET UNITYSDK_OFFSET(0x12308700)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCOLORB_OFFSET UNITYSDK_OFFSET(0x12308780)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCOLORCHANNELMAPPING_OFFSET UNITYSDK_OFFSET(0x12308620)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVEAFFECTS2TONE_OFFSET UNITYSDK_OFFSET(0x123092E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVECHANNEL_OFFSET UNITYSDK_OFFSET(0x123090F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVEDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x123098C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVEPROGRESS_OFFSET UNITYSDK_OFFSET(0x12309160)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVERANDOMUV_OFFSET UNITYSDK_OFFSET(0x12309260)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVETEXSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x12309050)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVETEXUVMODE_OFFSET UNITYSDK_OFFSET(0x12308FE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVETEX_OFFSET UNITYSDK_OFFSET(0x12308F70)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVEUVSPEED_OFFSET UNITYSDK_OFFSET(0x123091E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONCHANNEL_OFFSET UNITYSDK_OFFSET(0x123096D0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x12309840)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONRANDOMUV_OFFSET UNITYSDK_OFFSET(0x123097C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONTEXSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x12309630)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONTEXUVMODE_OFFSET UNITYSDK_OFFSET(0x123095C0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONTEX_OFFSET UNITYSDK_OFFSET(0x12309550)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONUVSPEED_OFFSET UNITYSDK_OFFSET(0x12309740)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETENABLED_OFFSET UNITYSDK_OFFSET(0x12307DD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETFEATHER_OFFSET UNITYSDK_OFFSET(0x123080B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETGHOSTDEPTHCULLING_OFFSET UNITYSDK_OFFSET(0x1230A5F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x12309F30)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETINVERT_OFFSET UNITYSDK_OFFSET(0x123081B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER1COLOR_OFFSET UNITYSDK_OFFSET(0x1230A970)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER1DIRECTION_OFFSET UNITYSDK_OFFSET(0x1230A7F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER1INTENSITY_OFFSET UNITYSDK_OFFSET(0x1230A8F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER1RADIUS_OFFSET UNITYSDK_OFFSET(0x1230A870)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER2COLOR_OFFSET UNITYSDK_OFFSET(0x1230AB90)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER2DIRECTION_OFFSET UNITYSDK_OFFSET(0x1230AA10)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER2INTENSITY_OFFSET UNITYSDK_OFFSET(0x1230AB10)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER2RADIUS_OFFSET UNITYSDK_OFFSET(0x1230AA90)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER3COLOR_OFFSET UNITYSDK_OFFSET(0x1230ADB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER3DIRECTION_OFFSET UNITYSDK_OFFSET(0x1230AC30)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER3INTENSITY_OFFSET UNITYSDK_OFFSET(0x1230AD30)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER3RADIUS_OFFSET UNITYSDK_OFFSET(0x1230ACB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER4COLOR_OFFSET UNITYSDK_OFFSET(0x1230AFD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER4DIRECTION_OFFSET UNITYSDK_OFFSET(0x1230AE50)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER4INTENSITY_OFFSET UNITYSDK_OFFSET(0x1230AF50)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER4RADIUS_OFFSET UNITYSDK_OFFSET(0x1230AED0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER5COLOR_OFFSET UNITYSDK_OFFSET(0x1230B1F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER5DIRECTION_OFFSET UNITYSDK_OFFSET(0x1230B070)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER5INTENSITY_OFFSET UNITYSDK_OFFSET(0x1230B170)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER5RADIUS_OFFSET UNITYSDK_OFFSET(0x1230B0F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLERPBRIGHTNESS_OFFSET UNITYSDK_OFFSET(0x12308800)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMAINTEXSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x12308500)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMAINTEXUVMODE_OFFSET UNITYSDK_OFFSET(0x12308490)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMAINTEX_OFFSET UNITYSDK_OFFSET(0x12308420)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKCHANNELMAPPING_OFFSET UNITYSDK_OFFSET(0x12308C80)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKTEXSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x12308BE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKTEXUVMODE_OFFSET UNITYSDK_OFFSET(0x12308B70)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKTEX_OFFSET UNITYSDK_OFFSET(0x12308B00)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKUVMOVESPEED_OFFSET UNITYSDK_OFFSET(0x12308CF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMAXOPACITY_OFFSET UNITYSDK_OFFSET(0x12308130)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETPOLARUVASPECT_OFFSET UNITYSDK_OFFSET(0x12307EC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x12309E30)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONTEXSCALEOFFSET_OFFSET UNITYSDK_OFFSET(0x12309D90)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONTEXUVMODE_OFFSET UNITYSDK_OFFSET(0x12309D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONTEX_OFFSET UNITYSDK_OFFSET(0x12309CB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONUVSPEED_OFFSET UNITYSDK_OFFSET(0x12309EB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTION_OFFSET UNITYSDK_OFFSET(0x12309A40)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSOFTRANGE_OFFSET UNITYSDK_OFFSET(0x12309940)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETUSERGBCOLORCHANNELMAPPING_OFFSET UNITYSDK_OFFSET(0x123085A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETUSESCREENSPACERADIUS_OFFSET UNITYSDK_OFFSET(0x1230A670)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETUVMOVESPEED_OFFSET UNITYSDK_OFFSET(0x12308880)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_CHARACTERGHOSTDISTORTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1230A110)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_DISSOLVETEX_OFFSET UNITYSDK_OFFSET(0x12308D70)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_DISTORTIONTEX_OFFSET UNITYSDK_OFFSET(0x12309360)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_MAINTEX_OFFSET UNITYSDK_OFFSET(0x12308230)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_MASKTEX_OFFSET UNITYSDK_OFFSET(0x12308900)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_SCREENDISTORTIONTEX_OFFSET UNITYSDK_OFFSET(0x12309AC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1230B510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityScreenEffect_TypeDefinitionIndex = 51672;

	class ConfigEntityScreenEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* layer1Radius; // 0x40
		::UnityEngine::Texture2D* _screenDistortionTex; // 0x48
		::UnityEngine::Texture2D* _mainTex; // 0x50
		::System::String* mainTexPath; // 0x58
		::MoleMole::Config::ScreenEffectFloat* layer4Radius; // 0x60
		::UnityEngine::Texture2D* _distortionTex; // 0x68
		::MoleMole::Config::ScreenEffectBool* invert; // 0x70
		::MoleMole::Config::ScreenEffectFloat* layer2Radius; // 0x78
		::MoleMole::Config::ScreenEffectColor* characterGhostColor; // 0x80
		::MoleMole::Config::ScreenEffectFloat* feather; // 0x88
		::MoleMole::Config::ScreenEffectColor* layer4Color; // 0x90
		::MoleMole::Config::ScreenEffectVector2* characterGhostDistortionUVSpeed; // 0x98
		::MoleMole::Config::ScreenEffectFloat* layer5Direction; // 0xA0
		::MoleMole::Config::ScreenEffectColor* layer1Color; // 0xA8
		::MoleMole::Config::ScreenEffectFloat* screenDistortionIntensity; // 0xB0
		::MoleMole::Config::ScreenEffectBool* ignoreTimeScale; // 0xB8
		::MoleMole::Config::ScreenEffectFloat* lerpBrightness; // 0xC0
		::MoleMole::Config::ScreenEffectVector4* maskTexScaleOffset; // 0xC8
		::MoleMole::Config::ScreenEffectVector2* screenDistortionUVSpeed; // 0xD0
		::MoleMole::Config::ScreenEffectFloat* dissolveProgress; // 0xD8
		::MoleMole::Config::ScreenEffectBool* distortionRandomUV; // 0xE0
		::MoleMole::Config::ScreenEffectBool* enabled; // 0xE8
		::MoleMole::Config::ScreenEffectVector2* dissolveUVSpeed; // 0xF0
		::MoleMole::Config::ScreenEffectVector2* distortionUVSpeed; // 0xF8
		::MoleMole::Config::ScreenEffectFloat* alphaCutoff; // 0x100
		::MoleMole::Config::ScreenEffectFloat* polarUVAspect; // 0x108
		::MoleMole::Config::ScreenEffectFloat* boundaryUVAspect; // 0x110
		::MoleMole::Config::ScreenEffectFloat* characterGhostFresnelPower; // 0x118
		::MoleMole::Config::ScreenEffectFloat* layer3Direction; // 0x120
		::MoleMole::Config::ScreenEffectFloat* dissolveDistortionIntensity; // 0x128
		::MoleMole::Config::ScreenEffectBool* dissolveRandomUV; // 0x130
		::MoleMole::Config::ScreenEffectFloat* layer2Direction; // 0x138
		::MoleMole::Config::ScreenEffectVector4* mainTexScaleOffset; // 0x140
		::MoleMole::Config::ScreenEffectBool* dissolveAffects2Tone; // 0x148
		::MoleMole::Config::ScreenEffectVector2* maskUvMoveSpeed; // 0x150
		::MoleMole::Config::ScreenEffectFloat* distortionIntensity; // 0x158
		::MoleMole::Config::ScreenEffectFloat* layer5Radius; // 0x160
		::MoleMole::Config::ScreenEffectFloat* layer1Direction; // 0x168
		::MoleMole::Config::ScreenEffectColor* layer5Color; // 0x170
		::MoleMole::Config::ScreenEffectColor* layer2Color; // 0x178
		::UnityEngine::Texture2D* _dissolveTex; // 0x180
		::MoleMole::Config::ScreenEffectVector4* dissolveTexScaleOffset; // 0x188
		::MoleMole::Config::ScreenEffectColor* layer3Color; // 0x190
		::MoleMole::Config::ScreenEffectFloat* layer3Intensity; // 0x198
		::MoleMole::Config::ScreenEffectBool* characterGhostBlitWithProxy; // 0x1A0
		::System::String* dissolveTexPath; // 0x1A8
		::MoleMole::Config::ScreenEffectFloat* layer4Direction; // 0x1B0
		::MoleMole::Config::ScreenEffectBool* screenDistortion; // 0x1B8
		::MoleMole::Config::ScreenEffectFloat* layer3Radius; // 0x1C0
		::MoleMole::Config::ScreenEffectFloat* softRange; // 0x1C8
		::System::String* maskTexPath; // 0x1D0
		::MoleMole::Config::ScreenEffectVector3* characterGhostTargetPosition; // 0x1D8
		::System::String* characterGhostDistortionTexturePath; // 0x1E0
		::System::String* screenDistortionTexPath; // 0x1E8
		::UnityEngine::Texture2D* _characterGhostDistortionTexture; // 0x1F0
		::MoleMole::Config::ScreenEffectVector2* uvMoveSpeed; // 0x1F8
		::MoleMole::Config::ScreenEffectBool* ghostDepthCulling; // 0x200
		::MoleMole::Config::ScreenEffectFloat* maxOpacity; // 0x208
		::MoleMole::Config::ScreenEffectFloat* boundary; // 0x210
		::MoleMole::Config::ScreenEffectFloat* layer1Intensity; // 0x218
		::MoleMole::Config::ScreenEffectFloat* layer4Intensity; // 0x220
		::UnityEngine::Texture2D* _maskTex; // 0x228
		::MoleMole::Config::ScreenEffectFloat* characterGhostMinIntensity; // 0x230
		::MoleMole::Config::ScreenEffectFloat* characterGhostRadius; // 0x238
		::MoleMole::Config::ScreenEffectFloat* characterGhostIntensity; // 0x240
		::MoleMole::Config::ScreenEffectBool* useRGBColorChannelMapping; // 0x248
		::MoleMole::Config::ScreenEffectVector4* distortionTexScaleOffset; // 0x250
		::MoleMole::Config::ScreenEffectFloat* layer2Intensity; // 0x258
		::MoleMole::Config::ScreenEffectFloat* layer5Intensity; // 0x260
		::System::String* distortionTexPath; // 0x268
		::MoleMole::Config::ScreenEffectVector2* characterGhostDistortionUVScale; // 0x270
		::MoleMole::Config::ScreenEffectVector4* screenDistortionTexScaleOffset; // 0x278
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostFresnelPowerHandleType; // 0x280
		::UnityEngine::Rendering::Universal::ChannelMapping alphaChannelMapping; // 0x284
		::MoleMole::Config::ScreenEffectFieldHandleType maskUvMoveSpeedHandleType; // 0x288
		::UnityEngine::Rendering::Universal::ChannelMapping dissolveChannel; // 0x28C
		::UnityEngine::Rendering::Universal::UvModes mainTexUvMode; // 0x290
		::MoleMole::Config::ScreenEffectFieldHandleType boundaryUVAspectHandleType; // 0x294
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostDistortionUVSpeedHandleType; // 0x298
		::MoleMole::Config::ScreenEffectFieldHandleType distortionIntensityHandleType; // 0x29C
		::MoleMole::Config::ScreenEffectFieldHandleType layer5DirectionHandleType; // 0x2A0
		::MoleMole::Config::ScreenEffectFieldHandleType alphaCutoffHandleType; // 0x2A4
		::UnityEngine::Rendering::Universal::ChannelMapping distortionChannel; // 0x2A8
		::MoleMole::Config::ScreenEffectFieldHandleType alphaChannelMappingHandleType; // 0x2AC
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostMinIntensityHandleType; // 0x2B0
		::MoleMole::Config::ScreenEffectFieldHandleType layer4RadiusHandleType; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType layer2RadiusHandleType; // 0x2B8
		::MoleMole::Config::ScreenEffectFieldHandleType layer3DirectionHandleType; // 0x2BC
		::UnityEngine::Rendering::Universal::BlendModes blendMode; // 0x2C0
		::MoleMole::Config::ScreenEffectFieldHandleType layer1IntensityHandleType; // 0x2C4
		::MoleMole::Config::ScreenEffectFieldHandleType layer4ColorHandleType; // 0x2C8
		::MoleMole::Config::ScreenEffectFieldHandleType maskChannelMappingHandleType; // 0x2CC
		::UnityEngine::Rendering::Universal::UvModes dissolveTexUvMode; // 0x2D0
		::UnityEngine::Rendering::Universal::UvModes distortionTexUvMode; // 0x2D4
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostSelfMaskHandleType; // 0x2D8
		::UnityEngine::Rendering::Universal::ChannelMapping colorChannelMapping; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType maxOpacityHandleType; // 0x2E0
		::MoleMole::Config::ScreenEffectFieldHandleType boundaryModeHandleType; // 0x2E4
		::System::Boolean useScreenSpaceRadius; // 0x2E8
		::System::Boolean characterGhost; // 0x2E9
		::MoleMole::Config::ScreenEffectFieldHandleType colorBHandleType; // 0x2EC
		::UnityEngine::Rendering::Universal::UvModes maskTexUvMode; // 0x2F0
		::MoleMole::Config::ScreenEffectFieldHandleType distortionTexUvModeHandleType; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType layer4IntensityHandleType; // 0x2F8
		::MoleMole::Config::ScreenEffectFieldHandleType mainTexUvModeHandleType; // 0x2FC
		::MoleMole::Config::ScreenEffectFieldHandleType layer1DirectionHandleType; // 0x300
		::MoleMole::Config::ScreenEffectFieldHandleType dissolveProgressHandleType; // 0x304
		::MoleMole::Config::ScreenEffectFieldHandleType dissolveDistortionIntensityHandleType; // 0x308
		::MoleMole::Config::ScreenEffectFieldHandleType distortionTexHandleType; // 0x30C
		::MoleMole::Config::ScreenEffectFieldHandleType maskTexHandleType; // 0x310
		::System::Boolean characterGhostSingleColor; // 0x314
		::System::Boolean characterGhostSelfMask; // 0x315
		::System::Boolean characterGhostFresnel; // 0x316
		::MoleMole::Config::ScreenEffectFieldHandleType layer2ColorHandleType; // 0x318
		::MoleMole::Config::ScreenEffectFieldHandleType ghostDepthCullingHandleType; // 0x31C
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostFresnelHandleType; // 0x320
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostRadiusHandleType; // 0x324
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostBlitWithProxyHandleType; // 0x328
		::MoleMole::Config::ScreenEffectFieldHandleType dissolveTexUvModeHandleType; // 0x32C
		::MoleMole::Config::ScreenEffectFieldHandleType layer1ColorHandleType; // 0x330
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostDistortionTextureHandleType; // 0x334
		::MoleMole::Config::ScreenEffectFieldHandleType screenDistortionHandleType; // 0x338
		::MoleMole::Config::ScreenEffectFieldHandleType layer2IntensityHandleType; // 0x33C
		::MoleMole::Config::ScreenEffectFieldHandleType dissolveTexScaleOffsetHandleType; // 0x340
		::UnityEngine::Rendering::Universal::ChannelMapping maskChannelMapping; // 0x344
		::MoleMole::Config::ScreenEffectFieldHandleType screenDistortionTexUvModeHandleType; // 0x348
		::MoleMole::Config::ScreenEffectFieldHandleType distortionRandomUVHandleType; // 0x34C
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostHandleType; // 0x350
		::MoleMole::Config::ScreenEffectFieldHandleType ignoreTimeScaleHandleType; // 0x354
		::MoleMole::Config::ScreenEffectFieldHandleType layer3RadiusHandleType; // 0x358
		::MoleMole::Config::ScreenEffectFieldHandleType useScreenSpaceRadiusHandleType; // 0x35C
		::MoleMole::Config::ScreenEffectFieldHandleType distortionChannelHandleType; // 0x360
		::MoleMole::Config::ScreenEffectFieldHandleType colorAHandleType; // 0x364
		::MoleMole::Config::ScreenEffectFieldHandleType maskTexScaleOffsetHandleType; // 0x368
		::MoleMole::Config::ScreenEffectFieldHandleType layer5ColorHandleType; // 0x36C
		::UnityEngine::Color colorB; // 0x370
		::MoleMole::Config::ScreenEffectFieldHandleType layer3IntensityHandleType; // 0x380
		::MoleMole::Config::ScreenEffectFieldHandleType enabledHandleType; // 0x384
		::MoleMole::Config::ScreenEffectFieldHandleType dissolveTexHandleType; // 0x388
		::System::Int32 characterGhostDownSample; // 0x38C
		::UnityEngine::Rendering::Universal::UvModes boundaryMode; // 0x390
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostLayerHandleType; // 0x394
		::MoleMole::Config::ScreenEffectFieldHandleType dissolveUVSpeedHandleType; // 0x398
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostDistortionUVScaleHandleType; // 0x39C
		::MoleMole::Config::ScreenEffectFieldHandleType mainTexHandleType; // 0x3A0
		::System::Int32 characterGhostLayer; // 0x3A4
		::MoleMole::Config::ScreenEffectFieldHandleType mainTexScaleOffsetHandleType; // 0x3A8
		::MoleMole::Config::ScreenEffectFieldHandleType featherHandleType; // 0x3AC
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostSingleColorHandleType; // 0x3B0
		::MoleMole::Config::ScreenEffectFieldHandleType boundaryHandleType; // 0x3B4
		::UnityEngine::Color colorA; // 0x3B8
		::MoleMole::Config::ScreenEffectFieldHandleType layer1RadiusHandleType; // 0x3C8
		::MoleMole::Config::ScreenEffectFieldHandleType maskTexUvModeHandleType; // 0x3CC
		::MoleMole::Config::ScreenEffectFieldHandleType softRangeHandleType; // 0x3D0
		::MoleMole::Config::ScreenEffectFieldHandleType distortionTexScaleOffsetHandleType; // 0x3D4
		::MoleMole::Config::ScreenEffectFieldHandleType useRGBColorChannelMappingHandleType; // 0x3D8
		::MoleMole::Config::ScreenEffectFieldHandleType layer4DirectionHandleType; // 0x3DC
		::MoleMole::Config::ScreenEffectFieldHandleType uvMoveSpeedHandleType; // 0x3E0
		::MoleMole::Config::ScreenEffectFieldHandleType polarUVAspectHandleType; // 0x3E4
		::MoleMole::Config::ScreenEffectFieldHandleType layer3ColorHandleType; // 0x3E8
		::MoleMole::Config::ScreenEffectFieldHandleType screenDistortionIntensityHandleType; // 0x3EC
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostIntensityHandleType; // 0x3F0
		::MoleMole::Config::ScreenEffectFieldHandleType screenDistortionTexHandleType; // 0x3F4
		::MoleMole::Config::ScreenEffectFieldHandleType screenDistortionTexScaleOffsetHandleType; // 0x3F8
		::MoleMole::Config::ScreenEffectFieldHandleType layer2DirectionHandleType; // 0x3FC
		::MoleMole::Config::ScreenEffectFieldHandleType dissolveChannelHandleType; // 0x400
		::MoleMole::Config::ScreenEffectFieldHandleType layer5IntensityHandleType; // 0x404
		::UnityEngine::Rendering::Universal::UvModes screenDistortionTexUvMode; // 0x408
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostColorHandleType; // 0x40C
		::MoleMole::Config::ScreenEffectFieldHandleType lerpBrightnessHandleType; // 0x410
		::MoleMole::Config::ScreenEffectFieldHandleType distortionUVSpeedHandleType; // 0x414
		::MoleMole::Config::ScreenEffectFieldHandleType dissolveRandomUVHandleType; // 0x418
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostTargetPositionHandleType; // 0x41C
		::MoleMole::Config::ScreenEffectFieldHandleType blendModeHandleType; // 0x420
		::MoleMole::Config::ScreenEffectFieldHandleType layer5RadiusHandleType; // 0x424
		::MoleMole::Config::ScreenEffectFieldHandleType screenDistortionUVSpeedHandleType; // 0x428
		::MoleMole::Config::ScreenEffectFieldHandleType invertHandleType; // 0x42C
		::MoleMole::Config::ScreenEffectFieldHandleType colorChannelMappingHandleType; // 0x430
		::MoleMole::Config::ScreenEffectFieldHandleType dissolveAffects2ToneHandleType; // 0x434
		::MoleMole::Config::ScreenEffectFieldHandleType characterGhostDownSampleHandleType; // 0x438

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnabled(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETENABLED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::BlendModes GetBlendMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::BlendModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETBLENDMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPolarUVAspect(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETPOLARUVASPECT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::UvModes GetBoundaryMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::UvModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETBOUNDARYMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBoundaryUVAspect(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETBOUNDARYUVASPECT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBoundary(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETBOUNDARY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFeather(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETFEATHER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMaxOpacity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMAXOPACITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetInvert(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETINVERT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_mainTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_MAINTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMainTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMAINTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::UvModes GetMainTexUvMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::UvModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMAINTEXUVMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetMainTexScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMAINTEXSCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseRGBColorChannelMapping(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETUSERGBCOLORCHANNELMAPPING_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::ChannelMapping GetColorChannelMapping(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::ChannelMapping(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCOLORCHANNELMAPPING_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::ChannelMapping GetAlphaChannelMapping(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::ChannelMapping(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETALPHACHANNELMAPPING_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCOLORA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetColorB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCOLORB_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLerpBrightness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLERPBRIGHTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetUvMoveSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETUVMOVESPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_maskTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_MASKTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetMaskTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::UvModes GetMaskTexUvMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::UvModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKTEXUVMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetMaskTexScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKTEXSCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::ChannelMapping GetMaskChannelMapping(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::ChannelMapping(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKCHANNELMAPPING_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetMaskUvMoveSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETMASKUVMOVESPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_dissolveTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_DISSOLVETEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetDissolveTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVETEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::UvModes GetDissolveTexUvMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::UvModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVETEXUVMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetDissolveTexScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVETEXSCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::ChannelMapping GetDissolveChannel(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::ChannelMapping(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVECHANNEL_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDissolveProgress(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVEPROGRESS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetDissolveUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVEUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDissolveRandomUV(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVERANDOMUV_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDissolveAffects2Tone(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVEAFFECTS2TONE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_distortionTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_DISTORTIONTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetDistortionTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::UvModes GetDistortionTexUvMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::UvModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONTEXUVMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetDistortionTexScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONTEXSCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::ChannelMapping GetDistortionChannel(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::ChannelMapping(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONCHANNEL_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetDistortionUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDistortionRandomUV(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONRANDOMUV_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDissolveDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETDISSOLVEDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSoftRange(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSOFTRANGE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetAlphaCutoff(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETALPHACUTOFF_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetScreenDistortion(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTION_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_screenDistortionTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_SCREENDISTORTIONTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetScreenDistortionTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::UvModes GetScreenDistortionTexUvMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::UvModes(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONTEXUVMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetScreenDistortionTexScaleOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONTEXSCALEOFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetScreenDistortionIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetScreenDistortionUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETSCREENDISTORTIONUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetIgnoreTimeScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETIGNORETIMESCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCharacterGhost(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCharacterGhostBlitWithProxy(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTBLITWITHPROXY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetCharacterGhostDownSample(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTDOWNSAMPLE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_characterGhostDistortionTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GET_CHARACTERGHOSTDISTORTIONTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetCharacterGhostDistortionTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTDISTORTIONTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterGhostDistortionUVScale(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTDISTORTIONUVSCALE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetCharacterGhostDistortionUVSpeed(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTDISTORTIONUVSPEED_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterGhostRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterGhostIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCharacterGhostSelfMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTSELFMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetGhostDepthCulling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETGHOSTDEPTHCULLING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseScreenSpaceRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETUSESCREENSPACERADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetCharacterGhostTargetPosition(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTTARGETPOSITION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetCharacterGhostLayer(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTLAYER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer1Direction(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER1DIRECTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer1Radius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER1RADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer1Intensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER1INTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer1Color(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER1COLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer2Direction(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER2DIRECTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer2Radius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER2RADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer2Intensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER2INTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer2Color(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER2COLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer3Direction(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER3DIRECTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer3Radius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER3RADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer3Intensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER3INTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer3Color(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER3COLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer4Direction(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER4DIRECTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer4Radius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER4RADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer4Intensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER4INTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer4Color(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER4COLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer5Direction(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER5DIRECTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer5Radius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER5RADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLayer5Intensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER5INTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLayer5Color(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETLAYER5COLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetCharacterGhostColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCharacterGhostFresnel(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTFRESNEL_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterGhostFresnelPower(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTFRESNELPOWER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetCharacterGhostSingleColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTSINGLECOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCharacterGhostMinIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYSCREENEFFECT_GETCHARACTERGHOSTMININTENSITY_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
