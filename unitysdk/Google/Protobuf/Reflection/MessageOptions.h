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

#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15B15410)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x15B141E0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B14490)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B14430)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B14850)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x15B14330)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B13D40)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x15B143A0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_HASMAPENTRY_OFFSET UNITYSDK_OFFSET(0x15B14420)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_HASMESSAGESETWIREFORMAT_OFFSET UNITYSDK_OFFSET(0x15B142A0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_HASNOSTANDARDDESCRIPTORACCESSOR_OFFSET UNITYSDK_OFFSET(0x15B14320)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MAPENTRY_OFFSET UNITYSDK_OFFSET(0x15B143B0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MESSAGESETWIREFORMAT_OFFSET UNITYSDK_OFFSET(0x15B14230)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET UNITYSDK_OFFSET(0x15B142B0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15B13CE0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15B15BF0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B15800)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B13EC0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x15B14390)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MAPENTRY_OFFSET UNITYSDK_OFFSET(0x15B14410)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MESSAGESETWIREFORMAT_OFFSET UNITYSDK_OFFSET(0x15B14290)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET UNITYSDK_OFFSET(0x15B14310)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B14E30)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B14E90)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B15EC0)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B13F70)
#define GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x15B13F20)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageOptions_TypeDefinitionIndex = 6279;

	class MessageOptions : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MessageOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MessageOptions*>**)Il2CppClass::FromTypeDefinitionIndex(MessageOptions_TypeDefinitionIndex)->GetStaticField(0xD550);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(MessageOptions_TypeDefinitionIndex)->GetStaticField(0xD558);
		}
		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageOptions_TypeDefinitionIndex)->GetStaticField(0x4B30);
		}
		static ::System::Boolean* StaticGet_NoStandardDescriptorAccessorDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageOptions_TypeDefinitionIndex)->GetStaticField(0x4B31);
		}
		static ::System::Boolean* StaticGet_MessageSetWireFormatDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageOptions_TypeDefinitionIndex)->GetStaticField(0x4B32);
		}
		static ::System::Boolean* StaticGet_MapEntryDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MessageOptions_TypeDefinitionIndex)->GetStaticField(0x4B33);
		}
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::MessageOptions*>* _extensions; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::System::Int32 _hasBits0; // 0x28
		::System::Boolean mapEntry_; // 0x2C
		::System::Boolean noStandardDescriptorAccessor_; // 0x2D
		::System::Boolean messageSetWireFormat_; // 0x2E
		::System::Boolean deprecated_; // 0x2F

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::MessageOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MessageOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MessageOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MessageOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::MessageOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_MessageSetWireFormat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MESSAGESETWIREFORMAT_OFFSET))(this);
		}

		::System::Void set_MessageSetWireFormat(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MESSAGESETWIREFORMAT_OFFSET))(this, value);
		}

		::System::Boolean get_HasMessageSetWireFormat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_HASMESSAGESETWIREFORMAT_OFFSET))(this);
		}

		::System::Boolean get_NoStandardDescriptorAccessor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET))(this);
		}

		::System::Void set_NoStandardDescriptorAccessor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET))(this, value);
		}

		::System::Boolean get_HasNoStandardDescriptorAccessor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_HASNOSTANDARDDESCRIPTORACCESSOR_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean get_MapEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MAPENTRY_OFFSET))(this);
		}

		::System::Void set_MapEntry(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MAPENTRY_OFFSET))(this, value);
		}

		::System::Boolean get_HasMapEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_HASMAPENTRY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::MessageOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::MessageOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_MESSAGEOPTIONS_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
