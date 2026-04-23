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

#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_COMPARETO_OFFSET UNITYSDK_OFFSET(0x170FAE70)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CREATEACCESSOR_OFFSET UNITYSDK_OFFSET(0x170FB0B0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x170F9070)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GETFIELDTYPEFROMPROTOTYPE_OFFSET UNITYSDK_OFFSET(0x170FABD0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ACCESSOR_OFFSET UNITYSDK_OFFSET(0x170FAD90)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGONEOF_OFFSET UNITYSDK_OFFSET(0x170FAAC0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_CONTAININGTYPE_OFFSET UNITYSDK_OFFSET(0x170FAAB0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_EXTENDEETYPE_OFFSET UNITYSDK_OFFSET(0x170E7D10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x170FAAF0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDNUMBER_OFFSET UNITYSDK_OFFSET(0x170E33A0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_FIELDTYPE_OFFSET UNITYSDK_OFFSET(0x170FAE00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISMAP_OFFSET UNITYSDK_OFFSET(0x170E0040)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISREPEATED_OFFSET UNITYSDK_OFFSET(0x170E00D0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_ISREQUIRED_OFFSET UNITYSDK_OFFSET(0x170E5B60)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x170FAAD0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x170E7D90)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x170FAAE0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x170F9840)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptor_TypeDefinitionIndex = 6338;

	class FieldDescriptor : public ::Google::Protobuf::Reflection::DescriptorBase
	{
	public:
		::Google::Protobuf::Reflection::FieldDescriptorProto* _Proto_k__BackingField; // 0x28
		::Google::Protobuf::Reflection::MessageDescriptor* extendeeType; // 0x30
		::System::String* _JsonName_k__BackingField; // 0x38
		::Google::Protobuf::Reflection::OneofDescriptor* _ContainingOneof_k__BackingField; // 0x40
		::Google::Protobuf::Reflection::MessageDescriptor* _ContainingType_k__BackingField; // 0x48
		::Google::Protobuf::Reflection::IFieldAccessor* accessor; // 0x50
		::Google::Protobuf::Reflection::EnumDescriptor* enumType; // 0x58
		::Google::Protobuf::Reflection::MessageDescriptor* messageType; // 0x60
		::System::String* propertyName; // 0x68
		::Google::Protobuf::Extension* _Extension_k__BackingField; // 0x70
		::Google::Protobuf::Reflection::FieldType fieldType; // 0x78

		::System::Void _ctor(::Google::Protobuf::Reflection::FieldDescriptorProto* proto, ::Google::Protobuf::Reflection::FileDescriptor* file, ::Google::Protobuf::Reflection::MessageDescriptor* parent, ::System::Int32 index, ::System::String* propertyName, ::Google::Protobuf::Extension* extension)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptorProto*, ::Google::Protobuf::Reflection::FileDescriptor*, ::Google::Protobuf::Reflection::MessageDescriptor*, ::System::Int32, ::System::String*, ::Google::Protobuf::Extension*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR__CTOR_OFFSET))(this, proto, file, parent, index, propertyName, extension);
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

		static ::Google::Protobuf::Reflection::FieldType GetFieldTypeFromProtoType(::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type type)
		{
			return ((::Google::Protobuf::Reflection::FieldType(*)(::Google::Protobuf::Reflection::FieldDescriptorProto_Types_Type))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_GETFIELDTYPEFROMPROTOTYPE_OFFSET))(type);
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

		::System::Int32 CompareTo(::Google::Protobuf::Reflection::FieldDescriptor* other)
		{
			return ((::System::Int32(*)(::PVOID, ::Google::Protobuf::Reflection::FieldDescriptor*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTOR_COMPARETO_OFFSET))(this, other);
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
