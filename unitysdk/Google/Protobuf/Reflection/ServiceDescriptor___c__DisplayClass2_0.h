#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class MethodDescriptor; }
namespace Google::Protobuf::Reflection { class MethodDescriptorProto; }
namespace Google::Protobuf::Reflection { class ServiceDescriptor; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR___C__DISPLAYCLASS2_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B397170)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1B397760)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptor___c__DisplayClass2_0_TypeDefinitionIndex = 5566;

	class ServiceDescriptor___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::ServiceDescriptor* __4__this; // 0x10
		::Google::Protobuf::Reflection::FileDescriptor* file; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR___C__DISPLAYCLASS2_0__CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MethodDescriptor* __ctor_b__0(::Google::Protobuf::Reflection::MethodDescriptorProto* a1, ::System::Int32 a2)
		{
			return ((::Google::Protobuf::Reflection::MethodDescriptor*(*)(::PVOID, ::Google::Protobuf::Reflection::MethodDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR___C__DISPLAYCLASS2_0___CTOR_B__0_OFFSET))(this, a1, a2);
		}
	};
}
