#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }
namespace System { class Type; }

#define PIPELINECAMERA_REGISTERONSCREENMESSAGESWITCHCONTAINERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C857660)

namespace PipelineCamera
{
	inline static constexpr unsigned int RegisterOnScreenMessageSwitchContainerAttribute_TypeDefinitionIndex = 37633;

	class RegisterOnScreenMessageSwitchContainerAttribute : public ::System::Attribute
	{
	public:
		::System::String* TypeName; // 0x10

		::System::Void _ctor(::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_REGISTERONSCREENMESSAGESWITCHCONTAINERATTRIBUTE__CTOR_OFFSET))(this, type);
		}
	};
}
