#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace Proto { class TutorialGuide; }
namespace System { class String; }

#define PROTO_FINISHTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1827CAF0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1827C670)
#define PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1827C890)
#define PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1827C790)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1827C980)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1827C770)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x1827C750)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x1827C730)
#define PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1827CD00)
#define PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1827CC00)
#define PROTO_FINISHTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1827C5A0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1827C780)
#define PROTO_FINISHTUTORIALGUIDESCRSP_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x1827C760)
#define PROTO_FINISHTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x1827C740)
#define PROTO_FINISHTUTORIALGUIDESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1827C9F0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1827CA50)
#define PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1827C5C0)
#define PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1827C5B0)

namespace Proto
{
	inline static constexpr unsigned int FinishTutorialGuideScRsp_TypeDefinitionIndex = 27569;

	class FinishTutorialGuideScRsp : public ::System::Object
	{
	public:
		// static const ::System::Int32 TutorialGuideFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 RewardFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x5; // 0x0
		::Proto::ItemList* reward_; // 0x10
		::Proto::TutorialGuide* tutorialGuide_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::System::UInt32 retcode_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::FinishTutorialGuideScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FinishTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::FinishTutorialGuideScRsp* Clone()
		{
			return ((::Proto::FinishTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_CLONE_OFFSET))(this);
		}

		::Proto::TutorialGuide* get_TutorialGuide()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET))(this);
		}

		::System::Void set_TutorialGuide(::Proto::TutorialGuide* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET))(this, value);
		}

		::Proto::ItemList* get_Reward()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GET_REWARD_OFFSET))(this);
		}

		::System::Void set_Reward(::Proto::ItemList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_SET_REWARD_OFFSET))(this, value);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::FinishTutorialGuideScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::FinishTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::FinishTutorialGuideScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FinishTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
