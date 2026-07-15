#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BF7B970)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1BF7B570)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BF7B730)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BF7B620)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BF7B800)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BF7B4C0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x1BF7B5E0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1BF7B600)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BF7BAC0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BF7BA80)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF7B520)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0x1BF7B5F0)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1BF7B610)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BF7B830)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BF7B890)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF7BC40)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BF7B540)
#define PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF7B530)

namespace Proto
{
	inline static constexpr unsigned int EraFlipperRegionDataSnapshot_TypeDefinitionIndex = 24910;

	class EraFlipperRegionDataSnapshot : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Proto::EraFlipperRegionDataSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::EraFlipperRegionDataSnapshot*>**)Il2CppClass::FromTypeDefinitionIndex(EraFlipperRegionDataSnapshot_TypeDefinitionIndex)->GetStaticField(0x3C350);
		}
		// static const ::System::Int32 RegionIdFieldNumber = 0x1; // 0x0
		// static const ::System::Int32 StateFieldNumber = 0x2; // 0x0
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 regionId_; // 0x18
		::System::UInt32 state_; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::EraFlipperRegionDataSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperRegionDataSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::EraFlipperRegionDataSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::EraFlipperRegionDataSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::EraFlipperRegionDataSnapshot* Clone()
		{
			return ((::Proto::EraFlipperRegionDataSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_RegionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_REGIONID_OFFSET))(this);
		}

		::System::Void set_RegionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_SET_REGIONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_State()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_SET_STATE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::EraFlipperRegionDataSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::EraFlipperRegionDataSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::EraFlipperRegionDataSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EraFlipperRegionDataSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ERAFLIPPERREGIONDATASNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
