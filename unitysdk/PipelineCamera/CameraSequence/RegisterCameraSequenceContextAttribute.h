#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCECONTEXTATTRIBUTE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ABCBD10)
#define PIPELINECAMERA_CAMERASEQUENCE_REGISTERCAMERASEQUENCECONTEXTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCBC10)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RegisterCameraSequenceContextAttribute_TypeDefinitionIndex = 37941;

	class RegisterCameraSequenceContextAttribute : public ::System::Attribute
	{
	public:
		static ::System::Type** StaticGet_ContextType()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(RegisterCameraSequenceContextAttribute_TypeDefinitionIndex)->GetStaticField(0x28CC0);
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
