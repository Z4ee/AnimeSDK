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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAD6B00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAD6510)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAD6710)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAD6650)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAD67A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_BEGIN_OFFSET UNITYSDK_OFFSET(0x1FAD6610)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAD61F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_END_OFFSET UNITYSDK_OFFSET(0x1FAD6630)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1FAD6190)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_SOURCEFILE_OFFSET UNITYSDK_OFFSET(0x1FAD6560)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAD6D70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAD6310)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_BEGIN_OFFSET UNITYSDK_OFFSET(0x1FAD6620)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_END_OFFSET UNITYSDK_OFFSET(0x1FAD6640)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_SOURCEFILE_OFFSET UNITYSDK_OFFSET(0x1FAD6570)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAD6940)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAD69A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD6F10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAD6420)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD6370)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex = 29158;

	class GeneratedCodeInfo_Types_Annotation : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>** StaticGet__repeated_path_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex)->GetStaticField(0x24AB0);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_Types_Annotation_TypeDefinitionIndex)->GetStaticField(0x24AB8);
		}
		::System::String* sourceFile_; // 0x10
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::System::Int32>* path_; // 0x18
		::System::Int32 end_; // 0x20
		::System::Int32 begin_; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CLONE_OFFSET))(this);
		}

		::System::String* get_SourceFile()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_SOURCEFILE_OFFSET))(this);
		}

		::System::Void set_SourceFile(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_SOURCEFILE_OFFSET))(this, value);
		}

		::System::Int32 get_Begin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_BEGIN_OFFSET))(this);
		}

		::System::Void set_Begin(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_BEGIN_OFFSET))(this, value);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_SET_END_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TYPES_ANNOTATION_MERGEFROM_OFFSET))(this, input);
		}
	};
}
