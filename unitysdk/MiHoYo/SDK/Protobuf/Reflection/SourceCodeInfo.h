#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class SourceCodeInfo_Types_Location; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E229690)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E229360)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E229460)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2293B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2294D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E229090)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E229030)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E229720)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E229210)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2295A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E229600)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2297E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2292C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E229270)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int SourceCodeInfo_TypeDefinitionIndex = 28547;

	class SourceCodeInfo : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*>** StaticGet__repeated_location_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_TypeDefinitionIndex)->GetStaticField(0x23130);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*>**)Il2CppClass::FromTypeDefinitionIndex(SourceCodeInfo_TypeDefinitionIndex)->GetStaticField(0x23138);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo_Types_Location*>* location_; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::SourceCodeInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SOURCECODEINFO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
