#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace Google::Protobuf::Reflection { class IDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORVALIDATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x19048EB0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorValidationException_TypeDefinitionIndex = 5535;

	class DescriptorValidationException : public ::System::Exception
	{
	public:
		::System::String* description; // 0x88
		::System::String* name; // 0x90

		::System::Void _ctor(::Google::Protobuf::Reflection::IDescriptor* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::IDescriptor*, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORVALIDATIONEXCEPTION__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
