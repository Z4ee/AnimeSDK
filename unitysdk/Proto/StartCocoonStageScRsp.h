#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_61216D16FF425F39;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_STARTCOCOONSTAGESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D97C000)
#define PROTO_STARTCOCOONSTAGESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1D97B980)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D97BBF0)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D97BAD0)
#define PROTO_STARTCOCOONSTAGESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D97BD00)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1D97BA50)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x1D97BA70)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1D97BAB0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1D97B8B0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x1D97BA90)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1D97BA30)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_WAVE_OFFSET UNITYSDK_OFFSET(0x1D97BA10)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D97C370)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D97C2C0)
#define PROTO_STARTCOCOONSTAGESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D97B8E0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1D97BA60)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x1D97BA80)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1D97BAC0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x1D97BAA0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1D97BA40)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_WAVE_OFFSET UNITYSDK_OFFSET(0x1D97BA20)
#define PROTO_STARTCOCOONSTAGESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D97BD50)
#define PROTO_STARTCOCOONSTAGESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D97BDB0)
#define PROTO_STARTCOCOONSTAGESCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D97C470)
#define PROTO_STARTCOCOONSTAGESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D97B900)
#define PROTO_STARTCOCOONSTAGESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D97B8F0)

namespace Proto
{
	inline static constexpr unsigned int StartCocoonStageScRsp_TypeDefinitionIndex = 33383;

	class StartCocoonStageScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::StartCocoonStageScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::StartCocoonStageScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(StartCocoonStageScRsp_TypeDefinitionIndex)->GetStaticField(0x22100);
		}
		// static const ::System::Int32 WaveFieldNumber = 0x3; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 BattleInfoFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 ChallengeCntFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 PropEntityIdFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 CocoonIdFieldNumber = 0x6; // 0x0
		::Class_1_61216D16FF425F39* battleInfo_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20
		::System::UInt32 challengeCnt_; // 0x24
		::System::UInt32 cocoonId_; // 0x28
		::System::UInt32 wave_; // 0x2C
		::System::UInt32 propEntityId_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::StartCocoonStageScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::StartCocoonStageScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::StartCocoonStageScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::StartCocoonStageScRsp* Clone()
		{
			return ((::Proto::StartCocoonStageScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Wave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_WAVE_OFFSET))(this);
		}

		::System::Void set_Wave(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_WAVE_OFFSET))(this, a1);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Class_1_61216D16FF425F39* get_BattleInfo()
		{
			return ((::Class_1_61216D16FF425F39*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET))(this);
		}

		::System::Void set_BattleInfo(::Class_1_61216D16FF425F39* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_61216D16FF425F39*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_ChallengeCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET))(this);
		}

		::System::Void set_ChallengeCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_PropEntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_PROPENTITYID_OFFSET))(this);
		}

		::System::Void set_PropEntityId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_PROPENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CocoonId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_COCOONID_OFFSET))(this);
		}

		::System::Void set_CocoonId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_COCOONID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::StartCocoonStageScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::StartCocoonStageScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
