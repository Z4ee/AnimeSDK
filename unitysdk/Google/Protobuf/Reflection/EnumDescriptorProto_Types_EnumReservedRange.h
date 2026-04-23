#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x170F4B50)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CLONE_OFFSET UNITYSDK_OFFSET(0x170F4530)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x170F4710)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x170F46B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x170F48D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x170F4360)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_END_OFFSET UNITYSDK_OFFSET(0x170F4630)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASEND_OFFSET UNITYSDK_OFFSET(0x170F46A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASSTART_OFFSET UNITYSDK_OFFSET(0x170F4620)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x170F4300)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_START_OFFSET UNITYSDK_OFFSET(0x170F45B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x170F4EB0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x170F4DD0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x170F4480)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_END_OFFSET UNITYSDK_OFFSET(0x170F4690)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_START_OFFSET UNITYSDK_OFFSET(0x170F4610)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x170F49C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x170F4A20)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x170F4F30)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x170F44F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x170F44E0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex = 6276;

	class EnumDescriptorProto_Types_EnumReservedRange : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex)->GetStaticField(0x4CF0);
		}
		static ::System::Int32* StaticGet_EndDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex)->GetStaticField(0x2900);
		}
		static ::System::Int32* StaticGet_StartDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex)->GetStaticField(0x2904);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 end_; // 0x18
		::System::Int32 _hasBits0; // 0x1C
		::System::Int32 start_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* Clone()
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CLONE_OFFSET))(this);
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_START_OFFSET))(this, value);
		}

		::System::Boolean get_HasStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASSTART_OFFSET))(this);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_END_OFFSET))(this, value);
		}

		::System::Boolean get_HasEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASEND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
