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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173BC100)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x173BADA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173BBF60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x173BBEA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173BB390)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x173BBE80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173BBBF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x173A54E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173BC180)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173BBD70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x173BBE90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173BBFE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x173BC040)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BC260)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173BBDD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x173BB950)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceOptions_TypeDefinitionIndex = 33712;

	class ServiceOptions : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*>**)Il2CppClass::FromTypeDefinitionIndex(ServiceOptions_TypeDefinitionIndex)->GetStaticField(0x69530);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(ServiceOptions_TypeDefinitionIndex)->GetStaticField(0x69538);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x10
		::System::Boolean deprecated_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS_MERGEFROM_OFFSET))(this, input);
		}
	};
}
