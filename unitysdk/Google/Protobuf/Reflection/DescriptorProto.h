#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class DescriptorProto_Types_ExtensionRange; }
namespace Google::Protobuf::Reflection { class DescriptorProto_Types_ReservedRange; }
namespace Google::Protobuf::Reflection { class EnumDescriptorProto; }
namespace Google::Protobuf::Reflection { class FieldDescriptorProto; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class MessageOptions; }
namespace Google::Protobuf::Reflection { class OneofDescriptorProto; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15AED1C0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x15AEC250)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15AEC460)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x15AEC400)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15AEC7A0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15AEBD30)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x15AEC3C0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x15AEC3A0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_FIELD_OFFSET UNITYSDK_OFFSET(0x15AEC390)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x15AEC380)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x15AEC240)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15AEC2A0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x15AEC3B0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ONEOFDECL_OFFSET UNITYSDK_OFFSET(0x15AEC3D0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x15AEC3E0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15AEBCD0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15AED990)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15AED570)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15AEBEB0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15AEC310)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x15AEC3F0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15AECE80)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x15AECEE0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15AEDE00)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15AEC060)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x15AEBF10)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto_TypeDefinitionIndex = 6248;

	class DescriptorProto : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_reservedName_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC8C0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__repeated_extension_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC8C8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>** StaticGet__repeated_oneofDecl_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC8D0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>** StaticGet__repeated_enumType_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC8D8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto*>** StaticGet__repeated_nestedType_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC8E0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__repeated_field_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC8E8);
		}
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC8F0);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC8F8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>** StaticGet__repeated_extensionRange_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC900);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>** StaticGet__repeated_reservedRange_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0xC908);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>* oneofDecl_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>* extensionRange_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>* enumType_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* field_; // 0x28
		::System::String* name_; // 0x30
		::Google::Protobuf::Reflection::MessageOptions* options_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* reservedName_; // 0x40
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* extension_; // 0x48
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x50
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>* reservedRange_; // 0x58
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto*>* nestedType_; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::DescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::DescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::DescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* get_Field()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_FIELD_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* get_Extension()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_EXTENSION_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto*>* get_NestedType()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NESTEDTYPE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>* get_EnumType()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ENUMTYPE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>* get_OneofDecl()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ONEOFDECL_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MessageOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::MessageOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::MessageOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::DescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::DescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
