#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SceneMapInfo; }
namespace System { class String; }

#define PROTO_GETSCENEMAPINFOSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x182826B0)
#define PROTO_GETSCENEMAPINFOSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x18282210)
#define PROTO_GETSCENEMAPINFOSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18282300)
#define PROTO_GETSCENEMAPINFOSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x182822D0)
#define PROTO_GETSCENEMAPINFOSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x182823F0)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x18282240)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_ISMONSTERTRACK_OFFSET UNITYSDK_OFFSET(0x18282290)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x182822B0)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_SCENEMAPINFOLIST_OFFSET UNITYSDK_OFFSET(0x18282260)
#define PROTO_GETSCENEMAPINFOSCRSP_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x18282270)
#define PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x18282990)
#define PROTO_GETSCENEMAPINFOSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x182828C0)
#define PROTO_GETSCENEMAPINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18282110)
#define PROTO_GETSCENEMAPINFOSCRSP_SET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x18282250)
#define PROTO_GETSCENEMAPINFOSCRSP_SET_ISMONSTERTRACK_OFFSET UNITYSDK_OFFSET(0x182822A0)
#define PROTO_GETSCENEMAPINFOSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x182822C0)
#define PROTO_GETSCENEMAPINFOSCRSP_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x18282280)
#define PROTO_GETSCENEMAPINFOSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x182824F0)
#define PROTO_GETSCENEMAPINFOSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x18282550)
#define PROTO_GETSCENEMAPINFOSCRSP__CCTOR_OFFSET UNITYSDK_OFFSET(0x18282AA0)
#define PROTO_GETSCENEMAPINFOSCRSP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18282160)
#define PROTO_GETSCENEMAPINFOSCRSP__CTOR_OFFSET UNITYSDK_OFFSET(0x18282120)

namespace Proto
{
	inline static constexpr unsigned int GetSceneMapInfoScRsp_TypeDefinitionIndex = 27101;

	class GetSceneMapInfoScRsp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Proto::SceneMapInfo*>** StaticGet__repeated_sceneMapInfoList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::SceneMapInfo*>**)Il2CppClass::FromTypeDefinitionIndex(GetSceneMapInfoScRsp_TypeDefinitionIndex)->GetStaticField(0x1A7C0);
		}
		// static const ::System::Int32 ContentIdFieldNumber = 0xF; // 0x0
		// static const ::System::Int32 SceneMapInfoListFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 StorylineIdFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 IsMonsterTrackFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 RetcodeFieldNumber = 0x4; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneMapInfo*>* sceneMapInfoList_; // 0x18
		::System::UInt32 storylineId_; // 0x20
		::System::UInt32 contentId_; // 0x24
		::System::UInt32 retcode_; // 0x28
		::System::Boolean isMonsterTrack_; // 0x2C

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

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetSceneMapInfoScRsp* Clone()
		{
			return ((::Proto::GetSceneMapInfoScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ContentId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void set_ContentId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_SET_CONTENTID_OFFSET))(this, value);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneMapInfo*>* get_SceneMapInfoList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SceneMapInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_GET_SCENEMAPINFOLIST_OFFSET))(this);
		}

		::System::UInt32 get_StorylineId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StorylineId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_SET_STORYLINEID_OFFSET))(this, value);
		}

		::System::Boolean get_IsMonsterTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_GET_ISMONSTERTRACK_OFFSET))(this);
		}

		::System::Void set_IsMonsterTrack(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PROTO_GETSCENEMAPINFOSCRSP_SET_ISMONSTERTRACK_OFFSET))(this, value);
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
