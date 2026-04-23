#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_GACHACEILINGAVATAR_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x19339FE0)
#define PROTO_GACHACEILINGAVATAR_CLONE_OFFSET UNITYSDK_OFFSET(0x19339D70)
#define PROTO_GACHACEILINGAVATAR_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19339E70)
#define PROTO_GACHACEILINGAVATAR_EQUALS_OFFSET UNITYSDK_OFFSET(0x19339E00)
#define PROTO_GACHACEILINGAVATAR_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19339ED0)
#define PROTO_GACHACEILINGAVATAR_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x19339DE0)
#define PROTO_GACHACEILINGAVATAR_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19339CF0)
#define PROTO_GACHACEILINGAVATAR_GET_REPEATEDCNT_OFFSET UNITYSDK_OFFSET(0x19339DC0)
#define PROTO_GACHACEILINGAVATAR_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1933A130)
#define PROTO_GACHACEILINGAVATAR_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1933A0F0)
#define PROTO_GACHACEILINGAVATAR_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19339D20)
#define PROTO_GACHACEILINGAVATAR_SET_AVATARID_OFFSET UNITYSDK_OFFSET(0x19339DF0)
#define PROTO_GACHACEILINGAVATAR_SET_REPEATEDCNT_OFFSET UNITYSDK_OFFSET(0x19339DD0)
#define PROTO_GACHACEILINGAVATAR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19339F00)
#define PROTO_GACHACEILINGAVATAR_WRITETO_OFFSET UNITYSDK_OFFSET(0x19339F60)
#define PROTO_GACHACEILINGAVATAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1933A1B0)
#define PROTO_GACHACEILINGAVATAR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19339D40)
#define PROTO_GACHACEILINGAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x19339D30)

namespace Proto
{
	inline static constexpr unsigned int GachaCeilingAvatar_TypeDefinitionIndex = 27364;

	class GachaCeilingAvatar : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::GachaCeilingAvatar*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GachaCeilingAvatar*>**)Il2CppClass::FromTypeDefinitionIndex(GachaCeilingAvatar_TypeDefinitionIndex)->GetStaticField(0x18060);
		}
		// static const ::System::Int32 RepeatedCntFieldNumber = 0x5; // 0x0
		// static const ::System::Int32 AvatarIdFieldNumber = 0xE; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 avatarId_; // 0x18
		::System::UInt32 repeatedCnt_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GachaCeilingAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GachaCeilingAvatar*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR__CTOR_1_OFFSET))(this, other);
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

		::System::UInt32 get_RepeatedCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GET_REPEATEDCNT_OFFSET))(this);
		}

		::System::Void set_RepeatedCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_SET_REPEATEDCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GET_AVATARID_OFFSET))(this);
		}

		::System::Void set_AvatarId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_SET_AVATARID_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::GachaCeilingAvatar* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GachaCeilingAvatar*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GachaCeilingAvatar* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GachaCeilingAvatar*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GACHACEILINGAVATAR_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
