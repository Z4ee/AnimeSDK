#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/MethodOptions_Types_IdempotencyLevel.h"
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

#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B391FC0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1B38F4B0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B391A40)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B3919E0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B390110)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B3918E0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B3914F0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B391950)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_HASIDEMPOTENCYLEVEL_OFFSET UNITYSDK_OFFSET(0x1B3919D0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_IDEMPOTENCYLEVEL_OFFSET UNITYSDK_OFFSET(0x1B391960)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1B391490)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B392190)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B390E30)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B3916D0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B391940)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_SET_IDEMPOTENCYLEVEL_OFFSET UNITYSDK_OFFSET(0x1B3919C0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B391D70)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B391DD0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3923C0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B391730)
#define GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B390DE0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodOptions_TypeDefinitionIndex = 5500;

	class MethodOptions : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(MethodOptions_TypeDefinitionIndex)->GetStaticField(0x166A0);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodOptions*>**)Il2CppClass::FromTypeDefinitionIndex(MethodOptions_TypeDefinitionIndex)->GetStaticField(0x166A8);
		}
		static ::Google::Protobuf::Reflection::MethodOptions_Types_IdempotencyLevel* StaticGet_IdempotencyLevelDefaultValue()
		{
			return (::Google::Protobuf::Reflection::MethodOptions_Types_IdempotencyLevel*)Il2CppClass::FromTypeDefinitionIndex(MethodOptions_TypeDefinitionIndex)->GetStaticField(0x88A0);
		}
		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MethodOptions_TypeDefinitionIndex)->GetStaticField(0x88A4);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::MethodOptions*>* _extensions; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x20
		::System::Int32 _hasBits0; // 0x28
		::System::Boolean deprecated_; // 0x2C
		::Google::Protobuf::Reflection::MethodOptions_Types_IdempotencyLevel idempotencyLevel_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::MethodOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MethodOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::MethodOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_SET_DEPRECATED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MethodOptions_Types_IdempotencyLevel get_IdempotencyLevel()
		{
			return ((::Google::Protobuf::Reflection::MethodOptions_Types_IdempotencyLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_IDEMPOTENCYLEVEL_OFFSET))(this);
		}

		::System::Void set_IdempotencyLevel(::Google::Protobuf::Reflection::MethodOptions_Types_IdempotencyLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodOptions_Types_IdempotencyLevel))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_SET_IDEMPOTENCYLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_HasIdempotencyLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GET_HASIDEMPOTENCYLEVEL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::MethodOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::MethodOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::MethodOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODOPTIONS_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
