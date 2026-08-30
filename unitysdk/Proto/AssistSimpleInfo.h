#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ASSISTSIMPLEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E056B80)
#define PROTO_ASSISTSIMPLEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E056750)
#define PROTO_ASSISTSIMPLEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E056870)
#define PROTO_ASSISTSIMPLEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E056820)
#define PROTO_ASSISTSIMPLEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E056950)
#define PROTO_ASSISTSIMPLEINFO_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1E056800)
#define PROTO_ASSISTSIMPLEINFO_GET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x1E0567A0)
#define PROTO_ASSISTSIMPLEINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E0567E0)
#define PROTO_ASSISTSIMPLEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E0566D0)
#define PROTO_ASSISTSIMPLEINFO_GET_POS_OFFSET UNITYSDK_OFFSET(0x1E0567C0)
#define PROTO_ASSISTSIMPLEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E056DE0)
#define PROTO_ASSISTSIMPLEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E056D90)
#define PROTO_ASSISTSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E056700)
#define PROTO_ASSISTSIMPLEINFO_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1E056810)
#define PROTO_ASSISTSIMPLEINFO_SET_DRESSEDSKINID_OFFSET UNITYSDK_OFFSET(0x1E0567B0)
#define PROTO_ASSISTSIMPLEINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1E0567F0)
#define PROTO_ASSISTSIMPLEINFO_SET_POS_OFFSET UNITYSDK_OFFSET(0x1E0567D0)
#define PROTO_ASSISTSIMPLEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E056990)
#define PROTO_ASSISTSIMPLEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0569F0)
#define PROTO_ASSISTSIMPLEINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E056E80)
#define PROTO_ASSISTSIMPLEINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E056720)
#define PROTO_ASSISTSIMPLEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E056710)

namespace Proto
{
	inline static constexpr unsigned int AssistSimpleInfo_TypeDefinitionIndex = 28338;

	class AssistSimpleInfo : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::AssistSimpleInfo*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::AssistSimpleInfo*>**)Il2CppClass::FromTypeDefinitionIndex(AssistSimpleInfo_TypeDefinitionIndex)->GetStaticField(0x1E570);
		}
		// static const ::System::Int32 DressedSkinIdFieldNumber = 0xD; // 0x0
		// static const ::System::Int32 PosFieldNumber = 0xE; // 0x0
		// static const ::System::Int32 LevelFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0xA; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 dressedSkinId_; // 0x18
		::System::UInt32 pos_; // 0x1C
		::System::UInt32 level_; // 0x20
		::System::UInt32 avatarId_; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::AssistSimpleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AssistSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::AssistSimpleInfo*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::AssistSimpleInfo*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::AssistSimpleInfo* Clone()
		{
			return ((::Proto::AssistSimpleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_DressedSkinId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GET_DRESSEDSKINID_OFFSET))(this);
		}

		::System::Void set_DressedSkinId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_SET_DRESSEDSKINID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Pos()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_SET_POS_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::AssistSimpleInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::AssistSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::AssistSimpleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AssistSimpleInfo*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ASSISTSIMPLEINFO_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
