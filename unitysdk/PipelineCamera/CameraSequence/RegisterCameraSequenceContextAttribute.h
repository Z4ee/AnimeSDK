#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCECONTEXTATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x189DC990)
#define PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCECONTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x189DC890)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RegisterCameraSequenceContextAttribute_TypeDefinitionIndex = 36333;

	class RegisterCameraSequenceContextAttribute : public ::System::Attribute
	{
	public:
		static ::System::Type** StaticGet_ContextType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(RegisterCameraSequenceContextAttribute_TypeDefinitionIndex)->GetStaticField(0x27040);
		}
		::System::String* TypeName; // 0x10

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCECONTEXTATTRIBUTE__CTOR_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCECONTEXTATTRIBUTE__CCTOR_OFFSET))();
		}
	};
}
