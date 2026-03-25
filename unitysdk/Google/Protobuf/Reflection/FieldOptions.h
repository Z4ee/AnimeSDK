#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldOptions_Types_CType.h"
#include "unitysdk/Google/Protobuf/Reflection/FieldOptions_Types_JSType.h"
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

#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15B031F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x15AFEE10)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B02990)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B02930)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15AFFE50)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_CTYPE_OFFSET UNITYSDK_OFFSET(0x15B02630)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x15B02830)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B02360)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASCTYPE_OFFSET UNITYSDK_OFFSET(0x15B026A0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x15B028A0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASJSTYPE_OFFSET UNITYSDK_OFFSET(0x15B027A0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASLAZY_OFFSET UNITYSDK_OFFSET(0x15B02820)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASPACKED_OFFSET UNITYSDK_OFFSET(0x15B02720)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASWEAK_OFFSET UNITYSDK_OFFSET(0x15B02920)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_JSTYPE_OFFSET UNITYSDK_OFFSET(0x15B02730)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_LAZY_OFFSET UNITYSDK_OFFSET(0x15B027B0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PACKED_OFFSET UNITYSDK_OFFSET(0x15B026B0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15B02300)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_WEAK_OFFSET UNITYSDK_OFFSET(0x15B028B0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15B034C0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B019F0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B024E0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_CTYPE_OFFSET UNITYSDK_OFFSET(0x15B02690)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x15B02890)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_JSTYPE_OFFSET UNITYSDK_OFFSET(0x15B02790)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_LAZY_OFFSET UNITYSDK_OFFSET(0x15B02810)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_PACKED_OFFSET UNITYSDK_OFFSET(0x15B02710)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_WEAK_OFFSET UNITYSDK_OFFSET(0x15B02910)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B02E00)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B02E60)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B036B0)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B02540)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x15B019A0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldOptions_TypeDefinitionIndex = 6281;

	class FieldOptions : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldOptions*>**)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0xCEA0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0xCEA8);
		}
		static ::Google::Protobuf::Reflection::FieldOptions_Types_CType* StaticGet_CtypeDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldOptions_Types_CType*)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0x4A50);
		}
		static ::Google::Protobuf::Reflection::FieldOptions_Types_JSType* StaticGet_JstypeDefaultValue()
		{
			return (::Google::Protobuf::Reflection::FieldOptions_Types_JSType*)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0x4A54);
		}
		static ::System::Boolean* StaticGet_WeakDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0x4A58);
		}
		static ::System::Boolean* StaticGet_LazyDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0x4A59);
		}
		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0x4A5A);
		}
		static ::System::Boolean* StaticGet_PackedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0x4A5B);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x18
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::FieldOptions*>* _extensions; // 0x20
		::Google::Protobuf::Reflection::FieldOptions_Types_CType ctype_; // 0x28
		::Google::Protobuf::Reflection::FieldOptions_Types_JSType jstype_; // 0x2C
		::System::Boolean deprecated_; // 0x30
		::System::Boolean lazy_; // 0x31
		::System::Boolean weak_; // 0x32
		::System::Boolean packed_; // 0x33
		::System::Int32 _hasBits0; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::FieldOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::FieldOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldOptions_Types_CType get_Ctype()
		{
			return ((::Google::Protobuf::Reflection::FieldOptions_Types_CType(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_CTYPE_OFFSET))(this);
		}

		::System::Void set_Ctype(::Google::Protobuf::Reflection::FieldOptions_Types_CType value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions_Types_CType))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_CTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_HasCtype()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASCTYPE_OFFSET))(this);
		}

		::System::Boolean get_Packed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PACKED_OFFSET))(this);
		}

		::System::Void set_Packed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_PACKED_OFFSET))(this, value);
		}

		::System::Boolean get_HasPacked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASPACKED_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldOptions_Types_JSType get_Jstype()
		{
			return ((::Google::Protobuf::Reflection::FieldOptions_Types_JSType(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_JSTYPE_OFFSET))(this);
		}

		::System::Void set_Jstype(::Google::Protobuf::Reflection::FieldOptions_Types_JSType value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions_Types_JSType))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_JSTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_HasJstype()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASJSTYPE_OFFSET))(this);
		}

		::System::Boolean get_Lazy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_LAZY_OFFSET))(this);
		}

		::System::Void set_Lazy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_LAZY_OFFSET))(this, value);
		}

		::System::Boolean get_HasLazy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASLAZY_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean get_Weak()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_WEAK_OFFSET))(this);
		}

		::System::Void set_Weak(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_WEAK_OFFSET))(this, value);
		}

		::System::Boolean get_HasWeak()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_HASWEAK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::FieldOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::FieldOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
