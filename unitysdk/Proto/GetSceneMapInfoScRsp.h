#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneMapInfo; }
namespace System { class String; }

#define PROTO_GETSCENEMAPINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1A0F19F0)
#define PROTO_GETSCENEMAPINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1A0F15D0)
#define PROTO_GETSCENEMAPINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1A0F1720)
#define PROTO_GETSCENEMAPINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A0F1630)
#define PROTO_GETSCENEMAPINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A0F17D0)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1A0F14C0)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1A0F1610)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_SCENEMAPINFOLIST_OFFSET UNITYSDK_OFFSET(0x1A0F1600)
#define PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1A0F1BC0)
#define PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1A0F1B20)
#define PROTO_GETSCENEMAPINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1A0F14F0)
#define PROTO_GETSCENEMAPINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1A0F1620)
#define PROTO_GETSCENEMAPINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A0F18C0)
#define PROTO_GETSCENEMAPINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1A0F1920)
#define PROTO_GETSCENEMAPINFOSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0F1D80)
#define PROTO_GETSCENEMAPINFOSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0F1540)
#define PROTO_GETSCENEMAPINFOSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F1500)

namespace Proto
{
	inline static constexpr unsigned int GetSceneMapInfoScRsp_TypeDefinitionIndex = 32301;

	class GetSceneMapInfoScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::SceneMapInfo*>** StaticGet__repeated_sceneMapInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::SceneMapInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GetSceneMapInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x43750);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::GetSceneMapInfoScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetSceneMapInfoScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetSceneMapInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x43758);
		}
		// static const ::System::Int32 SceneMapInfoListFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x6; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneMapInfo*>* sceneMapInfoList_; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetSceneMapInfoScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetSceneMapInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GetSceneMapInfoScRsp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GetSceneMapInfoScRsp*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetSceneMapInfoScRsp* Clone()
		{
			return ((::Proto::GetSceneMapInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneMapInfo*>* get_SceneMapInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneMapInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_GET_SCENEMAPINFOLIST_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetSceneMapInfoScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetSceneMapInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetSceneMapInfoScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetSceneMapInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
