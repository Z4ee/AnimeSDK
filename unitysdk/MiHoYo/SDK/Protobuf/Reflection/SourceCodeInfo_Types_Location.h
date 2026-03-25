#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15DC01A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_CLONE_OFFSET UNITYSDK_OFFSET(0x15DBF900)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15DBFB10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x15DBFAB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15DBFC40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DBF560)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_LEADINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15DBF950)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15DA7F40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_TRAILINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15DBFA00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15DC0340)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DBF680)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_SET_LEADINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15DBF960)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_SET_TRAILINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15DBFA10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15DBFFB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x15DC0010)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC0660)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15DBF850)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBF6E0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo_Types_Location_TypeDefinitionIndex = 28099;

	class SourceCodeInfo_Types_Location : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_leadingDetachedComments_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0x227E0);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_path_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0x227E8);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0x227F0);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_span_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0x227F8);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::Int32>* span_; // 0x10
		::System::String* leadingComments_; // 0x18
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::String*>* leadingDetachedComments_; // 0x20
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::Int32>* path_; // 0x28
		::System::String* trailingComments_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_CLONE_OFFSET))(this);
		}

		::System::String* get_LeadingComments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_LEADINGCOMMENTS_OFFSET))(this);
		}

		::System::Void set_LeadingComments(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_SET_LEADINGCOMMENTS_OFFSET))(this, value);
		}

		::System::String* get_TrailingComments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_TRAILINGCOMMENTS_OFFSET))(this);
		}

		::System::Void set_TrailingComments(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_SET_TRAILINGCOMMENTS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_MERGEFROM_OFFSET))(this, input);
		}
	};
}
