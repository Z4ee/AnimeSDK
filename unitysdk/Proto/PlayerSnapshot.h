#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MotionInfoSnapshot; }
namespace System { class String; }

#define PROTO_PLAYERSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x193540F0)
#define PROTO_PLAYERSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x19353CF0)
#define PROTO_PLAYERSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19353EA0)
#define PROTO_PLAYERSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x19353DC0)
#define PROTO_PLAYERSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x19353F50)
#define PROTO_PLAYERSNAPSHOT_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x19353DA0)
#define PROTO_PLAYERSNAPSHOT_GET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x19353D80)
#define PROTO_PLAYERSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x19353C10)
#define PROTO_PLAYERSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x19354250)
#define PROTO_PLAYERSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x193541C0)
#define PROTO_PLAYERSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x19353C70)
#define PROTO_PLAYERSNAPSHOT_SET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x19353DB0)
#define PROTO_PLAYERSNAPSHOT_SET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x19353D90)
#define PROTO_PLAYERSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x19354010)
#define PROTO_PLAYERSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19354070)
#define PROTO_PLAYERSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x19354300)
#define PROTO_PLAYERSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19353C90)
#define PROTO_PLAYERSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x19353C80)

namespace Proto
{
	inline static constexpr unsigned int PlayerSnapshot_TypeDefinitionIndex = 24533;

	class PlayerSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::PlayerSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::PlayerSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerSnapshot_TypeDefinitionIndex)->GetStaticField(0x65740);
		}
		// static const ::System::Int32 MotionInfoFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 MapLayerFieldNumber = 0x2; // 0x0
		::Proto::MotionInfoSnapshot* motionInfo_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 mapLayer_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PlayerSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::PlayerSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::PlayerSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::PlayerSnapshot* Clone()
		{
			return ((::Proto::PlayerSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_CLONE_OFFSET))(this);
		}

		::Proto::MotionInfoSnapshot* get_MotionInfo()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_GET_MOTIONINFO_OFFSET))(this);
		}

		::System::Void set_MotionInfo(::Proto::MotionInfoSnapshot* value)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_SET_MOTIONINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_MapLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_GET_MAPLAYER_OFFSET))(this);
		}

		::System::Void set_MapLayer(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_SET_MAPLAYER_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Proto::PlayerSnapshot* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PlayerSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PlayerSnapshot* other)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
