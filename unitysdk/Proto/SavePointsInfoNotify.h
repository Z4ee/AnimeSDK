#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_SAVEPOINTSINFONOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19357270)
#define PROTO_SAVEPOINTSINFONOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x19356FF0)
#define PROTO_SAVEPOINTSINFONOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x193570F0)
#define PROTO_SAVEPOINTSINFONOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x19357080)
#define PROTO_SAVEPOINTSINFONOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19357150)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19356F60)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x19357060)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_VALIDTIMES_OFFSET UNITYSDK_OFFSET(0x19357040)
#define PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19357420)
#define PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193573E0)
#define PROTO_SAVEPOINTSINFONOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19356F90)
#define PROTO_SAVEPOINTSINFONOTIFY_SET_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x19357070)
#define PROTO_SAVEPOINTSINFONOTIFY_SET_VALIDTIMES_OFFSET UNITYSDK_OFFSET(0x19357050)
#define PROTO_SAVEPOINTSINFONOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19357190)
#define PROTO_SAVEPOINTSINFONOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x193571F0)
#define PROTO_SAVEPOINTSINFONOTIFY__CCTOR_OFFSET UNITYSDK_OFFSET(0x193574A0)
#define PROTO_SAVEPOINTSINFONOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19356FB0)
#define PROTO_SAVEPOINTSINFONOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x19356FA0)

namespace Proto
{
	inline static constexpr unsigned int SavePointsInfoNotify_TypeDefinitionIndex = 32125;

	class SavePointsInfoNotify : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::SavePointsInfoNotify*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SavePointsInfoNotify*>**)Il2CppClass::FromTypeDefinitionIndex(SavePointsInfoNotify_TypeDefinitionIndex)->GetStaticField(0x65990);
		}
		// static const ::System::Int32 ValidTimesFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 RefreshTimeFieldNumber = 0x4; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 validTimes_; // 0x18
		::System::Int64 refreshTime_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SavePointsInfoNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::SavePointsInfoNotify*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::SavePointsInfoNotify*>*(*)())((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SavePointsInfoNotify* Clone()
		{
			return ((::Proto::SavePointsInfoNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ValidTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_VALIDTIMES_OFFSET))(this);
		}

		::System::Void set_ValidTimes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_SET_VALIDTIMES_OFFSET))(this, value);
		}

		::System::Int64 get_RefreshTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_REFRESHTIME_OFFSET))(this);
		}

		::System::Void set_RefreshTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_SET_REFRESHTIME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::SavePointsInfoNotify* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SavePointsInfoNotify* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
