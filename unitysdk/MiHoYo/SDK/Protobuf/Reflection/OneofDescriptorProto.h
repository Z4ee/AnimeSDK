#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofOptions; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15DBC1E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x15DBBC10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15DBBE20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x15DBBD60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15DBBEB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DBB930)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15DBB6B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x15DBBBA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15DA2140)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15DBC290)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DBBAB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15DBBCC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x15DBBC00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15DBC100)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x15DBC160)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DBC460)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15DBBB20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x15DBBB10)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofDescriptorProto_TypeDefinitionIndex = 28061;

	class OneofDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(OneofDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x22370);
		}
		::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* options_; // 0x10
		::System::String* name_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
