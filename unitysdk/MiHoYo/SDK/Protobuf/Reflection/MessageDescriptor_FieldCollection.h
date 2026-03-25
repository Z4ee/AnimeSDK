#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x15D9B360)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INDECLARATIONORDER_OFFSET UNITYSDK_OFFSET(0x15DB8C20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INFIELDNUMBERORDER_OFFSET UNITYSDK_OFFSET(0x15D98F70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB8040)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageDescriptor_FieldCollection_TypeDefinitionIndex = 28126;

	class MessageDescriptor_FieldCollection : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* messageDescriptor; // 0x10

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* messageDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION__CTOR_OFFSET))(this, messageDescriptor);
		}

		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* InDeclarationOrder()
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INDECLARATIONORDER_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>* InFieldNumberOrder()
		{
			return ((::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_INFIELDNUMBERORDER_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* get_Item(::System::Int32 number)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEDESCRIPTOR_FIELDCOLLECTION_GET_ITEM_OFFSET))(this, number);
		}
	};
}
