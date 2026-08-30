#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CUSTOMRP_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EE56160)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShaderIDs_TypeDefinitionIndex = 36945;

	class ShaderIDs : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__2_MRT_SLOT0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x32CE0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Null_Keyword()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x32CE8);
		}
		static ::System::String** StaticGet__2_MRT_SLOT1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x32CF0);
		}
		static ::System::String** StaticGet__3_MRT_SLOT1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x32CF8);
		}
		static ::System::Int32* StaticGet_BlitHiQualityPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3D0);
		}
		static ::System::Int32* StaticGet_GaussianGradualLineNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3D4);
		}
		static ::System::Int32* StaticGet_Toe()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3D8);
		}
		static ::System::Int32* StaticGet_LensFlareRotationStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3DC);
		}
		static ::System::Int32* StaticGet_DisScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3E0);
		}
		static ::System::Int32* StaticGet_LineTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3E4);
		}
		static ::System::Int32* StaticGet_LensFlareScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3E8);
		}
		static ::System::Int32* StaticGet_BlinkDistortStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3EC);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3F0);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussLayerIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3F4);
		}
		static ::System::Int32* StaticGet__LocalAABBMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3F8);
		}
		static ::System::Int32* StaticGet_PlanarReflectionDepthRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD3FC);
		}
		static ::System::Int32* StaticGet_viewAndProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD400);
		}
		static ::System::Int32* StaticGet_Shoulder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD404);
		}
		static ::System::Int32* StaticGet_LensFlareAlphaScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD408);
		}
		static ::System::Int32* StaticGet_FarTransitionRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD40C);
		}
		static ::System::Int32* StaticGet_EnableBlinkSpeedline()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD410);
		}
		static ::System::Int32* StaticGet_Input2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD414);
		}
		static ::System::Int32* StaticGet_WhitePercent()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD418);
		}
		static ::System::Int32* StaticGet_DOFBokehParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD41C);
		}
		static ::System::Int32* StaticGet_VelocityTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD420);
		}
		static ::System::Int32* StaticGet_HashIDCustomGradualNoiseTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD424);
		}
		static ::System::Int32* StaticGet_MainTex3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD428);
		}
		static ::System::Int32* StaticGet_NoiseTextureTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD42C);
		}
		static ::System::Int32* StaticGet_HashIDCustomLUTTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD430);
		}
		static ::System::Int32* StaticGet_NearCocImmediateTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD434);
		}
		static ::System::Int32* StaticGet__CloudColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD438);
		}
		static ::System::Int32* StaticGet_ACES_D()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD43C);
		}
		static ::System::Int32* StaticGet_CocModelParameters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD440);
		}
		static ::System::Int32* StaticGet__CloudHeightmap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD444);
		}
		static ::System::Int32* StaticGet_PosY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD448);
		}
		static ::System::Int32* StaticGet_NoiseTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD44C);
		}
		static ::System::Int32* StaticGet_UVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD450);
		}
		static ::System::Int32* StaticGet_inverseViewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD454);
		}
		static ::System::Int32* StaticGet__LineST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD458);
		}
		static ::System::Int32* StaticGet_LineDivideY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD45C);
		}
		static ::System::Int32* StaticGet__UseNoiseGlitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD460);
		}
		static ::System::Int32* StaticGet__MK_BGDarkColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD464);
		}
		static ::System::Int32* StaticGet__SDFAdd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD468);
		}
		static ::System::Int32* StaticGet_ACES_C()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD46C);
		}
		static ::System::Int32* StaticGet_GaussianGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD470);
		}
		static ::System::Int32* StaticGet__WindDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD474);
		}
		static ::System::Int32* StaticGet_LensFlareTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD478);
		}
		static ::System::Int32* StaticGet_LensFlareEdgeFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD47C);
		}
		static ::System::Int32* StaticGet_NearCocTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD480);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD484);
		}
		static ::System::Int32* StaticGet_worldSpaceCameraPos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD488);
		}
		static ::System::Int32* StaticGet_projectionParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD48C);
		}
		static ::System::Int32* StaticGet_TileGridResParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD490);
		}
		static ::System::Int32* StaticGet_AdditionalColorGradualLineNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD494);
		}
		static ::System::Int32* StaticGet_LineBrightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD498);
		}
		static ::System::Int32* StaticGet_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD49C);
		}
		static ::System::Int32* StaticGet_HashIDShoSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4A0);
		}
		static ::System::Int32* StaticGet__BoundingBoxMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4A4);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4A8);
		}
		static ::System::Int32* StaticGet_LensFlareDustTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4AC);
		}
		static ::System::Int32* StaticGet_BlinkReverse()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4B0);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussTaps()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4B4);
		}
		static ::System::Int32* StaticGet_ColorGradingMaskTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4B8);
		}
		static ::System::Int32* StaticGet_BlitTransparentPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4BC);
		}
		static ::System::Int32* StaticGet_MBVelocityMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4C0);
		}
		static ::System::Int32* StaticGet__LightDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4C4);
		}
		static ::System::Int32* StaticGet_InputBgdTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4C8);
		}
		static ::System::Int32* StaticGet__DetailTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4CC);
		}
		static ::System::Int32* StaticGet_HashIDLut2D_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4D0);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4D4);
		}
		static ::System::Int32* StaticGet_GaussianUVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4D8);
		}
		static ::System::Int32* StaticGet_LengthRateLerp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4DC);
		}
		static ::System::Int32* StaticGet__AABBSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4E0);
		}
		static ::System::Int32* StaticGet__VigST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4E4);
		}
		static ::System::Int32* StaticGet_AdditionalColorGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4E8);
		}
		static ::System::Int32* StaticGet_GaussTaps()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4EC);
		}
		static ::System::Int32* StaticGet_GaussianGradualMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4F0);
		}
		static ::System::Int32* StaticGet_HashIDColorGainShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4F4);
		}
		static ::System::Int32* StaticGet_viewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4F8);
		}
		static ::System::Int32* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD4FC);
		}
		static ::System::Int32* StaticGet_HashIDColorGainMidtone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD500);
		}
		static ::System::Int32* StaticGet_LensFlareColorThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD504);
		}
		static ::System::Int32* StaticGet_PolygonOffsetFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD508);
		}
		static ::System::Int32* StaticGet_HashIDCustomToneCurve()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD50C);
		}
		static ::System::Int32* StaticGet__MaskTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD510);
		}
		static ::System::Int32* StaticGet__MK_DarkColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD514);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD518);
		}
		static ::System::Int32* StaticGet_OutlineScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD51C);
		}
		static ::System::Int32* StaticGet_LensFlareSampleStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD520);
		}
		static ::System::Int32* StaticGet_ColorGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD524);
		}
		static ::System::Int32* StaticGet_SpeedLineRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD528);
		}
		static ::System::Int32* StaticGet__BoundingBoxForTraceMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD52C);
		}
		static ::System::Int32* StaticGet__BoundingBoxMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD530);
		}
		static ::System::Int32* StaticGet_TAADestination()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD534);
		}
		static ::System::Int32* StaticGet_PosX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD538);
		}
		static ::System::Int32* StaticGet__DistortIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD53C);
		}
		static ::System::Int32* StaticGet_FullScreenMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD540);
		}
		static ::System::Int32* StaticGet_DistrotionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD544);
		}
		static ::System::Int32* StaticGet_BloomAtlasUVTrans()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD548);
		}
		static ::System::Int32* StaticGet_Rotate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD54C);
		}
		static ::System::Int32* StaticGet_Output_Sum2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD550);
		}
		static ::System::Int32* StaticGet_HDRHeadroom()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD554);
		}
		static ::System::Int32* StaticGet_Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD558);
		}
		static ::System::Int32* StaticGet_HashIDToeSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD55C);
		}
		static ::System::Int32* StaticGet__LocalAABBMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD560);
		}
		static ::System::Int32* StaticGet_PolygonOffsetUnits()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD564);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD568);
		}
		static ::System::Int32* StaticGet_BloomG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD56C);
		}
		static ::System::Int32* StaticGet_VignetteParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD570);
		}
		static ::System::Int32* StaticGet__NoiseSeed1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD574);
		}
		static ::System::Int32* StaticGet__MK_NoiseTiling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD578);
		}
		static ::System::Int32* StaticGet__LineSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD57C);
		}
		static ::System::Int32* StaticGet__VigIntst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD580);
		}
		static ::System::Int32* StaticGet_SampleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD584);
		}
		static ::System::Int32* StaticGet_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD588);
		}
		static ::System::Int32* StaticGet__MK_BrightColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD58C);
		}
		static ::System::Int32* StaticGet_Input1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD590);
		}
		static ::System::Int32* StaticGet_NoiseBlendScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD594);
		}
		static ::System::Int32* StaticGet__BoundingBoxForTraceMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD598);
		}
		static ::System::Int32* StaticGet_BloomR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD59C);
		}
		static ::System::Int32* StaticGet__MainTex1_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5A0);
		}
		static ::System::Int32* StaticGet_MaxRcpBlurRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5A4);
		}
		static ::System::Int32* StaticGet_MainTex0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5A8);
		}
		static ::System::Int32* StaticGet_WhiteClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5AC);
		}
		static ::System::Int32* StaticGet_OffsetIndensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5B0);
		}
		static ::System::Int32* StaticGet__RainDropVelocity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5B4);
		}
		static ::System::Int32* StaticGet_LineOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5B8);
		}
		static ::System::Int32* StaticGet__MK_Coverage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5BC);
		}
		static ::System::Int32* StaticGet__CullMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5C0);
		}
		static ::System::Int32* StaticGet__RainMaskVal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5C4);
		}
		static ::System::Int32* StaticGet_LensFlareFadeMaxSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5C8);
		}
		static ::System::Int32* StaticGet__Saturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5CC);
		}
		static ::System::Int32* StaticGet_CocGeneralParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5D0);
		}
		static ::System::Int32* StaticGet_ACES_B()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5D4);
		}
		static ::System::Int32* StaticGet_TemporalFilterParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5D8);
		}
		static ::System::Int32* StaticGet_BloomThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5DC);
		}
		static ::System::Int32* StaticGet_ScanlineMultiple()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5E0);
		}
		static ::System::Int32* StaticGet_MaxRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5E4);
		}
		static ::System::Int32* StaticGet_DOFDilateRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5E8);
		}
		static ::System::Int32* StaticGet_Output_Sum22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5EC);
		}
		static ::System::Int32* StaticGet_HashIDShoSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5F0);
		}
		static ::System::Int32* StaticGet_ColorGradualLineNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5F4);
		}
		static ::System::Int32* StaticGet_GaussWeights()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5F8);
		}
		static ::System::Int32* StaticGet_LengthRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD5FC);
		}
		static ::System::Int32* StaticGet_HashIDCustomGradualNoiseUVScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD600);
		}
		static ::System::Int32* StaticGet_NearTransitionRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD604);
		}
		static ::System::Int32* StaticGet_BlinkDist()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD608);
		}
		static ::System::Int32* StaticGet_Output_Sum12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD60C);
		}
		static ::System::Int32* StaticGet_MinRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD610);
		}
		static ::System::Int32* StaticGet__UsePolarCoord()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD614);
		}
		static ::System::Int32* StaticGet_MainTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD618);
		}
		static ::System::Int32* StaticGet_StencilOnly()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD61C);
		}
		static ::System::Int32* StaticGet_GaussOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD620);
		}
		static ::System::Int32* StaticGet_HashIDColorCorrectionShadowMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD624);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD628);
		}
		static ::System::Int32* StaticGet__UseDualTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD62C);
		}
		static ::System::Int32* StaticGet__MK_NoiseSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD630);
		}
		static ::System::Int32* StaticGet__FarClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD634);
		}
		static ::System::Int32* StaticGet_zBufferParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD638);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD63C);
		}
		static ::System::Int32* StaticGet_ExpandGamut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD640);
		}
		static ::System::Int32* StaticGet__NoiseIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD644);
		}
		static ::System::Int32* StaticGet_Speed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD648);
		}
		static ::System::Int32* StaticGet_LensFlareRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD64C);
		}
		static ::System::Int32* StaticGet_EnableHDRTonemapping()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD650);
		}
		static ::System::Int32* StaticGet_LensFlareDepthBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD654);
		}
		static ::System::Int32* StaticGet_ChromaFilterC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD658);
		}
		static ::System::Int32* StaticGet_MainTex5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD65C);
		}
		static ::System::Int32* StaticGet_DistrotionTextureTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD660);
		}
		static ::System::Int32* StaticGet__LocalBoundingSphere()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD664);
		}
		static ::System::Int32* StaticGet_CoCBlurUnit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD668);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD66C);
		}
		static ::System::Int32* StaticGet__NoiseSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD670);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD674);
		}
		static ::System::Int32* StaticGet_StartDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD678);
		}
		static ::System::Int32* StaticGet_VelocityTileTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD67C);
		}
		static ::System::Int32* StaticGet_SpeedLineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD680);
		}
		static ::System::Int32* StaticGet_Output_Sum11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD684);
		}
		static ::System::Int32* StaticGet_BloomAtlasUVClamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD688);
		}
		static ::System::Int32* StaticGet_DialogAvatarRT2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD68C);
		}
		static ::System::Int32* StaticGet__MaskTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD690);
		}
		static ::System::Int32* StaticGet_LineDensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD694);
		}
		static ::System::Int32* StaticGet_inverseCameraProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD698);
		}
		static ::System::Int32* StaticGet_HashIDHueSatCon()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD69C);
		}
		static ::System::Int32* StaticGet_VignetteUIInnerEdge()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6A0);
		}
		static ::System::Int32* StaticGet__MK_GradientWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6A4);
		}
		static ::System::Int32* StaticGet__MK_DarkColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6A8);
		}
		static ::System::Int32* StaticGet__RainDropStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6AC);
		}
		static ::System::Int32* StaticGet__RainDropCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6B0);
		}
		static ::System::Int32* StaticGet_EndDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6B4);
		}
		static ::System::Int32* StaticGet__LerpValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6B8);
		}
		static ::System::Int32* StaticGet__ColorBlendRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6BC);
		}
		static ::System::Int32* StaticGet__MK_BleedColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6C0);
		}
		static ::System::Int32* StaticGet__CloudScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6C4);
		}
		static ::System::Int32* StaticGet_Alpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6C8);
		}
		static ::System::Int32* StaticGet__WeatherTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6CC);
		}
		static ::System::Int32* StaticGet__PPPatternGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6D0);
		}
		static ::System::Int32* StaticGet_CenterY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6D4);
		}
		static ::System::Int32* StaticGet_BlinkOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6D8);
		}
		static ::System::Int32* StaticGet_LensFlareDustTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6DC);
		}
		static ::System::Int32* StaticGet_LightenIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6E0);
		}
		static ::System::Int32* StaticGet_LineDivide()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6E4);
		}
		static ::System::Int32* StaticGet_ChromaFilterA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6E8);
		}
		static ::System::Int32* StaticGet_BlitCopyPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6EC);
		}
		static ::System::Int32* StaticGet_cameraToWorldMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6F0);
		}
		static ::System::Int32* StaticGet__LightedStar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6F4);
		}
		static ::System::Int32* StaticGet__PPPattern_Color1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6F8);
		}
		static ::System::Int32* StaticGet_ChromaAmount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD6FC);
		}
		static ::System::Int32* StaticGet__LightedWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD700);
		}
		static ::System::Int32* StaticGet_projectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD704);
		}
		static ::System::Int32* StaticGet_ReferenceValueTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD708);
		}
		static ::System::Int32* StaticGet_GaussianUVClamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD70C);
		}
		static ::System::Int32* StaticGet__Capture3DAlphaTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD710);
		}
		static ::System::Int32* StaticGet__CloudSDF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD714);
		}
		static ::System::Int32* StaticGet__LineInts()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD718);
		}
		static ::System::Int32* StaticGet__CloudColor_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD71C);
		}
		static ::System::Int32* StaticGet_MainTex4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD720);
		}
		static ::System::Int32* StaticGet_VignetteUIOuterEdge()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD724);
		}
		static ::System::Int32* StaticGet_LensDistortionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD728);
		}
		static ::System::Int32* StaticGet_SpeedLineSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD72C);
		}
		static ::System::Int32* StaticGet_BlinkDownScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD730);
		}
		static ::System::Int32* StaticGet__NoiseTilingFlow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD734);
		}
		static ::System::Int32* StaticGet_HashIDMidSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD738);
		}
		static ::System::Int32* StaticGet__BlendDst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD73C);
		}
		static ::System::Int32* StaticGet_DirectionalBlurParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD740);
		}
		static ::System::Int32* StaticGet_DOFGoldenRot()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD744);
		}
		static ::System::Int32* StaticGet_MaxBlurRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD748);
		}
		static ::System::Int32* StaticGet__FrameColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD74C);
		}
		static ::System::Int32* StaticGet__DotST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD750);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD754);
		}
		static ::System::Int32* StaticGet_BlinkRadii()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD758);
		}
		static ::System::Int32* StaticGet_LightenTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD75C);
		}
		static ::System::Int32* StaticGet_BlinkChinkScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD760);
		}
		static ::System::Int32* StaticGet__GrowingProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD764);
		}
		static ::System::Int32* StaticGet_ScreenSpaceDistortionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD768);
		}
		static ::System::Int32* StaticGet_DepthBlurParameters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD76C);
		}
		static ::System::Int32* StaticGet__NoiseSeed2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD770);
		}
		static ::System::Int32* StaticGet_VignetteUIColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD774);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationMidtone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD778);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationHighlight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD77C);
		}
		static ::System::Int32* StaticGet__SDFScale2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD780);
		}
		static ::System::Int32* StaticGet_HashIDColorGainGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD784);
		}
		static ::System::Int32* StaticGet_HashIDLevelHighTone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD788);
		}
		static ::System::Int32* StaticGet__SDFScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD78C);
		}
		static ::System::Int32* StaticGet_BlinkDuration()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD790);
		}
		static ::System::Int32* StaticGet_OutputTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD794);
		}
		static ::System::Int32* StaticGet_LensFlareUseTexmapRGB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD798);
		}
		static ::System::Int32* StaticGet_StencilBlitDestAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD79C);
		}
		static ::System::Int32* StaticGet_SpeedBlurStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7A0);
		}
		static ::System::Int32* StaticGet_BloomB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7A4);
		}
		static ::System::Int32* StaticGet_BlinkSmoothRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7A8);
		}
		static ::System::Int32* StaticGet_VignetteParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7AC);
		}
		static ::System::Int32* StaticGet__MK_BleedColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7B0);
		}
		static ::System::Int32* StaticGet_LensFlareSampleCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7B4);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7B8);
		}
		static ::System::Int32* StaticGet_ACES_A()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7BC);
		}
		static ::System::Int32* StaticGet__CloudSDF2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7C0);
		}
		static ::System::Int32* StaticGet_orthoParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7C4);
		}
		static ::System::Int32* StaticGet_SpeedlineEdgeSoft()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7C8);
		}
		static ::System::Int32* StaticGet_BlinkRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7CC);
		}
		static ::System::Int32* StaticGet__MainTex_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7D0);
		}
		static ::System::Int32* StaticGet_DialogAvatarRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7D4);
		}
		static ::System::Int32* StaticGet__BaseColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7D8);
		}
		static ::System::Int32* StaticGet__SkillRadialBlurParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7DC);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7E0);
		}
		static ::System::Int32* StaticGet_PolaroidColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7E4);
		}
		static ::System::Int32* StaticGet__MainTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7E8);
		}
		static ::System::Int32* StaticGet_worldToCameraMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7EC);
		}
		static ::System::Int32* StaticGet_BlurScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7F0);
		}
		static ::System::Int32* StaticGet__DepthTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7F4);
		}
		static ::System::Int32* StaticGet__DotSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7F8);
		}
		static ::System::Int32* StaticGet_BloomIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD7FC);
		}
		static ::System::Int32* StaticGet_InputFgdTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD800);
		}
		static ::System::Int32* StaticGet_OutlinePolygonOffsetUnits()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD804);
		}
		static ::System::Int32* StaticGet_MBVelocityScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD808);
		}
		static ::System::Int32* StaticGet__MK_DetailMapWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD80C);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD810);
		}
		static ::System::Int32* StaticGet__RainDropTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD814);
		}
		static ::System::Int32* StaticGet_CenterYScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD818);
		}
		static ::System::Int32* StaticGet_LensDisTexTilingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD81C);
		}
		static ::System::Int32* StaticGet__MotionMaskHistoryTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD820);
		}
		static ::System::Int32* StaticGet_LensFlareProbe()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD824);
		}
		static ::System::Int32* StaticGet__SkillRadialBlurParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD828);
		}
		static ::System::Int32* StaticGet_RadialRangeParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD82C);
		}
		static ::System::Int32* StaticGet_LensFlareSampleRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD830);
		}
		static ::System::Int32* StaticGet_Lut2DTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD834);
		}
		static ::System::Int32* StaticGet_BlueCorrection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD838);
		}
		static ::System::Int32* StaticGet__WindSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD83C);
		}
		static ::System::Int32* StaticGet_MainTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD840);
		}
		static ::System::Int32* StaticGet__MK_Transparency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD844);
		}
		static ::System::Int32* StaticGet_BlinkAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD848);
		}
		static ::System::Int32* StaticGet_HashIDMidSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD84C);
		}
		static ::System::Int32* StaticGet__LensGlitch2GradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD850);
		}
		static ::System::Int32* StaticGet__CloudMaskScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD854);
		}
		static ::System::Int32* StaticGet_LensFlareCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD858);
		}
		static ::System::Int32* StaticGet_OutlinePolygonOffsetFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD85C);
		}
		static ::System::Int32* StaticGet_FocusDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD860);
		}
		static ::System::Int32* StaticGet__MK_BGBrightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD864);
		}
		static ::System::Int32* StaticGet_LensFlareElementAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD868);
		}
		static ::System::Int32* StaticGet_Lut2DTexParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD86C);
		}
		static ::System::Int32* StaticGet_HashIDColorGainHighlight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD870);
		}
		static ::System::Int32* StaticGet__DepthComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD874);
		}
		static ::System::Int32* StaticGet_MotionBlurAlphaTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD878);
		}
		static ::System::Int32* StaticGet_OutputTex0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD87C);
		}
		static ::System::Int32* StaticGet__DotInts()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD880);
		}
		static ::System::Int32* StaticGet_ACES_E()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD884);
		}
		static ::System::Int32* StaticGet__RainDistortStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD888);
		}
		static ::System::Int32* StaticGet_UseTwoTone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD88C);
		}
		static ::System::Int32* StaticGet__Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD890);
		}
		static ::System::Int32* StaticGet__UseSphereShape()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD894);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastMidtone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD898);
		}
		static ::System::Int32* StaticGet_HashIDCustomLUTIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD89C);
		}
		static ::System::Int32* StaticGet_HashIDColorCorrectionHighlightMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8A0);
		}
		static ::System::Int32* StaticGet__SDFAdd2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8A4);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastHighlight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8A8);
		}
		static ::System::Int32* StaticGet_LensFlareGradient()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8AC);
		}
		static ::System::Int32* StaticGet_StencilBlitSrcAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8B0);
		}
		static ::System::Int32* StaticGet_BlackClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8B4);
		}
		static ::System::Int32* StaticGet__LightedSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8B8);
		}
		static ::System::Int32* StaticGet_Output_Sum1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8BC);
		}
		static ::System::Int32* StaticGet_BlinkMaskColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8C0);
		}
		static ::System::Int32* StaticGet_CenterX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8C4);
		}
		static ::System::Int32* StaticGet_ForceDisableToneMapping()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8C8);
		}
		static ::System::Int32* StaticGet_EnableEffect0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8CC);
		}
		static ::System::Int32* StaticGet_FarFocalRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8D0);
		}
		static ::System::Int32* StaticGet__ShadowBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8D4);
		}
		static ::System::Int32* StaticGet__CameraDepthTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8D8);
		}
		static ::System::Int32* StaticGet_Exposure()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8DC);
		}
		static ::System::Int32* StaticGet_HashIDLevelShadowTone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8E0);
		}
		static ::System::Int32* StaticGet_LensFlareIgnoreRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8E4);
		}
		static ::System::Int32* StaticGet_HalfResParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8E8);
		}
		static ::System::Int32* StaticGet__BlendSrc()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8EC);
		}
		static ::System::Int32* StaticGet_HashIDLevelColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8F0);
		}
		static ::System::Int32* StaticGet_Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8F4);
		}
		static ::System::Int32* StaticGet__PPPattern_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8F8);
		}
		static ::System::Int32* StaticGet__MainTexSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD8FC);
		}
		static ::System::Int32* StaticGet_GaussianLayerIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD900);
		}
		static ::System::Int32* StaticGet_HashIDToeSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD904);
		}
		static ::System::Int32* StaticGet_BlinkDistortFreq()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD908);
		}
		static ::System::Int32* StaticGet_cameraProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD90C);
		}
		static ::System::Int32* StaticGet_ChromaFilterB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD910);
		}
		static ::System::Int32* StaticGet_MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD914);
		}
		static ::System::Int32* StaticGet_CameraDir()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD918);
		}
		static ::System::Int32* StaticGet__OutputToTempRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD91C);
		}
		static ::System::Int32* StaticGet__MotionMaskTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD920);
		}
		static ::System::Int32* StaticGet_screenParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD924);
		}
		static ::System::Int32* StaticGet_InputFgdOpacityTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD928);
		}
		static ::System::Int32* StaticGet_NearFocalRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD92C);
		}
		static ::System::Int32* StaticGet_PolaroidScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD930);
		}
		static ::System::Int32* StaticGet_Slope()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD934);
		}
		static ::System::Int32* StaticGet__ReflectionColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD938);
		}
		static ::System::Int32* StaticGet__MainTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD93C);
		}
		static ::System::Int32* StaticGet__DetailTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD940);
		}
		static ::System::Int32* StaticGet_LensFlareAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD944);
		}
		static ::System::Int32* StaticGet_RadialParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD948);
		}
		static ::System::Int32* StaticGet__NoiseAnimSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD94C);
		}
		static ::System::Int32* StaticGet_PlanarReflectionColorRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD950);
		}
		static ::System::Int32* StaticGet__MK_BrightColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xD954);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
