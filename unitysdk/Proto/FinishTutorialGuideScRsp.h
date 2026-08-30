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

#define PROTO_FINISHTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D9390E0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9388F0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D938C40)
#define PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D938A10)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D938E70)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1D9387F0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1D9389D0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x1D9389F0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x1D9389B0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D9392F0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D9391F0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D938820)
#define PROTO_FINISHTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1D9389E0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_SET_REWARD_OFFSET UNITYSDK_OFFSET(0x1D938A00)
#define PROTO_FINISHTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x1D9389C0)
#define PROTO_FINISHTUTORIALGUIDESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D938F40)
#define PROTO_FINISHTUTORIALGUIDESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D938FA0)
#define PROTO_FINISHTUTORIALGUIDESCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D9394E0)
#define PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D938840)
#define PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D938830)

namespace Proto
{
	inline static constexpr unsigned int FinishTutorialGuideScRsp_TypeDefinitionIndex = 34398;

	class FinishTutorialGuideScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialGuideScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::FinishTutorialGuideScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(FinishTutorialGuideScRsp_TypeDefinitionIndex)->GetStaticField(0x12110);
		}
		// static const ::System::Int32 TutorialGuideFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 RewardFieldNumber = 0xC; // 0x0
		::Proto::TutorialGuide* tutorialGuide_; // 0x10
		::Proto::ItemList* reward_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::System::UInt32 retcode_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::FinishTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FinishTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_TutorialGuide(::Proto::TutorialGuide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Proto::ItemList* get_Reward()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GET_REWARD_OFFSET))(this);
		}

		::System::Void set_Reward(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_SET_REWARD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::FinishTutorialGuideScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::FinishTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::FinishTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::FinishTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_FINISHTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
