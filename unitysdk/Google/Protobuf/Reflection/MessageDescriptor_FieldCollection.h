#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Reflection { class FieldDescriptor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x15B13C40)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INDECLARATIONORDER_OFFSET UNITYSDK_OFFSET(0x15B13C00)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INFIELDNUMBERORDER_OFFSET UNITYSDK_OFFSET(0x15B13C20)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15B13BF0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor_FieldCollection_TypeDefinitionIndex = 6338;

	class MessageDescriptor_FieldCollection : public ::System::Object
	{
	public:
		::Google::Protobuf::Reflection::MessageDescriptor* messageDescriptor; // 0x10

		::System::Void _ctor(::Google::Protobuf::Reflection::MessageDescriptor* messageDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MessageDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION__CTOR_OFFSET))(this, messageDescriptor);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>* InDeclarationOrder()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INDECLARATIONORDER_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>* InFieldNumberOrder()
		{
			return ((::System::Collections::Generic::IList_1<::Google::Protobuf::Reflection::FieldDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INFIELDNUMBERORDER_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptor* get_Item(::System::Int32 number)
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_GET_ITEM_OFFSET))(this, number);
		}
	};
}
