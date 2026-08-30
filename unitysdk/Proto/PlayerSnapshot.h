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

#define PROTO_PLAYERSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1D974D50)
#define PROTO_PLAYERSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1D9715C0)
#define PROTO_PLAYERSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D974A90)
#define PROTO_PLAYERSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D9748E0)
#define PROTO_PLAYERSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D971EA0)
#define PROTO_PLAYERSNAPSHOT_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x1D9748C0)
#define PROTO_PLAYERSNAPSHOT_GET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x1D9748A0)
#define PROTO_PLAYERSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1D9747D0)
#define PROTO_PLAYERSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1D974E20)
#define PROTO_PLAYERSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1D973420)
#define PROTO_PLAYERSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1D974830)
#define PROTO_PLAYERSNAPSHOT_SET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x1D9748D0)
#define PROTO_PLAYERSNAPSHOT_SET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x1D9748B0)
#define PROTO_PLAYERSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D974C10)
#define PROTO_PLAYERSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D974C70)
#define PROTO_PLAYERSNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D974FD0)
#define PROTO_PLAYERSNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D974840)
#define PROTO_PLAYERSNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D973410)

namespace Proto
{
	inline static constexpr unsigned int PlayerSnapshot_TypeDefinitionIndex = 25485;

	class PlayerSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::PlayerSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::PlayerSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerSnapshot_TypeDefinitionIndex)->GetStaticField(0x5B390);
		}
		// static const ::System::Int32 MotionInfoFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 MapLayerFieldNumber = 0x2; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Proto::MotionInfoSnapshot* motionInfo_; // 0x18
		::System::UInt32 mapLayer_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::PlayerSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_MotionInfo(::Proto::MotionInfoSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_SET_MOTIONINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_MapLayer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_GET_MAPLAYER_OFFSET))(this);
		}

		::System::Void set_MapLayer(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_SET_MAPLAYER_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::PlayerSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::PlayerSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::PlayerSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PlayerSnapshot*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_PLAYERSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
