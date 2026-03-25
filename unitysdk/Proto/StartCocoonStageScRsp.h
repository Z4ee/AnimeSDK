#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A6B0B39A319DDDE2;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_STARTCOCOONSTAGESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1829C950)
#define PROTO_STARTCOCOONSTAGESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1829C480)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1829C6B0)
#define PROTO_STARTCOCOONSTAGESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1829C5D0)
#define PROTO_STARTCOCOONSTAGESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1829C780)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1829C530)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x1829C510)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1829C590)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x1829C550)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1829C570)
#define PROTO_STARTCOCOONSTAGESCRSP_GET_WAVE_OFFSET UNITYSDK_OFFSET(0x1829C5B0)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1829CCC0)
#define PROTO_STARTCOCOONSTAGESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1829CC10)
#define PROTO_STARTCOCOONSTAGESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1829C3E0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET UNITYSDK_OFFSET(0x1829C540)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET UNITYSDK_OFFSET(0x1829C520)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_COCOONID_OFFSET UNITYSDK_OFFSET(0x1829C5A0)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_PROPENTITYID_OFFSET UNITYSDK_OFFSET(0x1829C560)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1829C580)
#define PROTO_STARTCOCOONSTAGESCRSP_SET_WAVE_OFFSET UNITYSDK_OFFSET(0x1829C5C0)
#define PROTO_STARTCOCOONSTAGESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1829C7D0)
#define PROTO_STARTCOCOONSTAGESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1829C830)
#define PROTO_STARTCOCOONSTAGESCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1829C400)
#define PROTO_STARTCOCOONSTAGESCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1829C3F0)

namespace Proto
{
	inline static constexpr unsigned int StartCocoonStageScRsp_TypeDefinitionIndex = 27073;

	class StartCocoonStageScRsp : public ::System::Object
	{
	public:
		// static const ::System::Int32 ChallengeCntFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 BattleInfoFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 PropEntityIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 CocoonIdFieldNumber = 0xA; // 0x0
		// static const ::System::Int32 WaveFieldNumber = 0xC; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Class_1_A6B0B39A319DDDE2* battleInfo_; // 0x18
		::System::UInt32 retcode_; // 0x20
		::System::UInt32 challengeCnt_; // 0x24
		::System::UInt32 propEntityId_; // 0x28
		::System::UInt32 wave_; // 0x2C
		::System::UInt32 cocoonId_; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::StartCocoonStageScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::StartCocoonStageScRsp*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP__CTOR_1_OFFSET))(this, other);
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::StartCocoonStageScRsp* Clone()
		{
			return ((::Proto::StartCocoonStageScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ChallengeCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_CHALLENGECNT_OFFSET))(this);
		}

		::System::Void set_ChallengeCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_CHALLENGECNT_OFFSET))(this, value);
		}

		::Class_1_A6B0B39A319DDDE2* get_BattleInfo()
		{
			return ((::Class_1_A6B0B39A319DDDE2*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_GET_BATTLEINFO_OFFSET))(this);
		}

		::System::Void set_BattleInfo(::Class_1_A6B0B39A319DDDE2* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A6B0B39A319DDDE2*))((::PBYTE)hIl2Cpp + PROTO_STARTCOCOONSTAGESCRSP_SET_BATTLEINFO_OFFSET))(this, value);
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
