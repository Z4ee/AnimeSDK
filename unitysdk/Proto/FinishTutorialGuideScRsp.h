#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace Proto { class TutorialGuide; }
namespace System { class String; }

#define PROTO_FINISHTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19337F30)
#define PROTO_FINISHTUTORIALGUIDESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x19337960)
#define PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19337AE0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x193379F0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19337BD0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x193377C0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x193379B0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x193379D0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x19337990)
#define PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x193382C0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19338040)
#define PROTO_FINISHTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x193377F0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x193379C0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x193379E0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x193379A0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19337E30)
#define PROTO_FINISHTUTORIALGUIDESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x19337E90)
#define PROTO_FINISHTUTORIALGUIDESCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x193383C0)
#define PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19337810)
#define PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x19337800)

namespace Proto
{
	inline static constexpr unsigned int FinishTutorialGuideScRsp_TypeDefinitionIndex = 33156;

	class FinishTutorialGuideScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialGuideScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialGuideScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(FinishTutorialGuideScRsp_TypeDefinitionIndex)->GetStaticField(0x15EB0);
		}
		// static const ::System::Int32 TutorialGuideFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 RewardFieldNumber = 0x1; // 0x0
		::Proto::ItemList* reward_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Proto::TutorialGuide* tutorialGuide_; // 0x20
		::System::UInt32 retcode_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::FinishTutorialGuideScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FinishTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialGuideScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialGuideScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GET_PARSER_OFFSET))();
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

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::Proto::ItemList* get_Reward()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GET_REWARD_OFFSET))(this);
		}

		::System::Void set_Reward(::Proto::ItemList* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_SET_REWARD_OFFSET))(this, value);
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
