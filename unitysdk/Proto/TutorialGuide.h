#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_80.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_29.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_TUTORIALGUIDE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A130350)
#define PROTO_TUTORIALGUIDE_CLONE_OFFSET UNITYSDK_OFFSET(0x1A130050)
#define PROTO_TUTORIALGUIDE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A130170)
#define PROTO_TUTORIALGUIDE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A130100)
#define PROTO_TUTORIALGUIDE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1301E0)
#define PROTO_TUTORIALGUIDE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A1300C0)
#define PROTO_TUTORIALGUIDE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A12FFC0)
#define PROTO_TUTORIALGUIDE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1A1300E0)
#define PROTO_TUTORIALGUIDE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A1300A0)
#define PROTO_TUTORIALGUIDE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A1305A0)
#define PROTO_TUTORIALGUIDE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A130550)
#define PROTO_TUTORIALGUIDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A12FFF0)
#define PROTO_TUTORIALGUIDE_SET_ID_OFFSET UNITYSDK_OFFSET(0x1A1300D0)
#define PROTO_TUTORIALGUIDE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1A1300F0)
#define PROTO_TUTORIALGUIDE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x1A1300B0)
#define PROTO_TUTORIALGUIDE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A130210)
#define PROTO_TUTORIALGUIDE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A130270)
#define PROTO_TUTORIALGUIDE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A130760)
#define PROTO_TUTORIALGUIDE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A130010)
#define PROTO_TUTORIALGUIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A130000)

namespace Proto
{
	inline static constexpr unsigned int TutorialGuide_TypeDefinitionIndex = 33241;

	class TutorialGuide : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::TutorialGuide*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::TutorialGuide*>**)Il2CppClass::FromTypeDefinitionIndex(TutorialGuide_TypeDefinitionIndex)->GetStaticField(0x285A0);
		}
		// static const ::System::Int32 TypeFieldNumber = 0x8; // 0x0
		// static const ::System::Int32 IdFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 StatusFieldNumber = 0x5; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Enum_3_ED790DAC948A65A9_29 type_; // 0x18
		::Enum_3_0A3761FE34514D6C_80 status_; // 0x1C
		::System::UInt32 id_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::TutorialGuide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::TutorialGuide*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::TutorialGuide*>*(*)())((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::TutorialGuide* Clone()
		{
			return ((::Proto::TutorialGuide*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_CLONE_OFFSET))(this);
		}

		::Enum_3_ED790DAC948A65A9_29 get_Type()
		{
			return ((::Enum_3_ED790DAC948A65A9_29(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::Enum_3_ED790DAC948A65A9_29 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_ED790DAC948A65A9_29))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_SET_TYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_ID_OFFSET))(this);
		}

		::System::Void set_Id(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_SET_ID_OFFSET))(this, a1);
		}

		::Enum_3_0A3761FE34514D6C_80 get_Status()
		{
			return ((::Enum_3_0A3761FE34514D6C_80(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::Enum_3_0A3761FE34514D6C_80 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_80))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::TutorialGuide* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::TutorialGuide* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::TutorialGuide*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_TUTORIALGUIDE_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
