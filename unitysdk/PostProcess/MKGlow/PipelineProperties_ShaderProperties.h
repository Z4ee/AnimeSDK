#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_CBufferProperty; }
namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_DefaultProperty; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6DA0E0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_ShaderProperties_TypeDefinitionIndex = 27286;

	class PipelineProperties_ShaderProperties : public ::System::Object
	{
	public:
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_resolutionScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x235D0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_higherMipBloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x235D8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_targetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x235E0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x235E8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x235F0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x235F8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_copyTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23600);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_singlePassStereoScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23608);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23610);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareBlend()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23618);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_sourceTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23620);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_viewMatrix()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23628);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareGhostParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23630);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareColorRamp()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23638);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDiffractionIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23640);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_blooming()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23648);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_cArgBuffer()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23650);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23658);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23660);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareOffset()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23668);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23670);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23678);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection01()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23680);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lumaScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23688);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23690);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareChromaticAberration()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23698);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDiffractionTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236A0);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTargetTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236A8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236B0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection23()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236B8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236C0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_renderTargetSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236C8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareScattering()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236D0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtTexST()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236D8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236E0);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236E8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236F0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x236F8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23700);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_screenSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23708);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDirtTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23710);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23718);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareHaloParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23720);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23728);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareGlobalIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23730);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23738);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23740);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23748);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDistanceFade()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x23750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
