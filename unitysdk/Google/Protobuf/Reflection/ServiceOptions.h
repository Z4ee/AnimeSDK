#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class ExtensionSet_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15B1FFC0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x15B1E2B0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B1FC80)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B1FC20)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B1E880)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x15B1FBA0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B1F810)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x15B1FC10)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15B1F7B0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15B20070)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B1F100)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B1F990)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x15B1FC00)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B1FE30)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B1FE90)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B20180)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B1F9F0)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x15B1F0B0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceOptions_TypeDefinitionIndex = 6292;

	class ServiceOptions : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(ServiceOptions_TypeDefinitionIndex)->GetStaticField(0xD570);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceOptions*>**)Il2CppClass::FromTypeDefinitionIndex(ServiceOptions_TypeDefinitionIndex)->GetStaticField(0xD578);
		}
		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ServiceOptions_TypeDefinitionIndex)->GetStaticField(0x4B40);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::ServiceOptions*>* _extensions; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x20
		::System::Int32 _hasBits0; // 0x28
		::System::Boolean deprecated_; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::ServiceOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ServiceOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::ServiceOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::ServiceOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
