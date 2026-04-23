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

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET UNITYSDK_OFFSET(0x170F23A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x170F2330)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x170F2410)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x170F1F70)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptor_TypeDefinitionIndex = 6329;

	class EnumDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		::Google::Protobuf::Reflection::EnumDescriptorProto* proto; // 0x28
		::Google::Protobuf::Reflection::MessageDescriptor* containingType; // 0x30
		::System::Type* clrType; // 0x38
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumValueDescriptor*>* values; // 0x40

		::System::Void _ctor(::Google::Protobuf::Reflection::EnumDescriptorProto* proto, ::Google::Protobuf::Reflection::FileDescriptor* file, ::Google::Protobuf::Reflection::MessageDescriptor* parent, ::System::Int32 index, ::System::Type* clrType)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR__CTOR_OFFSET))(this, proto, file, parent, index, clrType);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>* GetNestedDescriptorListForField(::System::Int32 fieldNumber)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Google::Protobuf::Reflection::DescriptorBase*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GETNESTEDDESCRIPTORLISTFORFIELD_OFFSET))(this, fieldNumber);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumValueDescriptor*>* get_Values()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::EnumValueDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTOR_GET_VALUES_OFFSET))(this);
		}
	};
}
