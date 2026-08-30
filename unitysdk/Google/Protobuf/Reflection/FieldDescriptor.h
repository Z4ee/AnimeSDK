#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/DescriptorBase.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldDescriptorProto_Types_Type.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldType.h"

namespace Google::Protobuf { class Extension; }
namespace Google::Protobuf::Reflection { class EnumDescriptor; }
namespace Google::Protobuf::Reflection { class FieldDescriptorProto; }
namespace Google::Protobuf::Reflection { class FileDescriptor; }
namespace Google::Protobuf::Reflection { class IFieldAccessor; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class OneofDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1B3763C0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CREATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x1B376600)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x1B3741A0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GETFIELDTYPEFROMPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x1B376120)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ACCESSOR_OFFSET UNITYSDK_OFFSET(0x1B3762E0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGONEOF_OFFSET UNITYSDK_OFFSET(0x1B376010)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGTYPE_OFFSET UNITYSDK_OFFSET(0x1B376000)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_EXTENDEETYPE_OFFSET UNITYSDK_OFFSET(0x1B3637C0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x1B376040)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDNUMBER_OFFSET UNITYSDK_OFFSET(0x1B35DBE0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x1B376350)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISMAP_OFFSET UNITYSDK_OFFSET(0x1B358E40)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISREPEATED_OFFSET UNITYSDK_OFFSET(0x1B358ED0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISREQUIRED_OFFSET UNITYSDK_OFFSET(0x1B360CD0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1B376020)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B363840)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1B376030)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B374990)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptor_TypeDefinitionIndex = 5534;

	class FieldDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		::Google::Protobuf::Reflection::MessageDescriptor* messageType; // 0x28
		::Google::Protobuf::Reflection::IFieldAccessor* accessor; // 0x30
		::System::String* _JsonName_k__BackingField; // 0x38
		::Google::Protobuf::Reflection::FieldDescriptorProto* _Proto_k__BackingField; // 0x40
		::System::String* propertyName; // 0x48
		::Google::Protobuf::Reflection::EnumDescriptor* enumType; // 0x50
		::Google::Protobuf::Reflection::OneofDescriptor* _ContainingOneof_k__BackingField; // 0x58
		::Google::Protobuf::Extension* _Extension_k__BackingField; // 0x60
		::Google::Protobuf::Reflection::MessageDescriptor* extendeeType; // 0x68
		::Google::Protobuf::Reflection::MessageDescriptor* _ContainingType_k__BackingField; // 0x70
		::Google::Protobuf::Reflection::FieldType fieldType; // 0x78

		::System::Void _ctor(::Google::Protobuf::Reflection::FieldDescriptorProto* a1, ::Google::Protobuf::Reflection::FileDescriptor* a2, ::Google::Protobuf::Reflection::MessageDescriptor* a3, ::System::Int32 a4, ::System::String* a5, ::Google::Protobuf::Extension* a6)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::String*, ::Google::Protobuf::Extension*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* get_ContainingType()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGTYPE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofDescriptor* get_ContainingOneof()
		{
			return ((::Google::Protobuf::Reflection::OneofDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGONEOF_OFFSET))(this);
		}

		::System::String* get_JsonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_JSONNAME_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptorProto* get_Proto()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::Google::Protobuf::Extension* get_Extension()
		{
			return ((::Google::Protobuf::Extension*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_EXTENSION_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::IFieldAccessor* get_Accessor()
		{
			return ((::Google::Protobuf::Reflection::IFieldAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ACCESSOR_OFFSET))(this);
		}

		static ::Google::Protobuf::Reflection::FieldType GetFieldTypeFromProtoType(::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type a1)
		{
			return ((::Google::Protobuf::Reflection::FieldType(*)(::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GETFIELDTYPEFROMPROTOTYPE_OFFSET))(a1);
		}

		::System::Boolean get_IsRepeated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISREPEATED_OFFSET))(this);
		}

		::System::Boolean get_IsRequired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISREQUIRED_OFFSET))(this);
		}

		::System::Boolean get_IsMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISMAP_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldType get_FieldType()
		{
			return ((::Google::Protobuf::Reflection::FieldType(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDTYPE_OFFSET))(this);
		}

		::System::Int32 get_FieldNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDNUMBER_OFFSET))(this);
		}

		::System::Int32 CompareTo(::Google::Protobuf::Reflection::FieldDescriptor* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_COMPARETO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* get_ExtendeeType()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_EXTENDEETYPE_OFFSET))(this);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::IFieldAccessor* CreateAccessor()
		{
			return ((::Google::Protobuf::Reflection::IFieldAccessor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CREATEACCESSOR_OFFSET))(this);
		}
	};
}
