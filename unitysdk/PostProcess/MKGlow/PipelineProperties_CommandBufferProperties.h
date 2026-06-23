#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_COMMANDBUFFERPROPERTIES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDA5810)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_CommandBufferProperties_TypeDefinitionIndex = 26550;

	class PipelineProperties_CommandBufferProperties : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_glareUpsampleBuffer1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21340);
		}
		static ::System::String** StaticGet_commandBufferName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21348);
		}
		static ::System::String** StaticGet_lensFlareDownsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21350);
		}
		static ::System::String** StaticGet_sampleReplacement()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21358);
		}
		static ::System::String** StaticGet_selectiveRenderBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21360);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21368);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21370);
		}
		static ::System::String** StaticGet_sourceBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21378);
		}
		static ::System::String** StaticGet_sampleCopySource()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21380);
		}
		static ::System::String** StaticGet_sampleDownsample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21388);
		}
		static ::System::String** StaticGet_sampleCreateBuffers()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21390);
		}
		static ::System::String** StaticGet_sampleClearBuffers()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21398);
		}
		static ::System::String** StaticGet_lensFlareUpsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213A0);
		}
		static ::System::String** StaticGet_samplePrepare()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213A8);
		}
		static ::System::String** StaticGet_bloomDownsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213B0);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213B8);
		}
		static ::System::String** StaticGet_sampleSetup()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213C0);
		}
		static ::System::String** StaticGet_sampleComposite()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213C8);
		}
		static ::System::String** StaticGet_glareUpsampleBuffer2()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213D0);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213D8);
		}
		static ::System::String** StaticGet_bloomUpsampleBuffer()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213E0);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213E8);
		}
		static ::System::String** StaticGet_samplePreSample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213F0);
		}
		static ::System::String** StaticGet_glareDownsampleBuffer3()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x213F8);
		}
		static ::System::String** StaticGet_sampleUpsample()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PipelineProperties_CommandBufferProperties_TypeDefinitionIndex)->GetStaticField(0x21400);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_COMMANDBUFFERPROPERTIES__CCTOR_OFFSET))();
		}
	};
}
