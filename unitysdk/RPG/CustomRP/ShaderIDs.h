#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define RPG_CUSTOMRP_SHADERIDS__CCTOR_OFFSET UNITYSDK_OFFSET(0x16AD8DB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ShaderIDs_TypeDefinitionIndex = 29252;

	class ShaderIDs : public ::System::Object
	{
	public:
		static ::System::String** StaticGet__2_MRT_SLOT1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA90);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_Null_Keyword()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA98);
		}
		static ::System::String** StaticGet__2_MRT_SLOT0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAA0);
		}
		static ::System::String** StaticGet__3_MRT_SLOT1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAA8);
		}
		static ::System::Int32* StaticGet_MainTex0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5A0);
		}
		static ::System::Int32* StaticGet_Output_Sum2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5A4);
		}
		static ::System::Int32* StaticGet_GaussTaps()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5A8);
		}
		static ::System::Int32* StaticGet_LensFlareSampleRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5AC);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5B0);
		}
		static ::System::Int32* StaticGet__LightDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5B4);
		}
		static ::System::Int32* StaticGet_StencilOnly()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5B8);
		}
		static ::System::Int32* StaticGet_RadialRangeParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5BC);
		}
		static ::System::Int32* StaticGet_ACES_A()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5C0);
		}
		static ::System::Int32* StaticGet_BlinkChinkScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5C4);
		}
		static ::System::Int32* StaticGet_NoiseBlendScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5C8);
		}
		static ::System::Int32* StaticGet_MinRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5CC);
		}
		static ::System::Int32* StaticGet_Toe()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5D0);
		}
		static ::System::Int32* StaticGet_SpeedLineRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5D4);
		}
		static ::System::Int32* StaticGet_Output_Sum11()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5D8);
		}
		static ::System::Int32* StaticGet__OutputToTempRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5DC);
		}
		static ::System::Int32* StaticGet_VignetteParams2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5E0);
		}
		static ::System::Int32* StaticGet__UsePolarCoord()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5E4);
		}
		static ::System::Int32* StaticGet_OutputTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5E8);
		}
		static ::System::Int32* StaticGet_LightenIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5EC);
		}
		static ::System::Int32* StaticGet_MaxRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5F0);
		}
		static ::System::Int32* StaticGet_BlinkReverse()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5F4);
		}
		static ::System::Int32* StaticGet_LengthRateLerp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5F8);
		}
		static ::System::Int32* StaticGet__DotInts()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x5FC);
		}
		static ::System::Int32* StaticGet_NoiseTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x600);
		}
		static ::System::Int32* StaticGet_EnableHDRTonemapping()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x604);
		}
		static ::System::Int32* StaticGet_OutlineScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x608);
		}
		static ::System::Int32* StaticGet_LensFlareAlphaScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x60C);
		}
		static ::System::Int32* StaticGet__MainTex_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x610);
		}
		static ::System::Int32* StaticGet_LensFlareDustTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x614);
		}
		static ::System::Int32* StaticGet__DotST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x618);
		}
		static ::System::Int32* StaticGet_ScanlineMultiple()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x61C);
		}
		static ::System::Int32* StaticGet_HashIDCustomToneCurve()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x620);
		}
		static ::System::Int32* StaticGet__NoiseSeed2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x624);
		}
		static ::System::Int32* StaticGet_PolygonOffsetFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x628);
		}
		static ::System::Int32* StaticGet_inverseCameraProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x62C);
		}
		static ::System::Int32* StaticGet__BoundingBoxForTraceMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x630);
		}
		static ::System::Int32* StaticGet_BloomR()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x634);
		}
		static ::System::Int32* StaticGet_ACES_C()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x638);
		}
		static ::System::Int32* StaticGet_BlueCorrection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x63C);
		}
		static ::System::Int32* StaticGet_MotionBlurAlphaTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x640);
		}
		static ::System::Int32* StaticGet__DistortIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x644);
		}
		static ::System::Int32* StaticGet_worldSpaceCameraPos()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x648);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x64C);
		}
		static ::System::Int32* StaticGet_BlinkRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x650);
		}
		static ::System::Int32* StaticGet__ReflectionColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x654);
		}
		static ::System::Int32* StaticGet_PlanarReflectionColorRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x658);
		}
		static ::System::Int32* StaticGet_LensFlareDepthBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x65C);
		}
		static ::System::Int32* StaticGet__CameraDepthTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x660);
		}
		static ::System::Int32* StaticGet_HashIDColorGainMidtone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x664);
		}
		static ::System::Int32* StaticGet__LightedWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x668);
		}
		static ::System::Int32* StaticGet_HashIDLevelShadowTone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x66C);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x670);
		}
		static ::System::Int32* StaticGet__CloudSDF2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x674);
		}
		static ::System::Int32* StaticGet_LineDivide()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x678);
		}
		static ::System::Int32* StaticGet_LensFlareGradient()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x67C);
		}
		static ::System::Int32* StaticGet_Rotate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x680);
		}
		static ::System::Int32* StaticGet_StartDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x684);
		}
		static ::System::Int32* StaticGet_ReferenceValueTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x688);
		}
		static ::System::Int32* StaticGet_LensFlareRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x68C);
		}
		static ::System::Int32* StaticGet__BlendDst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x690);
		}
		static ::System::Int32* StaticGet__WeatherTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x694);
		}
		static ::System::Int32* StaticGet__BlendSrc()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x698);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x69C);
		}
		static ::System::Int32* StaticGet__WindDirection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6A0);
		}
		static ::System::Int32* StaticGet_EndDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6A4);
		}
		static ::System::Int32* StaticGet_PosY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6A8);
		}
		static ::System::Int32* StaticGet_CameraDir()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6AC);
		}
		static ::System::Int32* StaticGet__MaskTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B0);
		}
		static ::System::Int32* StaticGet__MK_BrightColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B4);
		}
		static ::System::Int32* StaticGet__MK_BleedColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6B8);
		}
		static ::System::Int32* StaticGet_ExpandGamut()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6BC);
		}
		static ::System::Int32* StaticGet_SpeedlineEdgeSoft()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6C0);
		}
		static ::System::Int32* StaticGet__RainMaskVal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6C4);
		}
		static ::System::Int32* StaticGet_BlurScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6C8);
		}
		static ::System::Int32* StaticGet__PPPatternGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6CC);
		}
		static ::System::Int32* StaticGet_LensFlareSampleCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D0);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D4);
		}
		static ::System::Int32* StaticGet_ChromaAmount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6D8);
		}
		static ::System::Int32* StaticGet_GaussianLayerIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6DC);
		}
		static ::System::Int32* StaticGet_DepthBlurParameters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6E0);
		}
		static ::System::Int32* StaticGet__FarClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6E4);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6E8);
		}
		static ::System::Int32* StaticGet__MK_BleedColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6EC);
		}
		static ::System::Int32* StaticGet__Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6F0);
		}
		static ::System::Int32* StaticGet_PolaroidScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6F4);
		}
		static ::System::Int32* StaticGet_Slope()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6F8);
		}
		static ::System::Int32* StaticGet_OutlinePolygonOffsetUnits()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x6FC);
		}
		static ::System::Int32* StaticGet__PPPattern_Color()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x700);
		}
		static ::System::Int32* StaticGet_HashIDCustomLUTTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x704);
		}
		static ::System::Int32* StaticGet__GrowingProgress()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x708);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastHighlight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x70C);
		}
		static ::System::Int32* StaticGet_InputBgdTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x710);
		}
		static ::System::Int32* StaticGet__LerpValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x714);
		}
		static ::System::Int32* StaticGet_UVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x718);
		}
		static ::System::Int32* StaticGet_BlitHiQualityPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x71C);
		}
		static ::System::Int32* StaticGet_StencilBlitSrcAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x720);
		}
		static ::System::Int32* StaticGet__CloudMaskScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x724);
		}
		static ::System::Int32* StaticGet_LensDisTexTilingOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x728);
		}
		static ::System::Int32* StaticGet__UseSphereShape()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x72C);
		}
		static ::System::Int32* StaticGet_SpeedBlurStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x730);
		}
		static ::System::Int32* StaticGet_AdditionalColorGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x734);
		}
		static ::System::Int32* StaticGet__UseDualTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x738);
		}
		static ::System::Int32* StaticGet_HashIDMidSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x73C);
		}
		static ::System::Int32* StaticGet_ACES_D()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x740);
		}
		static ::System::Int32* StaticGet_PosX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x744);
		}
		static ::System::Int32* StaticGet__CloudColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x748);
		}
		static ::System::Int32* StaticGet_DistrotionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x74C);
		}
		static ::System::Int32* StaticGet_HashIDLevelHighTone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x750);
		}
		static ::System::Int32* StaticGet__MK_BrightColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x754);
		}
		static ::System::Int32* StaticGet_WhiteClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x758);
		}
		static ::System::Int32* StaticGet_NearTransitionRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x75C);
		}
		static ::System::Int32* StaticGet__MK_DetailMapWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x760);
		}
		static ::System::Int32* StaticGet__NoiseTilingFlow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x764);
		}
		static ::System::Int32* StaticGet_cameraToWorldMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x768);
		}
		static ::System::Int32* StaticGet_HashIDColorContrastMidtone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x76C);
		}
		static ::System::Int32* StaticGet_HalfResParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x770);
		}
		static ::System::Int32* StaticGet__AABBSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x774);
		}
		static ::System::Int32* StaticGet__VigIntst()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x778);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationMidtone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x77C);
		}
		static ::System::Int32* StaticGet__MotionMaskTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x780);
		}
		static ::System::Int32* StaticGet_DebugHDROutputIntermediate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x784);
		}
		static ::System::Int32* StaticGet_TileGridResParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x788);
		}
		static ::System::Int32* StaticGet_FocusDistance()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x78C);
		}
		static ::System::Int32* StaticGet_BlitTransparentPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x790);
		}
		static ::System::Int32* StaticGet_AdditionalColorGradualLineNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x794);
		}
		static ::System::Int32* StaticGet_LensFlareFadeMaxSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x798);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussLayerIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x79C);
		}
		static ::System::Int32* StaticGet__LightedStar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7A0);
		}
		static ::System::Int32* StaticGet_HashIDColorCorrectionShadowMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7A4);
		}
		static ::System::Int32* StaticGet_LensFlareIgnoreRotation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7A8);
		}
		static ::System::Int32* StaticGet__MotionMaskHistoryTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7AC);
		}
		static ::System::Int32* StaticGet_ColorGradualLineNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7B0);
		}
		static ::System::Int32* StaticGet_GaussianGradualLineNormal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7B4);
		}
		static ::System::Int32* StaticGet_FullScreenMask()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7B8);
		}
		static ::System::Int32* StaticGet_inverseViewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7BC);
		}
		static ::System::Int32* StaticGet__NoiseAnimSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7C0);
		}
		static ::System::Int32* StaticGet_HDRHeadroom()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7C4);
		}
		static ::System::Int32* StaticGet_LensFlareDustTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7C8);
		}
		static ::System::Int32* StaticGet_RadialParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7CC);
		}
		static ::System::Int32* StaticGet_HashIDCustomLUTIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7D0);
		}
		static ::System::Int32* StaticGet_BloomIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7D4);
		}
		static ::System::Int32* StaticGet__LineInts()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7D8);
		}
		static ::System::Int32* StaticGet_MainTex3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7DC);
		}
		static ::System::Int32* StaticGet_HashIDColorGainGlobal()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7E0);
		}
		static ::System::Int32* StaticGet_HashIDLut2D_Params()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7E4);
		}
		static ::System::Int32* StaticGet_BloomG()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7E8);
		}
		static ::System::Int32* StaticGet_Width()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7EC);
		}
		static ::System::Int32* StaticGet_LensFlareScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7F0);
		}
		static ::System::Int32* StaticGet__DetailTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7F4);
		}
		static ::System::Int32* StaticGet__LineST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7F8);
		}
		static ::System::Int32* StaticGet_VelocityTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x7FC);
		}
		static ::System::Int32* StaticGet_CenterYScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x800);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x804);
		}
		static ::System::Int32* StaticGet__RainDropStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x808);
		}
		static ::System::Int32* StaticGet_UseTwoTone()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x80C);
		}
		static ::System::Int32* StaticGet_SpeedLineSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x810);
		}
		static ::System::Int32* StaticGet_LensFlareColorThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x814);
		}
		static ::System::Int32* StaticGet_VelocityTileTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x818);
		}
		static ::System::Int32* StaticGet__MainTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x81C);
		}
		static ::System::Int32* StaticGet_GaussianUVTransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x820);
		}
		static ::System::Int32* StaticGet__SkillRadialBlurParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x824);
		}
		static ::System::Int32* StaticGet_BlitCopyPass()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x828);
		}
		static ::System::Int32* StaticGet_HashIDColorGainShadow()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x82C);
		}
		static ::System::Int32* StaticGet_GaussWeights()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x830);
		}
		static ::System::Int32* StaticGet__NoiseIntensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x834);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x838);
		}
		static ::System::Int32* StaticGet_CenterY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x83C);
		}
		static ::System::Int32* StaticGet_NoiseTextureTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x840);
		}
		static ::System::Int32* StaticGet_CocGeneralParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x844);
		}
		static ::System::Int32* StaticGet_BlackClip()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x848);
		}
		static ::System::Int32* StaticGet_HashIDShoSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x84C);
		}
		static ::System::Int32* StaticGet_OutlinePolygonOffsetFactor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x850);
		}
		static ::System::Int32* StaticGet__RainDropVelocity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x854);
		}
		static ::System::Int32* StaticGet_GaussianUVClamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x858);
		}
		static ::System::Int32* StaticGet_LensFlareTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x85C);
		}
		static ::System::Int32* StaticGet_ACES_B()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x860);
		}
		static ::System::Int32* StaticGet_Lut2DTexParam()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x864);
		}
		static ::System::Int32* StaticGet_MBVelocityScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x868);
		}
		static ::System::Int32* StaticGet__LightedSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x86C);
		}
		static ::System::Int32* StaticGet_HashIDToeSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x870);
		}
		static ::System::Int32* StaticGet_VignetteUIInnerEdge()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x874);
		}
		static ::System::Int32* StaticGet_MainTex4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x878);
		}
		static ::System::Int32* StaticGet_LensFlareUseTexmapRGB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x87C);
		}
		static ::System::Int32* StaticGet_LineDensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x880);
		}
		static ::System::Int32* StaticGet_ACES_E()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x884);
		}
		static ::System::Int32* StaticGet_TAADestination()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x888);
		}
		static ::System::Int32* StaticGet_zBufferParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x88C);
		}
		static ::System::Int32* StaticGet_BloomThreshold()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x890);
		}
		static ::System::Int32* StaticGet_DOFGoldenRot()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x894);
		}
		static ::System::Int32* StaticGet_WhitePercent()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x898);
		}
		static ::System::Int32* StaticGet_HashIDHueSatCon()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x89C);
		}
		static ::System::Int32* StaticGet_BlinkAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8A0);
		}
		static ::System::Int32* StaticGet_LensFlareCenter()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8A4);
		}
		static ::System::Int32* StaticGet_SampleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8A8);
		}
		static ::System::Int32* StaticGet_MainTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8AC);
		}
		static ::System::Int32* StaticGet_BlinkDuration()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8B0);
		}
		static ::System::Int32* StaticGet__LocalAABBMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8B4);
		}
		static ::System::Int32* StaticGet_VignetteUIOuterEdge()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8B8);
		}
		static ::System::Int32* StaticGet_BlinkDistortStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8BC);
		}
		static ::System::Int32* StaticGet_BlinkDistortFreq()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8C0);
		}
		static ::System::Int32* StaticGet_Input2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8C4);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8C8);
		}
		static ::System::Int32* StaticGet__SDFScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8CC);
		}
		static ::System::Int32* StaticGet_BloomB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8D0);
		}
		static ::System::Int32* StaticGet__MK_BGDarkColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8D4);
		}
		static ::System::Int32* StaticGet_DisScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8D8);
		}
		static ::System::Int32* StaticGet_TemporalFilterParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8DC);
		}
		static ::System::Int32* StaticGet__ShadowBias()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8E0);
		}
		static ::System::Int32* StaticGet_HashIDToeSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8E4);
		}
		static ::System::Int32* StaticGet_Output_Sum1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8E8);
		}
		static ::System::Int32* StaticGet_GaussOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8EC);
		}
		static ::System::Int32* StaticGet__Capture3DAlphaTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8F0);
		}
		static ::System::Int32* StaticGet_SpeedLineColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8F4);
		}
		static ::System::Int32* StaticGet__BoundingBoxForTraceMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8F8);
		}
		static ::System::Int32* StaticGet_VignetteParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x8FC);
		}
		static ::System::Int32* StaticGet_OffsetIndensity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x900);
		}
		static ::System::Int32* StaticGet_Lut2DTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x904);
		}
		static ::System::Int32* StaticGet_Alpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x908);
		}
		static ::System::Int32* StaticGet__BoundingBoxMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x90C);
		}
		static ::System::Int32* StaticGet__MK_NoiseTiling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x910);
		}
		static ::System::Int32* StaticGet_LineBrightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x914);
		}
		static ::System::Int32* StaticGet_MBVelocityMax()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x918);
		}
		static ::System::Int32* StaticGet_DialogAvatarRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x91C);
		}
		static ::System::Int32* StaticGet__BaseColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x920);
		}
		static ::System::Int32* StaticGet__NoiseSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x924);
		}
		static ::System::Int32* StaticGet__SDFAdd2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x928);
		}
		static ::System::Int32* StaticGet_BlinkRadii()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x92C);
		}
		static ::System::Int32* StaticGet_worldToCameraMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x930);
		}
		static ::System::Int32* StaticGet_ChromaFilterC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x934);
		}
		static ::System::Int32* StaticGet_ColorGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x938);
		}
		static ::System::Int32* StaticGet__CloudColor_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x93C);
		}
		static ::System::Int32* StaticGet_viewAndProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x940);
		}
		static ::System::Int32* StaticGet_ScreenSpaceDistortionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x944);
		}
		static ::System::Int32* StaticGet_DialogAvatarRT2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x948);
		}
		static ::System::Int32* StaticGet_OutputTex0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x94C);
		}
		static ::System::Int32* StaticGet_LineOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x950);
		}
		static ::System::Int32* StaticGet_CenterX()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x954);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x958);
		}
		static ::System::Int32* StaticGet_LensFlareAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x95C);
		}
		static ::System::Int32* StaticGet_screenParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x960);
		}
		static ::System::Int32* StaticGet_Brightness()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x964);
		}
		static ::System::Int32* StaticGet_StencilBlitDestAlpha()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x968);
		}
		static ::System::Int32* StaticGet_PolygonOffsetUnits()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x96C);
		}
		static ::System::Int32* StaticGet__LocalBoundingSphere()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x970);
		}
		static ::System::Int32* StaticGet_PlanarReflectionDepthRT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x974);
		}
		static ::System::Int32* StaticGet__MK_BGBrightColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x978);
		}
		static ::System::Int32* StaticGet_Speed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x97C);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x980);
		}
		static ::System::Int32* StaticGet_LensFlareRotationStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x984);
		}
		static ::System::Int32* StaticGet_DOFBokehParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x988);
		}
		static ::System::Int32* StaticGet_Shoulder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x98C);
		}
		static ::System::Int32* StaticGet_MainTex5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x990);
		}
		static ::System::Int32* StaticGet_NearFocalRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x994);
		}
		static ::System::Int32* StaticGet_NearCocImmediateTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x998);
		}
		static ::System::Int32* StaticGet__MaskTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x99C);
		}
		static ::System::Int32* StaticGet__SDFAdd()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9A0);
		}
		static ::System::Int32* StaticGet__MK_DarkColor0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9A4);
		}
		static ::System::Int32* StaticGet_orthoParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9A8);
		}
		static ::System::Int32* StaticGet_EnableBlinkSpeedline()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9AC);
		}
		static ::System::Int32* StaticGet_BlinkSpeedlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9B0);
		}
		static ::System::Int32* StaticGet_LensFlareSampleStart()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9B4);
		}
		static ::System::Int32* StaticGet_ForceDisableToneMapping()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9B8);
		}
		static ::System::Int32* StaticGet__BoundingBoxMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9BC);
		}
		static ::System::Int32* StaticGet_HashIDColorCorrectionHighlightMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9C0);
		}
		static ::System::Int32* StaticGet__MK_Coverage()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9C4);
		}
		static ::System::Int32* StaticGet_DistrotionTextureTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9C8);
		}
		static ::System::Int32* StaticGet_GaussianGradualMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9CC);
		}
		static ::System::Int32* StaticGet__RainDistortStrength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9D0);
		}
		static ::System::Int32* StaticGet_CoCBlurUnit()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9D4);
		}
		static ::System::Int32* StaticGet_MainTex1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9D8);
		}
		static ::System::Int32* StaticGet_CocModelParameters()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9DC);
		}
		static ::System::Int32* StaticGet_MaxBlurRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9E0);
		}
		static ::System::Int32* StaticGet_ChromaFilterB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9E4);
		}
		static ::System::Int32* StaticGet_HashIDColorSaturationHighlight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9E8);
		}
		static ::System::Int32* StaticGet_LineTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9EC);
		}
		static ::System::Int32* StaticGet_DirectionalBlurParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9F0);
		}
		static ::System::Int32* StaticGet_cameraProjectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9F4);
		}
		static ::System::Int32* StaticGet_HashIDLevelColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9F8);
		}
		static ::System::Int32* StaticGet__RainDropCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0x9FC);
		}
		static ::System::Int32* StaticGet_projectionMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA00);
		}
		static ::System::Int32* StaticGet__DepthTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA04);
		}
		static ::System::Int32* StaticGet__DetailTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA08);
		}
		static ::System::Int32* StaticGet__ColorBlendRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA0C);
		}
		static ::System::Int32* StaticGet_viewMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA10);
		}
		static ::System::Int32* StaticGet__MK_DarkColor1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA14);
		}
		static ::System::Int32* StaticGet__RainDropTilling()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA18);
		}
		static ::System::Int32* StaticGet_HashIDCustomGradualNoiseUVScaleOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA1C);
		}
		static ::System::Int32* StaticGet__CullMode()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA20);
		}
		static ::System::Int32* StaticGet_LineDivideY()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA24);
		}
		static ::System::Int32* StaticGet_EnableEffect0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA28);
		}
		static ::System::Int32* StaticGet_VignetteUIColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA2C);
		}
		static ::System::Int32* StaticGet__WindSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA30);
		}
		static ::System::Int32* StaticGet__MK_NoiseSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA34);
		}
		static ::System::Int32* StaticGet_LensDistortionTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA38);
		}
		static ::System::Int32* StaticGet__MainTex1_ST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA3C);
		}
		static ::System::Int32* StaticGet__CloudHeightmap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA40);
		}
		static ::System::Int32* StaticGet__DotSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA44);
		}
		static ::System::Int32* StaticGet_BloomAtlasUVTrans()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA48);
		}
		static ::System::Int32* StaticGet_LightenTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA4C);
		}
		static ::System::Int32* StaticGet__SDFScale2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA50);
		}
		static ::System::Int32* StaticGet__Saturation()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA54);
		}
		static ::System::Int32* StaticGet_BlinkSmoothRange()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA58);
		}
		static ::System::Int32* StaticGet__MK_GradientWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA5C);
		}
		static ::System::Int32* StaticGet_projectionParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA60);
		}
		static ::System::Int32* StaticGet_HashIDShoSegmentB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA64);
		}
		static ::System::Int32* StaticGet_PolaroidColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA68);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussWeight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA6C);
		}
		static ::System::Int32* StaticGet_ChromaFilterA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA70);
		}
		static ::System::Int32* StaticGet_BlinkOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA74);
		}
		static ::System::Int32* StaticGet_DOFDilateRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA78);
		}
		static ::System::Int32* StaticGet__CloudScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA7C);
		}
		static ::System::Int32* StaticGet__PPPattern_Color1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA80);
		}
		static ::System::Int32* StaticGet_MainTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA84);
		}
		static ::System::Int32* StaticGet_HashIDColorGainHighlight()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA88);
		}
		static ::System::Int32* StaticGet__VigST()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA8C);
		}
		static ::System::Int32* StaticGet_LengthRate()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA90);
		}
		static ::System::Int32* StaticGet__MainTexSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA94);
		}
		static ::System::Int32* StaticGet_InputFgdTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA98);
		}
		static ::System::Int32* StaticGet_BlinkDownScale()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xA9C);
		}
		static ::System::Int32* StaticGet__CloudSDF()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAA0);
		}
		static ::System::Int32* StaticGet_InputFgdOpacityTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAA4);
		}
		static ::System::Int32* StaticGet_HashIDCustomGradualNoiseTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAA8);
		}
		static ::System::Int32* StaticGet_BlinkMaskColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAAC);
		}
		static ::System::Int32* StaticGet_LensFlareEdgeFade()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAB0);
		}
		static ::System::Int32* StaticGet_BlinkDist()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAB4);
		}
		static ::System::Int32* StaticGet_Height()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAB8);
		}
		static ::System::Int32* StaticGet__LensGlitch2GradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xABC);
		}
		static ::System::Int32* StaticGet_BloomAtlasUVClamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAC0);
		}
		static ::System::Int32* StaticGet__UseNoiseGlitch()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAC4);
		}
		static ::System::Int32* StaticGet_OutlineWidth()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAC8);
		}
		static ::System::Int32* StaticGet_MaxRcpBlurRadius()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xACC);
		}
		static ::System::Int32* StaticGet__FrameColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAD0);
		}
		static ::System::Int32* StaticGet_GaussianGradualParams()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAD4);
		}
		static ::System::Int32* StaticGet_HashIDMidSegmentA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAD8);
		}
		static ::System::Int32* StaticGet_Output_Sum12()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xADC);
		}
		static ::System::Int32* StaticGet_NearCocTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAE0);
		}
		static ::System::Int32* StaticGet__LineSpeed()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAE4);
		}
		static ::System::Int32* StaticGet__MainTex2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAE8);
		}
		static ::System::Int32* StaticGet_LensDistortion_Params1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAEC);
		}
		static ::System::Int32* StaticGet__DepthComp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAF0);
		}
		static ::System::Int32* StaticGet_FarFocalRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAF4);
		}
		static ::System::Int32* StaticGet_Input1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAF8);
		}
		static ::System::Int32* StaticGet_Output_Sum22()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xAFC);
		}
		static ::System::Int32* StaticGet__MK_Transparency()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB00);
		}
		static ::System::Int32* StaticGet__LocalAABBMin()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB04);
		}
		static ::System::Int32* StaticGet__NoiseSeed1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB08);
		}
		static ::System::Int32* StaticGet_BloomAtlasGaussTaps()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB0C);
		}
		static ::System::Int32* StaticGet__SkillRadialBlurParams1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB10);
		}
		static ::System::Int32* StaticGet_LensFlareProbe()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB14);
		}
		static ::System::Int32* StaticGet_LensFlareElementAspect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB18);
		}
		static ::System::Int32* StaticGet_Exposure()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB1C);
		}
		static ::System::Int32* StaticGet_FarTransitionRegion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShaderIDs_TypeDefinitionIndex)->GetStaticField(0xB20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_SHADERIDS__CCTOR_OFFSET))();
		}
	};
}
