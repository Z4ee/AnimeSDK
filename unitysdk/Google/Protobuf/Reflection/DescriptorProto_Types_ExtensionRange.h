#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class ExtensionRangeOptions; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E4D430)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_CLONE_OFFSET UNITYSDK_OFFSET(0x17E4CB10)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E4CD60)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E4CD00)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E4CF50)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4C890)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_END_OFFSET UNITYSDK_OFFSET(0x17E4CC60)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_HASEND_OFFSET UNITYSDK_OFFSET(0x17E4CCD0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x17E4CAB0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_HASSTART_OFFSET UNITYSDK_OFFSET(0x17E4CC50)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x17E4CCE0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E4C830)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_START_OFFSET UNITYSDK_OFFSET(0x17E4CBE0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E4DA40)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4D6E0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E4C9B0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_SET_END_OFFSET UNITYSDK_OFFSET(0x17E4CCC0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x17E4CCF0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_SET_START_OFFSET UNITYSDK_OFFSET(0x17E4CC40)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E4D270)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E4D2D0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E4DCD0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E4CA20)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4CA10)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto_Types_ExtensionRange_TypeDefinitionIndex = 5462;

	class DescriptorProto_Types_ExtensionRange : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>**)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_Types_ExtensionRange_TypeDefinitionIndex)->GetStaticField(0x3D2F0);
		}
		static ::System::Int32* StaticGet_StartDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_Types_ExtensionRange_TypeDefinitionIndex)->GetStaticField(0xB700);
		}
		static ::System::Int32* StaticGet_EndDefaultValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DescriptorProto_Types_ExtensionRange_TypeDefinitionIndex)->GetStaticField(0xB704);
		}
		::Google::Protobuf::Reflection::ExtensionRangeOptions* options_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::Int32 _hasBits0; // 0x20
		::System::Int32 start_; // 0x24
		::System::Int32 end_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange* Clone()
		{
			return ((::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_CLONE_OFFSET))(this);
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_SET_START_OFFSET))(this, a1);
		}

		::System::Boolean get_HasStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_HASSTART_OFFSET))(this);
		}

		::System::Int32 get_End()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_SET_END_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_HASEND_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ExtensionRangeOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::ExtensionRangeOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::ExtensionRangeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ExtensionRangeOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::DescriptorProto_Types_ExtensionRange*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO_TYPES_EXTENSIONRANGE_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
