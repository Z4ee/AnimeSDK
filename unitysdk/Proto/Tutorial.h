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

#define PROTO_TUTORIAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A12FB20)
#define PROTO_TUTORIAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1A12F8A0)
#define PROTO_TUTORIAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A12F9A0)
#define PROTO_TUTORIAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A12F930)
#define PROTO_TUTORIAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A12FA00)
#define PROTO_TUTORIAL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A12F910)
#define PROTO_TUTORIAL_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A12F820)
#define PROTO_TUTORIAL_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1A12F8F0)
#define PROTO_TUTORIAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A12FCB0)
#define PROTO_TUTORIAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A12FC70)
#define PROTO_TUTORIAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A12F850)
#define PROTO_TUTORIAL_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A12F920)
#define PROTO_TUTORIAL_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1A12F900)
#define PROTO_TUTORIAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A12FA30)
#define PROTO_TUTORIAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A12FA90)
#define PROTO_TUTORIAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A12FE30)
#define PROTO_TUTORIAL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A12F870)
#define PROTO_TUTORIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A12F860)

namespace Proto
{
	inline static constexpr unsigned int Tutorial_TypeDefinitionIndex = 33239;

	class Tutorial : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::Tutorial*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::Tutorial*>**)Il2CppClass::FromTypeDefinitionIndex(Tutorial_TypeDefinitionIndex)->GetStaticField(0x44820);
		}
		// static const ::System::Int32 StatusFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 IdFieldNumber = 0x4; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Enum_3_0A3761FE34514D6C_80 status_; // 0x18
		::System::UInt32 id_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::Tutorial* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Status(::Enum_3_0A3761FE34514D6C_80 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_80))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_SET_STATUS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_SET_ID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::Tutorial* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::Tutorial* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIAL_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
