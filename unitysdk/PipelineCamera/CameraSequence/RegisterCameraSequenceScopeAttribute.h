#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceScopeAttributeFlags.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCESCOPEATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D87AA00)
#define PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCESCOPEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D87A8F0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RegisterCameraSequenceScopeAttribute_TypeDefinitionIndex = 37926;

	class RegisterCameraSequenceScopeAttribute : public ::System::Attribute
	{
	public:
		static ::System::Type** StaticGet_ScopeType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(RegisterCameraSequenceScopeAttribute_TypeDefinitionIndex)->GetStaticField(0x28D80);
		}
		::System::String* TypeName; // 0x10
		::PipelineCamera::CameraSequence::CameraSequenceScopeAttributeFlags Flags; // 0x18

		::System::Void _ctor(::System::Type* type, ::PipelineCamera::CameraSequence::CameraSequenceScopeAttributeFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::PipelineCamera::CameraSequence::CameraSequenceScopeAttributeFlags))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCESCOPEATTRIBUTE__CTOR_OFFSET))(this, type, flags);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCESCOPEATTRIBUTE__CCTOR_OFFSET))();
		}
	};
}
