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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7CE980)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7CE650)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7CE750)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7CE6A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7CE7C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7CE380)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E7CE320)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7CEA10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7CE500)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7CE890)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7CE8F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7CEAD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7CE5B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CE560)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofOptions_TypeDefinitionIndex = 28532;

	class OneofOptions : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*>**)Il2CppClass::FromTypeDefinitionIndex(OneofOptions_TypeDefinitionIndex)->GetStaticField(0x23230);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(OneofOptions_TypeDefinitionIndex)->GetStaticField(0x23238);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFOPTIONS_MERGEFROM_OFFSET))(this, input);
		}
	};
}
