#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/DescriptorBase.h"

namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class OneofAccessor; }
namespace Google::Protobuf::Reflection { class OneofDescriptorProto; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CREATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x17117820)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x17117B30)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_ACCESSOR_OFFSET UNITYSDK_OFFSET(0x17117B20)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_CONTAININGTYPE_OFFSET UNITYSDK_OFFSET(0x17117B10)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17117AA0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x171176D0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofDescriptor_TypeDefinitionIndex = 6353;

	class OneofDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>* fields; // 0x28
		::Google::Protobuf::Reflection::OneofAccessor* accessor; // 0x30
		::Google::Protobuf::Reflection::OneofDescriptorProto* proto; // 0x38
		::Google::Protobuf::Reflection::MessageDescriptor* containingType; // 0x40

		::System::Void _ctor(::Google::Protobuf::Reflection::OneofDescriptorProto* proto, ::Google::Protobuf::Reflection::FileDescriptor* file, ::Google::Protobuf::Reflection::MessageDescriptor* parent, ::System::Int32 index, ::System::String* clrName)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::OneofDescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR__CTOR_OFFSET))(this, proto, file, parent, index, clrName);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* get_ContainingType()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_CONTAININGTYPE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofAccessor* get_Accessor()
		{
			return ((::Google::Protobuf::Reflection::OneofAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_GET_ACCESSOR_OFFSET))(this);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofAccessor* CreateAccessor(::System::String* clrName)
		{
			return ((::Google::Protobuf::Reflection::OneofAccessor*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTOR_CREATEACCESSOR_OFFSET))(this, clrName);
		}
	};
}
