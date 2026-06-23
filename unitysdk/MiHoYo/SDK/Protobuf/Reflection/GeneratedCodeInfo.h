#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedCodeInfo_Types_Annotation; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E73B060)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E73AD30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E73AE30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E73AD80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E73AEA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E73AA60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E73AA00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E73B0F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E73ABE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E73AF70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E73AFD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73B1B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E73AC90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E73AC40)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int GeneratedCodeInfo_TypeDefinitionIndex = 28552;

	class GeneratedCodeInfo : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>** StaticGet__repeated_annotation_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_TypeDefinitionIndex)->GetStaticField(0x22F10);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GeneratedCodeInfo_TypeDefinitionIndex)->GetStaticField(0x22F18);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo_Types_Annotation*>* annotation_; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
