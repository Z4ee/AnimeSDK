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
namespace Proto { class SwitchHandDataNodeSnapshot; }
namespace System { class String; }

#define PROTO_SWITCHHANDSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EFA01C0)
#define PROTO_SWITCHHANDSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1EF9FD40)
#define PROTO_SWITCHHANDSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EF9FF20)
#define PROTO_SWITCHHANDSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EF9FDA0)
#define PROTO_SWITCHHANDSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFA0040)
#define PROTO_SWITCHHANDSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1EF9FBD0)
#define PROTO_SWITCHHANDSNAPSHOT_GET_SWITCHHANDLIST_OFFSET UNITYSDK_OFFSET(0x1EF9FD90)
#define PROTO_SWITCHHANDSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EFA0300)
#define PROTO_SWITCHHANDSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EFA0260)
#define PROTO_SWITCHHANDSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EF9FC30)
#define PROTO_SWITCHHANDSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EFA00B0)
#define PROTO_SWITCHHANDSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EFA0110)
#define PROTO_SWITCHHANDSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFA04C0)
#define PROTO_SWITCHHANDSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF9FC90)
#define PROTO_SWITCHHANDSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9FC40)

namespace Proto
{
	inline static constexpr unsigned int SwitchHandSnapshot_TypeDefinitionIndex = 25511;

	class SwitchHandSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::SwitchHandSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SwitchHandSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchHandSnapshot_TypeDefinitionIndex)->GetStaticField(0x910);
		}
		static ::Google::Protobuf::FieldCodec_1<::Proto::SwitchHandDataNodeSnapshot*>** StaticGet__repeated_switchHandList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::SwitchHandDataNodeSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(SwitchHandSnapshot_TypeDefinitionIndex)->GetStaticField(0x918);
		}
		// static const ::System::Int32 SwitchHandListFieldNumber = 0x1; // 0x0
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SwitchHandDataNodeSnapshot*>* switchHandList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SwitchHandSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::SwitchHandSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::SwitchHandSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SwitchHandSnapshot* Clone()
		{
			return ((::Proto::SwitchHandSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SwitchHandDataNodeSnapshot*>* get_SwitchHandList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SwitchHandDataNodeSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_GET_SWITCHHANDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::SwitchHandSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SwitchHandSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SwitchHandSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
