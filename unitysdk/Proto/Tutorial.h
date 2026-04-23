#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_80.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_TUTORIAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19361200)
#define PROTO_TUTORIAL_CLONE_OFFSET UNITYSDK_OFFSET(0x19360F80)
#define PROTO_TUTORIAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19361080)
#define PROTO_TUTORIAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x19361010)
#define PROTO_TUTORIAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193610E0)
#define PROTO_TUTORIAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x19360FF0)
#define PROTO_TUTORIAL_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19360F00)
#define PROTO_TUTORIAL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x19360FD0)
#define PROTO_TUTORIAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19361390)
#define PROTO_TUTORIAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19361350)
#define PROTO_TUTORIAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19360F30)
#define PROTO_TUTORIAL_SET_ID_OFFSET UNITYSDK_OFFSET(0x19361000)
#define PROTO_TUTORIAL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x19360FE0)
#define PROTO_TUTORIAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19361110)
#define PROTO_TUTORIAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x19361170)
#define PROTO_TUTORIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x19361410)
#define PROTO_TUTORIAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19360F50)
#define PROTO_TUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x19360F40)

namespace Proto
{
	inline static constexpr unsigned int Tutorial_TypeDefinitionIndex = 33130;

	class Tutorial : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::Tutorial*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::Tutorial*>**)Il2CppClass::FromTypeDefinitionIndex(Tutorial_TypeDefinitionIndex)->GetStaticField(0x65220);
		}
		// static const ::System::Int32 StatusFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 IdFieldNumber = 0x3; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 id_; // 0x18
		::Enum_3_0A3761FE34514D6C_80 status_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::Tutorial* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIAL__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::Tutorial*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::Tutorial*>*(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::Tutorial* Clone()
		{
			return ((::Proto::Tutorial*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_CLONE_OFFSET))(this);
		}

		::Enum_3_0A3761FE34514D6C_80 get_Status()
		{
			return ((::Enum_3_0A3761FE34514D6C_80(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_0A3761FE34514D6C_80 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_80))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_SET_STATUS_OFFSET))(this, value);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_SET_ID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::Tutorial* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::Tutorial* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
