#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/DescriptorBase.h"

namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class MethodDescriptor; }
namespace Google::Protobuf::Reflection { class ServiceDescriptorProto; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x17E7B300)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET UNITYSDK_OFFSET(0x17E7B290)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17E7B220)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7B010)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptor_TypeDefinitionIndex = 5571;

	class ServiceDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		::Google::Protobuf::Reflection::ServiceDescriptorProto* proto; // 0x28
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::MethodDescriptor*>* methods; // 0x30

		::System::Void _ctor(::Google::Protobuf::Reflection::ServiceDescriptorProto* a1, ::Google::Protobuf::Reflection::FileDescriptor* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceDescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>* GetNestedDescriptorListForField(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET))(this, a1);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}
	};
}
