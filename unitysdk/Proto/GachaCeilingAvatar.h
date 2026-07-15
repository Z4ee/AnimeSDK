#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GACHACEILINGAVATAR_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BF802E0)
#define PROTO_GACHACEILINGAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x1BF7FF30)
#define PROTO_GACHACEILINGAVATAR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BF800A0)
#define PROTO_GACHACEILINGAVATAR_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BF7FFC0)
#define PROTO_GACHACEILINGAVATAR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BF80170)
#define PROTO_GACHACEILINGAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1BF7FF80)
#define PROTO_GACHACEILINGAVATAR_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BF7FEB0)
#define PROTO_GACHACEILINGAVATAR_GET_REPEATEDCNT_OFFSET UNITYSDK_OFFSET(0x1BF7FFA0)
#define PROTO_GACHACEILINGAVATAR_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BF80430)
#define PROTO_GACHACEILINGAVATAR_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BF803F0)
#define PROTO_GACHACEILINGAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF7FEE0)
#define PROTO_GACHACEILINGAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1BF7FF90)
#define PROTO_GACHACEILINGAVATAR_SET_REPEATEDCNT_OFFSET UNITYSDK_OFFSET(0x1BF7FFB0)
#define PROTO_GACHACEILINGAVATAR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF801A0)
#define PROTO_GACHACEILINGAVATAR_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BF80200)
#define PROTO_GACHACEILINGAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF805B0)
#define PROTO_GACHACEILINGAVATAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF7FF00)
#define PROTO_GACHACEILINGAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF7FEF0)

namespace Proto
{
	inline static constexpr unsigned int GachaCeilingAvatar_TypeDefinitionIndex = 27845;

	class GachaCeilingAvatar : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::GachaCeilingAvatar*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GachaCeilingAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(GachaCeilingAvatar_TypeDefinitionIndex)->GetStaticField(0x3C730);
		}
		// static const ::System::Int32 AvatarIdFieldNumber = 0xC; // 0x0
		// static const ::System::Int32 RepeatedCntFieldNumber = 0x2; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 repeatedCnt_; // 0x18
		::System::UInt32 avatarId_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GachaCeilingAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GachaCeilingAvatar*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GachaCeilingAvatar*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GachaCeilingAvatar*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GachaCeilingAvatar* Clone()
		{
			return ((::Proto::GachaCeilingAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_SET_AVATARID_OFFSET))(this, a1);
		}

		::System::UInt32 get_RepeatedCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GET_REPEATEDCNT_OFFSET))(this);
		}

		::System::Void set_RepeatedCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_SET_REPEATEDCNT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GachaCeilingAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GachaCeilingAvatar*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GachaCeilingAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GachaCeilingAvatar*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
