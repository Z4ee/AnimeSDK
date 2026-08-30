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

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA8D650)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA8CB80)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA8CD70)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA8CD10)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA8D040)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA8C600)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1AA8CCD0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_EXTENSION_OFFSET UNITYSDK_OFFSET(0x1AA8CCB0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_FIELD_OFFSET UNITYSDK_OFFSET(0x1AA8CCA0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x1AA8CC90)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x1AA8CB70)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AA8CBD0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1AA8CCC0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ONEOFDECL_OFFSET UNITYSDK_OFFSET(0x1AA8CCE0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1AA8CCF0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1AA8C5A0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA8DD60)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA8D950)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA8C7E0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AA8CC40)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1AA8CD00)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA8D2B0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA8D310)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA8E1A0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA8C990)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA8C840)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto_TypeDefinitionIndex = 5454;

	class DescriptorProto : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E7C0);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E7C8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__repeated_extension_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E7D0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>** StaticGet__repeated_reservedRange_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E7D8);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_reservedName_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E7E0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>** StaticGet__repeated_oneofDecl_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E7E8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>** StaticGet__repeated_extensionRange_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E7F0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__repeated_field_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E7F8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto*>** StaticGet__repeated_nestedType_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::DescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E800);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>** StaticGet__repeated_enumType_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x1E808);
		}
		::Google::Protobuf::Reflection::MessageOptions* options_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* reservedName_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* extension_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>* oneofDecl_; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>* enumType_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>* extensionRange_; // 0x40
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::FieldDescriptorProto*>* field_; // 0x48
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>* reservedRange_; // 0x50
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::DescriptorProto*>* nestedType_; // 0x58
		::System::String* name_; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::DescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
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

		::System::Void set_Options(::Google::Protobuf::Reflection::MessageOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::DescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::DescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
