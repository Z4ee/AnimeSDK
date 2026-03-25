#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15B229D0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_CLONE_OFFSET UNITYSDK_OFFSET(0x15B21CF0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B21FB0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B21F50)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B222C0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B21910)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_HASLEADINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15B21E40)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_HASTRAILINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15B21F30)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_LEADINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15B21D60)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_LEADINGDETACHEDCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15B21F40)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15B218B0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_PATH_OFFSET UNITYSDK_OFFSET(0x15B21D40)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_SPAN_OFFSET UNITYSDK_OFFSET(0x15B21D50)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_TRAILINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15B21E50)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15B230A0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B22D70)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B21A30)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_SET_LEADINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15B21DD0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_SET_TRAILINGCOMMENTS_OFFSET UNITYSDK_OFFSET(0x15B21EC0)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B22720)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B22780)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B23340)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B21B60)
#define GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CTOR_OFFSET UNITYSDK_OFFSET(0x15B21A90)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo_Types_Location_TypeDefinitionIndex = 6305;

	class SourceCodeInfo_Types_Location : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0xD5E0);
		}
		static ::System::String** StaticGet_TrailingCommentsDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0xD5E8);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_leadingDetachedComments_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0xD5F0);
		}
		static ::System::String** StaticGet_LeadingCommentsDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0xD5F8);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_span_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0xD600);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_path_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_Types_Location_TypeDefinitionIndex)->GetStaticField(0xD608);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>* path_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>* span_; // 0x18
		::System::String* trailingComments_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* leadingDetachedComments_; // 0x28
		::System::String* leadingComments_; // 0x30
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location* Clone()
		{
			return ((::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>* get_Path()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_PATH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>* get_Span()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_SPAN_OFFSET))(this);
		}

		::System::String* get_LeadingComments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_LEADINGCOMMENTS_OFFSET))(this);
		}

		::System::Void set_LeadingComments(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_SET_LEADINGCOMMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_HasLeadingComments()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_HASLEADINGCOMMENTS_OFFSET))(this);
		}

		::System::String* get_TrailingComments()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_TRAILINGCOMMENTS_OFFSET))(this);
		}

		::System::Void set_TrailingComments(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_SET_TRAILINGCOMMENTS_OFFSET))(this, value);
		}

		::System::Boolean get_HasTrailingComments()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_HASTRAILINGCOMMENTS_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* get_LeadingDetachedComments()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GET_LEADINGDETACHEDCOMMENTS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::SourceCodeInfo_Types_Location*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SOURCECODEINFO_TYPES_LOCATION_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
