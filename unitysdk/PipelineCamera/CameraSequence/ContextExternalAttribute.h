#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE_GET_ISROOT_OFFSET UNITYSDK_OFFSET(0x1DF28150)
#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE_GET_VARIABLE_OFFSET UNITYSDK_OFFSET(0x1DF28140)
#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF28170)
#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DF28180)
#define PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF28160)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int ContextExternalAttribute_TypeDefinitionIndex = 37933;

	class ContextExternalAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Variable_k__BackingField; // 0x10
		::System::Boolean _IsRoot_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* variableName, ::System::Boolean isRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE__CTOR_OFFSET))(this, variableName, isRoot);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::Boolean isRoot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE__CTOR_2_OFFSET))(this, isRoot);
		}

		::System::String* get_Variable()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE_GET_VARIABLE_OFFSET))(this);
		}

		::System::Boolean get_IsRoot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CONTEXTEXTERNALATTRIBUTE_GET_ISROOT_OFFSET))(this);
		}
	};
}
