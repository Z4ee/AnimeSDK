#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace Google::Protobuf::Reflection { class IDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORVALIDATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15AEA7F0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorValidationException_TypeDefinitionIndex = 6318;

	class DescriptorValidationException : public ::System::Exception
	{
	public:
		::System::String* name; // 0x88
		::System::String* description; // 0x90

		::System::Void _ctor(::Google::Protobuf::Reflection::IDescriptor* problemDescriptor, ::System::String* description)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::IDescriptor*, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORVALIDATIONEXCEPTION__CTOR_OFFSET))(this, problemDescriptor, description);
		}
	};
}
