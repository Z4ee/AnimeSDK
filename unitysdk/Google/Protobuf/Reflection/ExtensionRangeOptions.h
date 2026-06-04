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

#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E5B510)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x17E4CAC0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E5B2F0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E5B1A0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E4D160)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E5AEF0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E5AE90)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E5B5C0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E4D990)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E5B070)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E5B3E0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E5B440)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E5B7A0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E5B0D0)
#define GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x17E4D940)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ExtensionRangeOptions_TypeDefinitionIndex = 5467;

	class ExtensionRangeOptions : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ExtensionRangeOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ExtensionRangeOptions*>**)Il2CppClass::FromTypeDefinitionIndex(ExtensionRangeOptions_TypeDefinitionIndex)->GetStaticField(0x3D860);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(ExtensionRangeOptions_TypeDefinitionIndex)->GetStaticField(0x3D868);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::ExtensionRangeOptions*>* _extensions; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::ExtensionRangeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ExtensionRangeOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ExtensionRangeOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::ExtensionRangeOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ExtensionRangeOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::ExtensionRangeOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::ExtensionRangeOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::ExtensionRangeOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::ExtensionRangeOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::ExtensionRangeOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_EXTENSIONRANGEOPTIONS_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
