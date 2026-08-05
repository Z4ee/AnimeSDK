#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTFREEATTRIBUTE_GET_VARIABLE_OFFSET UNITYSDK_OFFSET(0x1F1B52C0)
#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTFREEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1B52D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int ContextFreeAttribute_TypeDefinitionIndex = 38595;

	class ContextFreeAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Variable_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* variableName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTFREEATTRIBUTE__CTOR_OFFSET))(this, variableName);
		}

		::System::String* get_Variable()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTFREEATTRIBUTE_GET_VARIABLE_OFFSET))(this);
		}
	};
}
