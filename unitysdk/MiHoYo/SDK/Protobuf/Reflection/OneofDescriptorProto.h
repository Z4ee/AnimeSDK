#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class OneofOptions; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181C3750)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x181C3190)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181C33A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x181C32E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181C3430)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181C2EB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x181C2C10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x181C3120)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x181A99A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181C3800)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181C3030)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x181C3240)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x181C3180)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181C3670)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x181C36D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C3AC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181C30A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x181C3090)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofDescriptorProto_TypeDefinitionIndex = 33967;

	class OneofDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(OneofDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x4DFD0);
		}
		::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* options_; // 0x10
		::System::String* name_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::OneofOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::OneofDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}
	};
}
