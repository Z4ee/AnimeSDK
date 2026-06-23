#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_CBufferProperty; }
namespace PostProcess::MKGlow { class PipelineProperties_ShaderProperties_DefaultProperty; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3FAC80)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_ShaderProperties_TypeDefinitionIndex = 26551;

	class PipelineProperties_ShaderProperties : public ::System::Object
	{
	public:
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E30);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareBlend()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E38);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareChromaticAberration()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E40);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDiffractionIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E48);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection23()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E50);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E58);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E60);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E68);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E70);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDiffractionTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E78);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_higherMipBloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E80);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_resolutionScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E88);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E90);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_screenSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21E98);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_copyTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EA0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EA8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EB0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDirection01()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EB8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtTexST()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EC0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_targetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EC8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareScattering()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21ED0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21ED8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_blooming()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EE0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare1Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EE8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lumaScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EF0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_cArgBuffer()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21EF8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare2TargetTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F00);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareOffset()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F08);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareGhostParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F10);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTargetTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F18);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensSurfaceDirtTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F20);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_singlePassStereoScale()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F28);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_bloomTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F30);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareSpread()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F38);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare3Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F40);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareHaloParams()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F48);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareColorRamp()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F50);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_glare0Tex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F58);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F60);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_sourceTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F68);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_renderTargetSize()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F70);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensSurfaceDirtIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F78);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareDistanceFade()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F80);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_viewMatrix()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F88);
		}
		static ::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>** StaticGet_packedGlareTex()
		{
			return (::Il2CppArray<::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty*>**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F90);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_bloomThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21F98);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty** StaticGet_lensFlareTex()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FA0);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_glareGlobalIntensity()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FA8);
		}
		static ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty** StaticGet_lensFlareThreshold()
		{
			return (::PostProcess::MKGlow::PipelineProperties_ShaderProperties_CBufferProperty**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_ShaderProperties_TypeDefinitionIndex)->GetStaticField(0x21FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
