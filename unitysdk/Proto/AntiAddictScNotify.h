#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ANTIADDICTSCNOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x18272FA0)
#define PROTO_ANTIADDICTSCNOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x182729F0)
#define PROTO_ANTIADDICTSCNOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18272C50)
#define PROTO_ANTIADDICTSCNOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x18272B80)
#define PROTO_ANTIADDICTSCNOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18272D20)
#define PROTO_ANTIADDICTSCNOTIFY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18272B00)
#define PROTO_ANTIADDICTSCNOTIFY_GET_MSGTYPE_OFFSET UNITYSDK_OFFSET(0x18272AE0)
#define PROTO_ANTIADDICTSCNOTIFY_GET_MSG_OFFSET UNITYSDK_OFFSET(0x18272A60)
#define PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182732C0)
#define PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x18273220)
#define PROTO_ANTIADDICTSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18272960)
#define PROTO_ANTIADDICTSCNOTIFY_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x18272B10)
#define PROTO_ANTIADDICTSCNOTIFY_SET_MSGTYPE_OFFSET UNITYSDK_OFFSET(0x18272AF0)
#define PROTO_ANTIADDICTSCNOTIFY_SET_MSG_OFFSET UNITYSDK_OFFSET(0x18272A70)
#define PROTO_ANTIADDICTSCNOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18272E70)
#define PROTO_ANTIADDICTSCNOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x18272ED0)
#define PROTO_ANTIADDICTSCNOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18272990)
#define PROTO_ANTIADDICTSCNOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x18272970)

namespace Proto
{
	inline static constexpr unsigned int AntiAddictScNotify_TypeDefinitionIndex = 25971;

	class AntiAddictScNotify : public ::System::Object
	{
	public:
		// static const ::System::Int32 MsgFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 MsgTypeFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x9; // 0x0
		::System::String* level_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::String* msg_; // 0x20
		::System::UInt32 msgType_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::AntiAddictScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AntiAddictScNotify*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::AntiAddictScNotify* Clone()
		{
			return ((::Proto::AntiAddictScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_CLONE_OFFSET))(this);
		}

		::System::String* get_Msg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_MSG_OFFSET))(this);
		}

		::System::Void set_Msg(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_SET_MSG_OFFSET))(this, value);
		}

		::System::UInt32 get_MsgType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_MSGTYPE_OFFSET))(this);
		}

		::System::Void set_MsgType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_SET_MSGTYPE_OFFSET))(this, value);
		}

		::System::String* get_Level()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::AntiAddictScNotify* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::AntiAddictScNotify*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::AntiAddictScNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AntiAddictScNotify*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
