#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class Tutorial; }
namespace System { class String; }

#define PROTO_UNLOCKTUTORIALSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182A16A0)
#define PROTO_UNLOCKTUTORIALSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x182A1330)
#define PROTO_UNLOCKTUTORIALSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182A14B0)
#define PROTO_UNLOCKTUTORIALSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x182A1400)
#define PROTO_UNLOCKTUTORIALSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182A1560)
#define PROTO_UNLOCKTUTORIALSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x182A13E0)
#define PROTO_UNLOCKTUTORIALSCRSP_GET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x182A13C0)
#define PROTO_UNLOCKTUTORIALSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182A1810)
#define PROTO_UNLOCKTUTORIALSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182A1770)
#define PROTO_UNLOCKTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182A1290)
#define PROTO_UNLOCKTUTORIALSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x182A13F0)
#define PROTO_UNLOCKTUTORIALSCRSP_SET_TUTORIAL_OFFSET UNITYSDK_OFFSET(0x182A13D0)
#define PROTO_UNLOCKTUTORIALSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182A15C0)
#define PROTO_UNLOCKTUTORIALSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x182A1620)
#define PROTO_UNLOCKTUTORIALSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182A12B0)
#define PROTO_UNLOCKTUTORIALSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x182A12A0)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialScRsp_TypeDefinitionIndex = 27563;

	class UnlockTutorialScRsp : public ::System::Object
	{
	public:
		// static const ::System::Int32 TutorialFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x5; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Proto::Tutorial* tutorial_; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::UnlockTutorialScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::UnlockTutorialScRsp* Clone()
		{
			return ((::Proto::UnlockTutorialScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_CLONE_OFFSET))(this);
		}

		::Proto::Tutorial* get_Tutorial()
		{
			return ((::Proto::Tutorial*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_GET_TUTORIAL_OFFSET))(this);
		}

		::System::Void set_Tutorial(::Proto::Tutorial* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::Tutorial*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_SET_TUTORIAL_OFFSET))(this, value);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::UnlockTutorialScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::UnlockTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::UnlockTutorialScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
