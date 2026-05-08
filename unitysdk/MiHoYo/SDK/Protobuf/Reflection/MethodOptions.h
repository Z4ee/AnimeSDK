#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C3DE750)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3DE3A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C3DE4D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3DE410)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C3DE550)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1C3DE3F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3DE0C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1C3DE060)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C3DE7D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3DE240)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1C3DE400)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3DE630)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C3DE690)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3DE8B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3DE2F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3DE2A0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodOptions_TypeDefinitionIndex = 26046;

	class MethodOptions : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(MethodOptions_TypeDefinitionIndex)->GetStaticField(0x1F370);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*>**)Il2CppClass::FromTypeDefinitionIndex(MethodOptions_TypeDefinitionIndex)->GetStaticField(0x1F378);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x10
		::System::Boolean deprecated_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS_MERGEFROM_OFFSET))(this, input);
		}
	};
}
