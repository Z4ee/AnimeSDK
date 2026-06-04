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

#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A130D30)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1A1309C0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A130B40)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A130A90)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A130BF0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A1308F0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1A130A50)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x1A130A70)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A130EB0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A130E00)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A130920)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1A130A60)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET UNITYSDK_OFFSET(0x1A130A80)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A130C50)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A130CB0)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A131040)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A130940)
#define PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A130930)

namespace Proto
{
	inline static constexpr unsigned int UnlockTutorialGuideScRsp_TypeDefinitionIndex = 33257;

	class UnlockTutorialGuideScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::UnlockTutorialGuideScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(UnlockTutorialGuideScRsp_TypeDefinitionIndex)->GetStaticField(0x46750);
		}
		// static const ::System::Int32 RetcodeFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 TutorialGuideFieldNumber = 0xE; // 0x0
		::Proto::TutorialGuide* tutorialGuide_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::UnlockTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Proto::TutorialGuide* get_TutorialGuide()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GET_TUTORIALGUIDE_OFFSET))(this);
		}

		::System::Void set_TutorialGuide(::Proto::TutorialGuide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_SET_TUTORIALGUIDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::UnlockTutorialGuideScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::UnlockTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::UnlockTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_UNLOCKTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
