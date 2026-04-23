#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class EnumDescriptorProto_Types_EnumReservedRange; }
namespace Google::Protobuf::Reflection { class EnumOptions; }
namespace Google::Protobuf::Reflection { class EnumValueDescriptorProto; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x170F35D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x170F2A10)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x170F2BA0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x170F2B40)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x170F2E10)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x170F2600)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x170F2B00)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x170F29B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x170F2170)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x170F2B20)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x170F25A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x170F2B10)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x170F3D20)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x170F3880)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x170F2780)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x170F2A60)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x170F2B30)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x170F3380)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x170F33E0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x170F3FE0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x170F2880)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x170F27E0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto_TypeDefinitionIndex = 6274;

	class EnumDescriptorProto : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x4B50);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>** StaticGet__repeated_value_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x4B58);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x4B60);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>** StaticGet__repeated_reservedRange_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x4B68);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_reservedName_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x4B70);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>* value_; // 0x10
		::System::String* name_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* reservedName_; // 0x20
		::Google::Protobuf::Reflection::EnumOptions* options_; // 0x28
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>* reservedRange_; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>* get_Value()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::EnumValueDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_VALUE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::EnumOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::EnumOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
