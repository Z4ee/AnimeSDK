#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_CBufferProperty; }
namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_DefaultProperty; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACFD720)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_ShaderProperties_TypeDefinitionIndex = 29662;

	class PipelineProperties_ShaderProperties : public ::System::Object
	{
	public:
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_cArgBuffer()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x245C0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x245C8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x245D0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection23()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x245D8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x245E0);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTargetTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x245E8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareBlend()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x245F0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x245F8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareChromaticAberration()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24600);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24608);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDiffractionIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24610);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24618);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24620);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24628);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24630);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtTexST()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24638);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection01()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24640);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24648);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24650);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24658);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDiffractionTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24660);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24668);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24670);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_viewMatrix()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24678);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDistanceFade()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24680);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_screenSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24688);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24690);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareColorRamp()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24698);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246A0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_blooming()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246A8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareGlobalIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246B0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDirtTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246B8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_singlePassStereoScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246C0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareGhostParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246C8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246D0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246D8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246E0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_sourceTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246E8);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246F0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareOffset()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x246F8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_copyTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24700);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_higherMipBloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24708);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24710);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_renderTargetSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24718);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lumaScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24720);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareHaloParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24728);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_targetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24730);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_resolutionScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24738);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareScattering()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x24740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
