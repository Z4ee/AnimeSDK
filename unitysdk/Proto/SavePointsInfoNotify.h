#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_SAVEPOINTSINFONOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A125A10)
#define PROTO_SAVEPOINTSINFONOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x1A125790)
#define PROTO_SAVEPOINTSINFONOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A125890)
#define PROTO_SAVEPOINTSINFONOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A125820)
#define PROTO_SAVEPOINTSINFONOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1258F0)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A125700)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x1A1257E0)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_VALIDTIMES_OFFSET UNITYSDK_OFFSET(0x1A125800)
#define PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A125BB0)
#define PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A125B70)
#define PROTO_SAVEPOINTSINFONOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A125730)
#define PROTO_SAVEPOINTSINFONOTIFY_SET_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x1A1257F0)
#define PROTO_SAVEPOINTSINFONOTIFY_SET_VALIDTIMES_OFFSET UNITYSDK_OFFSET(0x1A125810)
#define PROTO_SAVEPOINTSINFONOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A125930)
#define PROTO_SAVEPOINTSINFONOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A125990)
#define PROTO_SAVEPOINTSINFONOTIFY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A125D30)
#define PROTO_SAVEPOINTSINFONOTIFY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A125750)
#define PROTO_SAVEPOINTSINFONOTIFY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A125740)

namespace Proto
{
	inline static constexpr unsigned int SavePointsInfoNotify_TypeDefinitionIndex = 32234;

	class SavePointsInfoNotify : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::SavePointsInfoNotify*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SavePointsInfoNotify*>**)Il2CppClass::FromTypeDefinitionIndex(SavePointsInfoNotify_TypeDefinitionIndex)->GetStaticField(0x45960);
		}
		// static const ::System::Int32 RefreshTimeFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 ValidTimesFieldNumber = 0xC; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int64 refreshTime_; // 0x18
		::System::UInt32 validTimes_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SavePointsInfoNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY__CTOR_1_OFFSET))(this, a1);
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

		::System::Int64 get_RefreshTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_REFRESHTIME_OFFSET))(this);
		}

		::System::Void set_RefreshTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_SET_REFRESHTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_ValidTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_VALIDTIMES_OFFSET))(this);
		}

		::System::Void set_ValidTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_SET_VALIDTIMES_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::SavePointsInfoNotify* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SavePointsInfoNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
