#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class DescriptorProto_Types_ExtensionRange; }
namespace MiHoYo::SDK::Protobuf::Reflection { class DescriptorProto_Types_ReservedRange; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FieldDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageOptions; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofDescriptorProto; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6FBFF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6FB320)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6FB4C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6FB460)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6FB6D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6FAE00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ENUMTYPE_OFFSET UNITYSDK_OFFSET(0x1F6FB440)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_FIELD_OFFSET UNITYSDK_OFFSET(0x1F6FB420)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F6FB370)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NESTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1F6FB430)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ONEOFDECL_OFFSET UNITYSDK_OFFSET(0x1F6FB450)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1F6FB300)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F6FADA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6FC2A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6FAF80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1F6FB380)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1F6FB310)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6FBD20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6FBD80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6FC740)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6FB130)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FAFE0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto_TypeDefinitionIndex = 29103;

	class DescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>** StaticGet__repeated_oneofDecl_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24A00);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__repeated_extension_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24A08);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>** StaticGet__repeated_nestedType_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24A10);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>** StaticGet__repeated_extensionRange_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24A18);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_reservedName_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24A20);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>** StaticGet__repeated_field_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24A28);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>** StaticGet__repeated_enumType_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24A30);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>** StaticGet__repeated_reservedRange_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24A38);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24A40);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::String*>* reservedName_; // 0x10
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>* enumType_; // 0x18
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>* reservedRange_; // 0x20
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>* nestedType_; // 0x28
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>* extension_; // 0x30
		::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* options_; // 0x38
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>* oneofDecl_; // 0x40
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>* field_; // 0x48
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>* extensionRange_; // 0x50
		::System::String* name_; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>* get_Field()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::FieldDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_FIELD_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>* get_NestedType()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_NESTEDTYPE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>* get_EnumType()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ENUMTYPE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>* get_OneofDecl()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_ONEOFDECL_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
