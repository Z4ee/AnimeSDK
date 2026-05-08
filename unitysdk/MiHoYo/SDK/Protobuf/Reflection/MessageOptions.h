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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C3B2290)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1C3B1E10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C3B1F40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C3B1EE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C3B2000)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1C3B1EA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3B1B30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MAPENTRY_OFFSET UNITYSDK_OFFSET(0x1C3B1EC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MESSAGESETWIREFORMAT_OFFSET UNITYSDK_OFFSET(0x1C3B1E60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET UNITYSDK_OFFSET(0x1C3B1E80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1C3B1AD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C3B2360)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C3B1CB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1C3B1EB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MAPENTRY_OFFSET UNITYSDK_OFFSET(0x1C3B1ED0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MESSAGESETWIREFORMAT_OFFSET UNITYSDK_OFFSET(0x1C3B1E70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET UNITYSDK_OFFSET(0x1C3B1E90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C3B2100)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C3B2160)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C3B2480)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C3B1D60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B1D10)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MessageOptions_TypeDefinitionIndex = 26031;

	class MessageOptions : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*>**)Il2CppClass::FromTypeDefinitionIndex(MessageOptions_TypeDefinitionIndex)->GetStaticField(0x1F720);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(MessageOptions_TypeDefinitionIndex)->GetStaticField(0x1F728);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x10
		::System::Boolean mapEntry_; // 0x18
		::System::Boolean deprecated_; // 0x19
		::System::Boolean noStandardDescriptorAccessor_; // 0x1A
		::System::Boolean messageSetWireFormat_; // 0x1B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_MessageSetWireFormat()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MESSAGESETWIREFORMAT_OFFSET))(this);
		}

		::System::Void set_MessageSetWireFormat(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MESSAGESETWIREFORMAT_OFFSET))(this, value);
		}

		::System::Boolean get_NoStandardDescriptorAccessor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET))(this);
		}

		::System::Void set_NoStandardDescriptorAccessor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_NOSTANDARDDESCRIPTORACCESSOR_OFFSET))(this, value);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean get_MapEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GET_MAPENTRY_OFFSET))(this);
		}

		::System::Void set_MapEntry(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_SET_MAPENTRY_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::MessageOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MessageOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_MESSAGEOPTIONS_MERGEFROM_OFFSET))(this, input);
		}
	};
}
