#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_COMMANDBUFFERPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A9D140)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_CommandBufferProperties_TypeDefinitionIndex = 29665;

	class PipelineProperties_CommandBufferProperties : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_sampleClearBuffers()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B50);
		}
		static ::System::String** StaticGet_sampleUpsample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B58);
		}
		static ::System::String** StaticGet_samplePreSample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B60);
		}
		static ::System::String** StaticGet_sampleCopySource()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B68);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B70);
		}
		static ::System::String** StaticGet_lensFlareDownsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B78);
		}
		static ::System::String** StaticGet_sampleReplacement()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B80);
		}
		static ::System::String** StaticGet_bloomUpsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B88);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B90);
		}
		static ::System::String** StaticGet_sampleDownsample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23B98);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BA0);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BA8);
		}
		static ::System::String** StaticGet_sourceBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BB0);
		}
		static ::System::String** StaticGet_sampleSetup()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BB8);
		}
		static ::System::String** StaticGet_sampleComposite()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BC0);
		}
		static ::System::String** StaticGet_bloomDownsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BC8);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BD0);
		}
		static ::System::String** StaticGet_commandBufferName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BD8);
		}
		static ::System::String** StaticGet_lensFlareUpsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BE0);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BE8);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BF0);
		}
		static ::System::String** StaticGet_selectiveRenderBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23BF8);
		}
		static ::System::String** StaticGet_samplePrepare()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23C00);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23C08);
		}
		static ::System::String** StaticGet_sampleCreateBuffers()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x23C10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_COMMANDBUFFERPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
