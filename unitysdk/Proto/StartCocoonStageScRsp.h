#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_14E02E1F6D70E487_1;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_STARTCOCOONSTAGESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1935CAD0)
#define PROTO_STARTCOCOONSTAGESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1935C600)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1935C830)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1935C750)
#define PROTO_STARTCOCOONSTAGESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1935C900)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1935C690)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x1935C6B0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1935C6D0)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1935C530)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x1935C710)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1935C730)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_WAVE_OFFSET UNITYSDK_OFFSET(0x1935C6F0)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1935CE40)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1935CD90)
#define PROTO_STARTCOCOONSTAGESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1935C560)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1935C6A0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x1935C6C0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1935C6E0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x1935C720)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1935C740)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_WAVE_OFFSET UNITYSDK_OFFSET(0x1935C700)
#define PROTO_STARTCOCOONSTAGESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1935C950)
#define PROTO_STARTCOCOONSTAGESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1935C9B0)
#define PROTO_STARTCOCOONSTAGESCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1935CF40)
#define PROTO_STARTCOCOONSTAGESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1935C580)
#define PROTO_STARTCOCOONSTAGESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1935C570)

namespace Proto
{
	inline static constexpr unsigned int StartCocoonStageScRsp_TypeDefinitionIndex = 32131;

	class StartCocoonStageScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::StartCocoonStageScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::StartCocoonStageScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(StartCocoonStageScRsp_TypeDefinitionIndex)->GetStaticField(0x65D40);
		}
		// static const ::System::Int32 BattleInfoFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 ChallengeCntFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 CocoonIdFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 WaveFieldNumber = 0x4; // 0x0
		// static const ::System::Int32 PropEntityIdFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x5; // 0x0
		::Class_1_14E02E1F6D70E487_1* battleInfo_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 cocoonId_; // 0x20
		::System::UInt32 challengeCnt_; // 0x24
		::System::UInt32 propEntityId_; // 0x28
		::System::UInt32 retcode_; // 0x2C
		::System::UInt32 wave_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::StartCocoonStageScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP__CTOR_1_OFFSET))(this, other);
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

		::Class_1_14E02E1F6D70E487_1* get_BattleInfo()
		{
			return ((::Class_1_14E02E1F6D70E487_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET))(this);
		}

		::System::Void set_BattleInfo(::Class_1_14E02E1F6D70E487_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_14E02E1F6D70E487_1*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET))(this);
		}

		::System::Void set_ChallengeCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET))(this, value);
		}

		::System::UInt32 get_CocoonId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_COCOONID_OFFSET))(this);
		}

		::System::Void set_CocoonId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_COCOONID_OFFSET))(this, value);
		}

		::System::UInt32 get_Wave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_WAVE_OFFSET))(this);
		}

		::System::Void set_Wave(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_WAVE_OFFSET))(this, value);
		}

		::System::UInt32 get_PropEntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_PROPENTITYID_OFFSET))(this);
		}

		::System::Void set_PropEntityId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_PROPENTITYID_OFFSET))(this, value);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::StartCocoonStageScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::StartCocoonStageScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
