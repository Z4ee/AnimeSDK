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

#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DBADD20)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1DBAC2E0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DBADA20)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DBAD7F0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DBAC880)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBAD410)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DBAD3B0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DBADDD0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DBACE30)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBAD5F0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DBADBF0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DBADC50)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBADFB0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBAD650)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBACDE0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofOptions_TypeDefinitionIndex = 5492;

	class OneofOptions : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(OneofOptions_TypeDefinitionIndex)->GetStaticField(0x18E00);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::OneofOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::OneofOptions*>**)Il2CppClass::FromTypeDefinitionIndex(OneofOptions_TypeDefinitionIndex)->GetStaticField(0x18E08);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::OneofOptions*>* _extensions; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::OneofOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::OneofOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::OneofOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::OneofOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::OneofOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::OneofOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::OneofOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::OneofOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::OneofOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFOPTIONS_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
