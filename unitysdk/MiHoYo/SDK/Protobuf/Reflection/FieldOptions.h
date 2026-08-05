#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldOptions_Types_CType.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/FieldOptions_Types_JSType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAD5AD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAD5590)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAD56D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAD5670)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAD57A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_CTYPE_OFFSET UNITYSDK_OFFSET(0x1FAD55E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1FAD5630)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAD5260)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_JSTYPE_OFFSET UNITYSDK_OFFSET(0x1FAD5600)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_LAZY_OFFSET UNITYSDK_OFFSET(0x1FAD5610)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PACKED_OFFSET UNITYSDK_OFFSET(0x1FAD55F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1FAD5200)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_WEAK_OFFSET UNITYSDK_OFFSET(0x1FAD5650)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAD5DF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_ONCONSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1FAD54A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAD53E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1FAD5640)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_LAZY_OFFSET UNITYSDK_OFFSET(0x1FAD5620)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_PACKED_OFFSET UNITYSDK_OFFSET(0x1FAD54B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_WEAK_OFFSET UNITYSDK_OFFSET(0x1FAD5660)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAD58C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAD5920)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAD5F50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAD54C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAD5440)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldOptions_TypeDefinitionIndex = 29131;

	class FieldOptions : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*>**)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0x24AA0);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(FieldOptions_TypeDefinitionIndex)->GetStaticField(0x24AA8);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions_Types_CType ctype_; // 0x18
		::System::Boolean packed_; // 0x1C
		::System::Boolean weak_; // 0x1D
		::System::Boolean deprecated_; // 0x1E
		::System::Boolean lazy_; // 0x1F
		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions_Types_JSType jstype_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::System::Void OnConstruction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_ONCONSTRUCTION_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_CLONE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions_Types_CType get_Ctype()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldOptions_Types_CType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_CTYPE_OFFSET))(this);
		}

		::System::Boolean get_Packed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_PACKED_OFFSET))(this);
		}

		::System::Void set_Packed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_PACKED_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FieldOptions_Types_JSType get_Jstype()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FieldOptions_Types_JSType(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_JSTYPE_OFFSET))(this);
		}

		::System::Boolean get_Lazy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_LAZY_OFFSET))(this);
		}

		::System::Void set_Lazy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_LAZY_OFFSET))(this, value);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean get_Weak()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GET_WEAK_OFFSET))(this);
		}

		::System::Void set_Weak(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_SET_WEAK_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::FieldOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FieldOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FIELDOPTIONS_MERGEFROM_OFFSET))(this, input);
		}
	};
}
