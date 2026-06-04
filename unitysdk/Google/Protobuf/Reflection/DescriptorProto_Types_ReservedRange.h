#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E4E700)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_CLONE_OFFSET UNITYSDK_OFFSET(0x17E4E0E0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E4E2C0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E4E260)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E4E480)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4DF10)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_END_OFFSET UNITYSDK_OFFSET(0x17E4E1E0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_HASEND_OFFSET UNITYSDK_OFFSET(0x17E4E250)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_HASSTART_OFFSET UNITYSDK_OFFSET(0x17E4E1D0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E4DEB0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_START_OFFSET UNITYSDK_OFFSET(0x17E4E160)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E4EA60)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4E980)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4E030)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_SET_END_OFFSET UNITYSDK_OFFSET(0x17E4E240)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_SET_START_OFFSET UNITYSDK_OFFSET(0x17E4E1C0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E4E570)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E4E5D0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E4EBE0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E4E0A0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4E090)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto_Types_ReservedRange_TypeDefinitionIndex = 5464;

	class DescriptorProto_Types_ReservedRange : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_Types_ReservedRange_TypeDefinitionIndex)->GetStaticField(0x3D390);
		}
		static ::System::Int32* StaticGet_StartDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_Types_ReservedRange_TypeDefinitionIndex)->GetStaticField(0xB720);
		}
		static ::System::Int32* StaticGet_EndDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_Types_ReservedRange_TypeDefinitionIndex)->GetStaticField(0xB724);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 _hasBits0; // 0x18
		::System::Int32 end_; // 0x1C
		::System::Int32 start_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange* Clone()
		{
			return ((::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_CLONE_OFFSET))(this);
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_SET_START_OFFSET))(this, a1);
		}

		::System::Boolean get_HasStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_HASSTART_OFFSET))(this);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_SET_END_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GET_HASEND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto_Types_ReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_RESERVEDRANGE_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
