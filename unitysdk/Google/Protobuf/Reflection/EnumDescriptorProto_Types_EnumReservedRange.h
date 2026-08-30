#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1AA97720)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1AA97040)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1AA97220)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AA971C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AA97440)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA96E20)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_END_OFFSET UNITYSDK_OFFSET(0x1AA97140)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASEND_OFFSET UNITYSDK_OFFSET(0x1AA971B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASSTART_OFFSET UNITYSDK_OFFSET(0x1AA97130)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1AA96DC0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_START_OFFSET UNITYSDK_OFFSET(0x1AA970C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1AA97A80)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1AA979A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1AA96F90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_END_OFFSET UNITYSDK_OFFSET(0x1AA971A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_START_OFFSET UNITYSDK_OFFSET(0x1AA97120)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AA97530)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1AA97590)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA97C00)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA97000)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA96FF0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex = 5472;

	class EnumDescriptorProto_Types_EnumReservedRange : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*>**)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex)->GetStaticField(0x1F3A0);
		}
		static ::System::Int32* StaticGet_EndDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex)->GetStaticField(0xA610);
		}
		static ::System::Int32* StaticGet_StartDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnumDescriptorProto_Types_EnumReservedRange_TypeDefinitionIndex)->GetStaticField(0xA614);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 end_; // 0x18
		::System::Int32 _hasBits0; // 0x1C
		::System::Int32 start_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Start(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_START_OFFSET))(this, a1);
		}

		::System::Boolean get_HasStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASSTART_OFFSET))(this);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_SET_END_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GET_HASEND_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumDescriptorProto_Types_EnumReservedRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO_TYPES_ENUMRESERVEDRANGE_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
