#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class TutorialGuide; }
namespace System { class String; }

#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19362110)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x19361DA0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19361F20)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x19361E70)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19361FD0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19361CD0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x19361E30)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x19361E50)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19362290)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193621E0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19361D00)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x19361E40)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x19361E60)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19362030)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x19362090)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19362320)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19361D20)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x19361D10)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialGuideScRsp_TypeDefinitionIndex = 33148;

	class UnlockTutorialGuideScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(UnlockTutorialGuideScRsp_TypeDefinitionIndex)->GetStaticField(0x66250);
		}
		// static const ::System::Int32 RetcodeFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 TutorialGuideFieldNumber = 0xE; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Proto::TutorialGuide* tutorialGuide_; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::UnlockTutorialGuideScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::UnlockTutorialGuideScRsp* Clone()
		{
			return ((::Proto::UnlockTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::Proto::TutorialGuide* get_TutorialGuide()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET))(this);
		}

		::System::Void set_TutorialGuide(::Proto::TutorialGuide* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET))(this, value);
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
