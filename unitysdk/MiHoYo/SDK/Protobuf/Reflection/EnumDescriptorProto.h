#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumOptions; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173A69A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x173A61C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173A6400)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x173A62B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173A64F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173A5E00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x173A5C60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x173A6150)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1739F800)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x173A5CC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173A6AB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173A5F80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x173A6210)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x173A61B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173A6840)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x173A68A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x173A6D70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173A6040)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x173A5FE0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto_TypeDefinitionIndex = 33687;

	class EnumDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*>** StaticGet__repeated_value_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x68CF0);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x68CF8);
		}
		::MiHoYo::SDK::Protobuf::Reflection::EnumOptions* options_; // 0x10
		::System::String* name_; // 0x18
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*>* value_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*>* get_Value()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_VALUE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::EnumOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
