#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/DescriptorBase.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldDescriptorProto_Types_Type.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldType.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class IFieldAccessor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1B6FDAE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CREATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x1B6FDF40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x1B6FDB80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GETFIELDTYPEFROMPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x1B6FD9E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ACCESSOR_OFFSET UNITYSDK_OFFSET(0x1B6FDA90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGONEOF_OFFSET UNITYSDK_OFFSET(0x1B6FD610)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGTYPE_OFFSET UNITYSDK_OFFSET(0x1B6FD600)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDNUMBER_OFFSET UNITYSDK_OFFSET(0x1B6EEBC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x1B6FDAC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISMAP_OFFSET UNITYSDK_OFFSET(0x1B6EA6F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISREPEATED_OFFSET UNITYSDK_OFFSET(0x1B6EA740)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1B6FD620)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B6F1AE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1B6FD630)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6FD640)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptor_TypeDefinitionIndex = 35161;

	class FieldDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		::System::String* _JsonName_k__BackingField; // 0x28
		::System::String* propertyName; // 0x30
		::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor* _ContainingOneof_k__BackingField; // 0x38
		::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor* accessor; // 0x40
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* _ContainingType_k__BackingField; // 0x48
		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* _Proto_k__BackingField; // 0x50
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* messageType; // 0x58
		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor* enumType; // 0x60
		::MiHoYo::SDK::Protobuf::Reflection::FieldType fieldType; // 0x68

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* a1, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* a2, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* a3, ::System::Int32 a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_ContainingType()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGTYPE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor* get_ContainingOneof()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGONEOF_OFFSET))(this);
		}

		::System::String* get_JsonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_JSONNAME_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* get_Proto()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor* get_Accessor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ACCESSOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FieldType GetFieldTypeFromProtoType(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Type a1)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldType(*)(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Type))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GETFIELDTYPEFROMPROTOTYPE_OFFSET))(a1);
		}

		::System::Boolean get_IsRepeated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISREPEATED_OFFSET))(this);
		}

		::System::Boolean get_IsMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISMAP_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldType get_FieldType()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDTYPE_OFFSET))(this);
		}

		::System::Int32 get_FieldNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDNUMBER_OFFSET))(this);
		}

		::System::Int32 CompareTo(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor* CreateAccessor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CREATEACCESSOR_OFFSET))(this);
		}
	};
}
