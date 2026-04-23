#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_455CA3FD2409BEB7_16;
class Class_1_668FE281FA72D3E8_17;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GETMISSIONSTATUSSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1933CD30)
#define PROTO_GETMISSIONSTATUSSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1933C380)
#define PROTO_GETMISSIONSTATUSSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1933C460)
#define PROTO_GETMISSIONSTATUSSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1933C430)
#define PROTO_GETMISSIONSTATUSSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1933C5F0)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_CURVERSIONFINISHEDMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1933C3E0)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_DISABLEDMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1933C400)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_FINISHEDMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1933C410)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_MAINMISSIONMCVLIST_OFFSET UNITYSDK_OFFSET(0x1933C3B0)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1933C0C0)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933C3C0)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_SUBMISSIONSTATUSLIST_OFFSET UNITYSDK_OFFSET(0x1933C3F0)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_UNFINISHEDMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1933C420)
#define PROTO_GETMISSIONSTATUSSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1933D0F0)
#define PROTO_GETMISSIONSTATUSSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1933CF70)
#define PROTO_GETMISSIONSTATUSSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1933C0F0)
#define PROTO_GETMISSIONSTATUSSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933C3D0)
#define PROTO_GETMISSIONSTATUSSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1933CB10)
#define PROTO_GETMISSIONSTATUSSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1933CB70)
#define PROTO_GETMISSIONSTATUSSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1933D3A0)
#define PROTO_GETMISSIONSTATUSSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1933C260)
#define PROTO_GETMISSIONSTATUSSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1933C100)

namespace Proto
{
	inline static constexpr unsigned int GetMissionStatusScRsp_TypeDefinitionIndex = 29134;

	class GetMissionStatusScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_finishedMainMissionIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GetMissionStatusScRsp_TypeDefinitionIndex)->GetStaticField(0x45860);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_disabledMainMissionIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GetMissionStatusScRsp_TypeDefinitionIndex)->GetStaticField(0x45868);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_unfinishedMainMissionIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GetMissionStatusScRsp_TypeDefinitionIndex)->GetStaticField(0x45870);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_668FE281FA72D3E8_17*>** StaticGet__repeated_subMissionStatusList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_668FE281FA72D3E8_17*>**)Il2CppClass::FromTypeDefinitionIndex(GetMissionStatusScRsp_TypeDefinitionIndex)->GetStaticField(0x45878);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::GetMissionStatusScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetMissionStatusScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetMissionStatusScRsp_TypeDefinitionIndex)->GetStaticField(0x45880);
		}
		static ::Google::Protobuf::FieldCodec_1<::Class_1_455CA3FD2409BEB7_16*>** StaticGet__repeated_mainMissionMcvList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Class_1_455CA3FD2409BEB7_16*>**)Il2CppClass::FromTypeDefinitionIndex(GetMissionStatusScRsp_TypeDefinitionIndex)->GetStaticField(0x45888);
		}
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_curversionFinishedMainMissionIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GetMissionStatusScRsp_TypeDefinitionIndex)->GetStaticField(0x45890);
		}
		// static const ::System::Int32 MainMissionMcvListFieldNumber = 0xB; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 CurversionFinishedMainMissionIdListFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 SubMissionStatusListFieldNumber = 0x2; // 0x0
		// static const ::System::Int32 DisabledMainMissionIdListFieldNumber = 0x6; // 0x0
		// static const ::System::Int32 FinishedMainMissionIdListFieldNumber = 0x9; // 0x0
		// static const ::System::Int32 UnfinishedMainMissionIdListFieldNumber = 0x7; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455CA3FD2409BEB7_16*>* mainMissionMcvList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* curversionFinishedMainMissionIdList_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* unfinishedMainMissionIdList_; // 0x20
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_17*>* subMissionStatusList_; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* disabledMainMissionIdList_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* finishedMainMissionIdList_; // 0x40
		::System::UInt32 retcode_; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetMissionStatusScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMissionStatusScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GetMissionStatusScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GetMissionStatusScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetMissionStatusScRsp* Clone()
		{
			return ((::Proto::GetMissionStatusScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455CA3FD2409BEB7_16*>* get_MainMissionMcvList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_455CA3FD2409BEB7_16*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_MAINMISSIONMCVLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_CurversionFinishedMainMissionIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_CURVERSIONFINISHEDMAINMISSIONIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_17*>* get_SubMissionStatusList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Class_1_668FE281FA72D3E8_17*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_SUBMISSIONSTATUSLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_DisabledMainMissionIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_DISABLEDMAINMISSIONIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_FinishedMainMissionIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_FINISHEDMAINMISSIONIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_UnfinishedMainMissionIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_UNFINISHEDMAINMISSIONIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GetMissionStatusScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetMissionStatusScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetMissionStatusScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMissionStatusScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
