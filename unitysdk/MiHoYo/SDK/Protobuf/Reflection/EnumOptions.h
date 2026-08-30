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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B0E96F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1B0E8120)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B0E9450)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B0E9360)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B0E86D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_ALLOWALIAS_OFFSET UNITYSDK_OFFSET(0x1B0E9320)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B0E9340)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B0E9030)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1B0E7370)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B0E9780)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B0E9210)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_ALLOWALIAS_OFFSET UNITYSDK_OFFSET(0x1B0E9330)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B0E9350)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B0E94E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B0E9540)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0E9970)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B0E9270)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0E8D70)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumOptions_TypeDefinitionIndex = 35128;

	class EnumOptions : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0x49420);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*>**)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0x49428);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x10
		::System::Boolean allowAlias_; // 0x18
		::System::Boolean deprecated_; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::EnumOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumOptions* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_AllowAlias()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_ALLOWALIAS_OFFSET))(this);
		}

		::System::Void set_AllowAlias(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_ALLOWALIAS_OFFSET))(this, a1);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_DEPRECATED_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::EnumOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_OFFSET))(this, a1);
		}
	};
}
