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

#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1710F990)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CLONE_OFFSET UNITYSDK_OFFSET(0x1710EE20)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1710F0F0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1710F090)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1710F400)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_BEGIN_OFFSET UNITYSDK_OFFSET(0x1710EF90)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1710EB00)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_END_OFFSET UNITYSDK_OFFSET(0x1710F010)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASBEGIN_OFFSET UNITYSDK_OFFSET(0x1710F000)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASEND_OFFSET UNITYSDK_OFFSET(0x1710F080)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASSOURCEFILE_OFFSET UNITYSDK_OFFSET(0x1710EF80)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1710EAA0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_SOURCEFILE_OFFSET UNITYSDK_OFFSET(0x1710EE70)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17110000)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1710FDF0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1710EC20)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_BEGIN_OFFSET UNITYSDK_OFFSET(0x1710EFF0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_END_OFFSET UNITYSDK_OFFSET(0x1710F070)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_SOURCEFILE_OFFSET UNITYSDK_OFFSET(0x1710EEE0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1710F6D0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1710F730)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x171101A0)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1710ED20)
#define GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1710EC80)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex = 6320;

	class GeneratedCodeInfo_Types_Annotation : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex)->GetStaticField(0x58B0);
		}
		static ::System::String** StaticGet_SourceFileDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex)->GetStaticField(0x58B8);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_path_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex)->GetStaticField(0x58C0);
		}
		static ::System::Int32* StaticGet_BeginDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex)->GetStaticField(0x2C00);
		}
		static ::System::Int32* StaticGet_EndDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex)->GetStaticField(0x2C04);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::System::Int32>* path_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::String* sourceFile_; // 0x20
		::System::Int32 end_; // 0x28
		::System::Int32 _hasBits0; // 0x2C
		::System::Int32 begin_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* Clone()
		{
			return ((::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CLONE_OFFSET))(this);
		}

		::System::String* get_SourceFile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_SOURCEFILE_OFFSET))(this);
		}

		::System::Void set_SourceFile(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_SOURCEFILE_OFFSET))(this, value);
		}

		::System::Boolean get_HasSourceFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASSOURCEFILE_OFFSET))(this);
		}

		::System::Int32 get_Begin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_BEGIN_OFFSET))(this);
		}

		::System::Void set_Begin(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_BEGIN_OFFSET))(this, value);
		}

		::System::Boolean get_HasBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASBEGIN_OFFSET))(this);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_END_OFFSET))(this, value);
		}

		::System::Boolean get_HasEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_HASEND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
