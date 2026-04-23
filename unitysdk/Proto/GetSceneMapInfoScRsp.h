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

#define PROTO_GETSCENEMAPINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1933EA70)
#define PROTO_GETSCENEMAPINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1933E640)
#define PROTO_GETSCENEMAPINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1933E790)
#define PROTO_GETSCENEMAPINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1933E6A0)
#define PROTO_GETSCENEMAPINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1933E840)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1933E530)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933E680)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_SCENEMAPINFOLIST_OFFSET UNITYSDK_OFFSET(0x1933E670)
#define PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1933EC40)
#define PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1933EBA0)
#define PROTO_GETSCENEMAPINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1933E560)
#define PROTO_GETSCENEMAPINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1933E690)
#define PROTO_GETSCENEMAPINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1933E930)
#define PROTO_GETSCENEMAPINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1933E990)
#define PROTO_GETSCENEMAPINFOSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1933ED00)
#define PROTO_GETSCENEMAPINFOSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1933E5B0)
#define PROTO_GETSCENEMAPINFOSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x1933E570)

namespace Proto
{
	inline static constexpr unsigned int GetSceneMapInfoScRsp_TypeDefinitionIndex = 32192;

	class GetSceneMapInfoScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::SceneMapInfo*>** StaticGet__repeated_sceneMapInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::SceneMapInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GetSceneMapInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x63CE0);
		}
		static ::Google::Protobuf::MessageParser_1<::Proto::GetSceneMapInfoScRsp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GetSceneMapInfoScRsp*>**)Il2CppClass::FromTypeDefinitionIndex(GetSceneMapInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x63CE8);
		}
		// static const ::System::Int32 SceneMapInfoListFieldNumber = 0x7; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0xB; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneMapInfo*>* sceneMapInfoList_; // 0x18
		::System::UInt32 retcode_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetSceneMapInfoScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetSceneMapInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP__CTOR_1_OFFSET))(this, other);
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

		::System::Void set_Retcode(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_SET_RETCODE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GetSceneMapInfoScRsp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetSceneMapInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetSceneMapInfoScRsp* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetSceneMapInfoScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
