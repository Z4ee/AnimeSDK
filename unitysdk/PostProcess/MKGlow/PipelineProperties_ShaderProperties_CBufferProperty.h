#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/PipelineProperties_ShaderProperties_DefaultProperty.h"

namespace System { class String; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_CBUFFERPROPERTY_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1CB0E990)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_CBUFFERPROPERTY_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x1CB0E9A0)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_CBUFFERPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB0E9B0)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_ShaderProperties_CBufferProperty_TypeDefinitionIndex = 27287;

	class PipelineProperties_ShaderProperties_CBufferProperty : public ::PostProcess::MKGlow::PipelineProperties_ShaderProperties_DefaultProperty
	{
	public:
		::System::Int32 _index; // 0x20
		::System::Int32 _size; // 0x24

		::System::Void _ctor(::System::String* name, ::System::Int32 index, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_CBUFFERPROPERTY__CTOR_OFFSET))(this, name, index, size);
		}

		::System::Int32 get_index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_CBUFFERPROPERTY_GET_INDEX_OFFSET))(this);
		}

		::System::Int32 get_size()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_CBUFFERPROPERTY_GET_SIZE_OFFSET))(this);
		}
	};
}
