#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E60E920)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E60E6E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E60E7F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E60E780)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E60E820)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E60E530)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_END_OFFSET UNITYSDK_OFFSET(0x1E60E760)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E60E4D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_START_OFFSET UNITYSDK_OFFSET(0x1E60E740)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E60EAE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E60E650)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_SET_END_OFFSET UNITYSDK_OFFSET(0x1E60E770)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_SET_START_OFFSET UNITYSDK_OFFSET(0x1E60E750)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E60E830)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E60E890)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60EB50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E60E6C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E60E6B0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto_Types_ReservedRange_TypeDefinitionIndex = 28503;

	class DescriptorProto_Types_ReservedRange : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_Types_ReservedRange_TypeDefinitionIndex)->GetStaticField(0x231C0);
		}
		::System::Int32 start_; // 0x10
		::System::Int32 end_; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_CLONE_OFFSET))(this);
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_SET_START_OFFSET))(this, value);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_SET_END_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_MERGEFROM_OFFSET))(this, input);
		}
	};
}
