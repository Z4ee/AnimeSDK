#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class IDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORVALIDATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C519EF0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorValidationException_TypeDefinitionIndex = 26068;

	class DescriptorValidationException : public ::System::Exception
	{
	public:
		::System::String* description; // 0x88
		::System::String* name; // 0x90

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::IDescriptor* problemDescriptor, ::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::IDescriptor*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORVALIDATIONEXCEPTION__CTOR_OFFSET))(this, problemDescriptor, description);
		}
	};
}
