#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_DEFAULTPROPERTY_GET_ID_OFFSET UNITYSDK_OFFSET(0x19B83F60)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_DEFAULTPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x19B83F50)
#define POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_DEFAULTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x19B83F70)

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int PipelineProperties_ShaderProperties_DefaultProperty_TypeDefinitionIndex = 29663;

	class PipelineProperties_ShaderProperties_DefaultProperty : public ::System::Object
	{
	public:
		::System::String* _name; // 0x10
		::System::Int32 _id; // 0x18

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_DEFAULTPROPERTY__CTOR_OFFSET))(this, name);
		}

		::System::String* get_name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_DEFAULTPROPERTY_GET_NAME_OFFSET))(this);
		}

		::System::Int32 get_id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POSTPROCESS_MKGLOW_PIPELINEPROPERTIES_SHADERPROPERTIES_DEFAULTPROPERTY_GET_ID_OFFSET))(this);
		}
	};
}
