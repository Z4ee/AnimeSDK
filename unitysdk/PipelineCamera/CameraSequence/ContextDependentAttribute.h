#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0x1F620A90)
#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE_GET_VARIABLE_OFFSET UNITYSDK_OFFSET(0x1F620A80)
#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F620AB0)
#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F620AC0)
#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F620AA0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int ContextDependentAttribute_TypeDefinitionIndex = 38593;

	class ContextDependentAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Variable_k__BackingField; // 0x10
		::System::Boolean _IsRoot_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* variableName, ::System::Boolean isRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE__CTOR_OFFSET))(this, variableName, isRoot);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Boolean isRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE__CTOR_2_OFFSET))(this, isRoot);
		}

		::System::String* get_Variable()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE_GET_VARIABLE_OFFSET))(this);
		}

		::System::Boolean get_IsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTDEPENDENTATTRIBUTE_GET_ISROOT_OFFSET))(this);
		}
	};
}
