#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_PROPINFOSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193547C0)
#define PROTO_PROPINFOSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x19354550)
#define PROTO_PROPINFOSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19354680)
#define PROTO_PROPINFOSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x193545E0)
#define PROTO_PROPINFOSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x193546D0)
#define PROTO_PROPINFOSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x193544A0)
#define PROTO_PROPINFOSNAPSHOT_GET_PROPSTATE_OFFSET UNITYSDK_OFFSET(0x193545C0)
#define PROTO_PROPINFOSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19354880)
#define PROTO_PROPINFOSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x19354850)
#define PROTO_PROPINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19354500)
#define PROTO_PROPINFOSNAPSHOT_SET_PROPSTATE_OFFSET UNITYSDK_OFFSET(0x193545D0)
#define PROTO_PROPINFOSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19354700)
#define PROTO_PROPINFOSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19354760)
#define PROTO_PROPINFOSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x193548F0)
#define PROTO_PROPINFOSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19354520)
#define PROTO_PROPINFOSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19354510)

namespace Proto
{
	inline static constexpr unsigned int PropInfoSnapshot_TypeDefinitionIndex = 24526;

	class PropInfoSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::PropInfoSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::PropInfoSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(PropInfoSnapshot_TypeDefinitionIndex)->GetStaticField(0x657F0);
		}
		// static const ::System::Int32 PropStateFieldNumber = 0x1; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 propState_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PropInfoSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PropInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::PropInfoSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::PropInfoSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PropInfoSnapshot* Clone()
		{
			return ((::Proto::PropInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_PropState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_GET_PROPSTATE_OFFSET))(this);
		}

		::System::Void set_PropState(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_SET_PROPSTATE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::PropInfoSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PropInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PropInfoSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PropInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PROPINFOSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
