#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/DescriptorBase.h"

namespace Google::Protobuf::Reflection { class EnumDescriptorProto; }
namespace Google::Protobuf::Reflection { class EnumValueDescriptor; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET UNITYSDK_OFFSET(0x17E52F90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17E52F20)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x17E53000)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x17E52B50)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptor_TypeDefinitionIndex = 5531;

	class EnumDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		::Google::Protobuf::Reflection::EnumDescriptorProto* proto; // 0x28
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumValueDescriptor*>* values; // 0x30
		::Google::Protobuf::Reflection::MessageDescriptor* containingType; // 0x38
		::System::Type* clrType; // 0x40

		::System::Void _ctor(::Google::Protobuf::Reflection::EnumDescriptorProto* a1, ::Google::Protobuf::Reflection::FileDescriptor* a2, ::Google::Protobuf::Reflection::MessageDescriptor* a3, ::System::Int32 a4, ::System::Type* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>* GetNestedDescriptorListForField(::System::Int32 a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumValueDescriptor*>* get_Values()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumValueDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_VALUES_OFFSET))(this);
		}
	};
}
