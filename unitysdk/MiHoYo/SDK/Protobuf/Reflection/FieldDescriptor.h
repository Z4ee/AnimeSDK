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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_COMPARETO_OFFSET UNITYSDK_OFFSET(0x15DABEF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CREATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x15DAC350)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x15DABF90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GETFIELDTYPEFROMPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x15DABDF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ACCESSOR_OFFSET UNITYSDK_OFFSET(0x15DABEA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGONEOF_OFFSET UNITYSDK_OFFSET(0x15DABA80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGTYPE_OFFSET UNITYSDK_OFFSET(0x15DABA70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDNUMBER_OFFSET UNITYSDK_OFFSET(0x15D9D420)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x15DABED0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISMAP_OFFSET UNITYSDK_OFFSET(0x15D9A500)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISREPEATED_OFFSET UNITYSDK_OFFSET(0x15D9A550)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x15DABA90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15D9F8F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x15DABAA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x15DABAB0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptor_TypeDefinitionIndex = 28117;

	class FieldDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor* enumType; // 0x28
		::System::String* _JsonName_k__BackingField; // 0x30
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* _ContainingType_k__BackingField; // 0x38
		::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* _Proto_k__BackingField; // 0x40
		::System::String* propertyName; // 0x48
		::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptor* _ContainingOneof_k__BackingField; // 0x50
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* messageType; // 0x58
		::MiHoYo::SDK::Protobuf::Reflection::IFieldAccessor* accessor; // 0x60
		::MiHoYo::SDK::Protobuf::Reflection::FieldType fieldType; // 0x68

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto* proto, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* parent, ::System::Int32 index, ::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR__CTOR_OFFSET))(this, proto, file, parent, index, propertyName);
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

		static ::MiHoYo::SDK::Protobuf::Reflection::FieldType GetFieldTypeFromProtoType(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Type type)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldType(*)(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto_Types_Type))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GETFIELDTYPEFROMPROTOTYPE_OFFSET))(type);
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

		::System::Int32 CompareTo(::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor* other)
		{
			return ((::System::Int32(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_COMPARETO_OFFSET))(this, other);
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
