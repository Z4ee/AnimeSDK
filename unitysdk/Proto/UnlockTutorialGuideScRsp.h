#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class TutorialGuide; }
namespace System { class String; }

#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182A1080)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x182A0D10)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x182A0E90)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x182A0DE0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182A0F40)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x182A0DC0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x182A0DA0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x182A1200)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182A1150)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x182A0C70)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x182A0DD0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x182A0DB0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182A0FA0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x182A1000)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x182A0C90)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x182A0C80)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialGuideScRsp_TypeDefinitionIndex = 27565;

	class UnlockTutorialGuideScRsp : public ::System::Object
	{
	public:
		// static const ::System::Int32 TutorialGuideFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x8; // 0x0
		::Proto::TutorialGuide* tutorialGuide_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::UnlockTutorialGuideScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::UnlockTutorialGuideScRsp* Clone()
		{
			return ((::Proto::UnlockTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_CLONE_OFFSET))(this);
		}

		::Proto::TutorialGuide* get_TutorialGuide()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET))(this);
		}

		::System::Void set_TutorialGuide(::Proto::TutorialGuide* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET))(this, value);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::UnlockTutorialGuideScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::UnlockTutorialGuideScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
